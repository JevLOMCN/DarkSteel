// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 12

// StaticClass @ 146ceabb0

UClass * __cdecl UGameplayTask_ClaimResource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_ClaimResource",
               &Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton,
               StaticRegisterNativesUGameplayTask_ClaimResource,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask_ClaimResource>,
               InternalVTableHelperCtorCaller<UGameplayTask_ClaimResource>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton;
}

// UGameplayTask_ClaimResource @ 146ceda10

UGameplayTask_ClaimResource * __thiscall
UGameplayTask_ClaimResource::UGameplayTask_ClaimResource
          (UGameplayTask_ClaimResource *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UGameplayTask_ClaimResource @ 146ceda70

UGameplayTask_ClaimResource * __thiscall
UGameplayTask_ClaimResource::UGameplayTask_ClaimResource
          (UGameplayTask_ClaimResource *this,FObjectInitializer *param_1)

{
  UGameplayTask::UGameplayTask((UGameplayTask *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UGameplayTask_ClaimResource @ 146cee110

void __thiscall
UGameplayTask_ClaimResource::~UGameplayTask_ClaimResource(UGameplayTask_ClaimResource *this)

{
  *(undefined ***)this = &UGameplayTask::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UGameplayTask::_vftable__for__IGameplayTaskOwnerInterface__;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  *(undefined ***)&this->field_0x28 = &___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ClaimResource @ 146cf0110

UGameplayTask_ClaimResource * __cdecl
UGameplayTask_ClaimResource::ClaimResource
          (IGameplayTaskOwnerInterface *param_1,TSubclassOf<UGameplayTaskResource> param_2,
          uchar param_3,FName param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UGameplayTask *this;
  UObject *local_res10;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar4 = UGameplayTaskResource::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
      this = (UGameplayTask *)UGameplayTask::NewTaskUninitialized<UGameplayTask_ClaimResource>();
      if (this == (UGameplayTask *)0x0) {
        return (UGameplayTask_ClaimResource *)0x0;
      }
      UGameplayTask::InitTask(this,param_1,param_3);
      this->InstanceName = param_4;
      local_res10 = *(UObject **)param_2.Class.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      UGameplayTask::AddClaimedResource(this,(TSubclassOf<UGameplayTaskResource>)&local_res10);
      return (UGameplayTask_ClaimResource *)this;
    }
  }
  return (UGameplayTask_ClaimResource *)0x0;
}

// ClaimResource @ 146cf01e0

UGameplayTask_ClaimResource * __cdecl
UGameplayTask_ClaimResource::ClaimResource
          (TScriptInterface<IGameplayTaskOwnerInterface> *param_1,
          TSubclassOf<UGameplayTaskResource> param_2,uchar param_3,FName param_4)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UGameplayTask *this;
  UGameplayTask *pUVar5;
  UObject *local_res8;
  
  if ((*(longlong *)param_1 != 0) && (*(longlong *)&param_1->field_0x8 != 0)) {
    pUVar2 = *(UObject **)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    this = (UGameplayTask *)0x0;
    pUVar5 = this;
    if (*(longlong *)param_1 != 0) {
      pUVar5 = *(UGameplayTask **)&param_1->field_0x8;
    }
    if ((pUVar2 != (UObject *)0x0) &&
       (pUVar4 = UGameplayTaskResource::StaticClass(), pUVar4 != (UClass *)0x0)) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)&pUVar2[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar2[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (this = (UGameplayTask *)UGameplayTask::NewTaskUninitialized<UGameplayTask_ClaimResource>()
         , this != (UGameplayTask *)0x0)) {
        UGameplayTask::InitTask(this,(IGameplayTaskOwnerInterface *)pUVar5,param_3);
        this->InstanceName = param_4;
        local_res8 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        UGameplayTask::AddClaimedResource(this,(TSubclassOf<UGameplayTaskResource>)&local_res8);
      }
    }
    return (UGameplayTask_ClaimResource *)this;
  }
  return (UGameplayTask_ClaimResource *)0x0;
}

// ClaimResources @ 146cf02e0

UGameplayTask_ClaimResource * __cdecl
UGameplayTask_ClaimResource::ClaimResources
          (IGameplayTaskOwnerInterface *param_1,
          TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> *param_2,
          uchar param_3,FName param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UGameplayTask *this;
  FScriptContainerElement *pFVar3;
  UObject *local_res10;
  
  if (param_2->ArrayNum == 0) {
    return (UGameplayTask_ClaimResource *)0x0;
  }
  this = (UGameplayTask *)UGameplayTask::NewTaskUninitialized<UGameplayTask_ClaimResource>();
  if (this != (UGameplayTask *)0x0) {
    UGameplayTask::InitTask(this,param_1,param_3);
    this->InstanceName = param_4;
    pFVar3 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSubclassOf<UGameplayTaskResource>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res10);
      }
      if (pFVar3 == pFVar1) break;
      local_res10 = *(UObject **)pFVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res10);
      }
      UGameplayTask::AddClaimedResource(this,(TSubclassOf<UGameplayTaskResource>)&local_res10);
      pFVar3 = pFVar3 + 8;
    }
  }
  return (UGameplayTask_ClaimResource *)this;
}

