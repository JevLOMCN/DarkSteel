// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 1474a2280

UClass * __cdecl UAnimNotifyStateMachineInspectionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyStateMachineInspectionLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNotifyStateMachineInspectionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyStateMachineInspectionLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyStateMachineInspectionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton;
}

// UAnimNotifyStateMachineInspectionLibrary @ 1474b3e00

UAnimNotifyStateMachineInspectionLibrary * __thiscall
UAnimNotifyStateMachineInspectionLibrary::UAnimNotifyStateMachineInspectionLibrary
          (UAnimNotifyStateMachineInspectionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyStateMachineInspectionLibrary__6B_;
  return this;
}

// UAnimNotifyStateMachineInspectionLibrary @ 1474b3e30

UAnimNotifyStateMachineInspectionLibrary * __thiscall
UAnimNotifyStateMachineInspectionLibrary::UAnimNotifyStateMachineInspectionLibrary
          (UAnimNotifyStateMachineInspectionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyStateMachineInspectionLibrary__6B_;
  return this;
}

// ~UAnimNotifyStateMachineInspectionLibrary @ 1474b5600

void __thiscall
UAnimNotifyStateMachineInspectionLibrary::~UAnimNotifyStateMachineInspectionLibrary
          (UAnimNotifyStateMachineInspectionLibrary *this)

{
  *(undefined ***)this = &___7UAnimNotifyStateMachineInspectionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 1474dd190

UClass * __cdecl UAnimNotifyStateMachineInspectionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyStateMachineInspectionLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNotifyStateMachineInspectionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyStateMachineInspectionLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyStateMachineInspectionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.InnerSingleton;
}

// IsStateInStateMachineInEventContext @ 1474e9f20

bool __cdecl
UAnimNotifyStateMachineInspectionLibrary::IsStateInStateMachineInEventContext
          (FAnimNotifyEventReference *param_1,int param_2,int param_3)

{
  bool bVar1;
  FAnimNotifyStateMachineContext *this;
  
  this = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                   (param_1);
  if (this != (FAnimNotifyStateMachineContext *)0x0) {
    bVar1 = UE::Anim::FAnimNotifyStateMachineContext::IsStateInStateMachineInContext
                      (this,param_2,param_3);
    return bVar1;
  }
  return false;
}

// IsStateMachineInEventContext @ 1474e9f70

bool __cdecl
UAnimNotifyStateMachineInspectionLibrary::IsStateMachineInEventContext
          (FAnimNotifyEventReference *param_1,int param_2)

{
  bool bVar1;
  FAnimNotifyStateMachineContext *this;
  
  this = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                   (param_1);
  if (this != (FAnimNotifyStateMachineContext *)0x0) {
    bVar1 = UE::Anim::FAnimNotifyStateMachineContext::IsStateMachineInContext(this,param_2);
    return bVar1;
  }
  return false;
}

// IsTriggeredByState @ 1474ea0d0

bool __cdecl
UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByState
          (FAnimNotifyEventReference *param_1,UAnimInstance *param_2,FName param_3)

{
  FStateMachineEntry *pFVar1;
  int iVar2;
  uint uVar3;
  FBakedAnimationStateMachine *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FAnimNotifyStateMachineContext *pFVar9;
  FAnimNode_StateMachine *pFVar10;
  FStateMachineEntry *pFVar11;
  undefined1 local_res10 [8];
  
  if ((param_2 != (UAnimInstance *)0x0) &&
     (pFVar9 = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                         (param_1), pFVar9 != (FAnimNotifyStateMachineContext *)0x0)) {
    pFVar11 = (pFVar9->EncounteredStateMachines).StateStack.AllocatorInstance.SecondaryData.Data;
    iVar2 = (pFVar9->EncounteredStateMachines).StateStack.ArrayNum;
    if (pFVar11 == (FStateMachineEntry *)0x0) {
      pFVar11 = (FStateMachineEntry *)&pFVar9->EncounteredStateMachines;
    }
    pFVar1 = pFVar11 + iVar2;
    while( true ) {
      if ((pFVar9->EncounteredStateMachines).StateStack.ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FEncounteredStateMachineStack::FStateMachineEntry_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar1) break;
      pFVar10 = UAnimInstance::GetStateMachineInstance(param_2,pFVar11->StateMachineIndex);
      uVar3 = pFVar11->StateIndex;
      pFVar4 = pFVar10->PRIVATE_MachineDescription;
      uVar8 = 0;
      if ((int)uVar3 < (pFVar4->States).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(FName *)((pFVar4->States).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x50 + 0x30)
          == param_3) {
        return true;
      }
      pFVar11 = pFVar11 + 1;
    }
  }
  return false;
}

