// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 2

// GetTypeHash @ 145ee65c0

ulong64 __thiscall FInteractiveFoliageSceneProxy::GetTypeHash(FInteractiveFoliageSceneProxy *this)

{
  return 0x155196fc8;
}

// UpdateParameters_GameThread @ 145eee940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInteractiveFoliageSceneProxy::UpdateParameters_GameThread
          (FInteractiveFoliageSceneProxy *this,TVector<double> *param_1,TVector4<double> *param_2)

{
  int iVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  FInteractiveFoliageSceneProxy *local_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  pcStack_c0 = (code *)(param_1->field0_0x0)._s_0.X;
  uStack_b8 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_88[0] = (code *)0x0;
  local_f8 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_e8 = (code *)(param_2->field0_0x0)._s_0.X;
  pcStack_e0 = (code *)(param_2->field0_0x0)._s_0.Y;
  local_d8 = (code *)(param_2->field0_0x0)._s_0.Z;
  pcStack_d0 = (code *)(param_2->field0_0x0)._s_0.W;
  local_c8 = this;
  local_a8 = local_e8;
  pcStack_a0 = pcStack_e0;
  local_98 = local_d8;
  pcStack_90 = pcStack_d0;
  local_60 = FMemory::Malloc(0x50,0x10);
  local_60[2] = (code *)local_c8;
  local_60[3] = pcStack_c0;
  *local_60 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateParameters_GameThread_FInteractiveFoliageSceneProxy__QEAAXAEBU__TVector_N_Math_UE__AEBU__TVector4_N_56__Z__00_00_Function_Private_Core_UE__6B_
  ;
  uStack_b0 = (undefined4)local_f8;
  uStack_ac = (undefined4)((ulonglong)local_f8 >> 0x20);
  *(undefined4 *)(local_60 + 4) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)local_60 + 0x24) = uStack_b8._4_4_;
  *(undefined4 *)(local_60 + 5) = uStack_b0;
  *(undefined4 *)((longlong)local_60 + 0x2c) = uStack_ac;
  local_60[6] = local_e8;
  local_60[7] = pcStack_e0;
  local_60[8] = local_d8;
  local_60[9] = pcStack_d0;
  if (local_60 != (code **)0xfffffffffffffff0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FInteractiveFoliageSceneProxy::UpdateParameters_GameThread_::__l2::TSTR_UpdateFoliageParameters48>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    if (this_00->bInitialized == 0) {
      FRenderCommandList::Init(this_00);
    }
    iVar1 = (this_00->CommandLists).ArrayNum;
    uVar8 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar8 < iVar1) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_108 = (longlong)(int)uVar8;
      local_100 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar1 = (this_00->CommandLists).ArrayNum;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_28 = 2;
    pFVar2 = (this_00->CommandLists).AllocatorInstance.Data;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_88[0] = (code *)0x0;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`FInteractiveFoliageSceneProxy::UpdateParameters_GameThread'::__l2::TSTR_UpdateFoliageParameters48>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar2 + (iVar1 + -1),
               (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_58,pFVar6);
    uVar9 = (ulonglong)local_28;
    if (2 < uVar9) {
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
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar7 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar7 = local_30;
        }
        (**(code **)(*ppcVar7 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar7 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar7 = local_60;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  return;
}