// ClaimResources @ 146cf03a0

UGameplayTask_ClaimResource * __cdecl
UGameplayTask_ClaimResource::ClaimResources
          (TScriptInterface<IGameplayTaskOwnerInterface> *param_1,
          TArray<TSubclassOf<UGameplayTaskResource>,TSizedDefaultAllocator<32>_> *param_2,
          uchar param_3,FName param_4)

{
  int iVar1;
  IGameplayTaskOwnerInterface *pIVar2;
  FScriptContainerElement *pFVar3;
  UGameplayTask *this;
  FScriptContainerElement *pFVar4;
  UObject *local_res8;
  
  if (((*(longlong *)param_1 == 0) ||
      (pIVar2 = *(IGameplayTaskOwnerInterface **)&param_1->field_0x8,
      pIVar2 == (IGameplayTaskOwnerInterface *)0x0)) || (param_2->ArrayNum == 0)) {
    this = (UGameplayTask *)0x0;
  }
  else {
    this = (UGameplayTask *)UGameplayTask::NewTaskUninitialized<UGameplayTask_ClaimResource>();
    if (this != (UGameplayTask *)0x0) {
      UGameplayTask::InitTask(this,pIVar2,param_3);
      this->InstanceName = param_4;
      pFVar4 = (param_2->AllocatorInstance).Data;
      iVar1 = param_2->ArrayNum;
      pFVar3 = pFVar4 + (longlong)iVar1 * 8;
      while( true ) {
        if (param_2->ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSubclassOf<UGameplayTaskResource>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_res8);
        }
        if (pFVar4 == pFVar3) break;
        local_res8 = *(UObject **)pFVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        UGameplayTask::AddClaimedResource(this,(TSubclassOf<UGameplayTaskResource>)&local_res8);
        pFVar4 = pFVar4 + 8;
      }
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return (UGameplayTask_ClaimResource *)this;
}

// GetPrivateStaticClass @ 146cf2f60

UClass * __cdecl UGameplayTask_ClaimResource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTasks",L"GameplayTask_ClaimResource",
               &Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton,
               StaticRegisterNativesUGameplayTask_ClaimResource,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UGameplayTask_ClaimResource>,
               InternalVTableHelperCtorCaller<UGameplayTask_ClaimResource>,local_res8,
               UGameplayTask::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayTask_ClaimResource.InnerSingleton;
}

// StaticRegisterNativesUGameplayTask_ClaimResource @ 146cf7c70

void __cdecl UGameplayTask_ClaimResource::StaticRegisterNativesUGameplayTask_ClaimResource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClaimResource @ 146cf9290

