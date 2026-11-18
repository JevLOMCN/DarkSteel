// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 8

// FWaveTableBankAssetProxy @ 14b2bd1c0

/* WARNING: Enum "EWaveTableResolution": Some values do not have unique names */

FWaveTableBankAssetProxy * __thiscall
FWaveTableBankAssetProxy::FWaveTableBankAssetProxy
          (FWaveTableBankAssetProxy *this,UWaveTableBank *param_1)

{
  EWaveTableSamplingMode EVar1;
  <lambda_1> local_res8;
  
  Audio::TProxyData<FWaveTableBankAssetProxy>::TProxyData<FWaveTableBankAssetProxy>
            ((TProxyData<FWaveTableBankAssetProxy> *)this);
  this->_padding_ = (longlong)&___7FWaveTableBankAssetProxy__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->bBipolar = param_1->bBipolar;
  this->ObjectId = *(uint *)((longlong)&param_1->_padding_ + 4);
  this->SampleRate = param_1->SampleRate;
  EVar1 = param_1->SampleMode;
  (this->WaveTableData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveTableData).ArrayNum = 0;
  (this->WaveTableData).ArrayMax = 0;
  this->SampleMode = EVar1;
  Algo::
  Transform<TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_>,TArray<FWaveTableData,TSizedDefaultAllocator<32>_>_&,_FWaveTableBankAssetProxy::FWaveTableBankAssetProxy_::__l2::<lambda_1>_>
            (&param_1->Entries,&this->WaveTableData,local_res8);
  return this;
}

// FWaveTableBankAssetProxy @ 14b2bd240

FWaveTableBankAssetProxy * __thiscall
FWaveTableBankAssetProxy::FWaveTableBankAssetProxy
          (FWaveTableBankAssetProxy *this,uint param_1,EWaveTableSamplingMode param_2,int param_3,
          TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  TArray<FWaveTableData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FWaveTableBankAssetProxy *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  
  Audio::TProxyData<FWaveTableBankAssetProxy>::TProxyData<FWaveTableBankAssetProxy>
            ((TProxyData<FWaveTableBankAssetProxy> *)this);
  this->_padding_ = (longlong)&___7FWaveTableBankAssetProxy__6B_;
  this->ObjectId = param_1;
  pTVar2 = &this->WaveTableData;
  this->SampleMode = param_2;
  this->bBipolar = param_5;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->SampleRate = param_3;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->WaveTableData).ArrayNum = 0;
  (this->WaveTableData).ArrayMax = 0;
  pFVar10 = (param_4->AllocatorInstance).Data;
  iVar3 = param_4->ArrayNum;
  pFVar11 = pFVar10 + 0xa0;
  pFVar12 = pFVar10 + (longlong)iVar3 * 0xb8;
  while( true ) {
    if (param_4->ArrayNum != iVar3) {
      param_5 = false;
      `TCheckedPointerIterator<FWaveTableBankEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (pFVar10 == pFVar12) break;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    pFVar1 = pFVar11 + -0x10;
    if ((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + (longlong)(this->WaveTableData).ArrayMax * 0x20)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FWaveTableBankAssetProxy *)(*pcVar5)();
        return pFVar8;
      }
    }
    iVar7 = (this->WaveTableData).ArrayNum;
    if (iVar7 == (this->WaveTableData).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar2->AllocatorInstance,&(this->WaveTableData).ArrayMax);
    }
    (this->WaveTableData).ArrayNum = iVar7 + 1;
    pFVar10 = pFVar10 + 0xb8;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    lVar9 = (longlong)iVar7 * 0x20;
    pFVar4[lVar9] = *pFVar1;
    *(undefined8 *)(pFVar4 + lVar9 + 8) = 0;
    *(undefined8 *)(pFVar4 + lVar9 + 8) = *(undefined8 *)(pFVar11 + -8);
    *(undefined8 *)(pFVar11 + -8) = 0;
    *(undefined4 *)(pFVar4 + lVar9 + 0x10) = *(undefined4 *)pFVar11;
    *(undefined4 *)(pFVar4 + lVar9 + 0x14) = *(undefined4 *)(pFVar11 + 4);
    *(undefined8 *)pFVar11 = 0;
    pFVar1 = pFVar11 + 8;
    pFVar11 = pFVar11 + 0xb8;
    *(undefined4 *)(pFVar4 + lVar9 + 0x18) = *(undefined4 *)pFVar1;
  }
  DestructItems<FWaveTableBankEntry,int>
            ((FWaveTableBankEntry *)(param_4->AllocatorInstance).Data,param_4->ArrayNum);
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  return this;
}

// FWaveTableBankAssetProxy @ 14b2bd430

FWaveTableBankAssetProxy * __thiscall
FWaveTableBankAssetProxy::FWaveTableBankAssetProxy
          (FWaveTableBankAssetProxy *this,uint param_1,EWaveTableSamplingMode param_2,int param_3,
          TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  Audio::TProxyData<FWaveTableBankAssetProxy>::TProxyData<FWaveTableBankAssetProxy>
            ((TProxyData<FWaveTableBankAssetProxy> *)this);
  this->_padding_ = (longlong)&___7FWaveTableBankAssetProxy__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->WaveTableData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WaveTableData).ArrayNum = 0;
  (this->WaveTableData).ArrayMax = 0;
  this->bBipolar = param_5;
  this->ObjectId = param_1;
  this->SampleRate = param_3;
  this->SampleMode = param_2;
  Algo::
  Transform<TArray<FWaveTableBankEntry,TSizedDefaultAllocator<32>_>,TArray<FWaveTableData,TSizedDefaultAllocator<32>_>_&,_FWaveTableBankAssetProxy::FWaveTableBankAssetProxy_::__l2::<lambda_1>_>
            (param_4,&this->WaveTableData,(<lambda_1>)param_5);
  return this;
}

// ~FWaveTableBankAssetProxy @ 14b2bd850

void __thiscall FWaveTableBankAssetProxy::~FWaveTableBankAssetProxy(FWaveTableBankAssetProxy *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FWaveTableData,int>
            ((FWaveTableData *)(this->WaveTableData).AllocatorInstance.Data,
             (this->WaveTableData).ArrayNum);
  pFVar3 = (this->WaveTableData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014b2bd898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// GetSampleMode @ 14b2bf8e0

EWaveTableSamplingMode __thiscall
FWaveTableBankAssetProxy::GetSampleMode(FWaveTableBankAssetProxy *this)

{
  return this->SampleMode;
}

// GetSampleRate @ 14b2bf8f0

int __thiscall FWaveTableBankAssetProxy::GetSampleRate(FWaveTableBankAssetProxy *this)

{
  return this->SampleRate;
}

// GetWaveTableData @ 14b2bfa00

TArray<FWaveTableData,TSizedDefaultAllocator<32>_> * __thiscall
FWaveTableBankAssetProxy::GetWaveTableData(FWaveTableBankAssetProxy *this)

{
  return &this->WaveTableData;
}

// IsBipolar @ 14b2c0100

bool __thiscall FWaveTableBankAssetProxy::IsBipolar(FWaveTableBankAssetProxy *this)

{
  return this->bBipolar;
}

