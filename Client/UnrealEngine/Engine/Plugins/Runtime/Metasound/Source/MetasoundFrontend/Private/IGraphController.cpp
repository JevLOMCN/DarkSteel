// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// ~IGraphController @ 14ad9ec50

void __thiscall Metasound::Frontend::IGraphController::~IGraphController(IGraphController *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad9ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AddTemplateNode @ 14ada6010

TSharedRef<Metasound::Frontend::INodeController,1> * __thiscall
Metasound::Frontend::IGraphController::AddTemplateNode
          (IGraphController *this,
          TSharedRef<Metasound::Frontend::INodeController,1> *__return_storage_ptr__,
          FNodeClassRegistryKey *param_1,FMetasoundFrontendNodeInterface *param_2,FGuid *param_3)

{
  INodeController::GetInvalidHandle(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInvalidHandle @ 14adbfd80

TSharedRef<Metasound::Frontend::IGraphController,1> * __cdecl
Metasound::Frontend::IGraphController::GetInvalidHandle
          (TSharedRef<Metasound::Frontend::IGraphController,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<Metasound::Frontend::IGraphController,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  IGraphController *pIVar11;
  
  if (::_TSS0 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c)) goto LAB_14adbfdac;
  _Init_thread_header(&::_TSS0);
  if (::_TSS0 != -1) goto LAB_14adbfdac;
  pTVar8 = ::operator_new(0x28);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pIVar11 = (IGraphController *)&DAT_00000010;
LAB_14adbfeb6:
    if (((*(longlong *)&pIVar11->field_0x8 == 0) || (*(longlong *)&pIVar11->field_0x10 == 0)) ||
       (*(int *)(*(longlong *)&pIVar11->field_0x10 + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(IGraphController **)&pIVar11->field_0x8 = pIVar11;
      if (pTVar10 != *(TReferenceControllerBase<1> **)&pIVar11->field_0x10) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pIVar11->field_0x10;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pIVar11->field_0x10 = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pIVar11 = (IGraphController *)(pTVar8 + 1);
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFInvalidGraphController_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[2]._padding_ = 0;
    pTVar8[1]._padding_ = (longlong)&___7FInvalidGraphController_Frontend_Metasound__6B_;
    pTVar10 = pTVar8;
    if (pIVar11 != (IGraphController *)0x0) goto LAB_14adbfeb6;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<Metasound::Frontend::IGraphController,1> *)(*pcVar5)();
      return pTVar9;
    }
  }
  ::Invalid.Object = pIVar11;
  ::Invalid.SharedReferenceCount.ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  atexit(`Metasound::Frontend::IGraphController::GetInvalidHandle'::__l2::
         _dynamic_atexit_destructor_for__Invalid__);
  _Init_thread_footer(&::_TSS0);
LAB_14adbfdac:
  __return_storage_ptr__->Object = ::Invalid.Object;
  FVar6 = ::Invalid.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       ::Invalid.SharedReferenceCount.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar6.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

