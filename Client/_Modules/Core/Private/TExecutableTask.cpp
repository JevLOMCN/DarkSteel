// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Create @ 141867ad0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`UE::ConfigUtilities::SaveCVarForNextBoot'::__l2::<lambda_1>_>::Create
                    (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                    EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
  *pTVar7;
  longlong lVar8;
  longlong *lpTlsValue;
  
  plVar5 = TlsGetValue(SmallTaskAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = ::operator_new(0x18);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
    plVar5 = lpTlsValue;
  }
  pTVar7 = (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
            *)plVar5[1];
  if (pTVar7 == (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
                 *)0x0) {
    pTVar7 = (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
              *)*plVar5;
    if (pTVar7 == (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
                   *)0x0) {
      pTVar7 = (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
                *)TLockFreePointerListLIFOPad<void_*,64>::Pop
                            ((TLockFreePointerListLIFOPad<void_*,64> *)
                             &SmallTaskAllocator.field_0x40);
      plVar5[1] = (longlong)pTVar7;
      if (pTVar7 == (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
                     *)0x0) {
        puVar6 = FMemory::Malloc(0x10000,0);
        plVar5[1] = (longlong)puVar6;
        lVar8 = 0xff;
        do {
          puVar1 = puVar6 + 0x20;
          *puVar6 = puVar1;
          lVar8 = lVar8 + -1;
          puVar6 = puVar1;
        } while (lVar8 != 0);
        *puVar1 = 0;
        pTVar7 = (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
                  *)plVar5[1];
      }
    }
    else {
      plVar5[1] = (longlong)pTVar7;
      *plVar5 = 0;
    }
    *(undefined4 *)(plVar5 + 2) = 0x100;
  }
  lVar8 = *(longlong *)pTVar7;
  iVar4 = (int)plVar5[2] + -1;
  *(int *)(plVar5 + 2) = iVar4;
  plVar5[1] = lVar8;
  if (((iVar4 < 0) || ((iVar4 != 0) != (lVar8 != 0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TExecutableTask<_void___cdecl_UE::ConfigUtilities::SaveCVarForNextBoot(wchar_t_const_*,wchar_t_const_*)_::_2_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar7;
  }
  FTaskBase::FTaskBase((FTaskBase *)pTVar7,2,true);
  *(undefined ***)pTVar7 =
       &TExecutableTaskBase<`UE::ConfigUtilities::SaveCVarForNextBoot'::`2'::<lambda_1>,void,void>::
        _vftable_;
  FTaskBase::Init((FTaskBase *)pTVar7,param_1,param_3,param_4,param_5);
  *(undefined8 *)&pTVar7->field_0xd8 = 0;
  *(FScriptContainerElement **)&pTVar7->field_0xd8 = (param_2->StrKey).Data.AllocatorInstance.Data;
  (param_2->StrKey).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar7->field_0xe0 = (param_2->StrKey).Data.ArrayNum;
  *(int *)&pTVar7->field_0xe4 = (param_2->StrKey).Data.ArrayMax;
  (param_2->StrKey).Data.ArrayNum = 0;
  (param_2->StrKey).Data.ArrayMax = 0;
  *(undefined8 *)&pTVar7->field_0xe8 = 0;
  *(FScriptContainerElement **)&pTVar7->field_0xe8 = (param_2->StrValue).Data.AllocatorInstance.Data
  ;
  (param_2->StrValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pTVar7->field_0xf0 = (param_2->StrValue).Data.ArrayNum;
  *(int *)&pTVar7->field_0xf4 = (param_2->StrValue).Data.ArrayMax;
  (param_2->StrValue).Data.ArrayNum = 0;
  (param_2->StrValue).Data.ArrayMax = 0;
  *(undefined ***)pTVar7 =
       &TExecutableTask<`UE::ConfigUtilities::SaveCVarForNextBoot'::`2'::<lambda_1>_>::_vftable_;
  return pTVar7;
}

