// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 25

// StaticStruct @ 14a3830b0

UScriptStruct * __cdecl FMovieSceneControlRigSpaceChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel,
                         (UObject *)pUVar1,L"MovieSceneControlRigSpaceChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceChannel.OuterSingleton;
}

// FMovieSceneControlRigSpaceChannel @ 14a3b7580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMovieSceneControlRigSpaceChannel * __thiscall
FMovieSceneControlRigSpaceChannel::FMovieSceneControlRigSpaceChannel
          (FMovieSceneControlRigSpaceChannel *this,FMovieSceneControlRigSpaceChannel *param_1)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar3;
  TMulticastDelegate<void___cdecl(FMovieSceneControlRigSpaceChannel_*,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  undefined3 uVar7;
  ERigElementType EVar8;
  undefined3 uVar9;
  
  FMovieSceneChannel::FMovieSceneChannel((FMovieSceneChannel *)this,(FMovieSceneChannel *)param_1);
  pTVar1 = &this->KeyTimes;
  this->_padding_ = (longlong)&___7FMovieSceneControlRigSpaceChannel__6B_;
  piVar2 = &(this->KeyTimes).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->KeyTimes).ArrayNum;
  pFVar5 = (param_1->KeyTimes).AllocatorInstance.Data;
  (this->KeyTimes).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar3 = &this->KeyValues;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->KeyValues).ArrayMax;
  iVar4 = (param_1->KeyValues).ArrayNum;
  pFVar5 = (param_1->KeyValues).AllocatorInstance.Data;
  (this->KeyValues).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 4);
  }
  *(undefined8 *)&this->KeyHandles = 0;
  this_00 = &this->SpaceNoLongerUsedEvent;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x28 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x34 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x38 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x40 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x58 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x60 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x64 = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x6c = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x78 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->SpaceNoLongerUsedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->SpaceNoLongerUsedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->SpaceNoLongerUsedEvent).field_0x18 = 2;
  if (&param_1->SpaceNoLongerUsedEvent != this_00) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneControlRigSpaceChannel_*,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->SpaceNoLongerUsedEvent);
  }
  uVar7 = *(undefined3 *)&(param_1->DefaultValue).field_0x1;
  EVar8 = (param_1->DefaultValue).ControlRigElement.Type;
  uVar9 = *(undefined3 *)&(param_1->DefaultValue).ControlRigElement.field_0x1;
  FVar6 = (param_1->DefaultValue).ControlRigElement.Name;
  (this->DefaultValue).SpaceType = (param_1->DefaultValue).SpaceType;
  *(undefined3 *)&(this->DefaultValue).field_0x1 = uVar7;
  (this->DefaultValue).ControlRigElement.Type = EVar8;
  *(undefined3 *)&(this->DefaultValue).ControlRigElement.field_0x1 = uVar9;
  (this->DefaultValue).ControlRigElement.Name = FVar6;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
  return this;
}

// FMovieSceneControlRigSpaceChannel @ 14a3b7740

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMovieSceneControlRigSpaceChannel * __thiscall
FMovieSceneControlRigSpaceChannel::FMovieSceneControlRigSpaceChannel
          (FMovieSceneControlRigSpaceChannel *this)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneControlRigSpaceChannel__6B_;
  (this->KeyTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyTimes).ArrayNum = 0;
  (this->KeyTimes).ArrayMax = 0;
  (this->KeyValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyValues).ArrayNum = 0;
  (this->KeyValues).ArrayMax = 0;
  *(undefined8 *)&this->KeyHandles = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x8 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x20 = 0;
  this->_padding_ = 2;
  this->_padding_ = 2;
  *(undefined4 *)&(this->KeyHandles).field_0x28 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x34 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x38 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x40 = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x58 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x60 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x64 = 0x80;
  *(undefined4 *)&(this->KeyHandles).field_0x68 = 0xffffffff;
  *(undefined4 *)&(this->KeyHandles).field_0x6c = 0;
  *(undefined8 *)&(this->KeyHandles).field_0x78 = 0;
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  *(undefined8 *)&this->SpaceNoLongerUsedEvent = 0;
  *(undefined8 *)&(this->SpaceNoLongerUsedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->SpaceNoLongerUsedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->SpaceNoLongerUsedEvent).field_0x18 = 2;
  (this->DefaultValue).SpaceType = Parent;
  (this->DefaultValue).ControlRigElement.Type = None;
  (this->DefaultValue).ControlRigElement.Name.ComparisonIndex = 0;
  (this->DefaultValue).ControlRigElement.Name.Number = 0;
  this->bHasDefaultValue = false;
  return this;
}

