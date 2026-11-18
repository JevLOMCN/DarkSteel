// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// StaticClass @ 147ba5140

UClass * __cdecl UAsyncActionHandleSaveGame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionHandleSaveGame",
               &Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.InnerSingleton,
               StaticRegisterNativesUAsyncActionHandleSaveGame,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAsyncActionHandleSaveGame>,
               InternalVTableHelperCtorCaller<UAsyncActionHandleSaveGame>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.InnerSingleton;
}

// UAsyncActionHandleSaveGame @ 147bbab90

UAsyncActionHandleSaveGame * __thiscall
UAsyncActionHandleSaveGame::UAsyncActionHandleSaveGame
          (UAsyncActionHandleSaveGame *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionHandleSaveGame__6B_;
  *(undefined8 *)&this->Completed = 0;
  *(undefined8 *)&(this->Completed).field_0x8 = 0;
  *(undefined8 *)&(this->Completed).field_0x10 = 0;
  (this->SlotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotName).Data.ArrayNum = 0;
  (this->SlotName).Data.ArrayMax = 0;
  (this->SaveGameObject).field0_0x0.DebugPtr = (USaveGame *)0x0;
  return this;
}

// UAsyncActionHandleSaveGame @ 147bbabe0

UAsyncActionHandleSaveGame * __thiscall
UAsyncActionHandleSaveGame::UAsyncActionHandleSaveGame
          (UAsyncActionHandleSaveGame *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionHandleSaveGame__6B_;
  *(undefined8 *)&this->Completed = 0;
  *(undefined8 *)&(this->Completed).field_0x8 = 0;
  *(undefined8 *)&(this->Completed).field_0x10 = 0;
  (this->SlotName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotName).Data.ArrayNum = 0;
  (this->SlotName).Data.ArrayMax = 0;
  (this->SaveGameObject).field0_0x0.DebugPtr = (USaveGame *)0x0;
  return this;
}

// ~UAsyncActionHandleSaveGame @ 147bbf070

void __thiscall
UAsyncActionHandleSaveGame::~UAsyncActionHandleSaveGame(UAsyncActionHandleSaveGame *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UAsyncActionHandleSaveGame__6B_;
  pFVar1 = (this->SlotName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Completed).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// Activate @ 147bc73c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAsyncActionHandleSaveGame::Activate(UAsyncActionHandleSaveGame *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UAsyncActionHandleSaveGame *local_res8;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (this->Operation == Save) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFString__H_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncActionHandleSaveGame____A6AXAEBVFString__H_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = _vcall__720__flat______;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UGameplayStatics::AsyncSaveGameToSlot
              ((this->SaveGameObject).field0_0x0.DebugPtr,&this->SlotName,this->UserIndex,
               (TDelegate<void___cdecl(FString_const_&,int,bool),FDefaultDelegateUserPolicy> *)
               local_58);
  }
  else if (this->Operation == Load) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFString__HPEAVUSaveGame___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncActionHandleSaveGame____A6AXAEBVFString__HPEAVUSaveGame___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
      puVar1[4] = _vcall__728__flat______;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UGameplayStatics::AsyncLoadGameFromSlot
              (&this->SlotName,this->UserIndex,
               (TDelegate<void___cdecl(FString_const_&,int,USaveGame_*),FDefaultDelegateUserPolicy>
                *)local_58);
  }
  else {
    if (1 < (byte)LogScript._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
    }
    (**(code **)(this->_padding_ + 0x2e0))(this,0);
  }
  return;
}

// AsyncLoadGameFromSlot @ 147bca290

UAsyncActionHandleSaveGame * __cdecl
UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(UObject *param_1,FString *param_2,int param_3)

{
  UObject *pUVar1;
  UAsyncActionHandleSaveGame *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAsyncActionHandleSaveGame>(pUVar1);
  pUVar2->Operation = Load;
  (pUVar2->SaveGameObject).field0_0x0.DebugPtr = (USaveGame *)0x0;
  ::FString::operator=(&pUVar2->SlotName,param_2);
  pUVar2->UserIndex = param_3;
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
  return pUVar2;
}

// AsyncSaveGameToSlot @ 147bca8f0

UAsyncActionHandleSaveGame * __cdecl
UAsyncActionHandleSaveGame::AsyncSaveGameToSlot
          (UObject *param_1,USaveGame *param_2,FString *param_3,int param_4)

{
  UObject *pUVar1;
  UAsyncActionHandleSaveGame *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAsyncActionHandleSaveGame>(pUVar1);
  pUVar2->Operation = Save;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USaveGame *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (pUVar2->SaveGameObject).field0_0x0.DebugPtr = param_2;
  ::FString::operator=(&pUVar2->SlotName,param_3);
  pUVar2->UserIndex = param_4;
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
  return pUVar2;
}

// ExecuteCompleted @ 147bda540

void __thiscall
UAsyncActionHandleSaveGame::ExecuteCompleted(UAsyncActionHandleSaveGame *this,bool param_1)

