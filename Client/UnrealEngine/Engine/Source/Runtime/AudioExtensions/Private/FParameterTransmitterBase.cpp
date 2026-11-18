// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 12

// FParameterTransmitterBase @ 14452fd80

FParameterTransmitterBase * __thiscall
Audio::FParameterTransmitterBase::FParameterTransmitterBase
          (FParameterTransmitterBase *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FParameterTransmitterBase_Audio__6B_;
  (this->AudioParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioParameters).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AudioParameters).ArrayNum = param_1->ArrayNum;
  (this->AudioParameters).ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  this->bIsVirtualized = false;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FParameterTransmitterBase @ 144530880

void __thiscall
Audio::FParameterTransmitterBase::~FParameterTransmitterBase(FParameterTransmitterBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FParameterTransmitterBase_Audio__6B_;
  DestructItems<FAudioParameter,int>
            ((FAudioParameter *)(this->AudioParameters).AllocatorInstance.Data,
             (this->AudioParameters).ArrayNum);
  pFVar1 = (this->AudioParameters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddReferencedObjects @ 1445322a0

void __thiscall
Audio::FParameterTransmitterBase::AddReferencedObjects
          (FParameterTransmitterBase *this,FReferenceCollector *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->AudioParameters).ArrayNum;
  pFVar6 = (this->AudioParameters).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = pFVar6 + (longlong)iVar2 * 0xa0;
  for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 0xa0) {
    if (*(longlong *)(pFVar6 + 0x18) != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar6 + 0x18,0,0);
    }
    plVar5 = *(longlong **)(pFVar6 + 0x60);
    iVar2 = *(int *)(pFVar6 + 0x68);
    plVar1 = plVar5 + iVar2;
    while( true ) {
      if (*(int *)(pFVar6 + 0x68) != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (plVar5 == plVar1) break;
      if (*plVar5 != 0) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,plVar5);
      }
      plVar5 = plVar5 + 1;
    }
  }
  return;
}

// AddReferencedObjectsFromParameters @ 1445323a0

void __thiscall
Audio::FParameterTransmitterBase::AddReferencedObjectsFromParameters
          (FParameterTransmitterBase *this,FReferenceCollector *param_1,
          TArrayView<FAudioParameter,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FAudioParameter *pFVar4;
  FAudioParameter *pFVar5;
  undefined1 local_res18 [8];
  
  pFVar4 = param_2->DataPtr;
  pFVar5 = pFVar4 + param_2->ArrayNum;
  for (; pFVar4 != pFVar5; pFVar4 = pFVar4 + 1) {
    if ((pFVar4->ObjectParam).field0_0x0.DebugPtr != (UObject *)0x0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,&pFVar4->ObjectParam,0,0);
    }
    pFVar3 = (pFVar4->ArrayObjectParam).AllocatorInstance.Data;
    iVar2 = (pFVar4->ArrayObjectParam).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar4->ArrayObjectParam).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar3 == pFVar1) break;
      if (*(longlong *)pFVar3 != 0) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3);
      }
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// CopyParameters @ 144532890

void __thiscall
Audio::FParameterTransmitterBase::CopyParameters
          (FParameterTransmitterBase *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FAudioParameter *pFVar3;
  
  if (param_1 != &this->AudioParameters) {
    DestructItems<FAudioParameter,int>
              ((FAudioParameter *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->AudioParameters).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FAudioParameter *)(this->AudioParameters).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FAudioParameter,FAudioParameter,int>
              ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return;
}

// GetParameter @ 144534a70

bool __thiscall
Audio::FParameterTransmitterBase::GetParameter
          (FParameterTransmitterBase *this,FName param_1,FAudioParameter *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAudioParameter *pFVar5;
  FAudioParameter *pFVar6;
  undefined1 local_res10 [8];
  
  bVar3 = IsInAudioThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioParameterTransmitter.cpp"
                       ,0x1f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_1 == (FName)0x0) {
LAB_144534b0a:
    bVar3 = false;
  }
  else {
    iVar1 = (this->AudioParameters).ArrayNum;
    pFVar6 = (FAudioParameter *)(this->AudioParameters).AllocatorInstance.Data;
    pFVar5 = pFVar6 + iVar1;
    while( true ) {
      if ((this->AudioParameters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FAudioParameter_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar6 == pFVar5) goto LAB_144534b0a;
      if (pFVar6->ParamName == param_1) break;
      pFVar6 = pFVar6 + 1;
    }
    FAudioParameter::operator=(param_2,pFVar6);
    bVar3 = true;
  }
  return bVar3;
}

// GetParameters @ 144534b30

TArray<FAudioParameter,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FParameterTransmitterBase::GetParameters(FParameterTransmitterBase *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *pTVar3;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioParameterTransmitter.cpp"
                       ,0x36,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->AudioParameters;
}

// IsVirtualized @ 144535c10

bool __thiscall Audio::FParameterTransmitterBase::IsVirtualized(FParameterTransmitterBase *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioParameterTransmitter.cpp"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return this->bIsVirtualized;
}

// OnRealizeVirtualizedActiveSound @ 144536500

void __thiscall
Audio::FParameterTransmitterBase::OnRealizeVirtualizedActiveSound
          (FParameterTransmitterBase *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioParameterTransmitter.cpp"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsVirtualized = false;
                    /* WARNING: Could not recover jumptable at 0x000144536556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))(this,param_1);
  return;
}

// OnVirtualizeActiveSound @ 1445365b0

void __thiscall
Audio::FParameterTransmitterBase::OnVirtualizeActiveSound(FParameterTransmitterBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioParameterTransmitter.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bIsVirtualized = true;
  return;
}

// ResetParameters @ 144537330

void __thiscall Audio::FParameterTransmitterBase::ResetParameters(FParameterTransmitterBase *this)

{
  int *piVar1;
  int iVar2;
  FAudioParameter *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar5 = IsInAudioThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioParameterTransmitter.cpp"
                       ,0x2d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &(this->AudioParameters).ArrayMax;
  pFVar3 = (FAudioParameter *)(this->AudioParameters).AllocatorInstance.Data;
  iVar2 = (this->AudioParameters).ArrayNum;
  if (-1 < (this->AudioParameters).ArrayMax) {
    DestructItems<FAudioParameter,int>(pFVar3,iVar2);
    (this->AudioParameters).ArrayNum = 0;
    return;
  }
  DestructItems<FAudioParameter,int>(pFVar3,iVar2);
  (this->AudioParameters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,&(this->AudioParameters).AllocatorInstance,0,piVar1);
  }
  return;
}

// SetParameters @ 144537710

bool __thiscall
Audio::FParameterTransmitterBase::SetParameters
          (FParameterTransmitterBase *this,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInAudioThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInAudioThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioExtensions\\Private\\IAudioParameterTransmitter.cpp"
                       ,0x45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  FAudioParameter::Merge(param_1,&this->AudioParameters);
  return true;
}

