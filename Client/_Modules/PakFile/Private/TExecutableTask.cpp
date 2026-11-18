// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// Create @ 142a65610

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FFileIoStore::GetCompletedIoRequests'::__l156::<lambda_1>_>::Create
                    (wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                    EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  FFileIoStoreCompressedBlock *pFVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
  *pTVar7;
  int iVar8;
  longlong lVar9;
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
  pTVar7 = (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
            *)plVar5[1];
  if (pTVar7 == (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
                 *)0x0) {
    pTVar7 = (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
              *)*plVar5;
    if (pTVar7 == (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
                   *)0x0) {
      pTVar7 = (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
                *)TLockFreePointerListLIFOPad<void_*,64>::Pop
                            ((TLockFreePointerListLIFOPad<void_*,64> *)
                             &SmallTaskAllocator.field_0x40);
      plVar5[1] = (longlong)pTVar7;
      if (pTVar7 == (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
                     *)0x0) {
        puVar6 = FMemory::Malloc(0x10000,0);
        plVar5[1] = (longlong)puVar6;
        lVar9 = 0xff;
        do {
          puVar1 = puVar6 + 0x20;
          *puVar6 = puVar1;
          lVar9 = lVar9 + -1;
          puVar6 = puVar1;
        } while (lVar9 != 0);
        *puVar1 = 0;
        pTVar7 = (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
                  *)plVar5[1];
      }
    }
    else {
      plVar5[1] = (longlong)pTVar7;
      *plVar5 = 0;
    }
    *(undefined4 *)(plVar5 + 2) = 0x100;
  }
  lVar9 = *(longlong *)pTVar7;
  iVar8 = (int)plVar5[2] + -1;
  *(int *)(plVar5 + 2) = iVar8;
  plVar5[1] = lVar9;
  if (((iVar8 < 0) || ((iVar8 != 0) != (lVar9 != 0))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TLS.NumPartial >= 0 && ((!!TLS.NumPartial) == (!!TLS.PartialBundle))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LockFreeFixedSizeAllocator.h"
                         ,0x59,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TExecutableTask<_public:_virtual_class_FIoRequestImpl_*___cdecl_FFileIoStore::GetCompletedIoRequests(void)_::_156_::<lambda_1>_>
              *)(*pcVar2)();
    return pTVar7;
  }
  FTaskBase::FTaskBase((FTaskBase *)pTVar7,2,true);
  *(undefined ***)pTVar7 =
       &TExecutableTaskBase<`FFileIoStore::GetCompletedIoRequests'::`156'::<lambda_1>,void,void>::
        _vftable_;
  FTaskBase::Init((FTaskBase *)pTVar7,param_1,param_3,param_4,param_5);
  pFVar3 = param_2->BlockToDecompress;
  *(FFileIoStore **)&pTVar7->field_0xd8 = param_2->__this;
  *(FFileIoStoreCompressedBlock **)&pTVar7->field_0xe0 = pFVar3;
  *(undefined ***)pTVar7 =
       &TExecutableTask<`FFileIoStore::GetCompletedIoRequests'::`156'::<lambda_1>_>::_vftable_;
  return pTVar7;
}

