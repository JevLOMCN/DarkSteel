// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 12

// TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1><TSharedRef<UE::NNE::FSharedModelData,1>_&,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&> @ 14eb01d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1> * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1><TSharedRef<UE::NNE::FSharedModelData,1>_&,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>
           *this,TSharedRef<UE::NNE::FSharedModelData,1> *param_1,FRuntimeConf *param_2,
          TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_3)

{
  uchar *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
  *this_00;
  TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
  *pTVar6;
  TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1> *pTVar7;
  TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> *pTVar8;
  TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> *local_58;
  FSharedReferencer<1> FStack_50;
  TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> local_48;
  TSharedRef<UE::NNE::FSharedModelData,1> local_38;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VFModelInstanceORTDmlRDG_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
  local_48.Object = param_3->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_38.Object = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
            *)0x0;
  puVar1 = (this->ObjectStorage).Pad + 0x48;
  (this->ObjectStorage).Pad[8] = '\0';
  (this->ObjectStorage).Pad[9] = '\0';
  (this->ObjectStorage).Pad[10] = '\0';
  (this->ObjectStorage).Pad[0xb] = '\0';
  (this->ObjectStorage).Pad[0xc] = '\0';
  (this->ObjectStorage).Pad[0xd] = '\0';
  (this->ObjectStorage).Pad[0xe] = '\0';
  (this->ObjectStorage).Pad[0xf] = '\0';
  (this->ObjectStorage).Pad[0x10] = '\0';
  (this->ObjectStorage).Pad[0x11] = '\0';
  (this->ObjectStorage).Pad[0x12] = '\0';
  (this->ObjectStorage).Pad[0x13] = '\0';
  (this->ObjectStorage).Pad[0x14] = '\0';
  (this->ObjectStorage).Pad[0x15] = '\0';
  (this->ObjectStorage).Pad[0x16] = '\0';
  (this->ObjectStorage).Pad[0x17] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7FModelInstanceORTDmlRDG_Private_NNERuntimeORT_UE__6B_;
  (this->ObjectStorage).Pad[0x18] = '\0';
  (this->ObjectStorage).Pad[0x19] = '\0';
  (this->ObjectStorage).Pad[0x1a] = '\0';
  (this->ObjectStorage).Pad[0x1b] = '\0';
  (this->ObjectStorage).Pad[0x1c] = '\0';
  (this->ObjectStorage).Pad[0x1d] = '\0';
  (this->ObjectStorage).Pad[0x1e] = '\0';
  (this->ObjectStorage).Pad[0x1f] = '\0';
  (this->ObjectStorage).Pad[0x20] = '\0';
  (this->ObjectStorage).Pad[0x21] = '\0';
  (this->ObjectStorage).Pad[0x22] = '\0';
  (this->ObjectStorage).Pad[0x23] = '\0';
  (this->ObjectStorage).Pad[0x24] = '\0';
  (this->ObjectStorage).Pad[0x25] = '\0';
  (this->ObjectStorage).Pad[0x26] = '\0';
  (this->ObjectStorage).Pad[0x27] = '\0';
  (this->ObjectStorage).Pad[0x28] = '\0';
  (this->ObjectStorage).Pad[0x29] = '\0';
  (this->ObjectStorage).Pad[0x2a] = '\0';
  (this->ObjectStorage).Pad[0x2b] = '\0';
  (this->ObjectStorage).Pad[0x2c] = '\0';
  (this->ObjectStorage).Pad[0x2d] = '\0';
  (this->ObjectStorage).Pad[0x2e] = '\0';
  (this->ObjectStorage).Pad[0x2f] = '\0';
  (this->ObjectStorage).Pad[0x30] = '\0';
  (this->ObjectStorage).Pad[0x31] = '\0';
  (this->ObjectStorage).Pad[0x32] = '\0';
  (this->ObjectStorage).Pad[0x33] = '\0';
  (this->ObjectStorage).Pad[0x34] = '\0';
  (this->ObjectStorage).Pad[0x35] = '\0';
  (this->ObjectStorage).Pad[0x36] = '\0';
  (this->ObjectStorage).Pad[0x37] = '\0';
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  (this->ObjectStorage).Pad[0x40] = '\0';
  (this->ObjectStorage).Pad[0x41] = '\0';
  (this->ObjectStorage).Pad[0x42] = '\0';
  (this->ObjectStorage).Pad[0x43] = '\0';
  (this->ObjectStorage).Pad[0x44] = '\0';
  (this->ObjectStorage).Pad[0x45] = '\0';
  (this->ObjectStorage).Pad[0x46] = '\0';
  (this->ObjectStorage).Pad[0x47] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  (this->ObjectStorage).Pad[0x54] = '\0';
  (this->ObjectStorage).Pad[0x55] = '\0';
  (this->ObjectStorage).Pad[0x56] = '\0';
  (this->ObjectStorage).Pad[0x57] = '\0';
  local_48.SharedReferenceCount.ReferenceController = pTVar2;
  local_38.SharedReferenceCount.ReferenceController = pTVar3;
  this_00 = ::operator_new(0x148);
  if (this_00 ==
      (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
       *)0x0) {
    local_58 = ___xmm_00000000000000000000000000000010;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pTVar8 = (TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> *)
             &DAT_00000010;
  }
  else {
    pTVar6 = TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
             ::
             TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1><TSharedRef<UE::NNE::FSharedModelData,1>_&,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
                       (this_00,&local_38,param_2,&local_48);
    pTVar8 = &pTVar6->ObjectStorage;
    if ((pTVar8 == (TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>
                *)(*pcVar4)();
      return pTVar7;
    }
    local_58 = pTVar8;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)pTVar6;
    if (pTVar6 != (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
                   *)0x0) {
      LOCK();
      *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
      UNLOCK();
    }
  }
  if ((TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> **)puVar1
      != &local_58) {
    *(TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> **)puVar1 =
         pTVar8;
    local_58 = (TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> *)
               0x0;
    FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((this->ObjectStorage).Pad + 0x50),&FStack_50);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(FStack_50.ReferenceController);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pTVar6)
  ;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

// TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1><TSharedRef<UE::NNE::FSharedModelData,1>_&,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&> @ 14eb01f00

TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1> *
__thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1><TSharedRef<UE::NNE::FSharedModelData,1>_&,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
           *this,TSharedRef<UE::NNE::FSharedModelData,1> *param_1,FRuntimeConf *param_2,
          TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FEnvironment *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedModelData *pFVar4;
  atomic<int> *paVar5;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VFProxy_FModelInstanceORTDmlRDG_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar2 = param_3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    *(FSharedModelData **)(this->ObjectStorage).Pad = pFVar4;
    (this->ObjectStorage).Pad[8] = '\0';
    (this->ObjectStorage).Pad[9] = '\0';
    (this->ObjectStorage).Pad[10] = '\0';
    (this->ObjectStorage).Pad[0xb] = '\0';
    (this->ObjectStorage).Pad[0xc] = '\0';
    (this->ObjectStorage).Pad[0xd] = '\0';
    (this->ObjectStorage).Pad[0xe] = '\0';
    (this->ObjectStorage).Pad[0xf] = '\0';
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    *(FSharedModelData **)(this->ObjectStorage).Pad = pFVar4;
    *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8) = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(ExecutionMode *)((this->ObjectStorage).Pad + 0x10) = param_2->ExecutionMode;
  (this->ObjectStorage).Pad[0x18] = '\0';
  (this->ObjectStorage).Pad[0x19] = '\0';
  (this->ObjectStorage).Pad[0x1a] = '\0';
  (this->ObjectStorage).Pad[0x1b] = '\0';
  (this->ObjectStorage).Pad[0x1c] = '\0';
  (this->ObjectStorage).Pad[0x1d] = '\0';
  (this->ObjectStorage).Pad[0x1e] = '\0';
  (this->ObjectStorage).Pad[0x1f] = '\0';
  (this->ObjectStorage).Pad[0x20] = '\0';
  (this->ObjectStorage).Pad[0x21] = '\0';
  (this->ObjectStorage).Pad[0x22] = '\0';
  (this->ObjectStorage).Pad[0x23] = '\0';
  (this->ObjectStorage).Pad[0x24] = '\0';
  (this->ObjectStorage).Pad[0x25] = '\0';
  (this->ObjectStorage).Pad[0x26] = '\0';
  (this->ObjectStorage).Pad[0x27] = '\0';
  *(FEnvironment **)((this->ObjectStorage).Pad + 0x28) = pFVar2;
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x30) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  (this->ObjectStorage).Pad[0x40] = '\0';
  (this->ObjectStorage).Pad[0x41] = '\0';
  (this->ObjectStorage).Pad[0x42] = '\0';
  (this->ObjectStorage).Pad[0x43] = '\0';
  (this->ObjectStorage).Pad[0x44] = '\0';
  (this->ObjectStorage).Pad[0x45] = '\0';
  (this->ObjectStorage).Pad[0x46] = '\0';
  (this->ObjectStorage).Pad[0x47] = '\0';
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  (this->ObjectStorage).Pad[0x4c] = '\0';
  (this->ObjectStorage).Pad[0x4d] = '\0';
  (this->ObjectStorage).Pad[0x4e] = '\0';
  (this->ObjectStorage).Pad[0x4f] = '\0';
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  (this->ObjectStorage).Pad[0x54] = '\0';
  (this->ObjectStorage).Pad[0x55] = '\0';
  (this->ObjectStorage).Pad[0x56] = '\0';
  (this->ObjectStorage).Pad[0x57] = '\0';
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  (this->ObjectStorage).Pad[0x5c] = '\0';
  (this->ObjectStorage).Pad[0x5d] = '\0';
  (this->ObjectStorage).Pad[0x5e] = '\0';
  (this->ObjectStorage).Pad[0x5f] = '\0';
  (this->ObjectStorage).Pad[0x60] = '\0';
  (this->ObjectStorage).Pad[0x61] = '\0';
  (this->ObjectStorage).Pad[0x62] = '\0';
  (this->ObjectStorage).Pad[99] = '\0';
  (this->ObjectStorage).Pad[100] = '\0';
  (this->ObjectStorage).Pad[0x65] = '\0';
  (this->ObjectStorage).Pad[0x66] = '\0';
  (this->ObjectStorage).Pad[0x67] = '\0';
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  (this->ObjectStorage).Pad[0x6c] = '\0';
  (this->ObjectStorage).Pad[0x6d] = '\0';
  (this->ObjectStorage).Pad[0x6e] = '\0';
  (this->ObjectStorage).Pad[0x6f] = '\0';
  (this->ObjectStorage).Pad[0x70] = '\0';
  (this->ObjectStorage).Pad[0x71] = '\0';
  (this->ObjectStorage).Pad[0x72] = '\0';
  (this->ObjectStorage).Pad[0x73] = '\0';
  (this->ObjectStorage).Pad[0x74] = '\0';
  (this->ObjectStorage).Pad[0x75] = '\0';
  (this->ObjectStorage).Pad[0x76] = '\0';
  (this->ObjectStorage).Pad[0x77] = '\0';
  (this->ObjectStorage).Pad[0x78] = '\0';
  (this->ObjectStorage).Pad[0x79] = '\0';
  (this->ObjectStorage).Pad[0x7a] = '\0';
  (this->ObjectStorage).Pad[0x7b] = '\0';
  (this->ObjectStorage).Pad[0x7c] = '\0';
  (this->ObjectStorage).Pad[0x7d] = '\0';
  (this->ObjectStorage).Pad[0x7e] = '\0';
  (this->ObjectStorage).Pad[0x7f] = '\0';
  (this->ObjectStorage).Pad[0x80] = '\0';
  (this->ObjectStorage).Pad[0x81] = '\0';
  (this->ObjectStorage).Pad[0x82] = '\0';
  (this->ObjectStorage).Pad[0x83] = '\0';
  (this->ObjectStorage).Pad[0x84] = '\0';
  (this->ObjectStorage).Pad[0x85] = '\0';
  (this->ObjectStorage).Pad[0x86] = '\0';
  (this->ObjectStorage).Pad[0x87] = '\0';
  (this->ObjectStorage).Pad[0x88] = '\0';
  (this->ObjectStorage).Pad[0x89] = '\0';
  (this->ObjectStorage).Pad[0x8a] = '\0';
  (this->ObjectStorage).Pad[0x8b] = '\0';
  (this->ObjectStorage).Pad[0x8c] = '\0';
  (this->ObjectStorage).Pad[0x8d] = '\0';
  (this->ObjectStorage).Pad[0x8e] = '\0';
  (this->ObjectStorage).Pad[0x8f] = '\0';
  (this->ObjectStorage).Pad[0x90] = '\0';
  (this->ObjectStorage).Pad[0x91] = '\0';
  (this->ObjectStorage).Pad[0x92] = '\0';
  (this->ObjectStorage).Pad[0x93] = '\0';
  (this->ObjectStorage).Pad[0x94] = '\0';
  (this->ObjectStorage).Pad[0x95] = '\0';
  (this->ObjectStorage).Pad[0x96] = '\0';
  (this->ObjectStorage).Pad[0x97] = '\0';
  (this->ObjectStorage).Pad[0x98] = '\0';
  (this->ObjectStorage).Pad[0x99] = '\0';
  (this->ObjectStorage).Pad[0x9a] = '\0';
  (this->ObjectStorage).Pad[0x9b] = '\0';
  (this->ObjectStorage).Pad[0x9c] = '\0';
  (this->ObjectStorage).Pad[0x9d] = '\0';
  (this->ObjectStorage).Pad[0x9e] = '\0';
  (this->ObjectStorage).Pad[0x9f] = '\0';
  (this->ObjectStorage).Pad[0xa0] = '\0';
  (this->ObjectStorage).Pad[0xa1] = '\0';
  (this->ObjectStorage).Pad[0xa2] = '\0';
  (this->ObjectStorage).Pad[0xa3] = '\0';
  (this->ObjectStorage).Pad[0xa4] = '\0';
  (this->ObjectStorage).Pad[0xa5] = '\0';
  (this->ObjectStorage).Pad[0xa6] = '\0';
  (this->ObjectStorage).Pad[0xa7] = '\0';
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  (this->ObjectStorage).Pad[0xac] = '\0';
  (this->ObjectStorage).Pad[0xad] = '\0';
  (this->ObjectStorage).Pad[0xae] = '\0';
  (this->ObjectStorage).Pad[0xaf] = '\0';
  (this->ObjectStorage).Pad[0xb0] = '\0';
  (this->ObjectStorage).Pad[0xb1] = '\0';
  (this->ObjectStorage).Pad[0xb2] = '\0';
  (this->ObjectStorage).Pad[0xb3] = '\0';
  (this->ObjectStorage).Pad[0xb4] = '\0';
  (this->ObjectStorage).Pad[0xb5] = '\0';
  (this->ObjectStorage).Pad[0xb6] = '\0';
  (this->ObjectStorage).Pad[0xb7] = '\0';
  (this->ObjectStorage).Pad[0xb8] = '\0';
  (this->ObjectStorage).Pad[0xb9] = '\0';
  (this->ObjectStorage).Pad[0xba] = '\0';
  (this->ObjectStorage).Pad[0xbb] = '\0';
  (this->ObjectStorage).Pad[0xbc] = '\0';
  (this->ObjectStorage).Pad[0xbd] = '\0';
  (this->ObjectStorage).Pad[0xbe] = '\0';
  (this->ObjectStorage).Pad[0xbf] = '\0';
  (this->ObjectStorage).Pad[0xc0] = '\0';
  (this->ObjectStorage).Pad[0xc1] = '\0';
  (this->ObjectStorage).Pad[0xc2] = '\0';
  (this->ObjectStorage).Pad[0xc3] = '\0';
  (this->ObjectStorage).Pad[0xc4] = '\0';
  (this->ObjectStorage).Pad[0xc5] = '\0';
  (this->ObjectStorage).Pad[0xc6] = '\0';
  (this->ObjectStorage).Pad[199] = '\0';
  (this->ObjectStorage).Pad[200] = '\0';
  (this->ObjectStorage).Pad[0xc9] = '\0';
  (this->ObjectStorage).Pad[0xca] = '\0';
  (this->ObjectStorage).Pad[0xcb] = '\0';
  (this->ObjectStorage).Pad[0xcc] = '\0';
  (this->ObjectStorage).Pad[0xcd] = '\0';
  (this->ObjectStorage).Pad[0xce] = '\0';
  (this->ObjectStorage).Pad[0xcf] = '\0';
  (this->ObjectStorage).Pad[0xd0] = '\0';
  (this->ObjectStorage).Pad[0xd1] = '\0';
  (this->ObjectStorage).Pad[0xd2] = '\0';
  (this->ObjectStorage).Pad[0xd3] = '\0';
  (this->ObjectStorage).Pad[0xd4] = '\0';
  (this->ObjectStorage).Pad[0xd5] = '\0';
  (this->ObjectStorage).Pad[0xd6] = '\0';
  (this->ObjectStorage).Pad[0xd7] = '\0';
  (this->ObjectStorage).Pad[0xd8] = '\0';
  (this->ObjectStorage).Pad[0xd9] = '\0';
  (this->ObjectStorage).Pad[0xda] = '\0';
  (this->ObjectStorage).Pad[0xdb] = '\0';
  (this->ObjectStorage).Pad[0xdc] = '\0';
  (this->ObjectStorage).Pad[0xdd] = '\0';
  (this->ObjectStorage).Pad[0xde] = '\0';
  (this->ObjectStorage).Pad[0xdf] = '\0';
  (this->ObjectStorage).Pad[0xe0] = '\0';
  (this->ObjectStorage).Pad[0xe1] = '\0';
  (this->ObjectStorage).Pad[0xe2] = '\0';
  (this->ObjectStorage).Pad[0xe3] = '\0';
  (this->ObjectStorage).Pad[0xe4] = '\0';
  (this->ObjectStorage).Pad[0xe5] = '\0';
  (this->ObjectStorage).Pad[0xe6] = '\0';
  (this->ObjectStorage).Pad[0xe7] = '\0';
  (this->ObjectStorage).Pad[0xe8] = '\0';
  (this->ObjectStorage).Pad[0xe9] = '\0';
  (this->ObjectStorage).Pad[0xea] = '\0';
  (this->ObjectStorage).Pad[0xeb] = '\0';
  (this->ObjectStorage).Pad[0xec] = '\0';
  (this->ObjectStorage).Pad[0xed] = '\0';
  (this->ObjectStorage).Pad[0xee] = '\0';
  (this->ObjectStorage).Pad[0xef] = '\0';
  (this->ObjectStorage).Pad[0xf0] = '\0';
  (this->ObjectStorage).Pad[0xf1] = '\0';
  (this->ObjectStorage).Pad[0xf2] = '\0';
  (this->ObjectStorage).Pad[0xf3] = '\0';
  (this->ObjectStorage).Pad[0xf4] = '\0';
  (this->ObjectStorage).Pad[0xf5] = '\0';
  (this->ObjectStorage).Pad[0xf6] = '\0';
  (this->ObjectStorage).Pad[0xf7] = '\0';
  (this->ObjectStorage).Pad[0xf8] = '\0';
  (this->ObjectStorage).Pad[0xf9] = '\0';
  (this->ObjectStorage).Pad[0xfa] = '\0';
  (this->ObjectStorage).Pad[0xfb] = '\0';
  (this->ObjectStorage).Pad[0xfc] = '\0';
  (this->ObjectStorage).Pad[0xfd] = '\0';
  (this->ObjectStorage).Pad[0xfe] = '\0';
  (this->ObjectStorage).Pad[0xff] = '\0';
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x100),4000);
  (this->ObjectStorage).Pad[0x128] = '\0';
  (this->ObjectStorage).Pad[0x129] = '\0';
  (this->ObjectStorage).Pad[0x12a] = '\0';
  (this->ObjectStorage).Pad[299] = '\0';
  (this->ObjectStorage).Pad[300] = '\0';
  (this->ObjectStorage).Pad[0x12d] = '\0';
  (this->ObjectStorage).Pad[0x12e] = '\0';
  (this->ObjectStorage).Pad[0x12f] = '\0';
  (this->ObjectStorage).Pad[0x130] = '\0';
  (this->ObjectStorage).Pad[0x131] = '\0';
  (this->ObjectStorage).Pad[0x132] = '\0';
  (this->ObjectStorage).Pad[0x133] = '\0';
  (this->ObjectStorage).Pad[0x134] = '\0';
  (this->ObjectStorage).Pad[0x135] = '\0';
  (this->ObjectStorage).Pad[0x136] = '\0';
  (this->ObjectStorage).Pad[0x137] = '\0';
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return this;
}

// DestroyObject @ 14eb13770

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FEnvironment,1>::
DestroyObject(TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FEnvironment,1> *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00014eb1379a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Ort::Global<void>::api_->ReleaseEnv)(*(OrtEnv **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14eb137b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1>::DestroyObject
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> *this)

{
  UE::NNERuntimeORT::Private::
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>
            ((FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eb137c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1>::DestroyObject
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1>
           *this)

{
  UE::NNERuntimeORT::Private::
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>
            ((FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eb137d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>::DestroyObject
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>
           *this)

{
  UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::~FModelInstanceORTDmlRDG
            ((FModelInstanceORTDmlRDG *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14eb137e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1>::DestroyObject
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1> *this)

{
  UE::NNERuntimeORT::Private::
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>
            ((FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14eb137f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTCpu,1>::
DestroyObject(TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTCpu,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14eb13820

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlGPU,1>
::DestroyObject(TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlGPU,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14eb13850

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlRDG,1>
::DestroyObject(TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlRDG,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14eb13880

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTNpu,1>::
DestroyObject(TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTNpu,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x20));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14eb138b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>::
DestroyObject(TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
              *this)

{
  UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy::~FProxy
            ((FProxy *)&this->ObjectStorage);
  return;
}

