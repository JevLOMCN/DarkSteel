// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// operator() @ 14a3c0710

bool __thiscall
`TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::RemapTimes'::__l12::<lambda_1>::
operator()(void *this,int param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_2 < (int)plVar2[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar1 = *(int *)(*plVar2 + (longlong)param_2 * 4);
  plVar2 = (longlong *)**(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(int *)(*plVar2 + (longlong)param_1 * 4) < iVar1;
}

// AddKey @ 14a3dedd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall
TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::AddKey
          (TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> *this,FFrameNumber param_1,
          FMovieSceneControlRigSpaceBaseKey *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_18;
  
  iVar2 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,param_1);
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_>::Insert
            (this->Values,param_2,iVar2);
  if (this->_padding_ != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8));
    if (bVar1) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_18.AllocatorInstance,&local_18.ArrayMax);
      local_18.ArrayNum = iVar3 + 1;
      *(ulonglong *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 8) =
           CONCAT44(param_1.Value,iVar2);
      TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                  (FMovieSceneChannel *)this->_padding_,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
  }
  return iVar2;
}

// DeleteKeys @ 14a401340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::DeleteKeys
          (TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> *this,
          TArrayView<FKeyHandle_const_,int> *param_1)

{
  void *_Dst;
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_38;
  
  iVar7 = param_1->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar8].Index);
      if (uVar5 != 0xffffffff) {
        if ((((int)uVar5 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar5)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(KeyIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x1fc,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this->_padding_ != 0) &&
           (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 0x28)), bVar4)) {
          plVar2 = (longlong *)this->_padding_;
          uVar6 = 0;
          if ((int)uVar5 < (int)plVar2[1]) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 4);
          local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_38.ArrayNum = 0;
          local_38.ArrayMax = 0;
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_38.AllocatorInstance,&local_38.ArrayMax);
          local_38.ArrayNum = iVar7 + 1;
          *(ulonglong *)(local_38.AllocatorInstance.Data + (longlong)iVar7 * 8) =
               CONCAT44(uVar1,uVar5);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyDeletedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_38);
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
        }
        plVar2 = (longlong *)this->_padding_;
        uVar6 = 0;
        if ((int)uVar5 < (int)plVar2[1]) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (void *)(*plVar2 + (longlong)(int)uVar5 * 4);
        iVar7 = (int)plVar2[1] + ~uVar5;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar7 << 2);
        }
        *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
        TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_>::RemoveAt
                  (this->Values,uVar5,No);
        if ((FKeyHandleLookupTable *)this->_padding_ != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle((FKeyHandleLookupTable *)this->_padding_,uVar5);
        }
      }
      iVar7 = param_1->ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// DeleteKeysFrom @ 14a401740

void __thiscall
TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::DeleteKeysFrom
          (TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> *this,FFrameNumber param_1,
          bool param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint local_res20;
  uint local_98;
  ForAnyElementType local_90;
  int local_88;
  int iStack_84;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyHandle,TSizedDefaultAllocator<32>_> local_70;
  TRange<FFrameNumber> local_60;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FKeyHandle_const_,int> local_38;
  
  uVar7 = 0;
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_60.LowerBound.Value.Value = 0;
  local_60.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_60.UpperBound.Value.Value = 0;
  local_60.UpperBound._0_4_ = local_98;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  FMovieSceneChannelData::GetKeys((FMovieSceneChannelData *)this,&local_60,&local_80,&local_70);
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  iStack_84 = 0;
  uVar10 = uVar7;
  if (0 < local_80.ArrayNum) {
    do {
      uVar6 = (uint)uVar7;
      uVar8 = ~uVar6 >> 0x1f;
      if (param_2) {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_80.AllocatorInstance.Data + uVar10) < param_1.Value) {
LAB_14a40188f:
          uVar4 = 0;
          if ((int)uVar6 < local_70.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar9 = local_70.AllocatorInstance.Data + uVar10;
          if (((local_90.Data <= pFVar9) && (pFVar9 < local_90.Data + (longlong)iStack_84 * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (local_88 == iStack_84) {
            local_88 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_90,&iStack_84);
          }
          lVar5 = (longlong)local_88;
          local_88 = local_88 + 1;
          *(undefined4 *)(local_90.Data + lVar5 * 4) = *(undefined4 *)pFVar9;
        }
      }
      else {
        uVar4 = 0;
        if ((int)uVar6 < local_80.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (param_1.Value < *(int *)(local_80.AllocatorInstance.Data + uVar10)) goto LAB_14a40188f;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar10 = uVar10 + 4;
    } while ((int)(uVar6 + 1) < local_80.ArrayNum);
  }
  iVar2 = local_88;
  local_48 = local_90.Data;
  if ((local_88 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_40 = iVar2;
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar2;
  local_38.DataPtr = (FKeyHandle *)local_48;
  DeleteKeys(this,&local_38);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return;
}

// DuplicateKeys @ 14a4039d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::DuplicateKeys
          (TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FKeyHandle,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FFrameNumber FVar3;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FKeyHandle FVar9;
  uint uVar10;
  int iVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 local_68 [4];
  int local_64;
  int iStack_60;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_58;
  FMovieSceneControlRigSpaceBaseKey local_48;
  
  iVar11 = param_1->ArrayNum;
  uVar13 = 0;
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      uVar12 = ~uVar13 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar13 < iVar11) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar13].Index);
      if (uVar8 == 0xffffffff) {
        FVar9 = FKeyHandle::Invalid();
        uVar2 = *(undefined4 *)CONCAT44(extraout_var,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar12;
        }
      }
      else {
        pTVar4 = this->Values;
        uVar10 = 0;
        if ((int)uVar8 < pTVar4->ArrayNum) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar5 = (longlong *)this->_padding_;
        pFVar1 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10;
        local_48._0_8_ = *(undefined8 *)pFVar1;
        local_48.ControlRigElement.Name = *(FName *)(pFVar1 + 8);
        uVar10 = 0;
        if ((int)uVar8 < (int)plVar5[1]) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar3.Value = *(int *)(*plVar5 + (longlong)(int)uVar8 * 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar3);
        TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_>::Insert
                  (this->Values,&local_48,iVar11);
        if ((this->_padding_ != 0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               (this->_padding_ + 8)), bVar7)) {
          local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.ArrayNum = 0;
          local_58.ArrayMax = 0;
          local_64 = iVar11;
          iStack_60 = FVar3.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_58.AllocatorInstance,&local_58.ArrayMax);
          local_58.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_58.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_60,local_64);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                      (FMovieSceneChannel *)this->_padding_,&local_58);
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
        }
        FVar9 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,(int)local_68);
        uVar2 = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Index);
        uVar8 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar8 = uVar12;
        }
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar13 = uVar13 + 1;
      *(undefined4 *)((longlong)&param_2->DataPtr->Index + lVar14) = uVar2;
      lVar14 = lVar14 + 4;
      iVar11 = param_1->ArrayNum;
    } while ((int)uVar13 < iVar11);
  }
  return;
}

// RemapTimes @ 14a43abc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::RemapTimes
          (TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> *this,
          IRetimingInterface *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  FKeyHandleLookupTable *this_00;
  longlong *plVar6;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  FFrameNumber FVar14;
  uint uVar15;
  uint uVar16;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ForElementType<int> FVar17;
  longlong lVar18;
  FIdentityFunctor FVar19;
  uint uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  ForElementType<int> FVar24;
  <lambda_1> <Var25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  undefined1 auStack_2d8 [32];
  int *local_2b8;
  ForElementType<int> local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  FIdentityFunctor local_288;
  int local_284;
  int *local_280;
  <lambda_1> local_278;
  longlong local_270;
  ForElementType<int> local_268;
  undefined1 local_260 [4];
  undefined1 local_25c [4];
  ForElementType<int> local_258;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  puVar3 = (undefined8 *)this->_padding_;
  iVar23 = *(int *)(puVar3 + 1);
  FVar24 = (ForElementType<int>)(longlong)iVar23;
  if (iVar23 != 0) {
    local_288 = (FIdentityFunctor)0x1;
    local_278.__this = this;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = FVar24;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    puVar4 = (undefined4 *)*puVar3;
    FVar14 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_260);
    *puVar4 = *(undefined4 *)CONCAT44(extraout_var,FVar14.Value);
    iVar23 = this->Values->ArrayNum;
    if (iVar23 < 1) {
      local_2b8 = (int *)0x0;
      local_2b0 = (ForElementType<int>)(longlong)iVar23;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    uVar20 = 1;
    if (1 < (longlong)FVar24) {
      piVar28 = (int *)&DAT_00000001;
      local_268 = FVar24;
      do {
        plVar5 = (longlong *)this->_padding_;
        iVar23 = (int)plVar5[1];
        uVar21 = 0;
        if ((int)uVar20 < iVar23) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_2b8 = (int *)(longlong)(int)uVar20;
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        lVar18 = *plVar5;
        plVar5 = (longlong *)(local_278.__this)->_padding_;
        iVar23 = (int)plVar5[1];
        uVar21 = 0;
        if ((int)(uVar20 - 1) < iVar23) {
          uVar21 = -uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          local_2b8 = (int *)(longlong)(int)(uVar20 - 1);
          local_2b0 = (ForElementType<int>)(longlong)iVar23;
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar23 = *(int *)(*plVar5 + -4 + (longlong)piVar28 * 4);
        FVar14 = UE::MovieScene::IRetimingInterface::RemapTime(param_1,(int)local_25c);
        FVar19 = (FIdentityFunctor)0x0;
        if (iVar23 <= *(int *)CONCAT44(extraout_var_00,FVar14.Value)) {
          FVar19 = local_288;
        }
        *(int *)(lVar18 + (longlong)piVar28 * 4) = *(int *)CONCAT44(extraout_var_00,FVar14.Value);
        iVar23 = (local_278.__this)->Values->ArrayNum;
        uVar21 = 0;
        if ((int)uVar20 < iVar23) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        local_288 = FVar19;
        if ((uVar21 == 0) &&
           (local_2b8 = piVar28, local_2b0 = (ForElementType<int>)(longlong)iVar23,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar24 = local_268;
        <Var25.__this = local_278.__this;
        uVar20 = uVar20 + 1;
        piVar28 = (int *)((longlong)piVar28 + 1);
        this = local_278.__this;
      } while ((longlong)piVar28 < (longlong)local_268);
      iVar23 = local_268._0_4_;
      if (FVar19 == (FIdentityFunctor)0x0) {
        local_4c = 0x80;
        local_258.SecondaryData = (ForElementType<int>)0x0;
        local_50 = 0;
        local_284 = 0;
        if (0 < iVar23) {
          do {
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            if ((ulonglong)FVar17 <= &local_284) {
              FVar17 = (ForElementType<int>)&local_258;
              if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                FVar17 = local_258.SecondaryData;
              }
              if (&local_284 < (int *)((longlong)FVar17 + (longlong)local_4c * 4)) {
                local_298 = 4;
                local_2a0 = (longlong)local_50;
                local_2b0 = (ForElementType<int>)&local_258;
                if (local_258.SecondaryData != (ForElementType<int>)0x0) {
                  local_2b0 = local_258.SecondaryData;
                }
                local_2b8 = &local_284;
                local_2a8 = (longlong)local_4c;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar13) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                                   (0x404,&local_258,&local_4c);
            }
            lVar18 = (longlong)local_50;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            local_50 = local_50 + 1;
            *(int *)((longlong)FVar17 + lVar18 * 4) = local_284;
            local_284 = local_284 + 1;
          } while (local_284 < iVar23);
        }
        FVar17 = (ForElementType<int>)&local_258;
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FVar17 = local_258.SecondaryData;
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,_TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::RemapTimes_::__l12::<lambda_1>_>
                  ((int *)FVar17,local_50,local_288,<Var25);
        uVar20 = 0;
        lVar18 = 0;
        do {
          this_00 = (FKeyHandleLookupTable *)(<Var25.__this)->_padding_;
          uVar21 = 0;
          if ((int)uVar20 < local_50) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_2b8 = (int *)(longlong)(int)uVar20;
            local_2b0 = (ForElementType<int>)(longlong)local_50;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FVar17 = (ForElementType<int>)&local_258;
          if (local_258.SecondaryData != (ForElementType<int>)0x0) {
            FVar17 = local_258.SecondaryData;
          }
          FKeyHandleLookupTable::MoveHandle(this_00,uVar20,*(int *)((longlong)FVar17 + lVar18 * 4));
          uVar20 = uVar20 + 1;
          lVar18 = lVar18 + 1;
        } while (lVar18 < (longlong)FVar24);
        uVar20 = 0;
        local_280 = (int *)0x0;
        local_270 = 0;
        iVar23 = local_50;
        do {
          uVar21 = ~uVar20 >> 0x1f;
          piVar28 = local_280;
          while( true ) {
            uVar15 = 0;
            if ((int)uVar20 < iVar23) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar23 = local_50;
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            if (*(uint *)((longlong)FVar17 + (longlong)piVar28 * 4) == uVar20) break;
            uVar15 = 0;
            if ((int)uVar20 < iVar23) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              local_2b8 = (int *)(longlong)(int)uVar20;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            plVar5 = (longlong *)(<Var25.__this)->_padding_;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            iVar23 = (int)plVar5[1];
            uVar15 = *(uint *)((longlong)FVar17 + (longlong)piVar28 * 4);
            piVar26 = (int *)(longlong)(int)uVar15;
            uVar27 = ~uVar15 >> 0x1f;
            uVar16 = 0;
            if ((int)uVar15 < iVar23) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            plVar6 = (longlong *)(<Var25.__this)->_padding_;
            puVar4 = (undefined4 *)(*plVar5 + (longlong)piVar26 * 4);
            iVar23 = (int)plVar6[1];
            uVar16 = 0;
            if ((int)uVar20 < iVar23) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              local_2b8 = (int *)(longlong)(int)uVar20;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            lVar18 = *plVar6;
            uVar2 = *(undefined4 *)(lVar18 + (longlong)local_280 * 4);
            *(undefined4 *)(lVar18 + (longlong)local_280 * 4) = *puVar4;
            *puVar4 = uVar2;
            pTVar7 = (local_278.__this)->Values;
            iVar23 = pTVar7->ArrayNum;
            uVar16 = 0;
            if ((int)uVar15 < iVar23) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)iVar23,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar22 = (pTVar7->AllocatorInstance).Data + (longlong)piVar26 * 0x10;
            pTVar7 = (local_278.__this)->Values;
            iVar23 = pTVar7->ArrayNum;
            uVar16 = 0;
            if ((int)uVar20 < iVar23) {
              uVar16 = uVar21;
            }
            if (uVar16 == 0) {
              local_2b8 = local_280;
              local_2b0 = (ForElementType<int>)(longlong)iVar23;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            pFVar8 = (pTVar7->AllocatorInstance).Data;
            uVar10 = *(undefined8 *)(pFVar22 + 8);
            pFVar1 = pFVar8 + local_270;
            uVar11 = *(undefined8 *)pFVar1;
            uVar12 = *(undefined8 *)(pFVar1 + 8);
            pFVar8 = pFVar8 + local_270;
            *(undefined8 *)pFVar8 = *(undefined8 *)pFVar22;
            *(undefined8 *)(pFVar8 + 8) = uVar10;
            *(undefined8 *)pFVar22 = uVar11;
            *(undefined8 *)(pFVar22 + 8) = uVar12;
            uVar16 = 0;
            if ((int)uVar15 < local_50) {
              uVar16 = uVar27;
            }
            if ((uVar16 == 0) &&
               (local_2b8 = piVar26, local_2b0 = (ForElementType<int>)(longlong)local_50,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            piVar28 = local_280;
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            piVar26 = (int *)((longlong)FVar17 + (longlong)piVar26 * 4);
            uVar15 = 0;
            if ((int)uVar20 < local_50) {
              uVar15 = uVar21;
            }
            if (uVar15 == 0) {
              local_2b0 = (ForElementType<int>)(longlong)local_50;
              local_2b8 = local_280;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            FVar17 = (ForElementType<int>)&local_258;
            if (local_258.SecondaryData != (ForElementType<int>)0x0) {
              FVar17 = local_258.SecondaryData;
            }
            iVar23 = *(int *)((longlong)FVar17 + (longlong)piVar28 * 4);
            *(int *)((longlong)FVar17 + (longlong)piVar28 * 4) = *piVar26;
            *piVar26 = iVar23;
            <Var25.__this = local_278.__this;
            iVar23 = local_50;
          }
          local_270 = local_270 + 0x10;
          local_280 = (int *)((longlong)piVar28 + 1);
          uVar20 = uVar20 + 1;
        } while ((longlong)local_280 < (longlong)FVar24);
        if (local_258.SecondaryData != (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_258.SecondaryData);
        }
      }
    }
  }
  return;
}

// SetKeyTimes @ 14a4599c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey>::SetKeyTimes
          (TMovieSceneChannelData<FMovieSceneControlRigSpaceBaseKey> *this,
          TArrayView<FKeyHandle_const_,int> *param_1,TArrayView<FFrameNumber_const_,int> *param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FMovieSceneControlRigSpaceBaseKey local_38;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandles.Num() == InKeyTimes.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x267,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = param_1->ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = FMovieSceneChannelData::GetIndex
                        ((FMovieSceneChannelData *)this,
                         (FKeyHandle)param_1->DataPtr[(int)uVar9].Index);
      if (uVar5 != 0xffffffff) {
        uVar6 = 0;
        if ((int)uVar9 < param_2->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = FMovieSceneChannelData::MoveKeyInternal
                          ((FMovieSceneChannelData *)this,uVar5,
                           (FFrameNumber)*(int *)((longlong)&param_2->DataPtr->Value + lVar10));
        if (uVar6 != uVar5) {
          pTVar2 = this->Values;
          uVar7 = 0;
          if ((int)uVar5 < pTVar2->ArrayNum) {
            uVar7 = ~uVar5 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10;
          local_38._0_8_ = *(undefined8 *)pFVar1;
          local_38.ControlRigElement.Name = *(FName *)(pFVar1 + 8);
          TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_>::RemoveAt
                    (this->Values,uVar5,No);
          TArray<FMovieSceneControlRigSpaceBaseKey,TSizedDefaultAllocator<32>_>::Insert
                    (this->Values,&local_38,uVar6);
        }
      }
      iVar8 = param_1->ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar9 < iVar8);
  }
  return;
}

// UpdateOrAddKey @ 14a463000

FKeyHandle __thiscall
TMovieSceneChannelData<unsigned_char>::UpdateOrAddKey
          (TMovieSceneChannelData<unsigned_char> *this,FFrameNumber param_1,uchar param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FFrameNumber FVar8;
  undefined7 in_register_00000081;
  FScriptContainerElement in_R9B;
  uint uVar9;
  FScriptContainerElement local_48 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_40;
  
  FVar8.Value = (int)CONCAT71(in_register_00000081,param_2);
  uVar4 = FMovieSceneChannelData::FindKey((FMovieSceneChannelData *)this,FVar8,(FFrameNumber)0x0);
  if (uVar4 == 0xffffffff) {
    local_48[0] = in_R9B;
    iVar5 = FMovieSceneChannelData::AddKeyInternal((FMovieSceneChannelData *)this,FVar8);
    pTVar1 = this->Values;
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar7 <= local_48) && (local_48 < pFVar7 + pTVar1->ArrayMax)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (FKeyHandle)uVar4;
      }
    }
    iVar6 = pTVar1->ArrayNum;
    if (iVar6 == pTVar1->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data + iVar5;
    pTVar1->ArrayNum = iVar6 + 1;
    memmove(pFVar7 + 1,pFVar7,(longlong)(iVar6 - iVar5));
    (pTVar1->AllocatorInstance).Data[iVar5] = local_48[0];
    if (this->_padding_ != 0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 8)
                        );
      if (bVar3) {
        local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_40.ArrayNum = 0;
        local_40.ArrayMax = 0;
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_40.AllocatorInstance,&local_40.ArrayMax);
        local_40.ArrayNum = iVar6 + 1;
        *(ulonglong *)(local_40.AllocatorInstance.Data + (longlong)iVar6 * 8) =
             CONCAT44(FVar8.Value,iVar5);
        TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&((FMovieSceneChannel *)this->_padding_)->KeyAddedEvent,
                    (FMovieSceneChannel *)this->_padding_,&local_40);
        if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    pTVar1 = this->Values;
    uVar9 = 0;
    if ((int)uVar4 < pTVar1->ArrayNum) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (FKeyHandle)uVar4;
      }
    }
    (pTVar1->AllocatorInstance).Data[(int)uVar4] = in_R9B;
  }
  FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)this,param_1.Value);
  return (FKeyHandle)param_1.Value;
}

