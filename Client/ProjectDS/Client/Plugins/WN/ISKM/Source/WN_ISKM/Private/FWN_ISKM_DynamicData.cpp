// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 2

// FWN_ISKM_DynamicData @ 14a83e8d0

FWN_ISKM_DynamicData * __thiscall
FWN_ISKM_DynamicData::FWN_ISKM_DynamicData
          (FWN_ISKM_DynamicData *this,uint param_1,int param_2,int param_3)

{
  this->CreationFrameNumber = param_1;
  (this->CustomDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomDatas).ArrayNum = 0;
  (this->CustomDatas).ArrayMax = 0;
  (this->InstanceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceDatas).ArrayNum = 0;
  (this->InstanceDatas).ArrayMax = 0;
  FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData>::Acquire
            (&GWN_InstanceDataArrayPool,&this->InstanceDatas,param_2);
  if (0 < param_3) {
    FWN_ISKM_DataArrayPool<float>::Acquire
              (&GWN_CustomDataArrayPool,&this->CustomDatas,param_2 * param_3);
  }
  return this;
}

// ~FWN_ISKM_DynamicData @ 14a83fc90

void __thiscall FWN_ISKM_DynamicData::~FWN_ISKM_DynamicData(FWN_ISKM_DynamicData *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GWN_InstanceDataArrayPool);
  uVar1 = (this->InstanceDatas).ArrayMax;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  (this->InstanceDatas).ArrayNum = 0;
  if (GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum ==
      GWN_InstanceDataArrayPool.FreedDataArrays.ArrayMax) {
    GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&GWN_InstanceDataArrayPool.FreedDataArrays.AllocatorInstance,
                    &GWN_InstanceDataArrayPool.FreedDataArrays.ArrayMax);
  }
  pFVar2 = GWN_InstanceDataArrayPool.FreedDataArrays.AllocatorInstance.Data +
           (longlong)GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum * 0x10;
  GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum =
       GWN_InstanceDataArrayPool.FreedDataArrays.ArrayNum + 1;
  *(undefined8 *)pFVar2 = 0;
  *(FScriptContainerElement **)pFVar2 = (this->InstanceDatas).AllocatorInstance.Data;
  (this->InstanceDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar2 + 8) = (this->InstanceDatas).ArrayNum;
  *(int *)(pFVar2 + 0xc) = (this->InstanceDatas).ArrayMax;
  (this->InstanceDatas).ArrayNum = 0;
  (this->InstanceDatas).ArrayMax = 0;
  GWN_InstanceDataArrayPool.NumAllocated = GWN_InstanceDataArrayPool.NumAllocated + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GWN_InstanceDataArrayPool);
  if (0 < (this->CustomDatas).ArrayNum) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GWN_CustomDataArrayPool);
    uVar1 = (this->CustomDatas).ArrayMax;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    (this->CustomDatas).ArrayNum = 0;
    if (GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum ==
        GWN_CustomDataArrayPool.FreedDataArrays.ArrayMax) {
      GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&GWN_CustomDataArrayPool.FreedDataArrays.AllocatorInstance,
                      &GWN_CustomDataArrayPool.FreedDataArrays.ArrayMax);
    }
    pFVar2 = GWN_CustomDataArrayPool.FreedDataArrays.AllocatorInstance.Data +
             (longlong)GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum * 0x10;
    GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum =
         GWN_CustomDataArrayPool.FreedDataArrays.ArrayNum + 1;
    *(undefined8 *)pFVar2 = 0;
    *(FScriptContainerElement **)pFVar2 = (this->CustomDatas).AllocatorInstance.Data;
    (this->CustomDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar2 + 8) = (this->CustomDatas).ArrayNum;
    *(int *)(pFVar2 + 0xc) = (this->CustomDatas).ArrayMax;
    (this->CustomDatas).ArrayNum = 0;
    (this->CustomDatas).ArrayMax = 0;
    GWN_CustomDataArrayPool.NumAllocated = GWN_CustomDataArrayPool.NumAllocated + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GWN_CustomDataArrayPool);
  }
  pFVar2 = (this->CustomDatas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InstanceDatas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

