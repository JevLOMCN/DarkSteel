// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// ConstructAndHoldImpl<FD3D12Texture_*_&,FD3D12ResourceLocation_&,FD3D12ResourceLocation_&> @ 145a38460

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TGraphTask<FWaitInitialMipDataUploadTask> * __thiscall
TGraphTask<FWaitInitialMipDataUploadTask>::FConstructor::
ConstructAndHoldImpl<FD3D12Texture_*_&,FD3D12ResourceLocation_&,FD3D12ResourceLocation_&>
          (FConstructor *this,FD3D12Texture **param_1,FD3D12ResourceLocation *param_2,
          FD3D12ResourceLocation *param_3)

{
  FD3D12ResourceLocation *pFVar1;
  FD3D12ResourceLocation *pFVar2;
  FD3D12Texture *pFVar3;
  code *pcVar4;
  bool bVar5;
  TGraphTask<FWaitInitialMipDataUploadTask> *this_00;
  TGraphTask<FWaitInitialMipDataUploadTask> *pTVar6;
  EExtendedTaskPriority local_res10 [8];
  ETaskPriority local_res18 [8];
  undefined1 local_res20 [8];
  
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x1d0,8);
  pTVar6 = (TGraphTask<FWaitInitialMipDataUploadTask> *)0x0;
  if (this_00 != (TGraphTask<FWaitInitialMipDataUploadTask> *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,this->Prerequisites);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFWaitInitialMipDataUploadTask____6B_;
    pTVar6 = this_00;
  }
  pFVar3 = *param_1;
  *(FD3D12Texture **)(pTVar6->TaskStorage).Pad = pFVar3;
  if (pFVar3 != (FD3D12Texture *)0x0) {
    (**(code **)(pFVar3->_padding_ + 8))(&pFVar3->_padding_,local_res20);
  }
  pFVar1 = (FD3D12ResourceLocation *)((pTVar6->TaskStorage).Pad + 8);
  if ((param_2->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TGraphTask<FWaitInitialMipDataUploadTask> *)(*pcVar4)();
    return pTVar6;
  }
  pFVar2 = (FD3D12ResourceLocation *)((pTVar6->TaskStorage).Pad + 0x80);
  pFVar1->_padding_ = param_2->_padding_;
  (pTVar6->TaskStorage).Pad[0x10] = '\0';
  (pTVar6->TaskStorage).Pad[0x11] = '\0';
  (pTVar6->TaskStorage).Pad[0x12] = '\0';
  (pTVar6->TaskStorage).Pad[0x13] = '\0';
  (pTVar6->TaskStorage).Pad[0x14] = '\0';
  (pTVar6->TaskStorage).Pad[0x15] = '\0';
  (pTVar6->TaskStorage).Pad[0x16] = '\0';
  (pTVar6->TaskStorage).Pad[0x17] = '\0';
  (pTVar6->TaskStorage).Pad[0x18] = '\0';
  (pTVar6->TaskStorage).Pad[0x19] = '\0';
  (pTVar6->TaskStorage).Pad[0x1a] = '\0';
  (pTVar6->TaskStorage).Pad[0x1b] = '\0';
  (pTVar6->TaskStorage).Pad[0x1c] = '\0';
  (pTVar6->TaskStorage).Pad[0x1d] = '\0';
  (pTVar6->TaskStorage).Pad[0x1e] = '\0';
  (pTVar6->TaskStorage).Pad[0x1f] = '\0';
  (pTVar6->TaskStorage).Pad[0x20] = '\0';
  (pTVar6->TaskStorage).Pad[0x21] = '\0';
  (pTVar6->TaskStorage).Pad[0x22] = '\0';
  (pTVar6->TaskStorage).Pad[0x23] = '\0';
  (pTVar6->TaskStorage).Pad[0x24] = '\0';
  (pTVar6->TaskStorage).Pad[0x25] = '\0';
  (pTVar6->TaskStorage).Pad[0x26] = '\0';
  (pTVar6->TaskStorage).Pad[0x27] = '\0';
  (pTVar6->TaskStorage).Pad[0x58] = '\0';
  (pTVar6->TaskStorage).Pad[0x59] = '\0';
  (pTVar6->TaskStorage).Pad[0x5a] = '\0';
  (pTVar6->TaskStorage).Pad[0x5b] = '\0';
  (pTVar6->TaskStorage).Pad[0x5c] = '\0';
  (pTVar6->TaskStorage).Pad[0x5d] = '\0';
  (pTVar6->TaskStorage).Pad[0x5e] = '\0';
  (pTVar6->TaskStorage).Pad[0x5f] = '\0';
  (pTVar6->TaskStorage).Pad[0x60] = '\0';
  (pTVar6->TaskStorage).Pad[0x61] = '\0';
  (pTVar6->TaskStorage).Pad[0x62] = '\0';
  (pTVar6->TaskStorage).Pad[99] = '\0';
  (pTVar6->TaskStorage).Pad[100] = '\0';
  (pTVar6->TaskStorage).Pad[0x65] = '\0';
  (pTVar6->TaskStorage).Pad[0x66] = '\0';
  (pTVar6->TaskStorage).Pad[0x67] = '\0';
  (pTVar6->TaskStorage).Pad[0x68] = '\0';
  (pTVar6->TaskStorage).Pad[0x69] = '\0';
  (pTVar6->TaskStorage).Pad[0x6a] = '\0';
  (pTVar6->TaskStorage).Pad[0x6b] = '\0';
  (pTVar6->TaskStorage).Pad[0x6c] = '\0';
  (pTVar6->TaskStorage).Pad[0x6d] = '\0';
  (pTVar6->TaskStorage).Pad[0x6e] = '\0';
  (pTVar6->TaskStorage).Pad[0x6f] = '\0';
  (pTVar6->TaskStorage).Pad[0x70] = '\0';
  (pTVar6->TaskStorage).Pad[0x71] = '\0';
  (pTVar6->TaskStorage).Pad[0x72] = '\0';
  (pTVar6->TaskStorage).Pad[0x73] = '\0';
  (pTVar6->TaskStorage).Pad[0x74] = '\0';
  (pTVar6->TaskStorage).Pad[0x75] = '\0';
  (pTVar6->TaskStorage).Pad[0x76] = '\0';
  (pTVar6->TaskStorage).Pad[0x77] = '\0';
  (pTVar6->TaskStorage).Pad[0x78] = '\0';
  (pTVar6->TaskStorage).Pad[0x79] = 0xff;
  (pTVar6->TaskStorage).Pad[0x7a] = '\0';
  (pTVar6->TaskStorage).Pad[0x28] = '\0';
  (pTVar6->TaskStorage).Pad[0x29] = '\0';
  (pTVar6->TaskStorage).Pad[0x2a] = '\0';
  (pTVar6->TaskStorage).Pad[0x2b] = '\0';
  (pTVar6->TaskStorage).Pad[0x2c] = '\0';
  (pTVar6->TaskStorage).Pad[0x2d] = '\0';
  (pTVar6->TaskStorage).Pad[0x2e] = '\0';
  (pTVar6->TaskStorage).Pad[0x2f] = '\0';
  (pTVar6->TaskStorage).Pad[0x30] = '\0';
  (pTVar6->TaskStorage).Pad[0x31] = '\0';
  (pTVar6->TaskStorage).Pad[0x32] = '\0';
  (pTVar6->TaskStorage).Pad[0x33] = '\0';
  (pTVar6->TaskStorage).Pad[0x34] = '\0';
  (pTVar6->TaskStorage).Pad[0x35] = '\0';
  (pTVar6->TaskStorage).Pad[0x36] = '\0';
  (pTVar6->TaskStorage).Pad[0x37] = '\0';
  (pTVar6->TaskStorage).Pad[0x38] = '\0';
  (pTVar6->TaskStorage).Pad[0x39] = '\0';
  (pTVar6->TaskStorage).Pad[0x3a] = '\0';
  (pTVar6->TaskStorage).Pad[0x3b] = '\0';
  (pTVar6->TaskStorage).Pad[0x3c] = '\0';
  (pTVar6->TaskStorage).Pad[0x3d] = '\0';
  (pTVar6->TaskStorage).Pad[0x3e] = '\0';
  (pTVar6->TaskStorage).Pad[0x3f] = '\0';
  (pTVar6->TaskStorage).Pad[0x40] = '\0';
  (pTVar6->TaskStorage).Pad[0x41] = '\0';
  (pTVar6->TaskStorage).Pad[0x42] = '\0';
  (pTVar6->TaskStorage).Pad[0x43] = '\0';
  (pTVar6->TaskStorage).Pad[0x44] = '\0';
  (pTVar6->TaskStorage).Pad[0x45] = '\0';
  (pTVar6->TaskStorage).Pad[0x46] = '\0';
  (pTVar6->TaskStorage).Pad[0x47] = '\0';
  (pTVar6->TaskStorage).Pad[0x48] = '\0';
  (pTVar6->TaskStorage).Pad[0x49] = '\0';
  (pTVar6->TaskStorage).Pad[0x4a] = '\0';
  (pTVar6->TaskStorage).Pad[0x4b] = '\0';
  (pTVar6->TaskStorage).Pad[0x4c] = '\0';
  (pTVar6->TaskStorage).Pad[0x4d] = '\0';
  (pTVar6->TaskStorage).Pad[0x4e] = '\0';
  (pTVar6->TaskStorage).Pad[0x4f] = '\0';
  (pTVar6->TaskStorage).Pad[0x50] = '\0';
  (pTVar6->TaskStorage).Pad[0x51] = '\0';
  (pTVar6->TaskStorage).Pad[0x52] = '\0';
  (pTVar6->TaskStorage).Pad[0x53] = '\0';
  (pTVar6->TaskStorage).Pad[0x54] = '\0';
  (pTVar6->TaskStorage).Pad[0x55] = '\0';
  (pTVar6->TaskStorage).Pad[0x56] = '\0';
  (pTVar6->TaskStorage).Pad[0x57] = '\0';
  if ((param_3->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TGraphTask<FWaitInitialMipDataUploadTask> *)(*pcVar4)();
    return pTVar6;
  }
  pFVar2->_padding_ = param_3->_padding_;
  (pTVar6->TaskStorage).Pad[0x88] = '\0';
  (pTVar6->TaskStorage).Pad[0x89] = '\0';
  (pTVar6->TaskStorage).Pad[0x8a] = '\0';
  (pTVar6->TaskStorage).Pad[0x8b] = '\0';
  (pTVar6->TaskStorage).Pad[0x8c] = '\0';
  (pTVar6->TaskStorage).Pad[0x8d] = '\0';
  (pTVar6->TaskStorage).Pad[0x8e] = '\0';
  (pTVar6->TaskStorage).Pad[0x8f] = '\0';
  (pTVar6->TaskStorage).Pad[0x90] = '\0';
  (pTVar6->TaskStorage).Pad[0x91] = '\0';
  (pTVar6->TaskStorage).Pad[0x92] = '\0';
  (pTVar6->TaskStorage).Pad[0x93] = '\0';
  (pTVar6->TaskStorage).Pad[0x94] = '\0';
  (pTVar6->TaskStorage).Pad[0x95] = '\0';
  (pTVar6->TaskStorage).Pad[0x96] = '\0';
  (pTVar6->TaskStorage).Pad[0x97] = '\0';
  (pTVar6->TaskStorage).Pad[0x98] = '\0';
  (pTVar6->TaskStorage).Pad[0x99] = '\0';
  (pTVar6->TaskStorage).Pad[0x9a] = '\0';
  (pTVar6->TaskStorage).Pad[0x9b] = '\0';
  (pTVar6->TaskStorage).Pad[0x9c] = '\0';
  (pTVar6->TaskStorage).Pad[0x9d] = '\0';
  (pTVar6->TaskStorage).Pad[0x9e] = '\0';
  (pTVar6->TaskStorage).Pad[0x9f] = '\0';
  (pTVar6->TaskStorage).Pad[0xd0] = '\0';
  (pTVar6->TaskStorage).Pad[0xd1] = '\0';
  (pTVar6->TaskStorage).Pad[0xd2] = '\0';
  (pTVar6->TaskStorage).Pad[0xd3] = '\0';
  (pTVar6->TaskStorage).Pad[0xd4] = '\0';
  (pTVar6->TaskStorage).Pad[0xd5] = '\0';
  (pTVar6->TaskStorage).Pad[0xd6] = '\0';
  (pTVar6->TaskStorage).Pad[0xd7] = '\0';
  (pTVar6->TaskStorage).Pad[0xd8] = '\0';
  (pTVar6->TaskStorage).Pad[0xd9] = '\0';
  (pTVar6->TaskStorage).Pad[0xda] = '\0';
  (pTVar6->TaskStorage).Pad[0xdb] = '\0';
  (pTVar6->TaskStorage).Pad[0xdc] = '\0';
  (pTVar6->TaskStorage).Pad[0xdd] = '\0';
  (pTVar6->TaskStorage).Pad[0xde] = '\0';
  (pTVar6->TaskStorage).Pad[0xdf] = '\0';
  (pTVar6->TaskStorage).Pad[0xe0] = '\0';
  (pTVar6->TaskStorage).Pad[0xe1] = '\0';
  (pTVar6->TaskStorage).Pad[0xe2] = '\0';
  (pTVar6->TaskStorage).Pad[0xe3] = '\0';
  (pTVar6->TaskStorage).Pad[0xe4] = '\0';
  (pTVar6->TaskStorage).Pad[0xe5] = '\0';
  (pTVar6->TaskStorage).Pad[0xe6] = '\0';
  (pTVar6->TaskStorage).Pad[0xe7] = '\0';
  (pTVar6->TaskStorage).Pad[0xe8] = '\0';
  (pTVar6->TaskStorage).Pad[0xe9] = '\0';
  (pTVar6->TaskStorage).Pad[0xea] = '\0';
  (pTVar6->TaskStorage).Pad[0xeb] = '\0';
  (pTVar6->TaskStorage).Pad[0xec] = '\0';
  (pTVar6->TaskStorage).Pad[0xed] = '\0';
  (pTVar6->TaskStorage).Pad[0xee] = '\0';
  (pTVar6->TaskStorage).Pad[0xef] = '\0';
  (pTVar6->TaskStorage).Pad[0xf0] = '\0';
  (pTVar6->TaskStorage).Pad[0xf1] = 0xff;
  (pTVar6->TaskStorage).Pad[0xf2] = '\0';
  (pTVar6->TaskStorage).Pad[0xa0] = '\0';
  (pTVar6->TaskStorage).Pad[0xa1] = '\0';
  (pTVar6->TaskStorage).Pad[0xa2] = '\0';
  (pTVar6->TaskStorage).Pad[0xa3] = '\0';
  (pTVar6->TaskStorage).Pad[0xa4] = '\0';
  (pTVar6->TaskStorage).Pad[0xa5] = '\0';
  (pTVar6->TaskStorage).Pad[0xa6] = '\0';
  (pTVar6->TaskStorage).Pad[0xa7] = '\0';
  (pTVar6->TaskStorage).Pad[0xa8] = '\0';
  (pTVar6->TaskStorage).Pad[0xa9] = '\0';
  (pTVar6->TaskStorage).Pad[0xaa] = '\0';
  (pTVar6->TaskStorage).Pad[0xab] = '\0';
  (pTVar6->TaskStorage).Pad[0xac] = '\0';
  (pTVar6->TaskStorage).Pad[0xad] = '\0';
  (pTVar6->TaskStorage).Pad[0xae] = '\0';
  (pTVar6->TaskStorage).Pad[0xaf] = '\0';
  (pTVar6->TaskStorage).Pad[0xb0] = '\0';
  (pTVar6->TaskStorage).Pad[0xb1] = '\0';
  (pTVar6->TaskStorage).Pad[0xb2] = '\0';
  (pTVar6->TaskStorage).Pad[0xb3] = '\0';
  (pTVar6->TaskStorage).Pad[0xb4] = '\0';
  (pTVar6->TaskStorage).Pad[0xb5] = '\0';
  (pTVar6->TaskStorage).Pad[0xb6] = '\0';
  (pTVar6->TaskStorage).Pad[0xb7] = '\0';
  (pTVar6->TaskStorage).Pad[0xb8] = '\0';
  (pTVar6->TaskStorage).Pad[0xb9] = '\0';
  (pTVar6->TaskStorage).Pad[0xba] = '\0';
  (pTVar6->TaskStorage).Pad[0xbb] = '\0';
  (pTVar6->TaskStorage).Pad[0xbc] = '\0';
  (pTVar6->TaskStorage).Pad[0xbd] = '\0';
  (pTVar6->TaskStorage).Pad[0xbe] = '\0';
  (pTVar6->TaskStorage).Pad[0xbf] = '\0';
  (pTVar6->TaskStorage).Pad[0xc0] = '\0';
  (pTVar6->TaskStorage).Pad[0xc1] = '\0';
  (pTVar6->TaskStorage).Pad[0xc2] = '\0';
  (pTVar6->TaskStorage).Pad[0xc3] = '\0';
  (pTVar6->TaskStorage).Pad[0xc4] = '\0';
  (pTVar6->TaskStorage).Pad[0xc5] = '\0';
  (pTVar6->TaskStorage).Pad[0xc6] = '\0';
  (pTVar6->TaskStorage).Pad[199] = '\0';
  (pTVar6->TaskStorage).Pad[200] = '\0';
  (pTVar6->TaskStorage).Pad[0xc9] = '\0';
  (pTVar6->TaskStorage).Pad[0xca] = '\0';
  (pTVar6->TaskStorage).Pad[0xcb] = '\0';
  (pTVar6->TaskStorage).Pad[0xcc] = '\0';
  (pTVar6->TaskStorage).Pad[0xcd] = '\0';
  (pTVar6->TaskStorage).Pad[0xce] = '\0';
  (pTVar6->TaskStorage).Pad[0xcf] = '\0';
  FD3D12ResourceLocation::TransferOwnership(pFVar1,param_2);
  FD3D12ResourceLocation::TransferOwnership(pFVar2,param_3);
  UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_res18,local_res10);
  UE::Tasks::Private::FTaskBase::Init
            ((FTaskBase *)pTVar6,L"GraphTask",local_res18[0],local_res10[0],None);
  return pTVar6;
}

