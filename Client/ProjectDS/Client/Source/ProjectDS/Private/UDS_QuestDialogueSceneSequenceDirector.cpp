// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b5734f0

UClass * __cdecl UDS_QuestDialogueSceneSequenceDirector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestDialogueSceneSequenceDirector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestDialogueSceneSequenceDirector",
               &Z_Registration_Info_UClass_UDS_QuestDialogueSceneSequenceDirector.InnerSingleton,
               StaticRegisterNativesUDS_QuestDialogueSceneSequenceDirector,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_QuestDialogueSceneSequenceDirector>,
               InternalVTableHelperCtorCaller<UDS_QuestDialogueSceneSequenceDirector>,local_res8,
               ULevelSequenceDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestDialogueSceneSequenceDirector.InnerSingleton;
}

// UDS_QuestDialogueSceneSequenceDirector @ 14b575240

UDS_QuestDialogueSceneSequenceDirector * __thiscall
UDS_QuestDialogueSceneSequenceDirector::UDS_QuestDialogueSceneSequenceDirector
          (UDS_QuestDialogueSceneSequenceDirector *this,FVTableHelper *param_1)

{
  ULevelSequenceDirector::ULevelSequenceDirector((ULevelSequenceDirector *)this,param_1);
  *(undefined ***)this = &___7UDS_QuestDialogueSceneSequenceDirector__6B_;
  return this;
}

// UDS_QuestDialogueSceneSequenceDirector @ 14b575270

UDS_QuestDialogueSceneSequenceDirector * __thiscall
UDS_QuestDialogueSceneSequenceDirector::UDS_QuestDialogueSceneSequenceDirector
          (UDS_QuestDialogueSceneSequenceDirector *this,FObjectInitializer *param_1)

{
  ULevelSequenceDirector::ULevelSequenceDirector((ULevelSequenceDirector *)this,param_1);
  *(undefined ***)this = &___7UDS_QuestDialogueSceneSequenceDirector__6B_;
  return this;
}

// ~UDS_QuestDialogueSceneSequenceDirector @ 14b575da0

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::~UDS_QuestDialogueSceneSequenceDirector
          (UDS_QuestDialogueSceneSequenceDirector *this)

{
  *(undefined ***)this = &___7UDS_QuestDialogueSceneSequenceDirector__6B_;
  ULevelSequenceDirector::~ULevelSequenceDirector((ULevelSequenceDirector *)this);
  return;
}

// GetPrivateStaticClass @ 14b576ac0

UClass * __cdecl UDS_QuestDialogueSceneSequenceDirector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestDialogueSceneSequenceDirector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestDialogueSceneSequenceDirector",
               &Z_Registration_Info_UClass_UDS_QuestDialogueSceneSequenceDirector.InnerSingleton,
               StaticRegisterNativesUDS_QuestDialogueSceneSequenceDirector,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_QuestDialogueSceneSequenceDirector>,
               InternalVTableHelperCtorCaller<UDS_QuestDialogueSceneSequenceDirector>,local_res8,
               ULevelSequenceDirector::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestDialogueSceneSequenceDirector.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestDialogueSceneSequenceDirector @ 14b576ea0

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::StaticRegisterNativesUDS_QuestDialogueSceneSequenceDirector
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UDS_QuestDialogueSceneSequenceDirector_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTargetActor @ 14b577d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execGetTargetActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  AActor *pAVar2;
  longlong lVar3;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_20;
  local_18.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_18,(int)local_20,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  pAVar2 = GetTargetActor((UDS_QuestDialogueSceneSequenceDirector *)param_1,&local_18);
  *(AActor **)param_3 = pAVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execOnEndLookAt @ 14b577f60

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnEndLookAt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res20;
  UObject *local_18 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  OnEndLookAt((UDS_QuestDialogueSceneSequenceDirector *)param_1,local_res20,
              (TSubclassOf<UControlRig>)local_18);
  return;
}