// ~FMovieSceneControlRigSpaceChannel @ 14a3bcbd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::~FMovieSceneControlRigSpaceChannel
          (FMovieSceneControlRigSpaceChannel *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SpaceNoLongerUsedEvent).field_0x8,
             *(int *)&(this->SpaceNoLongerUsedEvent).field_0x10);
  pvVar1 = *(void **)&(this->SpaceNoLongerUsedEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SpaceNoLongerUsedEvent);
  *(undefined4 *)&(this->KeyHandles).field_0x80 = 0;
  pvVar1 = *(void **)&(this->KeyHandles).field_0x78;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->KeyHandles).field_0x38);
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)&this->KeyHandles);
  pFVar2 = (this->KeyValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->KeyTimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMovieSceneChannel::~FMovieSceneChannel((FMovieSceneChannel *)this);
  return;
}

// operator= @ 14a3bd8d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FMovieSceneControlRigSpaceChannel * __thiscall
FMovieSceneControlRigSpaceChannel::operator=
          (FMovieSceneControlRigSpaceChannel *this,FMovieSceneControlRigSpaceChannel *param_1)

{
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FName FVar5;
  undefined3 uVar6;
  ERigElementType EVar7;
  undefined3 uVar8;
  
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=(&this->KeyTimes,&param_1->KeyTimes);
  pTVar1 = &this->KeyValues;
  if (pTVar1 != &param_1->KeyValues) {
    iVar3 = (this->KeyValues).ArrayMax;
    piVar2 = &(this->KeyValues).ArrayMax;
    iVar4 = (param_1->KeyValues).ArrayNum;
    _Src = (param_1->KeyValues).AllocatorInstance.Data;
    (this->KeyValues).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 4);
      }
    }
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  if (&param_1->SpaceNoLongerUsedEvent != &this->SpaceNoLongerUsedEvent) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneControlRigSpaceChannel_*,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->SpaceNoLongerUsedEvent,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &param_1->SpaceNoLongerUsedEvent);
  }
  uVar6 = *(undefined3 *)&(param_1->DefaultValue).field_0x1;
  EVar7 = (param_1->DefaultValue).ControlRigElement.Type;
  uVar8 = *(undefined3 *)&(param_1->DefaultValue).ControlRigElement.field_0x1;
  FVar5 = (param_1->DefaultValue).ControlRigElement.Name;
  (this->DefaultValue).SpaceType = (param_1->DefaultValue).SpaceType;
  *(undefined3 *)&(this->DefaultValue).field_0x1 = uVar6;
  (this->DefaultValue).ControlRigElement.Type = EVar7;
  *(undefined3 *)&(this->DefaultValue).ControlRigElement.field_0x1 = uVar8;
  (this->DefaultValue).ControlRigElement.Name = FVar5;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
  return this;
}

// BroadcastSpaceNoLongerUsed @ 14a3eccd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::BroadcastSpaceNoLongerUsed
          (FMovieSceneControlRigSpaceChannel *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined1 local_res10 [8];
  ForAnyElementType local_48;
  undefined8 local_40;
  FDestructionSentinel local_38;
  
  if ((param_1->ArrayNum == param_2->ArrayNum) &&
     (bVar8 = CompareItems<FRigElementKey,int>
                        ((FRigElementKey *)(param_1->AllocatorInstance).Data,
                         (FRigElementKey *)(param_2->AllocatorInstance).Data,param_1->ArrayNum),
     bVar8)) {
    return;
  }
  bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->SpaceNoLongerUsedEvent);
  if (bVar8) {
    iVar14 = 0;
    pFVar16 = (param_1->AllocatorInstance).Data;
    iVar4 = param_1->ArrayNum;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    pFVar2 = pFVar16 + (longlong)iVar4 * 0xc;
    while( true ) {
      if (param_1->ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        iVar14 = (int)local_40;
      }
      if (pFVar16 == pFVar2) break;
      pFVar13 = (param_2->AllocatorInstance).Data;
      pFVar3 = pFVar13 + (longlong)param_2->ArrayNum * 0xc;
      if (pFVar13 != pFVar3) {
        do {
          if ((*(longlong *)(pFVar13 + 4) == *(longlong *)(pFVar16 + 4)) && (*pFVar13 == *pFVar16))
          goto LAB_14a3ece60;
          pFVar13 = pFVar13 + 0xc;
        } while (pFVar13 != pFVar3);
      }
      iVar11 = iVar14;
      if ((local_48.Data <= pFVar16) && (pFVar16 < local_48.Data + (longlong)local_40._4_4_ * 0xc))
      {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (int)local_40;
      }
      if (iVar11 == local_40._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_48,(int *)((longlong)&local_40 + 4));
      }
      iVar14 = iVar11 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar14);
      *(undefined8 *)(local_48.Data + (longlong)iVar11 * 0xc) = *(undefined8 *)pFVar16;
      *(undefined4 *)(local_48.Data + (longlong)iVar11 * 0xc + 8) = *(undefined4 *)(pFVar16 + 8);