void __cdecl
UGameplayTask_ClaimResource::execClaimResource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UGameplayTaskResource *this;
  longlong lVar4;
  code *pcVar5;
  uchar uVar6;
  FName FVar7;
  IGameplayTaskOwnerInterface *pIVar8;
  bool bVar9;
  byte bVar10;
  UClass *pUVar11;
  UGameplayTask *this_00;
  UClass *pUVar12;
  uchar local_res10 [8];
  FName local_res18;
  UClass *local_res20;
  UObject *local_48;
  IGameplayTaskOwnerInterface *pIStack_40;
  
  local_48 = (UObject *)0x0;
  pIStack_40 = (IGameplayTaskOwnerInterface *)0x0;
  FInterfaceProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar12 = local_res20;
  FVar7 = local_res18;
  uVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_48 == (UObject *)0x0)) {
    if (local_48 == (UObject *)0x0) goto LAB_146cf95ff;
  }
  else {
    UE::GC::MarkAsReachable(local_48);
  }
  pIVar8 = pIStack_40;
  if (pIStack_40 == (IGameplayTaskOwnerInterface *)0x0) {
LAB_146cf95ff:
    *(undefined8 *)param_3 = 0;
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 == (UClass *)0x0) goto LAB_146cf95fa;
  }
  else {
    if (pUVar12 == (UClass *)0x0) goto LAB_146cf95fa;
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pUVar11 = UGameplayTaskResource::StaticClass();
  if (pUVar11 == (UClass *)0x0) {
LAB_146cf95fa:
    *(undefined8 *)param_3 = 0;
    return;
  }
  iVar2 = (int)pUVar11->_padding_;
  if (((int)pUVar12->_padding_ < iVar2) ||
     ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) != &pUVar11->_padding_)
     ) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((!bVar9) ||
     (this_00 = (UGameplayTask *)UGameplayTask::NewTaskUninitialized<UGameplayTask_ClaimResource>(),
     this_00 == (UGameplayTask *)0x0)) goto LAB_146cf95fa;
  UGameplayTask::InitTask(this_00,pIVar8,uVar6);
  this_00->InstanceName = FVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  pUVar11 = UGameplayTaskResource::StaticClass();
  if (pUVar11 == (UClass *)0x0) {
LAB_146cf94f2:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClaimedResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTask.cpp"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    iVar2 = (int)pUVar11->_padding_;
    if (((int)pUVar12->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_146cf94f2;
  }
  pUVar11 = UGameplayTaskResource::StaticClass();
  if (pUVar11 != (UClass *)0x0) {
    iVar2 = (int)pUVar11->_padding_;
    if (((int)pUVar12->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar11->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_146cf9549;
  }
  pUVar12 = (UClass *)0x0;
LAB_146cf9549:
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  this = (UGameplayTaskResource *)(pUVar12->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar12 = UGameplayTaskResource::StaticClass();
  lVar4 = this->_padding_;
  iVar2 = (int)pUVar12->_padding_;
  if (((*(int *)(lVar4 + 0x38) < iVar2) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar12->_padding_)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar10 = UGameplayTaskResource::GetResourceID(this);
  if ((0xf < bVar10) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_27176809292365749>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Classes\\GameplayTask.h"
                         ,0x4b,"ResourceID < MaxResources"), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (this_00->ClaimedResources).Flags =
       (this_00->ClaimedResources).Flags | (ushort)(1 << (bVar10 & 0x1f));
  *(UGameplayTask **)param_3 = this_00;
  return;
}

// execClaimResources @ 146cf9620

void __cdecl
UGameplayTask_ClaimResource::execClaimResources(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  uchar uVar3;
  FName FVar4;
  uint uVar5;
  TSubclassOf<UGameplayTaskResource> *pTVar6;
  UObject *pUVar7;
  UGameplayTask *pUVar8;
  UGameplayTask *this;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  uchar local_res10 [8];
  UObject *local_res18;
  FName local_res20;
  ForAnyElementType local_68;
  uint local_60;
  int local_5c;
  TSubclassOf<UGameplayTaskResource> *local_58;
  undefined8 local_50;
  UObject *local_48;
  UGameplayTask *pUStack_40;
  
  local_48 = (UObject *)0x0;
  pUStack_40 = (UGameplayTask *)0x0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  this = (UGameplayTask *)0x0;
  local_58 = (TSubclassOf<UGameplayTaskResource> *)0x0;
  local_50 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pTVar6 = local_58;
  FVar4 = local_res20;
  uVar3 = local_res10[0];
  uVar5 = (uint)local_50;
  local_68.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = (uint)local_50;
  if ((uint)local_50 == 0) {
    local_5c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(uint)local_50,0,&local_68,(uint)local_50,&local_5c);
    ConstructItems<TSubclassOf<UGameplayTaskResource>,TSubclassOf<UGameplayTaskResource>,int>
              (local_68.Data,pTVar6,uVar5);
  }
  pUVar7 = local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  pUVar8 = pUStack_40;
  if (pUVar7 == (UObject *)0x0) {
    pUVar8 = this;
  }
  if (pUVar8 != (UGameplayTask *)0x0) {
    pUVar8 = this;
    if (pUVar7 != (UObject *)0x0) {
      pUVar8 = pUStack_40;
    }
    if (local_60 != 0) {
      this = (UGameplayTask *)UGameplayTask::NewTaskUninitialized<UGameplayTask_ClaimResource>();
      if (this != (UGameplayTask *)0x0) {
        UGameplayTask::InitTask(this,(IGameplayTaskOwnerInterface *)pUVar8,uVar3);
        uVar5 = local_60;
        this->InstanceName = FVar4;
        uVar9 = (ulonglong)(int)local_60;
        pFVar1 = local_68.Data + uVar9 * 8;
        FVar10.Data = local_68.Data;
        while( true ) {
          if ((uint)uVar9 != uVar5) {
            `TCheckedPointerIterator<TSubclassOf<UGameplayTaskResource>_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_res18);
          }
          if (FVar10.Data == pFVar1) break;
          local_res18 = *(UObject **)FVar10.Data;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res18 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_res18);
          }
          UGameplayTask::AddClaimedResource(this,(TSubclassOf<UGameplayTaskResource>)&local_res18);
          uVar9 = (ulonglong)local_60;
          FVar10.Data = FVar10.Data + 8;
        }
      }
    }
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  *(UGameplayTask **)param_3 = this;
  if (local_58 != (TSubclassOf<UGameplayTaskResource> *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

