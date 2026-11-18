// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Create @ 142313f00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
* __cdecl UE::Tasks::Private::TExecutableTask<`FEventLoadNode2::Fire'::__l19::<lambda_1>_>::Create
                    (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                    EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
  *pTVar6;
  int iVar7;
  longlong lVar8;
  longlong *lpTlsValue;
  
  plVar4 = TlsGetValue(SmallTaskAllocator._0_4_);
  lpTlsValue = (longlong *)0x0;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = ::operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
    plVar4 = lpTlsValue;
  }
  pTVar6 = (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
            *)plVar4[1];
  if (pTVar6 == (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
                 *)0x0) {
    pTVar6 = (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
              *)*plVar4;
    if (pTVar6 == (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
                   *)0x0) {
      pTVar6 = (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
                *)TLockFreePointerListLIFOPad<void_*,64>::Pop
                            ((TLockFreePointerListLIFOPad<void_*,64> *)
                             &SmallTaskAllocator.field_0x40);
      plVar4[1] = (longlong)pTVar6;
      if (pTVar6 == (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
                     *)0x0) {
        puVar5 = FMemory::Malloc(0x10000,0);
        plVar4[1] = (longlong)puVar5;
        lVar8 = 0xff;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar8 = lVar8 + -1;
          puVar5 = puVar1;
        } while (lVar8 != 0);
        *puVar1 = 0;
        pTVar6 = (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
                  *)plVar4[1];
      }
    }
    else {
      plVar4[1] = (longlong)pTVar6;
      *plVar4 = 0;
    }
    *(undefined4 *)(plVar4 + 2) = 0x100;
  }
  lVar8 = *(longlong *)pTVar6;
  iVar7 = (int)plVar4[2] + -1;
  *(int *)(plVar4 + 2) = iVar7;
  plVar4[1] = lVar8;
  if (((iVar7 < 0) || ((iVar7 != 0) != (lVar8 != 0))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TExecutableTask<_private:_void___cdecl_FEventLoadNode2::Fire(FAsyncLoadingThreadState2_*)_::_19_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar6;
  }
  FTaskBase::FTaskBase((FTaskBase *)pTVar6,2,true);
  *(undefined ***)pTVar6 =
       &TExecutableTaskBase<`FEventLoadNode2::Fire'::`19'::<lambda_1>,void,void>::_vftable_;
  FTaskBase::Init((FTaskBase *)pTVar6,param_1,param_3,param_4,param_5);
  *(FEventLoadNode2 **)&pTVar6->field_0xd8 = param_2->__this;
  *(undefined ***)pTVar6 = &TExecutableTask<`FEventLoadNode2::Fire'::`19'::<lambda_1>_>::_vftable_;
  return pTVar6;
}