LAB_14a3ece60:
      pFVar16 = pFVar16 + 0xc;
    }
    if (iVar14 != 0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->SpaceNoLongerUsedEvent,(FWriteAccessScope *)&local_38);
      puVar1 = &(this->SpaceNoLongerUsedEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar8 = false;
      uVar15 = *(int *)&(this->SpaceNoLongerUsedEvent).field_0x10 - 1;
      if (-1 < (int)uVar15) {
        lVar17 = (longlong)(int)uVar15 << 4;
        bVar8 = false;
        do {
          uVar12 = 0;
          if ((int)uVar15 < *(int *)&(this->SpaceNoLongerUsedEvent).field_0x10) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(this->SpaceNoLongerUsedEvent).field_0x8;
          if (((*(int *)(lVar17 + 8 + lVar5) == 0) ||
              (plVar6 = *(longlong **)(lVar17 + lVar5), plVar6 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar6 + 0x68))(plVar6,this,&local_48), cVar10 == '\0')) {
            bVar8 = true;
          }
          lVar17 = lVar17 + -0x10;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      puVar1 = &(this->SpaceNoLongerUsedEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar8) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->SpaceNoLongerUsedEvent,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// ClearDefault @ 14a3f1750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::ClearDefault(FMovieSceneControlRigSpaceChannel *this)

{
  this->bHasDefaultValue = false;
  (this->DefaultValue).SpaceType = Parent;
  *(undefined3 *)&(this->DefaultValue).field_0x1 = 0;
  (this->DefaultValue).ControlRigElement.Type = None;
  *(undefined3 *)&(this->DefaultValue).ControlRigElement.field_0x1 = 0;
  (this->DefaultValue).ControlRigElement.Name.ComparisonIndex = 0;
  (this->DefaultValue).ControlRigElement.Name.Number = 0;
  return;
}

// ComputeEffectiveRange @ 14a3f4590

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TRange<FFrameNumber> * __thiscall
FMovieSceneControlRigSpaceChannel::ComputeEffectiveRange
          (FMovieSceneControlRigSpaceChannel *this,TRange<FFrameNumber> *__return_storage_ptr__)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  TRangeBound<FFrameNumber> TVar9;
  bool bVar10;
  TRange<FFrameNumber> *pTVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_res8;
  undefined1 local_resc;
  undefined2 uStackX_d;
  undefined1 uStackX_f;
  uint local_res10;
  uint local_res18;
  undefined4 uStackX_21;
  undefined2 uStackX_25;
  undefined1 uStackX_27;
  
  pTVar1 = &this->KeyTimes;
  if ((pTVar1 == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (this == (FMovieSceneControlRigSpaceChannel *)0xffffffffffffff88)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Times && Values",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                        ,0x2f3,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
      return pTVar11;
    }
  }
  iVar2 = (this->KeyTimes).ArrayNum;
  if (iVar2 != 0) {
    uVar13 = iVar2 - 1;
    uVar12 = 0;
    if ((int)uVar13 < iVar2) {
      uVar12 = ~uVar13 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
        return pTVar11;
      }
    }
    local_res8 = CONCAT31(local_res8._1_3_,1);
    uVar3 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar13 * 4);
    if ((this->KeyTimes).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TRange<FFrameNumber> *)(*pcVar5)();
        return pTVar11;
      }
    }
    uVar4 = *(undefined4 *)(pTVar1->AllocatorInstance).Data;
    uStackX_21._3_1_ = (undefined1)uVar4;
    uStackX_25 = (undefined2)((uint)uVar4 >> 8);
    uStackX_27 = (undefined1)((uint)uVar4 >> 0x18);
    local_resc = (undefined1)uVar3;
    uStackX_d = (undefined2)((uint)uVar3 >> 8);
    uStackX_f = (undefined1)((uint)uVar3 >> 0x18);
    TVar6._1_4_ = uStackX_21;
    TVar6.Type.Value = 1;
    TVar6.Value.Value._1_2_ = uStackX_25;
    TVar6.Value.Value._3_1_ = uStackX_27;
    TVar7.Value.Value._0_1_ = local_resc;
    TVar7._0_4_ = local_res8;
    TVar7.Value.Value._1_2_ = uStackX_d;
    TVar7.Value.Value._3_1_ = uStackX_f;
    __return_storage_ptr__->LowerBound = TVar6;
    __return_storage_ptr__->UpperBound = TVar7;
    return __return_storage_ptr__;
  }
  local_res10 = local_res10 & 0xffffff00;
  local_res18 = local_res18 & 0xffffff00;
  TVar8.Value.Value = 0;
  TVar8._0_4_ = local_res10;
  TVar9.Value.Value = 0;
  TVar9._0_4_ = local_res18;
  __return_storage_ptr__->LowerBound = TVar8;
  __return_storage_ptr__->UpperBound = TVar9;
  return __return_storage_ptr__;
}

