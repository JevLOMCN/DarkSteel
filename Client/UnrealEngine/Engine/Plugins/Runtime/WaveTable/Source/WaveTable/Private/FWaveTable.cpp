// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 15

// FWaveTable @ 14b2bce90

FWaveTable * __thiscall
WaveTable::FWaveTable::FWaveTable
          (FWaveTable *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = param_1->ArrayNum;
  (this->Samples).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->FinalValue = param_2;
  return this;
}

// FWaveTable @ 14b2bcec0

/* WARNING: Removing unreachable block (ram,0x00014b2bcff5) */
/* WARNING: Removing unreachable block (ram,0x00014b2bd07e) */

FWaveTable * __thiscall WaveTable::FWaveTable::FWaveTable(FWaveTable *this,FWaveTableData *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FWaveTable *pFVar8;
  float fVar9;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_5c;
  TArrayView<float,int> local_58;
  TArrayView<short_const_,int> local_48 [2];
  
  piVar1 = &(this->Samples).ArrayNum;
  piVar2 = &(this->Samples).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  fVar9 = param_1->FinalValue;
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((float)((uint)(fVar9 - __real_00800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    fVar9 = FWaveTableData::GetLastValue(param_1);
  }
  this->FinalValue = fVar9;
  if (param_1->BitDepth == PCM_16) {
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    iVar7 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 1);
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FWaveTable *)(*pcVar5)();
      return pFVar8;
    }
    local_88 = SUB84(pFVar4,0);
    uStack_84 = (undefined4)((ulonglong)pFVar4 >> 0x20);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,(ForAnyElementType *)this,piVar1,piVar2);
    local_58.DataPtr = (float *)(this->Samples).AllocatorInstance.Data;
    iVar3 = *piVar1;
    if ((iVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FWaveTable *)(*pcVar5)();
      return pFVar8;
    }
    local_58._12_4_ = uStack_5c;
    local_58.ArrayNum = iVar3;
    local_48[0].DataPtr._0_4_ = local_88;
    local_48[0].DataPtr._4_4_ = uStack_84;
    local_48[0].ArrayNum = iVar7;
    Audio::ArrayPcm16ToFloat(local_48,&local_58);
  }
  else if (param_1->BitDepth == IEEE_Float) {
    pFVar4 = (param_1->Data).AllocatorInstance.Data;
    iVar7 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 2);
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FWaveTable *)(*pcVar5)();
      return pFVar8;
    }
    *piVar1 = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,*piVar2,(ForAnyElementType *)this,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((this->Samples).AllocatorInstance.Data,pFVar4,(longlong)iVar7 << 2);
      }
    }
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTable.cpp"
                       ,0x47,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FWaveTable *)(*pcVar5)();
      return pFVar8;
    }
  }
  return this;
}

// FWaveTable @ 14b2bd130

FWaveTable * __thiscall
WaveTable::FWaveTable::FWaveTable
          (FWaveTable *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Samples).ArrayMax;
  iVar2 = param_1->ArrayNum;
  _Src = (param_1->AllocatorInstance).Data;
  (this->Samples).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Samples).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  this->FinalValue = param_2;
  return this;
}

// GetData @ 14b2bf210

float * __thiscall WaveTable::FWaveTable::GetData(FWaveTable *this)

{
  return (float *)(this->Samples).AllocatorInstance.Data;
}

// GetData @ 14b2bf220

float * __thiscall WaveTable::FWaveTable::GetData(FWaveTable *this)

{
  return (float *)(this->Samples).AllocatorInstance.Data;
}

// GetSamples @ 14b2bf900

TArrayView<float,int> * __thiscall
WaveTable::FWaveTable::GetSamples(FWaveTable *this,TArrayView<float,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> *pTVar4;
  
  iVar1 = (this->Samples).ArrayNum;
  __return_storage_ptr__->DataPtr = (float *)(this->Samples).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<float,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetView @ 14b2bf990

FWaveTableView * __thiscall
WaveTable::FWaveTable::GetView(FWaveTable *this,FWaveTableView *__return_storage_ptr__)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FWaveTableView *pFVar5;
  
  fVar1 = this->FinalValue;
  (__return_storage_ptr__->SampleView).DataPtr = (float *)(this->Samples).AllocatorInstance.Data;
  iVar2 = (this->Samples).ArrayNum;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FWaveTableView *)(*pcVar3)();
      return pFVar5;
    }
  }
  (__return_storage_ptr__->SampleView).ArrayNum = iVar2;
  __return_storage_ptr__->FinalValue = fVar1;
  return __return_storage_ptr__;
}

// Num @ 14b2c0420

int __thiscall WaveTable::FWaveTable::Num(FWaveTable *this)

{
  return (this->Samples).ArrayNum;
}

// Set @ 14b2c2680

void __thiscall
WaveTable::FWaveTable::Set(FWaveTable *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != (FWaveTable *)param_1) {
    pFVar1 = (this->Samples).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Samples).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Samples).ArrayNum = param_1->ArrayNum;
    (this->Samples).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

// Set @ 14b2c26d0

void __thiscall WaveTable::FWaveTable::Set(FWaveTable *this,TArrayView<float_const_,int> *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_>::operator=<float_const_,int>(&this->Samples,param_1);
  return;
}

// SetFinalValue @ 14b2c2b60

void __thiscall WaveTable::FWaveTable::SetFinalValue(FWaveTable *this,float param_1)

{
  this->FinalValue = param_1;
  return;
}

// SetNum @ 14b2c2bb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall WaveTable::FWaveTable::SetNum(FWaveTable *this,int param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->Samples,param_1,Default);
  return;
}

// Zero @ 14b2c2e20

void __thiscall WaveTable::FWaveTable::Zero(FWaveTable *this)

{
  memset((this->Samples).AllocatorInstance.Data,0,(longlong)(this->Samples).ArrayNum << 2);
  return;
}

// operator() @ 150563470

bool __thiscall `WaveTable::FWaveTable::FWaveTable'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2852058876696592438>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2852058876696592438>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505634b0

bool __thiscall `WaveTable::FWaveTable::FWaveTable'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2852058876696592447>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2852058876696592447>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