// IsTriggeredByStateInStateMachine @ 1474ea1e0

bool __cdecl
UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByStateInStateMachine
          (FAnimNotifyEventReference *param_1,UAnimInstance *param_2,FName param_3,FName param_4)

{
  bool bVar1;
  int iVar2;
  FAnimNotifyStateMachineContext *this;
  int local_res10 [2];
  FName local_res20;
  FBakedAnimationStateMachine *local_18 [2];
  
  if (param_2 != (UAnimInstance *)0x0) {
    local_18[0] = (FBakedAnimationStateMachine *)0x0;
    local_res20 = param_4;
    UAnimInstance::GetStateMachineIndexAndDescription(param_2,param_3,local_res10,local_18);
    if ((local_res10[0] != -1) && (local_18[0] != (FBakedAnimationStateMachine *)0x0)) {
      iVar2 = FBakedAnimationStateMachine::FindStateIndex(local_18[0],&local_res20);
      this = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                       (param_1);
      if (this != (FAnimNotifyStateMachineContext *)0x0) {
        bVar1 = UE::Anim::FAnimNotifyStateMachineContext::IsStateInStateMachineInContext
                          (this,local_res10[0],iVar2);
        if (bVar1) {
          return true;
        }
      }
      return false;
    }
  }
  return false;
}

// IsTriggeredByStateMachine @ 1474ea2a0

bool __cdecl
UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByStateMachine
          (FAnimNotifyEventReference *param_1,UAnimInstance *param_2,FName param_3)

{
  bool bVar1;
  FAnimNotifyStateMachineContext *this;
  int local_res10 [4];
  FBakedAnimationStateMachine *local_res20;
  
  if (param_2 != (UAnimInstance *)0x0) {
    local_res20 = (FBakedAnimationStateMachine *)0x0;
    UAnimInstance::GetStateMachineIndexAndDescription(param_2,param_3,local_res10,&local_res20);
    if (local_res10[0] != -1) {
      this = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                       (param_1);
      if (this != (FAnimNotifyStateMachineContext *)0x0) {
        bVar1 = UE::Anim::FAnimNotifyStateMachineContext::IsStateMachineInContext
                          (this,local_res10[0]);
        if (bVar1) {
          return true;
        }
      }
    }
  }
  return false;
}

// StaticRegisterNativesUAnimNotifyStateMachineInspectionLibrary @ 1474fadf0

void __cdecl
UAnimNotifyStateMachineInspectionLibrary::
StaticRegisterNativesUAnimNotifyStateMachineInspectionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsTriggeredByState @ 147505dc0

