// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// operator= @ 14869c9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FModulationDestinationData * __thiscall
Audio::FModulationDestination::FModulationDestinationData::operator=
          (FModulationDestinationData *this,FModulationDestinationData *param_1)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  FWindowsRecursiveMutex *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pTVar1 = &param_1->OutputBuffer;
  this->DeviceId = param_1->DeviceId;
  pTVar2 = &this->OutputBuffer;
  this->ValueTarget = param_1->ValueTarget;
  this->bIsBuffered = param_1->bIsBuffered;
  this->bValueNormalized = param_1->bValueNormalized;
  this->bHasProcessed = param_1->bHasProcessed;
  if (pTVar2 != pTVar1) {
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->OutputBuffer).ArrayNum = (param_1->OutputBuffer).ArrayNum;
    (this->OutputBuffer).ArrayMax = (param_1->OutputBuffer).ArrayMax;
    (param_1->OutputBuffer).ArrayNum = 0;
    (param_1->OutputBuffer).ArrayMax = 0;
  }
  pFVar3 = &param_1->HandleCritSection;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
    TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>::
    operator=((TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
               *)local_88,&param_1->Handles);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    pFVar3 = &this->HandleCritSection;
    if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
      ::operator=(&this->Handles,
                  (TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
                   *)local_88);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      FModulationParameter::operator=(&this->Parameter,&param_1->Parameter);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,0,local_88._8_4_);
      iVar5 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,0x10,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator= @ 14869cbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FModulationDestinationData * __thiscall
Audio::FModulationDestination::FModulationDestinationData::operator=
          (FModulationDestinationData *this,FModulationDestinationData *param_1)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  FWindowsRecursiveMutex *pFVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this->DeviceId = param_1->DeviceId;
  this->ValueTarget = param_1->ValueTarget;
  this->bIsBuffered = param_1->bIsBuffered;
  this->bValueNormalized = param_1->bValueNormalized;
  pTVar1 = &this->OutputBuffer;
  if (pTVar1 != &param_1->OutputBuffer) {
    iVar4 = (param_1->OutputBuffer).ArrayNum;
    piVar2 = &(this->OutputBuffer).ArrayMax;
    _Src = (param_1->OutputBuffer).AllocatorInstance.Data;
    (this->OutputBuffer).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
      }
    }
  }
  pFVar3 = &param_1->HandleCritSection;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
    TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>::
    operator=((TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
               *)local_88,&param_1->Handles);
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
    pFVar3 = &this->HandleCritSection;
    if (pFVar3 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar3);
      TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
      ::operator=(&this->Handles,
                  (TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
                   *)local_88);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar3);
      FModulationParameter::operator=(&this->Parameter,&param_1->Parameter);
      local_40 = 0;
      if (local_48 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_48);
      }
      TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,0,local_88._8_4_);
      iVar4 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,0x10,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDeviceId @ 1486bd8b0

uint * __thiscall
Audio::FModulationDestination::FModulationDestinationData::GetDeviceId
          (FModulationDestinationData *this)

{
  return &this->DeviceId;
}

// GetParameter @ 1486c3620

FModulationParameter * __thiscall
Audio::FModulationDestination::FModulationDestinationData::GetParameter
          (FModulationDestinationData *this)

{
  return &this->Parameter;
}

// ResetHandles @ 1486ea330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FModulationDestination::FModulationDestinationData::ResetHandles
          (FModulationDestinationData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FModulatorHandle *pFVar2;
  longlong *plVar3;
  TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [96];
  longlong local_148;
  longlong local_138 [3];
  longlong *local_120;
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  FModulatorHandle local_e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  FModulationParameter::FModulationParameter
            ((FModulationParameter *)(local_1a8 + 0x10),&this->Parameter);
  lpCriticalSection = &this->HandleCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->Handles;
    if (*(int *)&(this->Handles).Elements.field_0x8 != *(int *)&(this->Handles).Elements.field_0x34)
    {
      TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
      TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this_00->Elements,0,*(int *)&(this->Handles).Elements.field_0x8);
      iVar1 = *(int *)&(this->Handles).Elements.field_0xc;
      *(undefined4 *)&(this->Handles).Elements.field_0x8 = 0;
      if (iVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,0x10,0,(ForAnyElementType *)this_00,0,
                   (int *)&(this->Handles).Elements.field_0xc);
      }
      *(undefined4 *)&(this->Handles).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->Handles).Elements.field_0x28 = 0;
      *(undefined4 *)&(this->Handles).Elements.field_0x30 = 0xffffffff;
    }
    pFVar2 = FModulatorHandle::FModulatorHandle
                       (&local_e8,(FModulationParameter *)(local_1a8 + 0x10));
    TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>::
    Emplace<Audio::FModulatorHandle>(this_00,(FModulatorHandle *)local_1a8,(bool *)pFVar2);
    FModulatorHandle::~FModulatorHandle(&local_e8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_118 != 0) {
      plVar3 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar3 = local_f0;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_148 != 0) {
      plVar3 = local_138;
      if (local_120 != (longlong *)0x0) {
        plVar3 = local_120;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_1a8._48_8_ != 0) {
      plVar3 = (longlong *)(local_1a8 + 0x40);
      if ((longlong *)local_1a8._88_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_1a8._88_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetHandles @ 1486ee8c0

void __thiscall
Audio::FModulationDestination::FModulationDestinationData::SetHandles
          (FModulationDestinationData *this,
          TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->HandleCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>::
    operator=(&this->Handles,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001486ee908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

