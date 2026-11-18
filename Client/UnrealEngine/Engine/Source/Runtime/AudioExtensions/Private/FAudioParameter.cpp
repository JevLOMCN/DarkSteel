// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 6

// StaticStruct @ 14452bed0

UScriptStruct * __cdecl FAudioParameter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioParameter.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioExtensions();
    Z_Registration_Info_UScriptStruct_FAudioParameter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioParameter,(UObject *)pUVar1,
                         L"AudioParameter");
  }
  return Z_Registration_Info_UScriptStruct_FAudioParameter.OuterSingleton;
}

// FAudioParameter @ 14452f230

FAudioParameter * __thiscall
FAudioParameter::FAudioParameter(FAudioParameter *this,FAudioParameter *param_1)

{
  UObject *pUVar1;
  
  this->ParamName = param_1->ParamName;
  this->FloatParam = param_1->FloatParam;
  this->BoolParam = param_1->BoolParam;
  this->IntParam = param_1->IntParam;
  pUVar1 = (param_1->ObjectParam).field0_0x0.DebugPtr;
  (this->ObjectParam).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringParam).Data.AllocatorInstance.Data =
       (param_1->StringParam).Data.AllocatorInstance.Data;
  (param_1->StringParam).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringParam).Data.ArrayNum = (param_1->StringParam).Data.ArrayNum;
  (this->StringParam).Data.ArrayMax = (param_1->StringParam).Data.ArrayMax;
  (param_1->StringParam).Data.ArrayNum = 0;
  (param_1->StringParam).Data.ArrayMax = 0;
  (this->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayFloatParam).AllocatorInstance.Data = (param_1->ArrayFloatParam).AllocatorInstance.Data
  ;
  (param_1->ArrayFloatParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayFloatParam).ArrayNum = (param_1->ArrayFloatParam).ArrayNum;
  (this->ArrayFloatParam).ArrayMax = (param_1->ArrayFloatParam).ArrayMax;
  (param_1->ArrayFloatParam).ArrayNum = 0;
  (param_1->ArrayFloatParam).ArrayMax = 0;
  (this->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayBoolParam).AllocatorInstance.Data = (param_1->ArrayBoolParam).AllocatorInstance.Data;
  (param_1->ArrayBoolParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayBoolParam).ArrayNum = (param_1->ArrayBoolParam).ArrayNum;
  (this->ArrayBoolParam).ArrayMax = (param_1->ArrayBoolParam).ArrayMax;
  (param_1->ArrayBoolParam).ArrayNum = 0;
  (param_1->ArrayBoolParam).ArrayMax = 0;
  (this->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayIntParam).AllocatorInstance.Data = (param_1->ArrayIntParam).AllocatorInstance.Data;
  (param_1->ArrayIntParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayIntParam).ArrayNum = (param_1->ArrayIntParam).ArrayNum;
  (this->ArrayIntParam).ArrayMax = (param_1->ArrayIntParam).ArrayMax;
  (param_1->ArrayIntParam).ArrayNum = 0;
  (param_1->ArrayIntParam).ArrayMax = 0;
  (this->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjectParam).AllocatorInstance.Data =
       (param_1->ArrayObjectParam).AllocatorInstance.Data;
  (param_1->ArrayObjectParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayObjectParam).ArrayNum = (param_1->ArrayObjectParam).ArrayNum;
  (this->ArrayObjectParam).ArrayMax = (param_1->ArrayObjectParam).ArrayMax;
  (param_1->ArrayObjectParam).ArrayNum = 0;
  (param_1->ArrayObjectParam).ArrayMax = 0;
  (this->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringParam).AllocatorInstance.Data =
       (param_1->ArrayStringParam).AllocatorInstance.Data;
  (param_1->ArrayStringParam).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayStringParam).ArrayNum = (param_1->ArrayStringParam).ArrayNum;
  (this->ArrayStringParam).ArrayMax = (param_1->ArrayStringParam).ArrayMax;
  (param_1->ArrayStringParam).ArrayNum = 0;
  (param_1->ArrayStringParam).ArrayMax = 0;
  this->ParamType = param_1->ParamType;
  this->TypeName = param_1->TypeName;
  (this->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).AllocatorInstance.Data = (param_1->ObjectProxies).AllocatorInstance.Data;
  (param_1->ObjectProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectProxies).ArrayNum = (param_1->ObjectProxies).ArrayNum;
  (this->ObjectProxies).ArrayMax = (param_1->ObjectProxies).ArrayMax;
  (param_1->ObjectProxies).ArrayNum = 0;
  (param_1->ObjectProxies).ArrayMax = 0;
  return this;
}

