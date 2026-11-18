// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 15

// FLandscapeEditLayerReadback @ 145f42010

FLandscapeEditLayerReadback * __thiscall
FLandscapeEditLayerReadback::FLandscapeEditLayerReadback(FLandscapeEditLayerReadback *this)

{
  this->Hash = 0;
  (this->TaskHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskHandles).ArrayNum = 0;
  (this->TaskHandles).ArrayMax = 0;
  return this;
}

// ~FLandscapeEditLayerReadback @ 145f432f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeEditLayerReadback::~FLandscapeEditLayerReadback(FLandscapeEditLayerReadback *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  code *local_a8 [2];
  undefined **local_98;
  FLandscapeEditReadbackTaskImpl *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FLandscapeEditReadbackTaskImpl *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar9 = (this->TaskHandles).AllocatorInstance.Data;
  iVar1 = (this->TaskHandles).ArrayNum;
  pFVar3 = pFVar9 + (longlong)iVar1 * 4;
  while( true ) {
    if ((this->TaskHandles).ArrayNum != iVar1) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8);
    }
    if (pFVar9 == pFVar3) break;
    iVar2 = *(int *)pFVar9;
    if (iVar2 == -1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTaskHandle != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                         ,0xf0,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (GReadbackTaskPool._56_4_ == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                         ,0xf1,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    GReadbackTaskPool._56_4_ = GReadbackTaskPool._56_4_ + -1;
    pFStack_90 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
                 operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                             *)&GReadbackTaskPool.field_0x20,iVar2);
    local_80 = (undefined ***)0x0;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLandscapeEditReadbackTaskPool::Free'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_98 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__Free_FLandscapeEditReadbackTaskPool__QEAAXH_Z__00_0A__Function_Private_Core_UE__6B_
    ;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FLandscapeEditReadbackTaskPool::Free_::__l2::TSTR_FLandscapeEditLayerReadback_Free245>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (undefined ***)0x0;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FLandscapeEditReadbackTaskPool::Free'::__l2::TSTR_FLandscapeEditLayerReadback_Free245>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar6);
      uVar8 = (ulonglong)local_48;
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar7 = local_50;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar7 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar7 = local_80;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    pFVar9 = pFVar9 + 4;
  }
  pFVar3 = (this->TaskHandles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 145f45030

void __thiscall
`FLandscapeEditLayerReadback::Flush'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  
  piVar8 = *(int **)this;
  iVar2 = *(int *)((longlong)this + 8);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar8 == piVar1) break;
    iVar3 = *piVar8;
    uVar5 = iVar3 / 0xaa;
    uVar7 = 0;
    if ((int)uVar5 < GReadbackTaskPool._40_4_) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar6 = UpdateTask_RenderThread
                      (param_1,(FLandscapeEditReadbackTaskImpl *)
                               ((ulonglong)(uint)(iVar3 % 0xaa) * 0x60 +
                               *(longlong *)(GReadbackTaskPool._32_8_ + (longlong)(int)uVar5 * 8)),
                       true);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bTaskComplete",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                         ,0x17f,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    piVar8 = piVar8 + 1;
  }
  return;
}

// operator() @ 145f45210

void __thiscall
`FLandscapeEditLayerReadback::Tick'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  undefined1 local_res8 [8];
  
  piVar8 = *(int **)this;
  iVar2 = *(int *)((longlong)this + 8);
  piVar1 = piVar8 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (piVar8 == piVar1) {
      return;
    }
    iVar3 = *piVar8;
    uVar5 = iVar3 / 0xaa;
    uVar7 = 0;
    if ((int)uVar5 < GReadbackTaskPool._40_4_) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    bVar6 = UpdateTask_RenderThread
                      (param_1,(FLandscapeEditReadbackTaskImpl *)
                               ((ulonglong)(uint)(iVar3 % 0xaa) * 0x60 +
                               *(longlong *)(GReadbackTaskPool._32_8_ + (longlong)(int)uVar5 * 8)),
                       false);
    if (!bVar6) {
      return;
    }
    piVar8 = piVar8 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Enqueue @ 145f50a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeEditLayerReadback::Enqueue
          (FLandscapeEditLayerReadback *this,UTexture2D *param_1,
          TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStackY_e8 [32];
  int local_98 [4];
  code *local_88 [2];
  undefined **local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48 [3];
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_98[0] = FLandscapeEditReadbackTaskPool::Allocate
                          ((FLandscapeEditReadbackTaskPool *)&GReadbackTaskPool,param_1,param_2);
  if (local_98[0] == -1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3668202160148971863>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                       ,0x157,"TaskHandle != -1");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar2 = (this->TaskHandles).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_98) &&
       ((FScriptContainerElement *)local_98 < pFVar2 + (longlong)(this->TaskHandles).ArrayMax * 4))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->TaskHandles).ArrayNum;
    piVar1 = &(this->TaskHandles).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->TaskHandles).AllocatorInstance,piVar1);
    }
    (this->TaskHandles).ArrayNum = iVar5 + 1;
    local_60 = (undefined ***)0x0;
    *(int *)((this->TaskHandles).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_98[0];
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FLandscapeEditLayerReadback::Enqueue'::`5'::<lambda_1>,1,0>::
                _vftable_;
    iStack_70 = local_98[0];
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLandscapeEditLayerReadback::Enqueue'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FLandscapeEditLayerReadback::Enqueue_::__l5::TSTR_FLandscapeEditLayerReadback_Queue347>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_48[1]._4_4_ = uStack_6c;
      local_48[1]._0_4_ = iStack_70;
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48[0] = local_78;
      local_48[2] = (undefined **)local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FLandscapeEditLayerReadback::Enqueue'::__l5::TSTR_FLandscapeEditLayerReadback_Queue347>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar6);
      uVar8 = (ulonglong)local_28;
      if (2 < uVar8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar7 = local_30;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar7 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar7 = local_60;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  }
  return;
}