// DeleteKeys @ 14a4015b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::DeleteKeys
          (FMovieSceneControlRigSpaceChannel *this,TArrayView<FKeyHandle_const_,int> *param_1)

{
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_88;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_78;
  TArrayView<FKeyHandle_const_,int> local_68;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> local_58;
  
  pFVar5 = (this->KeyValues).AllocatorInstance.Data;
  pTVar1 = &this->KeyValues;
  iVar2 = (this->KeyValues).ArrayNum;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  while( true ) {
    if ((this->KeyValues).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneControlRigSpaceBaseKey,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (&local_78,(FRigElementKey *)(pFVar5 + 4));
    pFVar5 = pFVar5 + 0x10;
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_58,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_58.Values = pTVar1;
  if (local_58._padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::DeleteKeys(&local_58,&local_68);
  if ((longlong)local_88._8_8_ < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_88.AllocatorInstance,0,&local_88.ArrayMax);
  }
  iVar2 = (this->KeyValues).ArrayNum;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->KeyValues).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieSceneControlRigSpaceBaseKey,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar6) break;
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (&local_88,(FRigElementKey *)(pFVar5 + 4));
    pFVar5 = pFVar5 + 0x10;
  }
  BroadcastSpaceNoLongerUsed(this,&local_78,&local_88);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// DeleteKeysFrom @ 14a401a40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::DeleteKeysFrom
          (FMovieSceneControlRigSpaceChannel *this,FFrameNumber param_1,bool param_2)