// ~FAudioParameter @ 1445306d0

void __thiscall FAudioParameter::~FAudioParameter(FAudioParameter *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            ((TSharedPtr<Audio::IProxyData,1> *)(this->ObjectProxies).AllocatorInstance.Data,
             (this->ObjectProxies).ArrayNum);
  pFVar1 = (this->ObjectProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->ArrayStringParam).AllocatorInstance.Data,
             (this->ArrayStringParam).ArrayNum);
  pFVar1 = (this->ArrayStringParam).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayObjectParam).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayIntParam).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayBoolParam).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayFloatParam).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StringParam).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 144530f00

FAudioParameter * __thiscall
FAudioParameter::operator=(FAudioParameter *this,FAudioParameter *param_1)

{
  int *piVar1;
  TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UObject *pUVar4;
  TSharedPtr<Audio::IProxyData,1> *pTVar5;
  
  this->ParamName = param_1->ParamName;
  this->FloatParam = param_1->FloatParam;
  this->BoolParam = param_1->BoolParam;
  this->IntParam = param_1->IntParam;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->ObjectParam).field0_0x0.DebugPtr, pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (this->ObjectParam).field0_0x0 = (param_1->ObjectParam).field0_0x0;
  ::FString::operator=(&this->StringParam,&param_1->StringParam);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->ArrayFloatParam,&param_1->ArrayFloatParam);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&this->ArrayBoolParam,&param_1->ArrayBoolParam);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ArrayIntParam,&param_1->ArrayIntParam);
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ArrayObjectParam,&param_1->ArrayObjectParam);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->ArrayStringParam,&param_1->ArrayStringParam);
  this->ParamType = param_1->ParamType;
  pTVar2 = &this->ObjectProxies;
  this->TypeName = param_1->TypeName;
  if (pTVar2 != &param_1->ObjectProxies) {
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(pTVar2->AllocatorInstance).Data,
               (this->ObjectProxies).ArrayNum);
    iVar3 = (param_1->ObjectProxies).ArrayNum;
    piVar1 = &(this->ObjectProxies).ArrayMax;
    pTVar5 = (TSharedPtr<Audio::IProxyData,1> *)(param_1->ObjectProxies).AllocatorInstance.Data;
    (this->ObjectProxies).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int>
                ((pTVar2->AllocatorInstance).Data,pTVar5,iVar3);
    }
  }
  return this;
}

// Merge @ 144535ef0

