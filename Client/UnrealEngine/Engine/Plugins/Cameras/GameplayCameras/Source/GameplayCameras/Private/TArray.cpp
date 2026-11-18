// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 25

// TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_><FPropertyBagPropertyDesc_const_,int> @ 14d538790

TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>::
TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_><FPropertyBagPropertyDesc_const_,int>
          (TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FPropertyBagPropertyDesc_const_,int> *param_1)

{
  int iVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  pFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
            ((this->AllocatorInstance).Data,pFVar2,iVar1);
  return this;
}

// TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_><UClass_*_const,int> @ 14d538820

TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_>::
TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_><UClass_*_const,int>
          (TArray<TObjectPtr<UClass>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UClass_*_const,int> *param_1)

{
  int iVar1;
  UClass **ppUVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  ppUVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<TObjectPtr<UClass>,UClass_*,int>((this->AllocatorInstance).Data,ppUVar2,iVar1);
  return this;
}

// TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_><UObject_*_const,int> @ 14d5388b0

TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::
TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_><UObject_*_const,int>
          (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UObject_*_const,int> *param_1)

{
  int iVar1;
  UObject **ppUVar2;
  
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = param_1->ArrayNum;
  ppUVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  ConstructItems<TObjectPtr<UObject>,UObject_*,int>((this->AllocatorInstance).Data,ppUVar2,iVar1);
  return this;
}

// operator=<UCameraNode_*,int> @ 14d538940

TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UCameraNode_*,TSizedDefaultAllocator<32>_>::operator=<UCameraNode_*,int>
          (TArray<UCameraNode_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UCameraNode_*,int> *param_1)