// Flush @ 145f51120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLandscapeEditLayerReadback::Flush(FLandscapeEditLayerReadback *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  code *local_88 [2];
  undefined **local_78;
  FScriptContainerElement *pFStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FScriptContainerElement *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar1 = (this->TaskHandles).ArrayNum;
  _Src = (this->TaskHandles).AllocatorInstance.Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    pFStack_70 = (FScriptContainerElement *)0x0;
    local_68 = iVar1;
    uStack_64 = 0;
  }
  else {
    local_90._0_4_ = iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,&local_98,iVar1,(int *)((longlong)&local_90 + 4));
    memcpy(local_98.Data,_Src,(longlong)iVar1 << 2);
    pFStack_70 = local_98.Data;
    local_68 = (int)local_90;
    uStack_64 = local_90._4_4_;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeEditLayerReadback::Flush'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_90 = 0;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeEditLayerReadback::Flush'::`2'::<lambda_1>,1,0>::
              _vftable_;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeEditLayerReadback::Flush_::__l2::TSTR_FLandscapeEditLayerReadback_Flush378>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FLandscapeEditLayerReadback::Flush'::__l2::TSTR_FLandscapeEditLayerReadback_Flush378>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
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
  if (CpuChannel->Enabled < 0) {
    FlushRenderingCommands();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId387,"LandscapeLayers_ReadbackFlush",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
               ,0x183);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId387);
    FlushRenderingCommands();
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// FlushAllReadbackTasks @ 145f51350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FLandscapeEditLayerReadback::FlushAllReadbackTasks(void)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  TGlobalResource<FLandscapeEditReadbackTaskPool,1> *pTStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  TGlobalResource<FLandscapeEditReadbackTaskPool,1> *pTStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__FlushAll_FLandscapeEditReadbackTaskPool__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  pTStack_70 = &GReadbackTaskPool;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeEditReadbackTaskPool::FlushAll'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeEditReadbackTaskPool::FlushAll_::__l2::TSTR_FLandscapeEditLayerReadback_FlushAll299>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FLandscapeEditReadbackTaskPool::FlushAll'::__l2::TSTR_FLandscapeEditLayerReadback_FlushAll299>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if (CpuChannel->Enabled < 0) {
    FlushRenderingCommands();
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::__l2
                ::__CpuProfilerEventSpecId313,"LandscapeLayers_ReadbackFlushAll",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FLandscapeEditReadbackTaskPool::FlushAll(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId313);
    FlushRenderingCommands();
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GarbageCollectTasks @ 145f528d0

void __cdecl FLandscapeEditLayerReadback::GarbageCollectTasks(void)

{
  FLandscapeEditReadbackTaskPool::GarbageCollect
            ((FLandscapeEditReadbackTaskPool *)&GReadbackTaskPool);
  return;
}

// GetCompletedResultNum @ 145f535e0

int __thiscall FLandscapeEditLayerReadback::GetCompletedResultNum(FLandscapeEditLayerReadback *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->TaskHandles).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 4;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->TaskHandles).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = *(int *)((this->TaskHandles).AllocatorInstance.Data + lVar7);
      uVar3 = iVar4 / 0xaa;
      uVar5 = 0;
      if ((int)uVar3 < GReadbackTaskPool._40_4_) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(longlong *)
           ((ulonglong)(uint)(iVar4 % 0xaa) * 0x60 + 0x48 +
           *(longlong *)(GReadbackTaskPool._32_8_ + (longlong)(int)uVar3 * 8)) == 2) {
        return uVar6 + 1;
      }
      lVar7 = lVar7 + -4;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return 0;
}

// GetResult @ 145f54bf0

TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
FLandscapeEditLayerReadback::GetResult(FLandscapeEditLayerReadback *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar4;
  FLandscapeEditReadbackTaskImpl *pFVar5;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResultIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                       ,0x197,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  if ((this->TaskHandles).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResultIndex < TaskHandles.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                       ,0x198,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->TaskHandles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  pFVar5 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                       *)&GReadbackTaskPool.field_0x20,
                      *(int *)((this->TaskHandles).AllocatorInstance.Data + (longlong)param_1 * 4));
  if (pFVar5->CompletionState != Complete) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GReadbackTaskPool.Pool[TaskHandles[InResultIndex]].CompletionState == FLandscapeEditReadbackTaskImpl::ECompletionState::Complete"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                       ,0x199,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->TaskHandles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<TArray<FColor,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  pFVar5 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                       *)&GReadbackTaskPool.field_0x20,
                      *(int *)((this->TaskHandles).AllocatorInstance.Data + (longlong)param_1 * 4));
  return &pFVar5->Result;
}

// GetResultContext @ 145f54d70

TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_> *
__thiscall
FLandscapeEditLayerReadback::GetResultContext(FLandscapeEditLayerReadback *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_> *pTVar4
  ;
  FLandscapeEditReadbackTaskImpl *pFVar5;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResultIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  if ((this->TaskHandles).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InResultIndex < TaskHandles.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->TaskHandles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  pFVar5 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                       *)&GReadbackTaskPool.field_0x20,
                      *(int *)((this->TaskHandles).AllocatorInstance.Data + (longlong)param_1 * 4));
  if (pFVar5->CompletionState != Complete) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GReadbackTaskPool.Pool[TaskHandles[InResultIndex]].CompletionState == FLandscapeEditReadbackTaskImpl::ECompletionState::Complete"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                       ,0x1a2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->TaskHandles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FLandscapeEditLayerReadback::FComponentReadbackContext,TSizedDefaultAllocator<32>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  pFVar5 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                       *)&GReadbackTaskPool.field_0x20,
                      *(int *)((this->TaskHandles).AllocatorInstance.Data + (longlong)param_1 * 4));
  return &pFVar5->ReadbackContext;
}

// HasWork @ 145f57770

bool __cdecl FLandscapeEditLayerReadback::HasWork(void)

{
  return GReadbackTaskPool._56_4_ != 0;
}

// ReleaseCompletedResults @ 145f5bbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeEditLayerReadback::ReleaseCompletedResults(FLandscapeEditLayerReadback *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLandscapeEditReadbackTaskImpl *pFVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  uint uVar7;
  undefined ***pppuVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  code *local_b8 [2];
  undefined **local_a8;
  FLandscapeEditReadbackTaskImpl *pFStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  FLandscapeEditReadbackTaskImpl *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar11 = (longlong)param_1;
  if ((param_1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResultNum > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                         ,0x1a9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->TaskHandles).ArrayNum < param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResultNum <= TaskHandles.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                         ,0x1aa,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->TaskHandles).ArrayNum;
  uVar9 = param_1 - 1;
  uVar10 = 0;
  uVar7 = 0;
  if ((int)uVar9 < iVar4) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_e8 = (longlong)(int)uVar9;
    local_e0 = (longlong)iVar4;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                       *)&GReadbackTaskPool.field_0x20,
                      *(int *)((this->TaskHandles).AllocatorInstance.Data + (longlong)(int)uVar9 * 4
                              ));
  if ((pFVar5->CompletionState != Complete) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GReadbackTaskPool.Pool[TaskHandles[InResultNum - 1]].CompletionState == FLandscapeEditReadbackTaskImpl::ECompletionState::Complete"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                         ,0x1ab,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar12 = uVar10;
  if (0 < param_1) {
    do {
      iVar4 = (this->TaskHandles).ArrayNum;
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar4) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        local_e8 = (longlong)(int)uVar9;
        local_e0 = (longlong)iVar4;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = *(int *)((this->TaskHandles).AllocatorInstance.Data + uVar12 * 4);
      if ((iVar4 == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InTaskHandle != -1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                             ,0xf0,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((GReadbackTaskPool._56_4_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeEditReadback.cpp"
                             ,0xf1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      GReadbackTaskPool._56_4_ = GReadbackTaskPool._56_4_ + -1;
      pFStack_a0 = TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::
                   operator[]((TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>
                               *)&GReadbackTaskPool.field_0x20,iVar4);
      local_90 = (undefined ***)0x0;
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FLandscapeEditReadbackTaskPool::Free'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_a8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__1__Free_FLandscapeEditReadbackTaskPool__QEAAXH_Z__00_0A__Function_Private_Core_UE__6B_
      ;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FLandscapeEditReadbackTaskPool::Free_::__l2::TSTR_FLandscapeEditLayerReadback_Free245>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_88._0_8_ = local_b8[0];
        local_60 = local_90;
        local_90 = (undefined ***)0x0;
        local_78 = local_a8;
        pFStack_70 = pFStack_a0;
        local_68 = local_98;
        local_b8[0] = (code *)0x0;
        local_58 = 2;
        pFVar6 = (FRenderCommandTag *)
                 TRenderCommandTag<`FLandscapeEditReadbackTaskPool::Free'::__l2::TSTR_FLandscapeEditLayerReadback_Free245>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_88,pFVar6);
        uVar10 = (ulonglong)local_58;
        if ((2 < uVar10) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_88._0_8_ != (code *)0x0) {
            pppuVar8 = (undefined ***)(local_88 + 0x10);
            if (local_60 != (undefined ***)0x0) {
              pppuVar8 = local_60;
            }
            (*(code *)(*pppuVar8)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar10])(local_88);
        }
      }
      if (local_b8[0] != (code *)0x0) {
        pppuVar8 = &local_a8;
        if (local_90 != (undefined ***)0x0) {
          pppuVar8 = local_90;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < lVar11);
  }
  iVar4 = (this->TaskHandles).ArrayNum;
  uVar7 = 0;
  if (param_1 <= iVar4) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    local_e8 = 0;
    local_e0 = lVar11;
    local_d8 = (longlong)iVar4;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 != 0) {
    _Dst = (this->TaskHandles).AllocatorInstance.Data;
    iVar4 = (this->TaskHandles).ArrayNum - param_1;
    if (iVar4 != 0) {
      memmove(_Dst,_Dst + lVar11 * 4,(longlong)iVar4 << 2);
    }
    piVar1 = &(this->TaskHandles).ArrayNum;
    *piVar1 = *piVar1 - param_1;
  }
  return;
}

