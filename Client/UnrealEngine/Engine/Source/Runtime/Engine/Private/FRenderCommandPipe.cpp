// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ExecuteCommand @ 14863a0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderCommandPipe::ExecuteCommand
          (FRenderCommandPipe *this,TUniqueFunction<void___cdecl(void)> *param_1,
          FRenderCommandTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58._40_8_ = *(undefined8 *)&param_1->field_0x28;
  local_58._0_8_ = *(undefined8 *)param_1;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_58._32_8_ = *(undefined8 *)&param_1->field_0x20;
  local_58._16_8_ = *(undefined8 *)&param_1->field_0x10;
  local_58._24_8_ = *(undefined8 *)&param_1->field_0x18;
  if (local_58._0_8_ != 0) {
    *(undefined8 *)param_1 = 0;
  }
  local_28 = 0;
  ExecuteCommand(this,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_58,param_2);
  uVar4 = (ulonglong)local_28;
  if (2 < uVar4) {
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
                ::__l2::Destructors)[uVar4] ==
      UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(void)>_>::Destruct) {
    if (local_58._0_8_ != 0) {
      plVar3 = (longlong *)(local_58 + 0x10);
      if ((longlong *)local_58._40_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_58._40_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(local_58);
  }
  return;
}

