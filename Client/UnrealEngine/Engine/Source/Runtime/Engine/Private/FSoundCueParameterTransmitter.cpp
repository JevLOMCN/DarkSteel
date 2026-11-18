// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FSoundCueParameterTransmitter @ 148695560

FSoundCueParameterTransmitter * __thiscall
FSoundCueParameterTransmitter::FSoundCueParameterTransmitter
          (FSoundCueParameterTransmitter *this,FParameterTransmitterInitParams *param_1)

{
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (param_1->DefaultParams).AllocatorInstance.Data;
  (param_1->DefaultParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->DefaultParams).ArrayNum;
  local_18.ArrayMax = (param_1->DefaultParams).ArrayMax;
  (param_1->DefaultParams).ArrayNum = 0;
  (param_1->DefaultParams).ArrayMax = 0;
  Audio::FParameterTransmitterBase::FParameterTransmitterBase
            ((FParameterTransmitterBase *)this,&local_18);
  this->_padding_ = (longlong)&___7FSoundCueParameterTransmitter__6B_;
  (this->ParamsToSet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParamsToSet).ArrayNum = 0;
  (this->ParamsToSet).ArrayMax = 0;
  *(undefined8 *)&this->Transmitters = 0;
  *(undefined8 *)&(this->Transmitters).field_0x8 = 0;
  *(undefined8 *)&(this->Transmitters).field_0x20 = 0;
  *(undefined4 *)&(this->Transmitters).field_0x28 = 0;
  *(undefined4 *)&(this->Transmitters).field_0x2c = 0x80;
  *(undefined4 *)&(this->Transmitters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Transmitters).field_0x34 = 0;
  *(undefined8 *)&(this->Transmitters).field_0x40 = 0;
  *(undefined4 *)&(this->Transmitters).field_0x48 = 0;
  return this;
}

// ~FSoundCueParameterTransmitter @ 14869ada0

void __thiscall
FSoundCueParameterTransmitter::~FSoundCueParameterTransmitter(FSoundCueParameterTransmitter *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FSoundCueParameterTransmitter__6B_;
  *(undefined4 *)&(this->Transmitters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Transmitters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Transmitters);
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->ParamsToSet).AllocatorInstance.Data,
             (this->ParamsToSet).ArrayNum);
  pFVar2 = (this->ParamsToSet).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  Audio::FParameterTransmitterBase::~FParameterTransmitterBase((FParameterTransmitterBase *)this);
  return;
}

// operator() @ 14869e480