// SetHash @ 145f5dcb0

bool __thiscall
FLandscapeEditLayerReadback::SetHash(FLandscapeEditLayerReadback *this,ulong64 param_1)

{
  ulong64 uVar1;
  
  uVar1 = this->Hash;
  this->Hash = param_1;
  return param_1 != uVar1;
}

// Tick @ 145f5f4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLandscapeEditLayerReadback::Tick(FLandscapeEditLayerReadback *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStackY_d8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  code *local_88 [2];
  undefined **local_78;
  FScriptContainerElement *pFStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FScriptContainerElement *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  iVar1 = (this->TaskHandles).ArrayNum;
  _Src = (this->TaskHandles).AllocatorInstance.Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  if (iVar1 == 0) {
    pFStack_70 = (FScriptContainerElement *)0x0;
    local_68 = iVar1;
    uStack_64 = 0;
  }
  else {
    local_90._0_4_ = iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,&local_98,iVar1,(int *)((longlong)&local_90 + 4));
    memcpy(local_98.Data,_Src,(longlong)iVar1 << 2);
    pFStack_70 = local_98.Data;
    local_68 = (int)local_90;
    uStack_64 = local_90._4_4_;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FLandscapeEditLayerReadback::Tick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_90 = 0;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeEditLayerReadback::Tick'::`2'::<lambda_1>,1,0>::
              _vftable_;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FLandscapeEditLayerReadback::Tick_::__l2::TSTR_FLandscapeEditLayerReadback_Tick359>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._4_4_ = uStack_64;
    local_38._0_4_ = local_68;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FLandscapeEditLayerReadback::Tick'::__l2::TSTR_FLandscapeEditLayerReadback_Tick359>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
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
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