// execOnHideSkipButton @ 14b578050

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnHideSkipButton
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnHideSkipButton((UDS_QuestDialogueSceneSequenceDirector *)param_1);
  return;
}

// execOnHideUI @ 14b578070

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnHideUI(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnHideUI((UDS_QuestDialogueSceneSequenceDirector *)param_1);
  return;
}

// execOnPause @ 14b578090

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnPause(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnPause((UDS_QuestDialogueSceneSequenceDirector *)param_1);
  return;
}

// execOnPlay @ 14b5780b0

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnPlay((UDS_QuestDialogueSceneSequenceDirector *)param_1);
  return;
}

// execOnShowSkipButton @ 14b5780d0

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnShowSkipButton
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnShowSkipButton((UDS_QuestDialogueSceneSequenceDirector *)param_1);
  return;
}

// execOnShowUI @ 14b5780f0

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnShowUI(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnShowUI((UDS_QuestDialogueSceneSequenceDirector *)param_1);
  return;
}

// execOnStartLookAt @ 14b578110

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnStartLookAt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  UObject *local_res10;
  UObject *local_res20;
  UObject *local_48;
  void *local_40;
  undefined8 local_38;
  FString local_30;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_40 = (void *)0x0;
  local_38 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  _Src = local_40;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_38;
  local_30.Data.ArrayNum = (int)local_38;
  if ((int)local_38 == 0) {
    local_30.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_38,0,(ForAnyElementType *)&local_30,(int)local_38,
               &local_30.Data.ArrayMax);
    memcpy(local_30.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  local_48 = local_res10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  OnStartLookAt((UDS_QuestDialogueSceneSequenceDirector *)param_1,local_res20,
                (TSubclassOf<UControlRig>)&local_48,&local_30);
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execOnTalkDialogue @ 14b5782b0

void __cdecl
UDS_QuestDialogueSceneSequenceDirector::execOnTalkDialogue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnTalkDialogue((UDS_QuestDialogueSceneSequenceDirector *)param_1,local_res20[0],local_res10[0]);
  return;
}

// GetTargetActor @ 14bb108b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