void __thiscall
`FSoundCueParameterTransmitter::SetParameters'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(longlong *)this + 8);
  uVar5 = iVar7 - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0xa0;
    do {
      plVar1 = *(longlong **)this;
      uVar4 = 0;
      if ((int)uVar5 < (int)plVar1[1]) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(char *)(*plVar1 + 0x80 + lVar6) == '\f') {
        this_00 = *(TArray<FAudioParameter,TSizedDefaultAllocator<32>_> **)this;
        uVar4 = 0;
        if (iVar7 <= this_00->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FAudioParameter,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar5,1);
      }
      iVar7 = iVar7 + -1;
      lVar6 = lVar6 + -0xa0;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// AddReferencedObjects @ 1486a5df0

void __thiscall
FSoundCueParameterTransmitter::AddReferencedObjects
          (FSoundCueParameterTransmitter *this,FReferenceCollector *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FAudioParameter,int> local_18;
  
  pFVar2 = (FAudioParameter *)(this->ParamsToSet).AllocatorInstance.Data;
  iVar1 = (this->ParamsToSet).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  Audio::FParameterTransmitterBase::AddReferencedObjectsFromParameters
            ((FParameterTransmitterBase *)this,param_1,&local_18);
  Audio::FParameterTransmitterBase::AddReferencedObjects((FParameterTransmitterBase *)this,param_1);
  return;
}

// CreateChildTransmitter @ 1486ac9c0

void __thiscall
FSoundCueParameterTransmitter::CreateChildTransmitter
          (FSoundCueParameterTransmitter *this,ulong64 param_1,USoundBase *param_2,
          FParameterTransmitterInitParams *param_3)

{
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TPairInitializer<unsigned___int64_const_&,TSharedPtr<Audio::IParameterTransmitter,1>_&&>
  local_res8;
  undefined8 local_res18;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_68;
  longlong local_58;
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<Audio::IParameterTransmitter,1> **local_38;
  undefined1 *local_30;
  
  local_res8.Value = (TSharedPtr<Audio::IParameterTransmitter,1> *)param_1;
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundCue.cpp"
                         ,0x3ef,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  (**(code **)(this->_padding_ + 0x38))(this,&local_68);
  pTVar1 = &param_3->DefaultParams;
  FAudioParameter::Merge(&local_68,pTVar1);
  local_res18 = 0;
  (**(code **)(param_2->_padding_ + 0x358))(param_2,pTVar1,0);
  (**(code **)(param_2->_padding_ + 0x380))(param_2,&local_58,param_3);
  if (local_58 != 0) {
    if ((local_58 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar4 = local_50;
    if (local_50 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_58 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_40 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38 = &local_res8.Value;
    local_30 = local_48;
    TSet<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<unsigned___int64_const_&,TSharedPtr<Audio::IParameterTransmitter,1>_&&>_>
              ((TSet<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>,0>,FDefaultSetAllocator>
                *)&this->Transmitters,&local_res8,(bool *)&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FAudioParameter *)local_68.AllocatorInstance.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(pTVar1->AllocatorInstance).Data,(param_3->DefaultParams).ArrayNum);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetReferencedObjects @ 1486c6190

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TObjectPtr<UObject>_const_*,TSizedDefaultAllocator<32>_> * __thiscall
FSoundCueParameterTransmitter::GetReferencedObjects
          (FSoundCueParameterTransmitter *this,
          TArray<TObjectPtr<UObject>_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  if (!bHasLoggedError) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    bHasLoggedError = true;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ReleaseAccumulatedParameterUpdates @ 1486e5f50

TArray<FAudioParameter,TSizedDefaultAllocator<32>_> * __thiscall
FSoundCueParameterTransmitter::ReleaseAccumulatedParameterUpdates
          (FSoundCueParameterTransmitter *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->ParamsToSet).AllocatorInstance.Data;
  (this->ParamsToSet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->ParamsToSet).ArrayNum;
  iVar2 = (this->ParamsToSet).ArrayMax;
  (this->ParamsToSet).ArrayNum = 0;
  (this->ParamsToSet).ArrayMax = 0;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->ParamsToSet).AllocatorInstance.Data,0);
  (this->ParamsToSet).ArrayNum = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = pFVar3;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->ArrayMax = iVar2;
  DestructItems<FAudioParameter,int>((FAudioParameter *)0x0,0);
  return __return_storage_ptr__;
}

// RemoveChildTransmitter @ 1486e84e0

void __thiscall
FSoundCueParameterTransmitter::RemoveChildTransmitter
          (FSoundCueParameterTransmitter *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 local_res8;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundCue.cpp"
                       ,0x404,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&(this->Transmitters).field_0x8 != *(int *)&(this->Transmitters).field_0x34) {
    local_res8 = param_1;
    TSet<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<Audio::IParameterTransmitter,1>,0>,FDefaultSetAllocator>
                *)&this->Transmitters,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,&local_res8);
  }
  return;
}

// SetParameters @ 1486eee60

bool __thiscall
FSoundCueParameterTransmitter::SetParameters
          (FSoundCueParameterTransmitter *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAudioParameter *pFVar2;
  bool bVar3;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = param_1;
  bVar3 = Audio::FParameterTransmitterBase::IsVirtualized((FParameterTransmitterBase *)this);
  if (bVar3) {
    `FSoundCueParameterTransmitter::SetParameters'::__l2::<lambda_1>::operator()(&local_res10);
    iVar1 = param_1->ArrayNum;
    pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_18.ArrayMax = 0;
      FAudioParameter::Merge(&local_18,&this->ParamsToSet);
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar1,0,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax);
      ConstructItems<FAudioParameter,FAudioParameter,int>
                (local_18.AllocatorInstance.Data,pFVar2,iVar1);
      FAudioParameter::Merge(&local_18,&this->ParamsToSet);
    }
  }
  else {
    iVar1 = param_1->ArrayNum;
    pFVar2 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar1,0,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax);
      ConstructItems<FAudioParameter,FAudioParameter,int>
                (local_18.AllocatorInstance.Data,pFVar2,iVar1);
    }
    FAudioParameter::Merge(&local_18,&this->ParamsToSet);
    `FSoundCueParameterTransmitter::SetParameters'::__l2::<lambda_1>::operator()(&local_res10);
  }
  bVar3 = Audio::FParameterTransmitterBase::SetParameters((FParameterTransmitterBase *)this,param_1)
  ;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FAudioParameter *)local_18.AllocatorInstance.Data != (FAudioParameter *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar3;
}

