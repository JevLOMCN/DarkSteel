// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// operator() @ 1450b40d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<__ISceneRenderBuilder::AddRenderCommand_::__l2::<lambda_1>::operator()_::__l2::TSTR_SceneRenderBuilder_AddRenderCommand79>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              (this);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = *(undefined8 *)this;
    local_58._40_8_ = *(undefined8 *)((longlong)this + 0x28);
    *(undefined8 *)((longlong)this + 0x28) = 0;
    local_58._32_8_ = *(undefined8 *)((longlong)this + 0x20);
    local_58._16_8_ = *(undefined8 *)((longlong)this + 0x10);
    local_58._24_8_ = *(undefined8 *)((longlong)this + 0x18);
    if (local_58._0_8_ != 0) {
      *(undefined8 *)this = 0;
    }
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<``ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>::operator()'::__l2::TSTR_SceneRenderBuilder_AddRenderCommand79>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
                  ::__l2::Destructors)[uVar5] !=
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
      return;
    }
    if (local_58._0_8_ != 0) {
      plVar4 = (longlong *)(local_58 + 0x10);
      if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_58._40_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}

// AddRenderCommand @ 1450bafd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ISceneRenderBuilder::AddRenderCommand
          (ISceneRenderBuilder *this,
          TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_50;
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = *(longlong *)param_1;
  pcVar1 = *(code **)((longlong)*this + 0x18);
  local_50 = *(longlong **)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_58 = *(longlong *)&param_1->field_0x20;
  local_68 = *(longlong *)&param_1->field_0x10;
  uStack_60 = *(undefined8 *)&param_1->field_0x18;
  if (local_78 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x40,0x10);
  *local_20 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__AddRenderCommand_ISceneRenderBuilder__QEAAX__QEAV__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar2 = local_20 + 2;
  *plVar2 = local_78;
  local_20[7] = (longlong)local_50;
  local_50 = (longlong *)0x0;
  *(undefined4 *)(local_20 + 4) = (undefined4)local_68;
  *(undefined4 *)((longlong)local_20 + 0x24) = local_68._4_4_;
  *(undefined4 *)(local_20 + 5) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)local_20 + 0x2c) = uStack_60._4_4_;
  local_20[6] = local_58;
  if (*plVar2 != 0) {
    local_78 = 0;
  }
  if (plVar2 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>,void>
                  ::Call;
  }
  (*pcVar1)(this,local_48);
  if (local_48[0] != (code *)0x0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_78 != 0) {
    plVar2 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar2 = local_50;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}

// ~ISceneRenderBuilder @ 145479a20

void __thiscall ISceneRenderBuilder::~ISceneRenderBuilder(ISceneRenderBuilder *this)

{
  return;
}

