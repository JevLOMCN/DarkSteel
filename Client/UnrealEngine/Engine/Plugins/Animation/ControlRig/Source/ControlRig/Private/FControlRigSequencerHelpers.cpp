// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// FindControlRigTrack @ 14a40ab20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneControlRigParameterTrack * __cdecl
FControlRigSequencerHelpers::FindControlRigTrack(UMovieSceneSequence *param_1,UControlRig *param_2)

{
  int iVar1;
  int iVar2;
  UMovieScene *this;
  UMovieSceneControlRigParameterTrack *pUVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FUObjectCppClassStaticFunctions local_res8;
  FName local_res18;
  UClass *local_res20;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    return (UMovieSceneControlRigParameterTrack *)0x0;
  }
  this = (UMovieScene *)(**(code **)(param_1->_padding_ + 0x2f8))();
  iVar1 = (this->ObjectBindings).ArrayNum;
  pFVar5 = (this->ObjectBindings).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->ObjectBindings).ArrayNum != iVar1) {
      local_res8.AddReferencedObjects = local_res8.AddReferencedObjects & 0xffffffffffffff00;
      `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar5 == pFVar6) break;
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    if (Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton ==
        (UClass *)0x0) {
      local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/ControlRig",L"MovieSceneControlRigParameterTrack",
                 &Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton,
                 UMovieSceneControlRigParameterTrack::
                 StaticRegisterNativesUMovieSceneControlRigParameterTrack,0x2a8,8,CLASS_Intrinsic,
                 CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneControlRigParameterTrack>,
                 InternalVTableHelperCtorCaller<UMovieSceneControlRigParameterTrack>,&local_res8,
                 UMovieSceneNameableTrack::StaticClass,UObject::StaticClass);
    }
    local_res20 = Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton !=
        (UClass *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)
                 Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.InnerSingleton);
    }
    pUVar3 = (UMovieSceneControlRigParameterTrack *)
             UMovieScene::FindTrack
                       (this,(TSubclassOf<UMovieSceneTrack>)&local_res20,(FGuid *)(pFVar5 + 0x10),
                        &local_res18);
    if (pUVar3 != (UMovieSceneControlRigParameterTrack *)0x0) {
      pUVar4 = UMovieSceneControlRigParameterTrack::StaticClass();
      iVar2 = (int)pUVar4->_padding_;
      if (((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar4->_padding_)) && ((pUVar3->ControlRig).field0_0x0.DebugPtr == param_2)) {
        return pUVar3;
      }
    }
    pFVar5 = pFVar5 + 0x40;
  }
  return (UMovieSceneControlRigParameterTrack *)0x0;
}

// GetBoolChannels @ 14a411450

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArrayView<FMovieSceneBoolChannel_*,int> * __cdecl
FControlRigSequencerHelpers::GetBoolChannels
          (TArrayView<FMovieSceneBoolChannel_*,int> *__return_storage_ptr__,UControlRig *param_1,
          FName *param_2,UMovieSceneSection *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  FChannelMapInfo *pFVar6;
  FMovieSceneChannelProxy *this;
  TArrayView<FMovieSceneBoolChannel_*,int> *pTVar7;
  TArrayView<FMovieSceneBoolChannel_*,int> local_18;
  
  if (param_3 != (UMovieSceneSection *)0x0) {
    pUVar4 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((((iVar1 <= *(int *)(param_3->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) && (param_1 != (UControlRig *)0x0)) &&
        ((lVar5 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1,param_2), lVar5 != 0 &&
         (*(char *)(lVar5 + 0x231) == '\0')))) &&
       (pFVar6 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                 ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                         *)&param_3[3]._padding_,*param_2), pFVar6 != (FChannelMapInfo *)0x0)) {
      this = UMovieSceneSection::GetChannelProxy(param_3);
      FMovieSceneChannelProxy::GetChannels<FMovieSceneBoolChannel>(this,&local_18);
      iVar1 = pFVar6->ChannelIndex;
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15b,L"Invalid index (%lld)"), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArrayView<FMovieSceneBoolChannel_*,int> *)(*pcVar2)();
        return pTVar7;
      }
      if ((local_18.ArrayNum < iVar1 + 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index + InNum <= ArrayNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15d,
                             L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TArrayView<FMovieSceneBoolChannel_*,int> *)(*pcVar2)();
        return pTVar7;
      }
      __return_storage_ptr__->ArrayNum = 1;
      __return_storage_ptr__->DataPtr = local_18.DataPtr + iVar1;
      return __return_storage_ptr__;
    }
  }
  *__return_storage_ptr__ = EmptyChannelsView;
  return __return_storage_ptr__;
}

// GetByteChannels @ 14a4118d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArrayView<FMovieSceneByteChannel_*,int> * __cdecl
FControlRigSequencerHelpers::GetByteChannels
          (TArrayView<FMovieSceneByteChannel_*,int> *__return_storage_ptr__,UControlRig *param_1,
          FName *param_2,UMovieSceneSection *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  FChannelMapInfo *pFVar6;
  UScriptStruct *pUVar7;
  FMovieSceneChannelProxy *this;
  TArrayView<FMovieSceneByteChannel_*,int> *pTVar8;
  TArrayView<FMovieSceneByteChannel_*,int> local_18;
  
  if (param_3 != (UMovieSceneSection *)0x0) {
    pUVar4 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((((iVar1 <= *(int *)(param_3->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) && (param_1 != (UControlRig *)0x0)) &&
        ((lVar5 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1,param_2), lVar5 != 0 &&
         (*(char *)(lVar5 + 0x231) == '\x02')))) &&
       ((*(longlong *)(lVar5 + 0x380) != 0 &&
        ((pFVar6 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                           *)&param_3[3]._padding_,*param_2), pFVar6 != (FChannelMapInfo *)0x0 &&
         (pUVar7 = FMovieSceneByteChannel::StaticStruct(),
         pFVar6->ChannelTypeName == (FName)pUVar7->_padding_)))))) {
      this = UMovieSceneSection::GetChannelProxy(param_3);
      FMovieSceneChannelProxy::GetChannels<FMovieSceneByteChannel>(this,&local_18);
      iVar1 = pFVar6->ChannelIndex;
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15b,L"Invalid index (%lld)"), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArrayView<FMovieSceneByteChannel_*,int> *)(*pcVar2)();
        return pTVar8;
      }
      if ((local_18.ArrayNum < iVar1 + 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index + InNum <= ArrayNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15d,
                             L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArrayView<FMovieSceneByteChannel_*,int> *)(*pcVar2)();
        return pTVar8;
      }
      __return_storage_ptr__->ArrayNum = 1;
      __return_storage_ptr__->DataPtr = local_18.DataPtr + iVar1;
      return __return_storage_ptr__;
    }
  }
  *__return_storage_ptr__ = EmptyChannelsView;
  return __return_storage_ptr__;
}

// GetFloatChannels @ 14a413e80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArrayView<FMovieSceneFloatChannel_*,int> * __cdecl
FControlRigSequencerHelpers::GetFloatChannels
          (TArrayView<FMovieSceneFloatChannel_*,int> *__return_storage_ptr__,UControlRig *param_1,
          FName *param_2,UMovieSceneSection *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  FChannelMapInfo *pFVar6;
  FMovieSceneChannelProxy *this;
  UScriptStruct *pUVar7;
  FMovieSceneChannelEntry *pFVar8;
  TArrayView<FMovieSceneFloatChannel_*,int> *pTVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  
  if (param_3 == (UMovieSceneSection *)0x0) goto LAB_14a414037;
  pUVar4 = UMovieSceneControlRigParameterSection::StaticClass();
  iVar12 = (int)pUVar4->_padding_;
  if ((*(int *)(param_3->_padding_ + 0x38) < iVar12) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar12 * 8)
      != &pUVar4->_padding_)) goto LAB_14a414037;
  if ((param_1 == (UControlRig *)0x0) ||
     (lVar5 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1,param_2), lVar5 == 0)) {
switchD_14a413f14_caseD_2:
    iVar12 = 0;
  }
  else {
    switch(*(undefined1 *)(lVar5 + 0x231)) {
    case 1:
    case 10:
      iVar12 = 1;
      break;
    default:
      goto switchD_14a413f14_caseD_2;
    case 3:
      iVar12 = 2;
      break;
    case 4:
    case 5:
    case 6:
      iVar12 = 3;
      break;
    case 7:
    case 9:
      iVar12 = 9;
      break;
    case 8:
      iVar12 = 6;
    }
  }
  pFVar11 = (FScriptContainerElement *)0x0;
  pFVar6 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
           ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   *)&param_3[3]._padding_,*param_2);
  if ((pFVar6 != (FChannelMapInfo *)0x0) && (iVar12 != 0)) {
    this = UMovieSceneSection::GetChannelProxy(param_3);
    pUVar7 = FMovieSceneFloatChannel::StaticStruct();
    pFVar8 = FMovieSceneChannelProxy::FindEntry(this,(FName)pUVar7->_padding_);
    if (pFVar8 == (FMovieSceneChannelEntry *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (pFVar8->Channels).ArrayNum;
      pFVar11 = (pFVar8->Channels).AllocatorInstance.Data;
      if ((iVar10 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArrayView<FMovieSceneFloatChannel_*,int> *)(*pcVar2)();
        return pTVar9;
      }
    }
    iVar1 = pFVar6->ChannelIndex;
    if ((iVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15b,L"Invalid index (%lld)"), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArrayView<FMovieSceneFloatChannel_*,int> *)(*pcVar2)();
      return pTVar9;
    }
    if ((iVar10 < iVar12 + iVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index + InNum <= ArrayNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x15d,
                           L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TArrayView<FMovieSceneFloatChannel_*,int> *)(*pcVar2)();
      return pTVar9;
    }
    __return_storage_ptr__->ArrayNum = iVar12;
    __return_storage_ptr__->DataPtr = (FMovieSceneFloatChannel **)(pFVar11 + (longlong)iVar1 * 8);
    return __return_storage_ptr__;
  }
LAB_14a414037:
  *__return_storage_ptr__ = EmptyChannelsView;
  return __return_storage_ptr__;
}

// GetInfoAndNumFloatChannels @ 14a414d20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FChannelMapInfo_const_*,int> * __cdecl
FControlRigSequencerHelpers::GetInfoAndNumFloatChannels
          (TTuple<FChannelMapInfo_const_*,int> *__return_storage_ptr__,UControlRig *param_1,
          FName *param_2,UMovieSceneControlRigParameterSection *param_3)

{
  longlong lVar1;
  FChannelMapInfo *pFVar2;
  undefined4 uVar3;
  
  if ((param_1 == (UControlRig *)0x0) ||
     (lVar1 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1), lVar1 == 0)) {
switchD_14a414d7e_caseD_2:
    uVar3 = 0;
  }
  else {
    switch(*(undefined1 *)(lVar1 + 0x231)) {
    case 1:
    case 10:
      uVar3 = 1;
      break;
    default:
      goto switchD_14a414d7e_caseD_2;
    case 3:
      uVar3 = 2;
      break;
    case 4:
    case 5:
    case 6:
      uVar3 = 3;
      break;
    case 7:
    case 9:
      uVar3 = 9;
      break;
    case 8:
      uVar3 = 6;
    }
  }
  pFVar2 = (FChannelMapInfo *)0x0;
  if (param_3 != (UMovieSceneControlRigParameterSection *)0x0) {
    pFVar2 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
             ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                     *)&param_3->ControlChannelMap,*param_2);
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(FChannelMapInfo **)__return_storage_ptr__ = pFVar2;
  return __return_storage_ptr__;
}

// GetIntegerChannels @ 14a415460

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArrayView<FMovieSceneIntegerChannel_*,int> * __cdecl
FControlRigSequencerHelpers::GetIntegerChannels
          (TArrayView<FMovieSceneIntegerChannel_*,int> *__return_storage_ptr__,UControlRig *param_1,
          FName *param_2,UMovieSceneSection *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  FChannelMapInfo *pFVar6;
  UScriptStruct *pUVar7;
  FMovieSceneChannelProxy *this;
  TArrayView<FMovieSceneIntegerChannel_*,int> *pTVar8;
  TArrayView<FMovieSceneIntegerChannel_*,int> local_18;
  
  if (param_3 != (UMovieSceneSection *)0x0) {
    pUVar4 = UMovieSceneControlRigParameterSection::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((((iVar1 <= *(int *)(param_3->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar4->_padding_)) && (param_1 != (UControlRig *)0x0)) &&
        ((lVar5 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1,param_2), lVar5 != 0 &&
         (*(char *)(lVar5 + 0x231) == '\x02')))) &&
       ((*(longlong *)(lVar5 + 0x380) == 0 &&
        ((pFVar6 = TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                   ::Find((TMapBase<FName,FChannelMapInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FChannelMapInfo,0>_>
                           *)&param_3[3]._padding_,*param_2), pFVar6 != (FChannelMapInfo *)0x0 &&
         (pUVar7 = FMovieSceneIntegerChannel::StaticStruct(),
         pFVar6->ChannelTypeName == (FName)pUVar7->_padding_)))))) {
      this = UMovieSceneSection::GetChannelProxy(param_3);
      FMovieSceneChannelProxy::GetChannels<FMovieSceneIntegerChannel>(this,&local_18);
      iVar1 = pFVar6->ChannelIndex;
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15b,L"Invalid index (%lld)"), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArrayView<FMovieSceneIntegerChannel_*,int> *)(*pcVar2)();
        return pTVar8;
      }
      if ((local_18.ArrayNum < iVar1 + 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index + InNum <= ArrayNum",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x15d,
                             L"Range (index: %lld, count: %lld) lies outside the view of %lld elements"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArrayView<FMovieSceneIntegerChannel_*,int> *)(*pcVar2)();
        return pTVar8;
      }
      __return_storage_ptr__->ArrayNum = 1;
      __return_storage_ptr__->DataPtr = local_18.DataPtr + iVar1;
      return __return_storage_ptr__;
    }
  }
  *__return_storage_ptr__ = EmptyChannelsView;
  return __return_storage_ptr__;
}