{
  int *piVar1;
  int iVar2;
  UCameraNode **_Src;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  if (iVar2 != 0) {
    memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// Empty @ 14d553490

void __thiscall
TArray<UE::Cameras::FCameraIKAimIterationDebugInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<UE::Cameras::FCameraIKAimIterationDebugInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
                (0x70,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Remove @ 14d5604b0

int __thiscall
TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UCameraRigTransition>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UCameraRigTransition> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
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
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UCameraRigTransition **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UCameraRigTransition **)(pFVar1 + lVar6 * 8) !=
                     (param_1->field0_0x0).DebugPtr)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAt @ 14d5609e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,TSizedDefaultAllocator<32>_>::
RemoveAt(TArray<UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FCameraRigEntry *this_00;
  
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
  this_00 = (FCameraRigEntry *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x14c0);
  UE::Cameras::FBlendStackCameraNodeEvaluator::FCameraRigEntry::~FCameraRigEntry(this_00);
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(this_00,this_00 + 1,(longlong)iVar4 * 0x14c0);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14c0,0x10,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 14d560ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>::
RemoveAt(TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
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
  RemoveAtImpl(this,param_1);
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,this->ArrayNum,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 14d560b80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
TArray<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  FBlendedParameterOverrides *_Dst;
  
  _Dst = (FBlendedParameterOverrides *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xa30);
  DestructItems<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xa30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d560c00

void __thiscall
TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<UE::Cameras::FCameraEvaluationContextStack::FContextEntry,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  plVar2 = *(longlong **)(_Dst + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  iVar3 = this->ArrayNum + ~param_1;
  if (iVar3 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar3 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// operator=<UE::Cameras::FBlendableStructInfo_const_,int> @ 14d57b230

TArray<UE::Cameras::FBlendableStructInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Cameras::FBlendableStructInfo,TSizedDefaultAllocator<32>_>::
operator=<UE::Cameras::FBlendableStructInfo_const_,int>
          (TArray<UE::Cameras::FBlendableStructInfo,TSizedDefaultAllocator<32>_> *this,
          TArrayView<UE::Cameras::FBlendableStructInfo_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FBlendableStructInfo *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<UE::Cameras::FBlendableStructInfo,UE::Cameras::FBlendableStructInfo,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// operator= @ 14d592100

TArray<FCameraObjectInterfaceParameterMetaData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCameraObjectInterfaceParameterMetaData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCameraObjectInterfaceParameterMetaData,TSizedDefaultAllocator<32>_> *this,
          TArray<FCameraObjectInterfaceParameterMetaData,TSizedDefaultAllocator<32>_> *param_1)

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
              (0x1c,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x1c);
    }
  }
  return this;
}

// Empty @ 14d5a2a30

void __thiscall
TArray<UE::Cameras::FCameraRigJoint,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::Empty
          (TArray<UE::Cameras::FCameraRigJoint,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
                (0x70,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14d5a2a80

void __thiscall
TArray<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> FVar1;
  ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> FVar2;
  
  if (-1 < param_1) {
    FVar1 = (this->AllocatorInstance).SecondaryData;
    FVar2 = (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)this;
    if (FVar1 != (ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>)0x0) {
      FVar2 = FVar1;
    }
    DestructItems<UE::Cameras::FCameraRigJointsDebugBlock::FEntry,int>
              ((FEntry *)FVar2,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>_>
                (0x48,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14d5a2b00

void __thiscall
TArray<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int>
              ((FEntryDebugInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
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

// Empty @ 14d5a2b70

void __thiscall
TArray<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::Cameras::FVariableTableDebugBlock::FEntryDebugInfo,int>
              ((FEntryDebugInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
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

// Empty @ 14d5a2be0

void __thiscall
TArray<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,TSizedDefaultAllocator<32>_>
::Empty(TArray<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int>
              ((FPlayerControllerDebugInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAt @ 14d5cb230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,TSizedDefaultAllocator<32>_>
::RemoveAt(TArray<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator::FCameraRigEntryExtraInfo,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

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
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0xc;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0xc,(longlong)iVar4 * 0xc);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// operator= @ 14d601130

TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_> *this,
          TArray<TObjectPtr<UInputAction>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<TObjectPtr<UInputAction>,TObjectPtr<UInputAction>,int>
              ((this->AllocatorInstance).Data,(TObjectPtr<UInputAction> *)pFVar2,iVar1);
  }
  return this;
}

// Empty @ 14d614dc0

void __thiscall
TArray<UE::Cameras::FCameraActorComputedTargetInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::Empty(TArray<UE::Cameras::FCameraActorComputedTargetInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_>
                (0xa0,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// InsertUninitializedImpl @ 14d6208e0

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,FCameraFramingZone>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,FCameraFramingZone>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14d620960

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FCameraFramingZone>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_><UE::Cameras::FShakeCameraNodeEvaluator_*,int> @ 14d64bb80

TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::
TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_><UE::Cameras::FShakeCameraNodeEvaluator_*,int>
          (TArray<UE::Cameras::FCameraNodeEvaluator_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,TArrayView<UE::Cameras::FShakeCameraNodeEvaluator_*,int> *param_1)

{
  int iVar1;
  FShakeCameraNodeEvaluator **ppFVar2;
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> FVar3;
  ForElementType<UE::Cameras::FCameraNodeEvaluator_*> FVar4;
  
  (this->AllocatorInstance).SecondaryData = (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0
  ;
  iVar1 = param_1->ArrayNum;
  ppFVar2 = param_1->DataPtr;
  this->ArrayNum = iVar1;
  if (iVar1 == 0) {
    this->ArrayMax = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
            (8,8,iVar1,0,&this->AllocatorInstance,iVar1,&this->ArrayMax);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  FVar4 = (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)this;
  if (FVar3 != (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0) {
    FVar4 = FVar3;
  }
  ConstructItems<UE::Cameras::FCameraNodeEvaluator_*,UE::Cameras::FShakeCameraNodeEvaluator_*,int>
            ((void *)FVar4,ppFVar2,iVar1);
  return this;
}

// Empty @ 14d65ec90

void __thiscall
TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Cameras::TCameraDebugGraphEntry<1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

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

// Empty @ 14d65ece0

void __thiscall
TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Cameras::TCameraDebugGraphEntry<3>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