{
  TObjectPtr<USaveGame>_u_0 local_18;
  undefined1 local_10;
  
  local_18 = (this->SaveGameObject).field0_0x0;
  local_10 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Completed,&local_18);
  (this->SaveGameObject).field0_0x0.DebugPtr = (USaveGame *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000147bda577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))(this);
  return;
}

// GetPrivateStaticClass @ 147be4960

UClass * __cdecl UAsyncActionHandleSaveGame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionHandleSaveGame",
               &Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.InnerSingleton,
               StaticRegisterNativesUAsyncActionHandleSaveGame,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAsyncActionHandleSaveGame>,
               InternalVTableHelperCtorCaller<UAsyncActionHandleSaveGame>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.InnerSingleton;
}

// HandleAsyncLoad @ 147becf70

void __thiscall
UAsyncActionHandleSaveGame::HandleAsyncLoad
          (UAsyncActionHandleSaveGame *this,FString *param_1,int param_2,USaveGame *param_3)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_3 != (USaveGame *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->SaveGameObject).field0_0x0.DebugPtr = param_3;
                    /* WARNING: Could not recover jumptable at 0x000147becfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))(this,param_3 != (USaveGame *)0x0);
  return;
}

// HandleAsyncSave @ 147becfc0

void __thiscall
UAsyncActionHandleSaveGame::HandleAsyncSave
          (UAsyncActionHandleSaveGame *this,FString *param_1,int param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000147becfc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))(this,param_3);
  return;
}

// StaticRegisterNativesUAsyncActionHandleSaveGame @ 147c03470

void __cdecl UAsyncActionHandleSaveGame::StaticRegisterNativesUAsyncActionHandleSaveGame(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAsyncLoadGameFromSlot @ 147c129e0

void __cdecl
UAsyncActionHandleSaveGame::execAsyncLoadGameFromSlot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FProperty *pFVar4;
  int iVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  int iVar7;
  UObject *pUVar8;
  UAsyncActionHandleSaveGame *pUVar9;
  longlong lVar10;
  int local_res10 [2];
  undefined8 local_res18 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar6 = local_res18[0];
  iVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = GetTransientPackageAsObject();
  pUVar9 = NewObject<UAsyncActionHandleSaveGame>(pUVar8);
  _Src.Data = local_48.Data;
  pFVar1 = &pUVar9->SlotName;
  pUVar9->Operation = Load;
  (pUVar9->SaveGameObject).field0_0x0.DebugPtr = (USaveGame *)0x0;
  if (pFVar1 != (FString *)&local_48) {
    iVar3 = (pUVar9->SlotName).Data.ArrayMax;
    piVar2 = &(pUVar9->SlotName).Data.ArrayMax;
    iVar7 = (int)local_40;
    lVar10 = (longlong)(int)local_40;
    (pUVar9->SlotName).Data.ArrayNum = (int)local_40;
    if (((int)local_40 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_40,iVar3,(ForAnyElementType *)pFVar1,(int)local_40,piVar2);
      if (iVar7 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src.Data,lVar10 * 2);
      }
    }
  }
  pUVar9->UserIndex = iVar5;
  (**(code **)(pUVar9->_padding_ + 0x2c0))(pUVar9,uVar6);
  *(UAsyncActionHandleSaveGame **)param_3 = pUVar9;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// execAsyncSaveGameToSlot @ 147c132c0

void __cdecl
UAsyncActionHandleSaveGame::execAsyncSaveGameToSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  FProperty *pFVar4;
  int iVar5;
  TObjectPtr<USaveGame>_u_0 TVar6;
  undefined8 uVar7;
  ForAnyElementType _Src;
  int iVar8;
  UObject *pUVar9;
  UAsyncActionHandleSaveGame *pUVar10;
  longlong lVar11;
  int local_res10 [2];
  TObjectPtr<USaveGame>_u_0 local_res18;
  undefined8 local_res20;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.DebugPtr = (USaveGame *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = local_res20;
  TVar6 = local_res18;
  iVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UAsyncActionHandleSaveGame>(pUVar9);
  pUVar10->Operation = Save;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (USaveGame *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
  }
  _Src.Data = local_48.Data;
  (pUVar10->SaveGameObject).field0_0x0.DebugPtr = (USaveGame *)TVar6;
  pFVar1 = &pUVar10->SlotName;
  if (pFVar1 != (FString *)&local_48) {
    iVar3 = (pUVar10->SlotName).Data.ArrayMax;
    piVar2 = &(pUVar10->SlotName).Data.ArrayMax;
    iVar8 = (int)local_40;
    lVar11 = (longlong)(int)local_40;
    (pUVar10->SlotName).Data.ArrayNum = (int)local_40;
    if (((int)local_40 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_40,iVar3,(ForAnyElementType *)pFVar1,(int)local_40,piVar2);
      if (iVar8 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src.Data,lVar11 * 2);
      }
    }
  }
  pUVar10->UserIndex = iVar5;
  (**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,uVar7);
  *(UAsyncActionHandleSaveGame **)param_3 = pUVar10;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

