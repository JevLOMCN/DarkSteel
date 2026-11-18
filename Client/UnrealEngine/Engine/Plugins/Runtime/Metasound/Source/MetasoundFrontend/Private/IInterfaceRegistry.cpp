// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~IInterfaceRegistry @ 14ad9ecb0

void __thiscall
Metasound::Frontend::IInterfaceRegistry::~IInterfaceRegistry(IInterfaceRegistry *this)

{
  return;
}

// Get @ 14adbbcd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

IInterfaceRegistry * __cdecl Metasound::Frontend::IInterfaceRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  IInterfaceRegistry *pIVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Registry.Entries._0_8_ = 0;
      ::Registry.Entries._8_8_ = 0;
      ::Registry.Entries._32_8_ = 0;
      ::Registry.Entries._64_8_ = 0;
      ::Registry.Entries._72_4_ = 0;
      ::Registry._padding_ = (longlong)&___7FInterfaceRegistry_Frontend_Metasound__6B_;
      ::Registry.Entries._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Registry.Entries._48_8_ = _UNK_150631d98;
      pTVar3 = ::operator_new(0x60);
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        ::Registry.TransactionBuffer.Object =
             (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)&DAT_00000010
        ;
        ::Registry.TransactionBuffer.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar3->SharedReferenceCount = (atomic<int>)0x1;
        pTVar3->WeakReferenceCount = (atomic<int>)0x1;
        pTVar3->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TTransactionBuffer_VFInterfaceRegistryTransaction_Frontend_Metasound___Frontend_Metasound___00_SharedPointerInternals__6B_
        ;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
        ::Registry.TransactionBuffer.Object =
             (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)(pTVar3 + 1);
        pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar3[4]._padding_ = 0;
        pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar3[5]._padding_ = 0;
        pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
        ::Registry.TransactionBuffer.SharedReferenceCount.ReferenceController = pTVar3;
        if (::Registry.TransactionBuffer.Object ==
            (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pIVar4 = (IInterfaceRegistry *)(*pcVar1)();
            return pIVar4;
          }
        }
      }
      atexit(`Metasound::Frontend::FInterfaceRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__Registry__);
      _Init_thread_footer(&::_TSS0);
      return (IInterfaceRegistry *)&::Registry;
    }
  }
  return (IInterfaceRegistry *)&::Registry;
}