void __cdecl
UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FStateMachineEntry *pFVar1;
  int iVar2;
  uint uVar3;
  FProperty *pFVar4;
  FBakedAnimationStateMachine *pFVar5;
  code *pcVar6;
  longlong lVar7;
  UAnimInstance *this;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FAnimNotifyStateMachineContext *pFVar11;
  FAnimNode_StateMachine *pFVar12;
  FStateMachineEntry *pFVar13;
  FAnimNotifyEventReference *this_00;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  longlong local_res20;
  UAnimInstance *local_78;
  FAnimNotifyEventReference local_70;
  
  local_70.NotifySource.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_70.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_70.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_70.CurrentAnimTime = 0.0;
  local_70.Notify = (FAnimNotifyEvent *)0x0;
  local_70.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  local_70.bActiveContext = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78 = (UAnimInstance *)0x0;
  this_00 = &local_70;
  if ((FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress !=
      (FAnimNotifyEventReference *)0x0) {
    this_00 = (FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this = local_78;
  lVar7 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78 != (UAnimInstance *)0x0) {
    pFVar11 = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                        (this_00);
    if (pFVar11 != (FAnimNotifyStateMachineContext *)0x0) {
      pFVar13 = (pFVar11->EncounteredStateMachines).StateStack.AllocatorInstance.SecondaryData.Data;
      iVar2 = (pFVar11->EncounteredStateMachines).StateStack.ArrayNum;
      if (pFVar13 == (FStateMachineEntry *)0x0) {
        pFVar13 = (FStateMachineEntry *)&pFVar11->EncounteredStateMachines;
      }
      pFVar1 = pFVar13 + iVar2;
      while( true ) {
        if ((pFVar11->EncounteredStateMachines).StateStack.ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FEncounteredStateMachineStack::FStateMachineEntry_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar13 == pFVar1) goto LAB_147505fc7;
        pFVar12 = UAnimInstance::GetStateMachineInstance(this,pFVar13->StateMachineIndex);
        uVar3 = pFVar13->StateIndex;
        pFVar5 = pFVar12->PRIVATE_MachineDescription;
        uVar10 = 0;
        if ((int)uVar3 < (pFVar5->States).ArrayNum) {
          uVar10 = ~uVar3 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (*(longlong *)
             ((pFVar5->States).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x50 + 0x30) == lVar7
           ) break;
        pFVar13 = pFVar13 + 1;
      }
      uVar9 = 1;
      goto LAB_147505fc9;
    }
  }
LAB_147505fc7:
  uVar9 = 0;
LAB_147505fc9:
  *local_res18 = uVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

// execIsTriggeredByStateInStateMachine @ 147506010

void __cdecl
UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByStateInStateMachine
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FAnimNotifyStateMachineContext *this;
  FAnimNotifyEventReference *this_00;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  UAnimInstance *local_78;
  FBakedAnimationStateMachine *local_70;
  FName local_68;
  FAnimNotifyEventReference local_60;
  
  local_60.NotifySource.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_60.CurrentAnimTime = 0.0;
  local_60.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_60.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_60.bActiveContext = false;
  local_60.Notify = (FAnimNotifyEvent *)0x0;
  local_60.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_78 = (UAnimInstance *)0x0;
  this_00 = &local_60;
  if ((FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress !=
      (FAnimNotifyEventReference *)0x0) {
    this_00 = (FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = local_res18;
  if (local_78 != (UAnimInstance *)0x0) {
    local_70 = (FBakedAnimationStateMachine *)0x0;
    UAnimInstance::GetStateMachineIndexAndDescription(local_78,local_res20,local_res10,&local_70);
    if ((local_res10[0] != -1) && (local_70 != (FBakedAnimationStateMachine *)0x0)) {
      iVar4 = FBakedAnimationStateMachine::FindStateIndex(local_70,&local_68);
      this = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                       (this_00);
      if (this != (FAnimNotifyStateMachineContext *)0x0) {
        bVar2 = UE::Anim::FAnimNotifyStateMachineContext::IsStateInStateMachineInContext
                          (this,local_res10[0],iVar4);
        if (bVar2) {
          uVar3 = 1;
          goto LAB_1475061ba;
        }
      }
    }
  }
  uVar3 = 0;
LAB_1475061ba:
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

// execIsTriggeredByStateMachine @ 1475061e0

void __cdecl
UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByStateMachine
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 uVar3;
  FAnimNotifyStateMachineContext *this;
  FAnimNotifyEventReference *this_00;
  int local_res10 [2];
  FName local_res18;
  UAnimInstance *local_res20;
  FBakedAnimationStateMachine *local_58;
  FAnimNotifyEventReference local_50;
  
  local_50.NotifySource.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_50.CurrentAnimTime = 0.0;
  local_50.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_50.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_50.bActiveContext = false;
  local_50.Notify = (FAnimNotifyEvent *)0x0;
  local_50.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res20 = (UAnimInstance *)0x0;
  this_00 = &local_50;
  if ((FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress !=
      (FAnimNotifyEventReference *)0x0) {
    this_00 = (FAnimNotifyEventReference *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UAnimInstance *)0x0) {
    local_58 = (FBakedAnimationStateMachine *)0x0;
    UAnimInstance::GetStateMachineIndexAndDescription(local_res20,local_res18,local_res10,&local_58)
    ;
    if (local_res10[0] != -1) {
      this = FAnimNotifyEventReference::GetContextData<UE::Anim::FAnimNotifyStateMachineContext>
                       (this_00);
      if (this != (FAnimNotifyStateMachineContext *)0x0) {
        bVar2 = UE::Anim::FAnimNotifyStateMachineContext::IsStateMachineInContext
                          (this,local_res10[0]);
        if (bVar2) {
          uVar3 = 1;
          goto LAB_14750635a;
        }
      }
    }
  }
  uVar3 = 0;
LAB_14750635a:
  *(undefined1 *)param_3 = uVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