AActor * __thiscall
UDS_QuestDialogueSceneSequenceDirector::GetTargetActor
          (UDS_QuestDialogueSceneSequenceDirector *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UMovieSceneSequence *pUVar4;
  longlong lVar5;
  ulonglong uVar6;
  AActor *pAVar7;
  UObject *pUVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  FName local_res18;
  uint local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_98;
  FString local_88 [2];
  undefined8 local_68;
  FMovieSceneObjectBindingID local_58;
  
  pUVar4 = ULevelSequenceDirector::GetSequence((ULevelSequenceDirector *)this);
  if ((pUVar4 != (UMovieSceneSequence *)0x0) &&
     (lVar5 = (**(code **)(pUVar4->_padding_ + 0x2f8))(pUVar4), lVar5 != 0)) {
    lVar10 = *(longlong *)(lVar5 + 0x98);
    local_res20 = *(uint *)(lVar5 + 0xa0);
    uVar6 = (ulonglong)(int)local_res20;
    lVar14 = uVar6 * 0x40 + lVar10;
    puVar15 = (undefined8 *)(lVar10 + 0x10);
    while( true ) {
      if (*(int *)(lVar5 + 0xa0) != (int)uVar6) {
        `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res18);
      }
      if (lVar10 == lVar14) break;
      local_58.Guid._0_8_ = *puVar15;
      local_58.Guid._8_8_ = puVar15[1];
      local_68 = 0;
      local_58.SequenceID = 0;
      local_58.ResolveParentIndex = 0;
      pAVar7 = ULevelSequenceDirector::GetBoundActor((ULevelSequenceDirector *)this,&local_58);
      if ((pAVar7 != (AActor *)0x0) && (!(bool)pAVar7->bHidden)) {
        local_res18 = (FName)pAVar7->_padding_;
        ::FName::ToString(&local_res18,local_88);
        iVar13 = (param_1->Data).ArrayNum;
        iVar12 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar12 = 0;
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        bVar3 = ::FString::StartsWith(local_88,pwVar9,iVar12,IgnoreCase);
        if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pFVar2 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar2 == (FScriptContainerElement *)0x0) {
            return pAVar7;
          }
          FMemory::Free(pFVar2);
          return pAVar7;
        }
      }
      uVar6 = (ulonglong)local_res20;
      lVar10 = lVar10 + 0x40;
      puVar15 = puVar15 + 8;
    }
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_res18 = (FName)Z_Construct_UClass_ADS_PartsSystemActor_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    pUVar8 = (UObject *)(**(code **)(*(longlong *)this + 0x180))(this);
    UGameplayStatics::GetAllActorsOfClass(pUVar8,(TSubclassOf<AActor>)&local_res18,&local_98);
    iVar12 = local_98.ArrayNum;
    uVar6 = (ulonglong)local_98.ArrayNum;
    pFVar2 = local_98.AllocatorInstance.Data + uVar6 * 8;
    FVar11.Data = local_98.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != iVar12) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      if (FVar11.Data == pFVar2) break;
      pAVar7 = *(AActor **)FVar11.Data;
      local_res18 = (FName)pAVar7->_padding_;
      ::FName::ToString(&local_res18,local_88);
      iVar1 = (param_1->Data).ArrayNum;
      iVar13 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar13 = 0;
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar3 = ::FString::StartsWith(local_88,pwVar9,iVar13,IgnoreCase);
      if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar2 == (FScriptContainerElement *)0x0) {
          return pAVar7;
        }
        FMemory::Free(pFVar2);
        return pAVar7;
      }
      uVar6 = local_98._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (AActor *)0x0;
}

// OnEndLookAt @ 14bb1deb0

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnEndLookAt
          (UDS_QuestDialogueSceneSequenceDirector *this,UObject *param_1,
          TSubclassOf<UControlRig> param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_LookAtControlRig *this_00;
  int iVar3;
  UClass *pUVar4;
  ForAnyElementType FVar5;
  UObject *local_res18;
  TArray<UControlRig_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  UControlRig::FindControlRigs(&local_18,param_1,(TSubclassOf<UControlRig>)&local_res18);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
  FVar5.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UControlRig_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res18);
    }
    if (FVar5.Data == pFVar1) break;
    this_00 = *(UDS_LookAtControlRig **)FVar5.Data;
    if (this_00 != (UDS_LookAtControlRig *)0x0) {
      pUVar4 = Z_Construct_UClass_UDS_LookAtControlRig_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        pUVar4 = Z_Construct_UClass_UDS_LookAtControlRig_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar4->_padding_)) {
          UDS_LookAtControlRig::SetLookAtWeight(this_00,0.0);
        }
      }
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnHideSkipButton @ 14bb1e510

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnHideSkipButton
          (UDS_QuestDialogueSceneSequenceDirector *this)

{
  UDS_QuestDialogueSceneManager *this_00;
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    local_28[0].QuestMainDialogueTableID = 0;
    local_28[0].CurTime = 0.0;
    local_28[0].KeepTime = 0.0;
    local_28[0].SequencePlaybackTime = 0.0;
    local_28[0].EventType = ShowSkipButton;
    UDS_QuestDialogueSceneManager::SetQuestDialogueSceneEventData(this_00,local_28);
  }
  return;
}

// OnHideUI @ 14bb1e590

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnHideUI(UDS_QuestDialogueSceneSequenceDirector *this)

{
  UDS_QuestDialogueSceneManager *this_00;
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    local_28[0].QuestMainDialogueTableID = 0;
    local_28[0].CurTime = 0.0;
    local_28[0].KeepTime = 0.0;
    local_28[0].SequencePlaybackTime = 0.0;
    local_28[0].EventType = HideUI;
    UDS_QuestDialogueSceneManager::SetQuestDialogueSceneEventData(this_00,local_28);
  }
  return;
}

// OnPause @ 14bb20b00

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnPause(UDS_QuestDialogueSceneSequenceDirector *this)

{
  bool bVar1;
  UDS_QuestDialogueSceneManager *pUVar2;
  UDS_LevelSequenceEvent *pUVar3;
  
  pUVar2 = UDS_QuestDialogueSceneManager::GetInst();
  if ((pUVar2 != (UDS_QuestDialogueSceneManager *)0x0) &&
     (pUVar3 = UDS_LevelSequenceEvent::GetEvent(), pUVar3 != (UDS_LevelSequenceEvent *)0x0)) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->LevelSequencePauseDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->LevelSequencePauseDelegate).Delegate);
      return;
    }
  }
  return;
}

// OnPlay @ 14bb20b70

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnPlay(UDS_QuestDialogueSceneSequenceDirector *this)

{
  bool bVar1;
  UDS_QuestDialogueSceneManager *pUVar2;
  UDS_LevelSequenceEvent *pUVar3;
  
  pUVar2 = UDS_QuestDialogueSceneManager::GetInst();
  if ((pUVar2 != (UDS_QuestDialogueSceneManager *)0x0) &&
     (pUVar3 = UDS_LevelSequenceEvent::GetEvent(), pUVar3 != (UDS_LevelSequenceEvent *)0x0)) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->LevelSequencePlayDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->LevelSequencePlayDelegate).Delegate);
      return;
    }
  }
  return;
}

// OnShowSkipButton @ 14bb22e00

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnShowSkipButton
          (UDS_QuestDialogueSceneSequenceDirector *this)

{
  UDS_QuestDialogueSceneManager *this_00;
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    local_28[0].QuestMainDialogueTableID = 0;
    local_28[0].CurTime = 0.0;
    local_28[0].KeepTime = 0.0;
    local_28[0].SequencePlaybackTime = 0.0;
    local_28[0].EventType = ShowSkipButton;
    UDS_QuestDialogueSceneManager::SetQuestDialogueSceneEventData(this_00,local_28);
  }
  return;
}

// OnShowUI @ 14bb22e80

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnShowUI(UDS_QuestDialogueSceneSequenceDirector *this)

{
  UDS_QuestDialogueSceneManager *this_00;
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    local_28[0].QuestMainDialogueTableID = 0;
    local_28[0].CurTime = 0.0;
    local_28[0].KeepTime = 0.0;
    local_28[0].SequencePlaybackTime = 0.0;
    local_28[0].EventType = ShowUI;
    UDS_QuestDialogueSceneManager::SetQuestDialogueSceneEventData(this_00,local_28);
  }
  return;
}

// OnStartLookAt @ 14bb23080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnStartLookAt
          (UDS_QuestDialogueSceneSequenceDirector *this,UObject *param_1,
          TSubclassOf<UControlRig> param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UDS_LookAtControlRig *this_00;
  bool bVar4;
  float fVar5;
  FString *pFVar6;
  ADS_PartsSystemActor *this_01;
  UClass *pUVar7;
  ForAnyElementType FVar8;
  undefined1 local_78 [8];
  FName local_70;
  TArray<UControlRig_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  TVector<double> local_48 [2];
  
  pFVar6 = ::FString::FString(&local_58,param_3);
  this_01 = (ADS_PartsSystemActor *)GetTargetActor(this,pFVar6);
  if (this_01 != (ADS_PartsSystemActor *)0x0) {
    pUVar7 = Z_Construct_UClass_ADS_PartsSystemActor_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      pUVar7 = Z_Construct_UClass_ADS_PartsSystemActor_NoRegister();
      iVar2 = (int)pUVar7->_padding_;
      if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar7->_padding_)) {
        local_70 = *(FName *)param_2.Class.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_70);
        }
        UControlRig::FindControlRigs(&local_68,param_1,(TSubclassOf<UControlRig>)&local_70);
        iVar2 = local_68.ArrayNum;
        fVar5 = __real_3f800000;
        pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
        FVar8.Data = local_68.AllocatorInstance.Data;
        while( true ) {
          if (local_68.ArrayNum != iVar2) {
            `TCheckedPointerIterator<UControlRig_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_78);
          }
          if (FVar8.Data == pFVar1) break;
          this_00 = *(UDS_LookAtControlRig **)FVar8.Data;
          if (this_00 != (UDS_LookAtControlRig *)0x0) {
            pUVar7 = Z_Construct_UClass_UDS_LookAtControlRig_NoRegister();
            iVar3 = (int)pUVar7->_padding_;
            if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar7->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              pUVar7 = Z_Construct_UClass_UDS_LookAtControlRig_NoRegister();
              iVar3 = (int)pUVar7->_padding_;
              if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
                  == &pUVar7->_padding_)) {
                ::FName::FName(&local_70,L"head");
                ADS_PartsSystemActor::GetSocketLocation(this_01,local_48,local_70);
                UDS_LookAtControlRig::SetLookAtWeight(this_00,fVar5);
                UDS_LookAtControlRig::SetLookAtLocation(this_00,local_48);
              }
            }
          }
          FVar8.Data = FVar8.Data + 8;
        }
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
      }
      goto LAB_14bb23263;
    }
  }
  if (2 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
LAB_14bb23263:
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnTalkDialogue @ 14bb23380

void __thiscall
UDS_QuestDialogueSceneSequenceDirector::OnTalkDialogue
          (UDS_QuestDialogueSceneSequenceDirector *this,int param_1,float param_2)

{
  EDS_DialogueSceneType EVar1;
  bool bVar2;
  UDS_QuestDialogueSceneManager *this_00;
  FQualifiedFrameTime *pFVar3;
  FDS_QuestMainDialogueTableRow *this_01;
  int iVar4;
  float fStackX_24;
  FQualifiedFrameTime local_58;
  FDS_QuestDialogueSceneEventData local_48 [3];
  
  this_00 = UDS_QuestDialogueSceneManager::GetInst();
  if (this_00 != (UDS_QuestDialogueSceneManager *)0x0) {
    pFVar3 = ULevelSequenceDirector::GetCurrentTime((ULevelSequenceDirector *)this,&local_58);
    iVar4 = (pFVar3->Rate).Denominator;
    fStackX_24 = (pFVar3->Time).SubFrame;
    local_48[0].CurTime =
         ((float)((longlong)iVar4 * (longlong)(pFVar3->Time).FrameNumber.Value) +
         (float)iVar4 * fStackX_24) / (float)(pFVar3->Rate).Numerator;
    if (0 < param_1) {
      this_01 = FDS_QuestMainDialogueTableRow::GetRef((longlong)param_1,true);
      bVar2 = FDS_QuestMainDialogueTableRow::IsValid(this_01);
      if (bVar2) {
        local_48[0].EventType = None;
        EVar1 = this_01->DialogueSceneType;
        if (EVar1 == Normal) {
          local_48[0].EventType = TalkNormal;
        }
        else if (EVar1 == Next) {
          local_48[0].EventType = TalkNext;
        }
        else if (EVar1 == Select) {
          local_48[0].EventType = TalkSelect;
        }
        local_48[0].SequencePlaybackTime = local_48[0].CurTime + param_2;
        (this_00->DialogueSceneEventData).EventType = local_48[0].EventType;
        (this_00->DialogueSceneEventData).QuestMainDialogueTableID = param_1;
        (this_00->DialogueSceneEventData).CurTime = local_48[0].CurTime;
        (this_00->DialogueSceneEventData).KeepTime = param_2;
        (this_00->DialogueSceneEventData).SequencePlaybackTime = local_48[0].SequencePlaybackTime;
        local_48[0].QuestMainDialogueTableID = param_1;
        local_48[0].KeepTime = param_2;
        UDS_QuestDialogueSceneManager::SetQuestDialogueSceneEventData(this_00,local_48);
      }
    }
  }
  return;
}