void __thiscall
FAudioParameter::Merge
          (FAudioParameter *this,FAudioParameter *param_1,bool param_2,bool param_3,bool param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 local_res18 [8];
  
  if (param_2) {
    this->ParamName = param_1->ParamName;
  }
  if (param_3) {
    this->ParamType = param_1->ParamType;
  }
  switch(param_1->ParamType) {
  case None:
    this->FloatParam = param_1->FloatParam;
    this->BoolParam = param_1->BoolParam;
    this->IntParam = param_1->IntParam;
    TObjectPtr<UObject>::operator=(&this->ObjectParam,&param_1->ObjectParam);
    ::FString::operator=(&this->StringParam,&param_1->StringParam);
    Audio::ParameterPrivate::SetOrMergeArray<bool>
              (&param_1->ArrayBoolParam,&this->ArrayBoolParam,param_4);
    Audio::ParameterPrivate::SetOrMergeArray<float>
              (&param_1->ArrayFloatParam,&this->ArrayFloatParam,param_4);
    Audio::ParameterPrivate::SetOrMergeArray<int>
              (&param_1->ArrayIntParam,&this->ArrayIntParam,param_4);
    Audio::ParameterPrivate::SetOrMergeArray<TObjectPtr<UObject>_>
              (&param_1->ArrayObjectParam,&this->ArrayObjectParam,param_4);
    Audio::ParameterPrivate::SetOrMergeArray<FString>
              (&param_1->ArrayStringParam,&this->ArrayStringParam,param_4);
    if (!param_4) {
      TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>::Reset
                (&this->ObjectProxies,0);
    }
    iVar2 = (param_1->ObjectProxies).ArrayNum;
    pFVar6 = (param_1->ObjectProxies).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((param_1->ObjectProxies).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar7) break;
      iVar5 = (this->ObjectProxies).ArrayNum;
      piVar1 = &(this->ObjectProxies).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->ObjectProxies).AllocatorInstance,piVar1);
      }
      (this->ObjectProxies).ArrayNum = iVar5 + 1;
      pFVar3 = (this->ObjectProxies).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar5 * 0x10) = *(undefined8 *)pFVar6;
      lVar4 = *(longlong *)(pFVar6 + 8);
      *(longlong *)(pFVar3 + (longlong)iVar5 * 0x10 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pFVar6 = pFVar6 + 0x10;
    }
    break;
  case Boolean:
    this->BoolParam = param_1->BoolParam;
    break;
  case Integer:
  case NoneArray:
    if (param_4) {
      this->IntParam = this->IntParam + param_1->IntParam;
    }
    else {
      this->IntParam = param_1->IntParam;
    }
    break;
  case Float:
    this->FloatParam = param_1->FloatParam;
    break;
  case String:
    ::FString::operator=(&this->StringParam,&param_1->StringParam);
    break;
  case Object:
    TObjectPtr<UObject>::operator=(&this->ObjectParam,&param_1->ObjectParam);
    this_00 = &this->ObjectProxies;
    TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>::Reset(this_00,0);
    iVar2 = (param_1->ObjectProxies).ArrayNum;
    pFVar6 = (param_1->ObjectProxies).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((param_1->ObjectProxies).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar7) break;
      iVar5 = (this->ObjectProxies).ArrayNum;
      piVar1 = &(this->ObjectProxies).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&this_00->AllocatorInstance,piVar1);
      }
      (this->ObjectProxies).ArrayNum = iVar5 + 1;
      pFVar3 = (this_00->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar5 * 0x10) = *(undefined8 *)pFVar6;
      lVar4 = *(longlong *)(pFVar6 + 8);
      *(longlong *)(pFVar3 + (longlong)iVar5 * 0x10 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pFVar6 = pFVar6 + 0x10;
    }
    break;
  case BooleanArray:
    Audio::ParameterPrivate::SetOrMergeArray<bool>
              (&param_1->ArrayBoolParam,&this->ArrayBoolParam,param_4);
    break;
  case IntegerArray:
    Audio::ParameterPrivate::SetOrMergeArray<int>
              (&param_1->ArrayIntParam,&this->ArrayIntParam,param_4);
    break;
  case FloatArray:
    Audio::ParameterPrivate::SetOrMergeArray<float>
              (&param_1->ArrayFloatParam,&this->ArrayFloatParam,param_4);
    break;
  case StringArray:
    Audio::ParameterPrivate::SetOrMergeArray<FString>
              (&param_1->ArrayStringParam,&this->ArrayStringParam,param_4);
    break;
  case ObjectArray:
    Audio::ParameterPrivate::SetOrMergeArray<TObjectPtr<UObject>_>
              (&param_1->ArrayObjectParam,&this->ArrayObjectParam,param_4);
    if (!param_4) {
      TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>::Reset
                (&this->ObjectProxies,0);
    }
    iVar2 = (param_1->ObjectProxies).ArrayNum;
    pFVar6 = (param_1->ObjectProxies).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((param_1->ObjectProxies).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<Audio::IProxyData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar7) break;
      iVar5 = (this->ObjectProxies).ArrayNum;
      piVar1 = &(this->ObjectProxies).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->ObjectProxies).AllocatorInstance,piVar1);
      }
      (this->ObjectProxies).ArrayNum = iVar5 + 1;
      pFVar3 = (this->ObjectProxies).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar5 * 0x10) = *(undefined8 *)pFVar6;
      lVar4 = *(longlong *)(pFVar6 + 8);
      *(longlong *)(pFVar3 + (longlong)iVar5 * 0x10 + 8) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return;
}

