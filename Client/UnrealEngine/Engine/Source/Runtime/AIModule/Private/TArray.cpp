// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 42

// AddUniqueImpl<TObjectPtr<UBehaviorTreeComponent>_> @ 146e7bac0

int __thiscall
TArray<TObjectPtr<UBehaviorTreeComponent>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UBehaviorTreeComponent>_>
          (TArray<TObjectPtr<UBehaviorTreeComponent>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UBehaviorTreeComponent> *param_1)

{
  FScriptContainerElement *pFVar1;
  UBehaviorTreeComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UBehaviorTreeComponent **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UBehaviorTreeComponent **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UBehaviorTreeComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// RemoveAtImpl @ 146e9b620

void __thiscall
TArray<FBehaviorTreeInstance,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FBehaviorTreeInstance,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FBehaviorTreeInstance *_Dst;
  
  _Dst = (FBehaviorTreeInstance *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x68);
  DestructItems<FBehaviorTreeInstance,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x68);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 146e9f190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FFocusKnowledge::FFocusItem,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FFocusKnowledge::FFocusItem,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FFocusKnowledge::FFocusItem,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x20,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x20,(longlong)iVar5 << 5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FBlackboard::FKey_const_&> @ 146eb0d40

int __thiscall
TArray<FBlackboard::FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FBlackboard::FKey_const_&>
          (TArray<FBlackboard::FKey,TSizedDefaultAllocator<32>_> *this,FKey *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 2) {
    pFVar5 = pFVar1;
    do {
      if (*(ushort *)&pFVar5->field_0x0 == param_1->Key) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 1);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 2;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 2);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(ushort *)(pFVar1 + (longlong)iVar4 * 2) = param_1->Key;
  return iVar4;
}

// RemoveAt @ 146efd1f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FBehaviorTreeSearchUpdate,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x18,(longlong)iVar4 * 0x18);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// AddUniqueImpl<TObjectPtr<UAIAsyncTaskBlueprintProxy>_> @ 146f16300

int __thiscall
TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UAIAsyncTaskBlueprintProxy>_>
          (TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UAIAsyncTaskBlueprintProxy> *param_1)

{
  FScriptContainerElement *pFVar1;
  UAIAsyncTaskBlueprintProxy *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UAIAsyncTaskBlueprintProxy **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UAIAsyncTaskBlueprintProxy **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UAIAsyncTaskBlueprintProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>_> @ 146f16410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>_>
          (TArray<TObjectPtr<UEnvQueryInstanceBlueprintWrapper>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UEnvQueryInstanceBlueprintWrapper> *param_1)

{
  FScriptContainerElement *pFVar1;
  UEnvQueryInstanceBlueprintWrapper *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UEnvQueryInstanceBlueprintWrapper **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UEnvQueryInstanceBlueprintWrapper **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UEnvQueryInstanceBlueprintWrapper *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// Append<TObjectPtr<UEnvQueryGenerator>,TSizedDefaultAllocator<32>_> @ 146f16520

void __thiscall
TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_>::
Append<TObjectPtr<UEnvQueryGenerator>,TSizedDefaultAllocator<32>_>
          (TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UEnvQueryGenerator>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this == (TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_> *)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
    ConstructItems<UEnvQueryGenerator_*,TObjectPtr<UEnvQueryGenerator>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 8,
               (TObjectPtr<UEnvQueryGenerator> *)(param_1->AllocatorInstance).Data,iVar1);
  }
  return;
}

// operator= @ 146f2f350

TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *this,
          TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 146f2f3f0

TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_> *this,
          TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FEnvQueryItemDetails *pFVar3;
  
  if (this != param_1) {
    DestructItems<FEnvQueryItemDetails,int>
              ((FEnvQueryItemDetails *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FEnvQueryItemDetails *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FEnvQueryItemDetails,FEnvQueryItemDetails,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146f2f490

TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> *this,
          TArray<FDebugRenderSceneProxy::FMesh,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FMesh *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDebugRenderSceneProxy::FMesh,int>
              ((FMesh *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FMesh *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDebugRenderSceneProxy::FMesh,FDebugRenderSceneProxy::FMesh,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146f2f530

TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_> *this,
          TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FOptionData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
              ((FOptionData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FOptionData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FEnvQueryDebugProfileData::FOptionData,FEnvQueryDebugProfileData::FOptionData,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146f2f5d0

TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *this,
          TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x28);
    }
  }
  return this;
}

// operator= @ 146f2f670

TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *this,
          TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FText3d *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>
              ((FText3d *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FText3d *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDebugRenderSceneProxy::FText3d,FDebugRenderSceneProxy::FText3d,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// AddDefaulted @ 146f34520

int __thiscall
TArray<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  DefaultConstructItems<FEnvQueryDebugProfileData::FOptionStat,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x18,param_1);
  return iVar1;
}

// Empty @ 146f45850

void __thiscall
TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_>::Empty
          (TArray<EQSDebug::FDebugHelper,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<EQSDebug::FDebugHelper,int>
              ((FDebugHelper *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f458c0

void __thiscall
TArray<EQSDebug::FItemData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<EQSDebug::FItemData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<EQSDebug::FItemData,int>
              ((FItemData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f45930

void __thiscall
TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FEnvQueryDebugProfileData::FOptionData,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
              ((FOptionData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f459a0

void __thiscall
TArray<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FEnvQueryDebugProfileData::FOptionStat,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
              ((FOptionStat *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f45a10

void __thiscall
TArray<EQSDebug::FQueryData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<EQSDebug::FQueryData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<EQSDebug::FQueryData,int>
              ((FQueryData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f45a80

void __thiscall
TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f45ad0

void __thiscall
TArray<FEnvQueryDebugProfileData::FStep,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FEnvQueryDebugProfileData::FStep,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f45b20

void __thiscall
TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_>::Empty
          (TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<EQSDebug::FTestData,int>
              ((FTestData *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 146f45b90

void __thiscall
TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FDebugRenderSceneProxy::FText3d,int>
              ((FText3d *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 146f66190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 146f66270

void __thiscall
TArray<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FPoly *_Dst;
  int iVar1;
  
  _Dst = (FPoly *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FGameplayDebuggerCategory_AI::FRepDataPath::FPoly,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146f662f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TSharedPtr<FEnvQueryInstance,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  TSharedPtr<FEnvQueryInstance,1> *_Dst;
  
  _Dst = (TSharedPtr<FEnvQueryInstance,1> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FEnvQueryInstance,1>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSingleSwap @ 146f66730

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TSubclassOf<UEnvQueryItemType>,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<TSubclassOf<UEnvQueryItemType>,TSizedDefaultAllocator<32>_> *this,
          TSubclassOf<UEnvQueryItemType> *param_1,EAllowShrinking param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar6 = this->ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar6 * 8) {
    pUVar13 = (UClass *)0x0;
    pFVar11 = pFVar2;
    do {
      lVar3 = *(longlong *)pFVar11;
      pUVar14 = pUVar13;
      if ((lVar3 != 0) && (pUVar7 = UEnvQueryItemType::StaticClass(), pUVar7 != (UClass *)0x0)) {
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar14 = *(UClass **)pFVar11;
        }
      }
      pUVar7 = (param_1->Class).field0_0x0.DebugPtr;
      pUVar9 = pUVar13;
      if ((pUVar7 != (UClass *)0x0) &&
         (pUVar8 = UEnvQueryItemType::StaticClass(), pUVar8 != (UClass *)0x0)) {
        iVar1 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar9 = (param_1->Class).field0_0x0.DebugPtr;
        }
      }
      if (pUVar14 == pUVar9) {
        uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 3);
        if (uVar10 == 0xffffffff) {
          return 0;
        }
        uVar12 = 0;
        if ((int)(uVar10 + 1) <= this->ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar2 = (this->AllocatorInstance).Data;
        iVar6 = this->ArrayNum + ~uVar10;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar10 * 8,pFVar2 + (longlong)(this->ArrayNum - iVar6) * 8
                  ,(longlong)iVar6 << 3);
        }
        iVar6 = this->ArrayNum + -1;
        this->ArrayNum = iVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
        }
        return 1;
      }
      pFVar11 = pFVar11 + 8;
    } while (pFVar11 != pFVar2 + (longlong)iVar6 * 8);
  }
  return 0;
}

// RemoveSwap @ 146f66900

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TObjectPtr<UAIAsyncTaskBlueprintProxy>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UAIAsyncTaskBlueprintProxy> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(UAIAsyncTaskBlueprintProxy **)((this->AllocatorInstance).Data + lVar7) ==
          (param_1->field0_0x0).DebugPtr) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// Reset @ 146f66f70

void __thiscall
TArray<EQSDebug::FItemData,TSizedDefaultAllocator<32>_>::Reset
          (TArray<EQSDebug::FItemData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FItemData *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FItemData *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<EQSDebug::FItemData,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<EQSDebug::FItemData,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// Reset @ 146f67000

void __thiscall
TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_>::Reset
          (TArray<EQSDebug::FTestData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FTestData *pFVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pFVar2 = (FTestData *)(this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<EQSDebug::FTestData,int>(pFVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<EQSDebug::FTestData,int>(pFVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

// SetNum @ 146f74d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<TSubclassOf<UAISense>_const_&> @ 146f875f0

int __thiscall
TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSubclassOf<UAISense>_const_&>
          (TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_> *this,
          TSubclassOf<UAISense> *param_1)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this->AllocatorInstance,&this->ArrayMax);
    }
    pFVar1 = (this->AllocatorInstance).Data;
    this->ArrayNum = iVar5 + 1;
    pUVar2 = (param_1->Class).field0_0x0.DebugPtr;
    *(UClass **)&pFVar1[(longlong)iVar5 * 8].field_0x0 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  return iVar5;
}

// AddUniqueImpl<TObjectPtr<UAIPerceptionComponent>_> @ 146f876d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
TArray<TObjectPtr<UAIPerceptionComponent>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TObjectPtr<UAIPerceptionComponent>_>
          (TArray<TObjectPtr<UAIPerceptionComponent>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UAIPerceptionComponent> *param_1)

{
  FScriptContainerElement *pFVar1;
  UAIPerceptionComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar6 = pFVar1;
    do {
      if (*(UAIPerceptionComponent **)pFVar6 == (param_1->field0_0x0).DebugPtr) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 8;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pUVar2 = (param_1->field0_0x0).DebugPtr;
  *(UAIPerceptionComponent **)(pFVar1 + (longlong)iVar5 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UAIPerceptionComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return iVar5;
}

// AddUniqueImpl<UAIPerceptionSystem::FPerceptionSourceRegistration> @ 146f877e0

int __thiscall
TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UAIPerceptionSystem::FPerceptionSourceRegistration>
          (TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>
           *this,FPerceptionSourceRegistration *param_1)

{
  FScriptContainerElement *pFVar1;
  FPerceptionSourceRegistration *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar2 = (FPerceptionSourceRegistration *)(this->AllocatorInstance).Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x14;
    *pFVar1 = (FScriptContainerElement)(param_1->SenseID).Index;
    *(FName *)(pFVar1 + 4) = (param_1->SenseID).Name;
    *(FWeakObjectPtr *)(pFVar1 + 0xc) = (param_1->Source).WeakPtr;
  }
  return iVar5;
}

// operator= @ 146f97150

TArray<FAIStimulus,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAIStimulus,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAIStimulus,TSizedDefaultAllocator<32>_> *this,
          TArray<FAIStimulus,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FAIStimulus *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FAIStimulus *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FAIStimulus,FAIStimulus,int>((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// Find @ 146fa88f0

int __thiscall
TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>::Find
          (TArray<UAIPerceptionSystem::FPerceptionSourceRegistration,TSizedDefaultAllocator<32>_>
           *this,FPerceptionSourceRegistration *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar4 = pFVar2;
  while( true ) {
    if (pFVar4 == pFVar2 + (longlong)iVar1 * 0x14) {
      return -1;
    }
    if ((*pFVar4 == (FScriptContainerElement)(param_1->SenseID).Index) &&
       (bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)(pFVar4 + 0xc),&param_1->Source)
       , bVar3)) break;
    pFVar4 = pFVar4 + 0x14;
  }
  return (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x14);
}

// Find @ 146fa8990

int __thiscall
TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TSubclassOf<UAISense>,TSizedDefaultAllocator<32>_> *this,
          TSubclassOf<UAISense> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  UClass *pUVar8;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar7 = pFVar3;
  do {
    if (pFVar7 == pFVar3 + (longlong)iVar1 * 8) {
      return -1;
    }
    pUVar8 = *(UClass **)pFVar7;
    if ((pUVar8 == (UClass *)0x0) || (pUVar5 = UAISense::StaticClass(), pUVar5 == (UClass *)0x0)) {
LAB_146fa89f8:
      pUVar8 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar5->_padding_;
      if (((int)pUVar8->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_146fa89f8;
    }
    pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
    if ((pUVar5 == (UClass *)0x0) || (pUVar6 = UAISense::StaticClass(), pUVar6 == (UClass *)0x0)) {
LAB_146fa8a35:
      pUVar5 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_146fa8a35;
      pUVar5 = (param_1->Class).field0_0x0.DebugPtr;
    }
    if (pUVar8 == pUVar5) {
      return (int)((longlong)pFVar7 - (longlong)pFVar3 >> 3);
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// RemoveAt @ 146fcb8b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNavLocalGridData,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FNavLocalGridData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xb0;
  if (*(void **)(_Dst + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x88));
  }
  if (*(void **)(_Dst + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x78));
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0xb0,(longlong)iVar4 * 0xb0);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 146fcb9b0

void __thiscall
TArray<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  FGridData *_Dst;
  
  _Dst = (FGridData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  DestructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x58);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 146fd1e90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,TSizedDefaultAllocator<32>_>::
SetNum(TArray<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,TSizedDefaultAllocator<32>_>
       *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FGameplayDebuggerCategory_NavLocalGrid::FRepData::FGridData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x58,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 146fd1fc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FNavPathPoint,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FNavPathPoint,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FNavPathPoint,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x30,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x30,(longlong)iVar5 * 0x30);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