{
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  FFrameTime FVar5;
  FName FVar6;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_e8;
  FMovieSceneControlRigSpaceBaseKey local_d8;
  int local_c8;
  undefined4 uStack_c4;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_c0;
  undefined1 local_b0 [8];
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> local_a8;
  FMovieSceneChannelData local_88;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *local_70;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> local_68;
  
  pTVar1 = &this->KeyValues;
  pFVar11 = (pTVar1->AllocatorInstance).Data;
  iVar2 = (this->KeyValues).ArrayNum;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x10;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  while( true ) {
    if ((this->KeyValues).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneControlRigSpaceBaseKey,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) break;
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (&local_c0,(FRigElementKey *)(pFVar11 + 4));
    pFVar11 = pFVar11 + 0x10;
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_88,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_70 = pTVar1;
  if (local_88.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((local_88.Times)->ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (0 < (local_88.Times)->ArrayNum) {
    uStack_c4 = 0;
    FVar5.SubFrame = 0.0;
    FVar5.FrameNumber.Value = param_1.Value;
    local_d8._0_4_ = local_d8._0_4_ & 0xffffff00;
    local_d8.ControlRigElement._0_4_ = local_d8.ControlRigElement._0_4_ & 0xffffff00;
    local_d8.ControlRigElement.Name.ComparisonIndex.Value = 0;
    local_d8.ControlRigElement.Name.Number = 0;
    local_c8 = param_1.Value;
    Evaluate(this,FVar5,&local_d8);
    FMovieSceneChannelData::FMovieSceneChannelData
              ((FMovieSceneChannelData *)&local_a8,(FMovieSceneChannel *)this,&this->KeyTimes,
               (FKeyHandleLookupTable *)&this->KeyHandles);
    local_a8.Values = pTVar1;
    if (local_a8._padding_ == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar9 = FMovieSceneChannelData::FindKey
                      ((FMovieSceneChannelData *)&local_a8,param_1,(FFrameNumber)0x0);
    pTVar7 = local_a8.Values;
    FVar6 = local_d8.ControlRigElement.Name;
    if (uVar9 == 0xffffffff) {
      TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::AddKey(&local_a8,param_1,&local_d8)
      ;
    }
    else {
      uVar4 = CONCAT44(local_d8.ControlRigElement._0_4_,local_d8._0_4_);
      uVar10 = 0;
      if ((int)uVar9 < (local_a8.Values)->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar11 = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
      *(undefined8 *)pFVar11 = uVar4;
      *(FName *)(pFVar11 + 8) = FVar6;
    }
    FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_a8,(int)local_b0);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_68,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_68.Values = pTVar1;
  if (local_68._padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::DeleteKeysFrom
            (&local_68,param_1,param_2);
  if ((longlong)local_e8._8_8_ < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
  }
  iVar2 = (this->KeyValues).ArrayNum;
  pFVar11 = (pTVar1->AllocatorInstance).Data;
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->KeyValues).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieSceneControlRigSpaceBaseKey,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar11 == pFVar12) break;
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
              (&local_e8,(FRigElementKey *)(pFVar11 + 4));
    pFVar11 = pFVar11 + 0x10;
  }
  BroadcastSpaceNoLongerUsed(this,&local_c0,&local_e8);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

// DuplicateKeys @ 14a403ca0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::DuplicateKeys
          (FMovieSceneControlRigSpaceChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FKeyHandle,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FKeyHandle,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values ==
      (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::DuplicateKeys
            (&local_28,&local_38,&local_48);
  return;
}

// Evaluate @ 14a404fc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FMovieSceneControlRigSpaceChannel::Evaluate
          (FMovieSceneControlRigSpaceChannel *this,FFrameTime param_1,
          FMovieSceneControlRigSpaceBaseKey *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  FName FVar5;
  undefined3 uVar6;
  ERigElementType EVar7;
  undefined3 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar11 = (this->KeyTimes).ArrayNum;
  if (uVar11 == 0) {
    if (this->bHasDefaultValue != false) {
      uVar6 = *(undefined3 *)&(this->DefaultValue).field_0x1;
      EVar7 = (this->DefaultValue).ControlRigElement.Type;
      uVar8 = *(undefined3 *)&(this->DefaultValue).ControlRigElement.field_0x1;
      FVar5 = (this->DefaultValue).ControlRigElement.Name;
      param_2->SpaceType = (this->DefaultValue).SpaceType;
      *(undefined3 *)&param_2->field_0x1 = uVar6;
      (param_2->ControlRigElement).Type = EVar7;
      *(undefined3 *)&(param_2->ControlRigElement).field_0x1 = uVar8;
      (param_2->ControlRigElement).Name = FVar5;
      return true;
    }
    param_2->SpaceType = Parent;
    *(undefined3 *)&param_2->field_0x1 = 0;
    (param_2->ControlRigElement).Type = None;
    *(undefined3 *)&(param_2->ControlRigElement).field_0x1 = 0;
    (param_2->ControlRigElement).Name.ComparisonIndex = 0;
    (param_2->ControlRigElement).Name.Number = 0;
    return true;
  }
  iVar12 = 0;
  if (0 < (int)uVar11) {
    do {
      iVar1 = (uVar11 >> 1) + iVar12;
      if (*(int *)((this->KeyTimes).AllocatorInstance.Data + (longlong)iVar1 * 4) <=
          param_1.FrameNumber.Value.Value) {
        iVar12 = iVar1 + (uVar11 & 1);
      }
      uVar13 = uVar11 >> 1;
      uVar11 = uVar11 >> 1;
    } while (uVar13 != 0);
  }
  uVar11 = iVar12 - 1;
  if ((int)uVar11 < 0) {
    uVar11 = 0;
  }
  uVar13 = 0;
  if ((int)uVar11 < (this->KeyValues).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
  }
  pFVar2 = (this->KeyValues).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10;
  uVar4 = *(undefined8 *)pFVar2;
  FVar5 = *(FName *)(pFVar2 + 8);
  param_2->SpaceType = (char)uVar4;
  *(int3 *)&param_2->field_0x1 = (int3)((ulonglong)uVar4 >> 8);
  (param_2->ControlRigElement).Type = (char)((ulonglong)uVar4 >> 0x20);
  *(int3 *)&(param_2->ControlRigElement).field_0x1 = (int3)((ulonglong)uVar4 >> 0x28);
  (param_2->ControlRigElement).Name = FVar5;
  return true;
}

// FindSpaceIntervals @ 14a40cf80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FSpaceRange,TSizedDefaultAllocator<32>_> * __thiscall
FMovieSceneControlRigSpaceChannel::FindSpaceIntervals
          (FMovieSceneControlRigSpaceChannel *this,
          TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined3 uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined4 uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *local_res18;
  undefined4 local_res20;
  undefined4 uStackX_24;
  uint local_108;
  FKeyHandle local_104;
  ForAnyElementType local_100;
  int local_f8;
  int iStack_f4;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [8];
  longlong lStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FKeyHandle_const_,int> local_98;
  FMovieSceneChannelData local_88;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *local_70;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> local_68;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar19 = 0;
  pTVar1 = &this->KeyTimes;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  iStack_f4 = 0;
  local_res10 = __return_storage_ptr__;
  local_res18 = pTVar1;
  if (0 < (this->KeyTimes).ArrayNum) {
    do {
      local_e0 = CONCAT71(local_e0._1_7_,2);
      local_e0 = local_e0 & 0xffffffff;
      uVar14 = ~uVar19 >> 0x1f;
      uStack_d8 = CONCAT71(uStack_d8._1_7_,2);
      uStack_d8 = uStack_d8 & 0xffffffff;
      uVar9 = 0;
      if ((int)uVar19 < (this->KeyValues).ArrayNum) {
        uVar9 = uVar14;
      }
      uVar6 = local_d0._5_3_;
      uVar7 = local_d0._0_4_;
      local_d0._0_5_ = CONCAT14(0,uVar7 & 0xffffff00);
      local_d0 = (undefined1  [8])CONCAT35(uVar6,local_d0._0_5_);
      lStack_c8 = 0;
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      lVar17 = (longlong)(int)uVar19;
      pFVar13 = (this->KeyValues).AllocatorInstance.Data + lVar17 * 0x10;
      local_d0 = *(undefined1 (*) [8])pFVar13;
      lStack_c8 = *(longlong *)(pFVar13 + 8);
      iVar10 = (this->KeyTimes).ArrayNum;
      if (uVar19 == iVar10 - 1U) {
        uVar9 = 0;
        if ((int)uVar19 < iVar10) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar12;
        }
        local_res20 = CONCAT31(local_res20._1_3_,1);
        uStackX_24 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar17 * 4);
        local_e0 = CONCAT44(uStackX_24,local_res20);
        uVar9 = 0;
        if ((int)uVar19 < (this->KeyTimes).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar12;
        }
        local_c0 = CONCAT31(local_c0._1_3_,1);
        uStack_bc = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar17 * 4);
        uStack_d8 = CONCAT44(uStack_bc,local_c0);
      }
      else {
        uVar9 = 0;
        if ((int)uVar19 < iVar10) {
          uVar9 = uVar14;
        }
        local_108 = uVar19;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar12;
        }
        uVar9 = 0;
        if ((int)uVar19 < (this->KeyTimes).ArrayNum) {
          uVar9 = uVar14;
        }
        uVar3 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar17 * 4);
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar12;
        }
        uVar15 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar17 * 4);
        if ((int)local_108 < (this->KeyTimes).ArrayNum + -1) {
          do {
            uVar9 = uVar19 + 1;
            uVar14 = 0;
            if ((int)uVar9 < (this->KeyValues).ArrayNum) {
              uVar14 = ~uVar9 >> 0x1f;
            }
            local_108 = uVar9;
            if ((uVar14 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
              return pTVar12;
            }
            pFVar13 = (this->KeyValues).AllocatorInstance.Data + ((longlong)(int)uVar19 + 1) * 0x10;
            if ((local_d0[0] == *pFVar13) &&
               ((local_d0[0] != (FScriptContainerElement)0x2 ||
                ((lStack_c8 == *(longlong *)(pFVar13 + 8) && (local_d0[4] == pFVar13[4])))))) {
              if (((local_100.Data <= (FScriptContainerElement *)&local_108) &&
                  ((FScriptContainerElement *)&local_108 < local_100.Data + (longlong)iStack_f4 * 4)
                  ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                pcVar5 = (code *)swi(3);
                pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar12;
              }
              if (local_f8 == iStack_f4) {
                local_f8 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_100,&iStack_f4);
              }
              lVar17 = (longlong)local_f8;
              local_f8 = local_f8 + 1;
              *(uint *)(local_100.Data + lVar17 * 4) = local_108;
              uVar19 = uVar9;
            }
            else {
              lVar17 = (longlong)(int)local_108;
              uVar19 = 0;
              if ((int)local_108 < (this->KeyTimes).ArrayNum) {
                uVar19 = ~local_108 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
                return pTVar12;
              }
              uVar19 = local_108 - 1;
              local_108 = (this->KeyTimes).ArrayNum;
              uVar15 = *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar17 * 4);
            }
          } while ((int)local_108 < (this->KeyTimes).ArrayNum + -1);
        }
        local_b8 = CONCAT31(local_b8._1_3_,1);
        local_e0 = CONCAT44(uVar3,local_b8);
        local_b0 = CONCAT31(local_b0._1_3_,1);
        uStack_d8 = CONCAT44(uVar15,local_b0);
        uStack_b4 = uVar3;
        uStack_ac = uVar15;
      }
      piVar18 = &__return_storage_ptr__->ArrayMax;
      pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 < pFVar13 + (longlong)*piVar18 * 0x20)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar18) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x420,&__return_storage_ptr__->AllocatorInstance,piVar18);
      }
      uVar19 = uVar19 + 1;
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar13 = pFVar4 + (longlong)iVar10 * 0x20;
      *(ulonglong *)pFVar13 = local_e0;
      *(ulonglong *)(pFVar13 + 8) = uStack_d8;
      pFVar4 = pFVar4 + (longlong)iVar10 * 0x20 + 0x10;
      *(undefined1 (*) [8])pFVar4 = local_d0;
      *(longlong *)(pFVar4 + 8) = lStack_c8;
    } while ((int)uVar19 < (this->KeyTimes).ArrayNum);
  }
  iVar10 = local_f8;
  if (0 < local_f8) {
    pTVar2 = &this->KeyValues;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = 0;
    pFVar13 = local_100.Data + (longlong)local_f8 * 4;
    FVar16.Data = local_100.Data;
    while( true ) {
      if (local_f8 != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar16.Data == pFVar13) break;
      FMovieSceneChannelData::FMovieSceneChannelData
                (&local_88,(FMovieSceneChannel *)this,local_res18,
                 (FKeyHandleLookupTable *)&this->KeyHandles);
      local_70 = pTVar2;
      if (((local_88.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
          (pTVar2 == (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Times && Values",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                                ,0x122,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      FMovieSceneChannelData::GetHandle(&local_88,(int)&local_104);
      if (((local_f0.Data <= (FScriptContainerElement *)&local_104) &&
          ((FScriptContainerElement *)&local_104 < local_f0.Data + (longlong)local_e8._4_4_ * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      iVar11 = (int)local_e8;
      if ((int)local_e8 == local_e8._4_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_f0,(int *)((longlong)&local_e8 + 4));
      }
      FVar16.Data = FVar16.Data + 4;
      local_e8 = CONCAT44(local_e8._4_4_,iVar11 + 1);
      *(uint *)(local_f0.Data + (longlong)iVar11 * 4) = local_104.Index;
    }
    FMovieSceneChannelData::FMovieSceneChannelData
              ((FMovieSceneChannelData *)&local_68,(FMovieSceneChannel *)this,local_res18,
               (FKeyHandleLookupTable *)&this->KeyHandles);
    local_68.Values = pTVar2;
    if (((local_68._padding_ == 0) ||
        (pTVar2 == (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Times && Values",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                           ,0x122,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
    iVar10 = (int)local_e8;
    local_a8 = local_f0.Data;
    if (((int)local_e8 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TArray<FSpaceRange,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar12;
    }
    iStack_a0 = iVar10;
    local_98._12_4_ = uStack_9c;
    local_98.ArrayNum = iVar10;
    local_98.DataPtr = (FKeyHandle *)local_a8;
    TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::DeleteKeys(&local_68,&local_98);
    __return_storage_ptr__ = local_res10;
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
      __return_storage_ptr__ = local_res10;
    }
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  return __return_storage_ptr__;
}

// GetDefault @ 14a4138a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TOptional<FMovieSceneControlRigSpaceBaseKey> * __thiscall
FMovieSceneControlRigSpaceChannel::GetDefault
          (FMovieSceneControlRigSpaceChannel *this,
          TOptional<FMovieSceneControlRigSpaceBaseKey> *__return_storage_ptr__)

{
  FName FVar1;
  undefined3 uVar2;
  ERigElementType EVar3;
  undefined3 uVar4;
  
  if (this->bHasDefaultValue != false) {
    uVar2 = *(undefined3 *)&(this->DefaultValue).field_0x1;
    EVar3 = (this->DefaultValue).ControlRigElement.Type;
    uVar4 = *(undefined3 *)&(this->DefaultValue).ControlRigElement.field_0x1;
    FVar1 = (this->DefaultValue).ControlRigElement.Name;
    (__return_storage_ptr__->TypedValue).SpaceType = (this->DefaultValue).SpaceType;
    *(undefined3 *)&(__return_storage_ptr__->TypedValue).field_0x1 = uVar2;
    (__return_storage_ptr__->TypedValue).ControlRigElement.Type = EVar3;
    *(undefined3 *)&(__return_storage_ptr__->TypedValue).ControlRigElement.field_0x1 = uVar4;
    (__return_storage_ptr__->TypedValue).ControlRigElement.Name = FVar1;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetHandle @ 14a414ba0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FKeyHandle __thiscall
FMovieSceneControlRigSpaceChannel::GetHandle(FMovieSceneControlRigSpaceChannel *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FKeyHandle)uVar3;
    }
  }
  FMovieSceneChannelData::GetHandle(&local_28,param_1);
  return (FKeyHandle)param_1;
}

// GetIndex @ 14a414ca0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FMovieSceneControlRigSpaceChannel::GetIndex
          (FMovieSceneControlRigSpaceChannel *this,FKeyHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FMovieSceneChannelData::GetIndex(&local_28,param_1);
  return iVar3;
}

// GetKeyTimes @ 14a415610

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::GetKeyTimes
          (FMovieSceneControlRigSpaceChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FMovieSceneChannelData::GetKeyTimes(&local_28,&local_38,&local_48);
  return;
}

// GetKeys @ 14a4156c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::GetKeys
          (FMovieSceneControlRigSpaceChannel *this,TRange<FFrameNumber> *param_1,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FKeyHandle,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMovieSceneChannelData::GetKeys(&local_28,param_1,param_2,param_3);
  return;
}

// GetNumKeys @ 14a416830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
FMovieSceneControlRigSpaceChannel::GetNumKeys(FMovieSceneControlRigSpaceChannel *this)

{
  return (this->KeyTimes).ArrayNum;
}

// GetUniqueSpaceList @ 14a41a690

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::GetUniqueSpaceList
          (FMovieSceneControlRigSpaceChannel *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (param_1 != (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
    iVar1 = (this->KeyValues).ArrayNum;
    pFVar2 = (this->KeyValues).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->KeyValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMovieSceneControlRigSpaceBaseKey,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                (param_1,(FRigElementKey *)(pFVar2 + 4));
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return;
}

// Offset @ 14a42ea20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::Offset
          (FMovieSceneControlRigSpaceChannel *this,FFrameNumber param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_10 = &this->KeyValues;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMovieSceneChannelData::Offset(&local_28,param_1);
  return;
}

// RemapTimes @ 14a43b380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::RemapTimes
          (FMovieSceneControlRigSpaceChannel *this,IRetimingInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values ==
      (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::RemapTimes(&local_28,param_1);
  return;
}

// Reset @ 14a44fe10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FMovieSceneControlRigSpaceChannel::Reset(FMovieSceneControlRigSpaceChannel *this)

{
  (this->KeyTimes).ArrayNum = 0;
  if ((this->KeyTimes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->KeyTimes).AllocatorInstance,0,&(this->KeyTimes).ArrayMax);
  }
  (this->KeyValues).ArrayNum = 0;
  if ((this->KeyValues).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->KeyValues).AllocatorInstance,0,&(this->KeyValues).ArrayMax);
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return;
}

// SetDefault @ 14a459630

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::SetDefault
          (FMovieSceneControlRigSpaceChannel *this,FMovieSceneControlRigSpaceBaseKey *param_1)

{
  FName FVar1;
  undefined3 uVar2;
  ERigElementType EVar3;
  undefined3 uVar4;
  
  this->bHasDefaultValue = true;
  uVar2 = *(undefined3 *)&param_1->field_0x1;
  EVar3 = (param_1->ControlRigElement).Type;
  uVar4 = *(undefined3 *)&(param_1->ControlRigElement).field_0x1;
  FVar1 = (param_1->ControlRigElement).Name;
  (this->DefaultValue).SpaceType = param_1->SpaceType;
  *(undefined3 *)&(this->DefaultValue).field_0x1 = uVar2;
  (this->DefaultValue).ControlRigElement.Type = EVar3;
  *(undefined3 *)&(this->DefaultValue).ControlRigElement.field_0x1 = uVar4;
  (this->DefaultValue).ControlRigElement.Name = FVar1;
  return;
}

// SetKeyTimes @ 14a459bb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FMovieSceneControlRigSpaceChannel::SetKeyTimes
          (FMovieSceneControlRigSpaceChannel *this,TArrayView<FKeyHandle_const_,int> *param_1,
          TArrayView<FFrameNumber_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FFrameNumber_const_,int> local_48;
  TArrayView<FKeyHandle_const_,int> local_38;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> local_28;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_28,(FMovieSceneChannel *)this,&this->KeyTimes,
             (FKeyHandleLookupTable *)&this->KeyHandles);
  local_28.Values = &this->KeyValues;
  if ((local_28._padding_ == 0) ||
     (local_28.Values ==
      (TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::SetKeyTimes
            (&local_28,&local_38,&local_48);
  return;
}