// Merge @ 1445362c0

void __cdecl
FAudioParameter::Merge
          (TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  FAudioParameter *this;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FAudioParameter *pFVar11;
  int iVar12;
  FAudioParameter *pFVar13;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  
  if (param_1->ArrayNum != 0) {
    if (param_2->ArrayNum == 0) {
      if (param_2 != param_1) {
        DestructItems<FAudioParameter,int>((FAudioParameter *)(param_2->AllocatorInstance).Data,0);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_2->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
        (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        param_2->ArrayNum = param_1->ArrayNum;
        param_2->ArrayMax = param_1->ArrayMax;
        param_1->ArrayNum = 0;
        param_1->ArrayMax = 0;
        return;
      }
    }
    else {
      AlgoImpl::
      IntroSortInternal<FAudioParameter,int,FIdentityFunctor,TDereferenceWrapper<FAudioParameter,_FAudioParameter::Merge_::__l2::<lambda_1>_>_>
                ((FAudioParameter *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
                 local_res8[0],(<lambda_1> *)local_res18);
      iVar1 = param_1->ArrayNum;
      pFVar11 = (FAudioParameter *)(param_1->AllocatorInstance).Data;
      pFVar13 = pFVar11 + iVar1;
      while( true ) {
        if (param_1->ArrayNum != iVar1) {
          local_res8[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<FAudioParameter,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar11 == pFVar13) break;
        uVar2 = param_2->ArrayNum;
        uVar10 = 0;
        pFVar3 = (param_2->AllocatorInstance).Data;
        if ((int)uVar2 < 1) {
LAB_1445363e8:
          if ((int)uVar2 <= (int)uVar10) goto LAB_14453645a;
          if (((int)uVar10 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this = (FAudioParameter *)((param_2->AllocatorInstance).Data + uVar10 * 0xa0);
          if (this->ParamName != pFVar11->ParamName) goto LAB_14453645a;
          Merge(this,pFVar11,true,true,false);
          pFVar11 = pFVar11 + 1;
        }
        else {
          uVar8 = uVar2;
          do {
            uVar9 = uVar8 >> 1;
            iVar12 = uVar9 + (int)uVar10;
            lVar6 = (longlong)iVar12 * 0xa0;
            iVar7 = *(int *)(pFVar3 + lVar6) - (pFVar11->ParamName).ComparisonIndex.Value;
            if (iVar7 == 0) {
              iVar7 = *(int *)(pFVar3 + lVar6 + 4) - (pFVar11->ParamName).Number;
            }
            if (iVar7 < 0) {
              uVar10 = (ulonglong)(iVar12 + (uVar8 & 1));
            }
            uVar8 = uVar9;
          } while (uVar9 != 0);
          if (-1 < (int)uVar10) goto LAB_1445363e8;
LAB_14453645a:
          iVar7 = param_2->ArrayNum;
          if (iVar7 == param_2->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar7 + 1;
          FAudioParameter((FAudioParameter *)
                          ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0xa0),pFVar11);
          pFVar11 = pFVar11 + 1;
        }
      }
    }
  }
  return;
}

