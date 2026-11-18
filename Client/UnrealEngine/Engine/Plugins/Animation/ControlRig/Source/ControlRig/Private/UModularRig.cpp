// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 89

// StaticClass @ 14a1fe9f0

UClass * __cdecl UModularRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRig",
               &Z_Registration_Info_UClass_UModularRig.InnerSingleton,
               StaticRegisterNativesUModularRig,0xe20,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UModularRig>,
               InternalVTableHelperCtorCaller<UModularRig>,local_res8,UControlRig::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRig.InnerSingleton;
}

// UModularRig @ 14a223060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UModularRig * __thiscall UModularRig::UModularRig(UModularRig *this,FVTableHelper *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->RootModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootModules).ArrayNum = 0;
  (this->RootModules).ArrayMax = 0;
  (this->SupportedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedEvents).ArrayNum = 0;
  (this->SupportedEvents).ArrayMax = 0;
  (this->ModularRigSettings).bAutoResolve = true;
  FModularRigModel::FModularRigModel(&this->ModularRigModel);
  (this->ExecutionQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionQueue).ArrayNum = 0;
  (this->ExecutionQueue).ArrayMax = 0;
  this->ExecutionQueueFront = 0;
  *(undefined8 *)&this->PreviousModuleRigs = 0;
  *(undefined8 *)&(this->PreviousModuleRigs).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousModuleRigs).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x34 = 0;
  *(undefined8 *)&(this->PreviousModuleRigs).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x48 = 0;
  (this->LastExecutedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastExecutedElements).ArrayNum = 0;
  (this->LastExecutedElements).ArrayMax = 0;
  (this->LastExecutionQueue).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastExecutionQueue).Elements.ArrayNum = 0;
  (this->LastExecutionQueue).Elements.ArrayMax = 0;
  (this->LastExecutionQueueLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// UModularRig @ 14a223180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UModularRig * __thiscall UModularRig::UModularRig(UModularRig *this,FObjectInitializer *param_1)

{
  UControlRig::UControlRig((UControlRig *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Modules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  (this->Modules).ArrayNum = 0;
  (this->Modules).ArrayMax = 0;
  (this->RootModules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootModules).ArrayNum = 0;
  (this->RootModules).ArrayMax = 0;
  (this->SupportedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SupportedEvents).ArrayNum = 0;
  (this->SupportedEvents).ArrayMax = 0;
  (this->ModularRigSettings).bAutoResolve = true;
  FModularRigModel::FModularRigModel(&this->ModularRigModel);
  (this->ExecutionQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionQueue).ArrayNum = 0;
  (this->ExecutionQueue).ArrayMax = 0;
  this->ExecutionQueueFront = 0;
  *(undefined8 *)&this->PreviousModuleRigs = 0;
  *(undefined8 *)&(this->PreviousModuleRigs).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousModuleRigs).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x34 = 0;
  *(undefined8 *)&(this->PreviousModuleRigs).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x48 = 0;
  (this->LastExecutedElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastExecutedElements).ArrayNum = 0;
  (this->LastExecutedElements).ArrayMax = 0;
  (this->LastExecutionQueue).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastExecutionQueue).Elements.ArrayNum = 0;
  (this->LastExecutionQueue).Elements.ArrayMax = 0;
  (this->LastExecutionQueueLock).Mutex.Mutex.Ptr = (void *)0x0;
  return this;
}

// ~UModularRig @ 14a226f10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::~UModularRig(UModularRig *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->LastExecutionQueueLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->LastExecutionQueueLock);
  }
  pFVar1 = (this->LastExecutionQueue).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastExecutedElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PreviousModuleRigs).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PreviousModuleRigs).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UControlRig_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UControlRig_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UControlRig_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousModuleRigs);
  pFVar1 = (this->ExecutionQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FModularRigModel::~FModularRigModel(&this->ModularRigModel);
  pFVar1 = (this->SupportedEvents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RootModules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigModuleInstance,int>
            ((FRigModuleInstance *)(this->Modules).AllocatorInstance.Data,(this->Modules).ArrayNum);
  pFVar1 = (this->Modules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UControlRig::~UControlRig((UControlRig *)this);
  return;
}

// operator() @ 14a22a9f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::ExecuteEventOnAllModules'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleInstance *param_1)

{
  int *piVar1;
  UControlRig *pUVar2;
  ForAnyElementType *pFVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  
  pUVar2 = (param_1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (param_1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (param_1->RigPtr).field0_0x0.DebugPtr;
    if (pUVar2 != (UControlRig *)0x0) {
      cVar7 = (**(code **)(pUVar2->_padding_ + 0x308))(pUVar2,*(undefined8 *)((longlong)this + 8));
      if (cVar7 != '\0') {
        pFVar3 = *(ForAnyElementType **)this;
        puVar4 = *(undefined8 **)((longlong)this + 8);
        piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
        iVar8 = *(int *)&pFVar3[1].Data;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,pFVar3,piVar1);
        }
        pFVar5 = pFVar3->Data;
        *(int *)&pFVar3[1].Data = iVar8 + 1;
        uVar6 = *puVar4;
        lVar9 = (longlong)iVar8;
        *(FName *)(pFVar5 + lVar9 * 0x28) = param_1->Name;
        *(FRigModuleInstance **)(pFVar5 + lVar9 * 0x28 + 8) = param_1;
        *(undefined8 *)(pFVar5 + lVar9 * 0x28 + 0x10) = uVar6;
        pFVar5[lVar9 * 0x28 + 0x18] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar5 + lVar9 * 0x28 + 0x20) = 0;
        return true;
      }
    }
  }
  return true;
}

// operator() @ 14a22ada0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UModularRig::GetControlsInOrder'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  TSet<TTuple<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar1;
  undefined1 auVar2 [8];
  uint uVar3;
  longlong lVar4;
  UScriptStruct *pUVar5;
  longlong *plVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int local_res10 [2];
  undefined1 local_res18 [8];
  FRigControlElement *local_res20;
  undefined8 *local_28;
  uint local_20;
  
  if (param_1 != (FRigBaseElement *)0x0) {
    lVar4 = (**(code **)(param_1->_padding_ + 0x10))(param_1);
    pUVar5 = FRigControlElement::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar8 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar5->_padding_)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_28 = *(undefined8 **)&param_1->Key;
        local_20 = (param_1->Key).Name.Number;
        local_res20 = (FRigControlElement *)param_1;
        URigHierarchy::GetModuleFName
                  (*(URigHierarchy **)(*(longlong *)this + 0x338),(FRigElementKey *)local_res18);
        auVar2 = local_res18;
        this_00 = *(TSet<TTuple<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    **)((longlong)this + 8);
        uVar3 = ::GetTypeHash((FNameEntryId)local_res18._0_4_);
        uVar3 = uVar3 + auVar2._4_4_;
        if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
          FVar7 = (this_00->Hash).SecondaryData;
          if (FVar7 == (ForElementType<FSetElementId>)0x0) {
            FVar7 = (ForElementType<FSetElementId>)&this_00->Hash;
          }
          iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this_00->HashSize - 1U & uVar3) * 4);
          if (iVar8 != -1) {
            do {
              plVar6 = (longlong *)((longlong)iVar8 * 0x20 + *(longlong *)&this_00->Elements);
              if ((undefined1  [8])*plVar6 == local_res18) {
                if (plVar6 != (longlong *)0x0) goto LAB_14a22aed4;
                break;
              }
              iVar8 = (int)plVar6[3];
            } while (iVar8 != -1);
          }
        }
        local_28 = (undefined8 *)local_res18;
        TSet<TTuple<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                  (this_00,(uint)local_res10,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar3,
                   (bool *)&local_28);
        plVar6 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)&this_00->Elements);
LAB_14a22aed4:
        TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FRigControlElement_*_const_&>
                  ((TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)(plVar6 + 1),
                   &local_res20);
        *param_2 = true;
        return;
      }
    }
  }
  *param_2 = true;
  return;
}

// operator() @ 14a22af20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::GetEventsForAllModules'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleInstance *param_1)

{
  FName *pFVar1;
  UControlRig *pUVar2;
  void *_Src;
  undefined8 *puVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  pUVar2 = (param_1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (param_1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar2 = (param_1->RigPtr).field0_0x0.DebugPtr;
    if (pUVar2 != (UControlRig *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(pUVar2->_padding_ + 0x310))();
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = *(int *)(puVar3 + 1);
      lVar7 = (longlong)local_20;
      _Src = (void *)*puVar3;
      if (local_20 == 0) {
        local_1c = 0;
        iVar5 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,_Src,lVar7 << 3);
        iVar5 = local_20;
      }
      pFVar1 = (FName *)(local_28.Data + (longlong)iVar5 * 8);
      FVar4.Data = local_28.Data;
      iVar6 = iVar5;
      while( true ) {
        if (iVar6 != iVar5) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if ((FName *)FVar4.Data == pFVar1) break;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (*(TArray<FName,TSizedDefaultAllocator<32>_> **)this,(FName *)FVar4.Data);
        FVar4.Data = FVar4.Data + 8;
        iVar6 = local_20;
      }
      if ((FName *)local_28.Data != (FName *)0x0) {
        FMemory::Free(local_28.Data);
        return true;
      }
    }
  }
  return true;
}

// operator() @ 14a22b2b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::GetModuleNames'::__l2::<lambda_1>::operator()(void *this,FRigModuleInstance *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FRigModuleInstance *)pFVar2->Data <= param_1) &&
     (param_1 < (FRigModuleInstance *)
                (&((FRigModuleInstance *)pFVar2->Data)->Name +
                *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(FName *)(pFVar2->Data + (longlong)iVar6 * 8) = param_1->Name;
  return true;
}

// operator() @ 14a22b360

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::GetModulePaths'::__l2::<lambda_1>::operator()(void *this,FRigModuleInstance *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FRigModuleReference *this_00;
  FRigHierarchyModulePath *pFVar7;
  FRigHierarchyModulePath local_48;
  
  pFVar2 = *(ForAnyElementType **)this;
  this_00 = FRigModuleInstance::GetModuleReference(param_1);
  pFVar7 = FRigModuleReference::GetModulePath(this_00,&local_48);
  if (((FRigHierarchyModulePath *)pFVar2->Data <= pFVar7) &&
     (pFVar7 < (FRigHierarchyModulePath *)
               (&((FRigHierarchyModulePath *)pFVar2->Data)->ModulePath +
               *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  ::FString::FString((FString *)(pFVar2->Data + (longlong)iVar6 * 0x10),&pFVar7->ModulePath);
  if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                          AllocatorInstance.Data);
  }
  if (local_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ModulePath.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 14a22c900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  FName *pFVar1;
  void *_Src;
  UClass *pUVar2;
  UControlRig *pUVar3;
  undefined8 *puVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  pUVar2 = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
  if (pUVar2 != (UClass *)0x0) {
    pUVar2 = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
    pUVar3 = UClass::GetDefaultObject<UControlRig>(pUVar2);
    if (pUVar3 != (UControlRig *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x310))(pUVar3);
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = *(int *)(puVar4 + 1);
      lVar8 = (longlong)local_20;
      _Src = (void *)*puVar4;
      if (local_20 == 0) {
        local_1c = 0;
        iVar6 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_20,0,&local_28,local_20,&local_1c);
        memcpy(local_28.Data,_Src,lVar8 << 3);
        iVar6 = local_20;
      }
      pFVar1 = (FName *)(local_28.Data + (longlong)iVar6 * 8);
      FVar5.Data = local_28.Data;
      iVar7 = iVar6;
      while( true ) {
        if (iVar7 != iVar6) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if ((FName *)FVar5.Data == pFVar1) break;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  ((TArray<FName,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0xc70),
                   (FName *)FVar5.Data);
        FVar5.Data = FVar5.Data + 8;
        iVar7 = local_20;
      }
      if ((FName *)local_28.Data != (FName *)0x0) {
        FMemory::Free(local_28.Data);
      }
    }
  }
  return true;
}

// operator() @ 14a22d8d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::Execute_Internal'::__l5::<lambda_1>::operator()
          (void *this,FRigModuleInstance *param_1)

{
  longlong lVar1;
  UControlRig *pUVar2;
  longlong *plVar3;
  URigHierarchy *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FName FVar10;
  longlong lVar11;
  ForAnyElementType *pFVar12;
  longlong local_res10;
  FName local_48;
  FName FStack_40;
  undefined8 local_38;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  
  pUVar2 = (param_1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 == (UControlRig *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    (param_1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    return true;
  }
  pUVar2 = (param_1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar2 != (UControlRig *)0x0) &&
     (cVar6 = (**(code **)(pUVar2->_padding_ + 0x308))(pUVar2,*(undefined8 *)((longlong)this + 8)),
     cVar6 != '\0')) {
    plVar3 = *(longlong **)((longlong)this + 8);
    FLazyName::Resolve(&FRigUnit_InteractionExecution::EventName);
    if (*plVar3 == local_res10) {
      this_00 = *(URigHierarchy **)((longlong)this + 0x10);
      lVar11 = *(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x20);
      lVar1 = lVar11 + (longlong)*(int *)(*(longlong *)((longlong)this + 0x18) + 0x28) * 0xc;
      for (; lVar11 != lVar1; lVar11 = lVar11 + 0xc) {
        FVar10 = URigHierarchy::GetModuleFName(this_00,(FRigElementKey *)&stack0x00000018);
        if (param_1->Name == *(FName *)FVar10) goto LAB_14a22d9dc;
      }
    }
    else {
LAB_14a22d9dc:
      lVar1 = *(longlong *)this;
      pFVar12 = (ForAnyElementType *)(lVar1 + 0xd88);
      local_38 = **(undefined8 **)((longlong)this + 8);
      local_48 = param_1->Name;
      local_28 = 0;
      uStack_30 = 0;
      FStack_40 = (FName)param_1;
      if ((((FName *)pFVar12->Data <= &local_48) &&
          (&local_48 < (FName *)pFVar12->Data + (longlong)*(int *)(lVar1 + 0xd94) * 5)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = *(int *)(lVar1 + 0xd90);
      if (iVar9 == *(int *)(lVar1 + 0xd94)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,pFVar12,(int *)(lVar1 + 0xd94));
      }
      lVar11 = (longlong)iVar9;
      *(int *)(lVar1 + 0xd90) = iVar9 + 1;
      pFVar4 = pFVar12->Data;
      *(FName *)(pFVar4 + lVar11 * 0x28) = local_48;
      ((FName *)(pFVar4 + lVar11 * 0x28))[1] = FStack_40;
      *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 0x10) = local_38;
      *(ulonglong *)(pFVar4 + lVar11 * 0x28 + 0x10 + 8) = CONCAT71(uStack_2f,uStack_30);
      *(undefined8 *)(pFVar4 + lVar11 * 0x28 + 0x20) = local_28;
    }
  }
  return true;
}

// operator() @ 14a22db80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>::operator()
          (void *this,FRigModuleReference *param_1)

{
  UModularRig *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar5;
  FRigModuleInstance *pFVar6;
  undefined1 auStackY_b8 [32];
  UClass *local_88 [2];
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if (param_1 == (FRigModuleReference *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InModuleReference",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRig.cpp"
                       ,0x18a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = IsInGameThread();
  if (bVar2) {
    pUVar4 = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
    if (pUVar4 == (UClass *)0x0) {
      TSoftClassPtr<UControlRig>::LoadSynchronous(&param_1->Class);
    }
  }
  pUVar4 = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
  if (pUVar4 != (UClass *)0x0) {
    this_00 = *(UModularRig **)this;
    pTVar5 = FModularRigConnections::GetModuleConnectionMap
                       ((FModularRigConnections *)(*(longlong *)((longlong)this + 8) + 0x30),
                        (TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                         *)local_78,&param_1->Name);
    pFVar6 = UModularRig::FindModule(*(UModularRig **)this,&param_1->ParentModuleName);
    local_88[0] = TSoftClassPtr<UControlRig>::Get(&param_1->Class);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88[0]);
    }
    UModularRig::AddModuleInstance
              (this_00,&param_1->Name,(TSubclassOf<UControlRig>)local_88,pFVar6,pTVar5,
               &param_1->ConfigOverrides);
    local_30 = 0;
    if ((void *)local_78._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_78);
  }
  return true;
}

// operator() @ 14a230050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_2>::operator()
          (void *this,FRigModuleInstance *param_1)

{
  UControlRig *pUVar1;
  FRigModuleReference *pFVar2;
  
  pFVar2 = FModularRigModel::FindModule(*(FModularRigModel **)((longlong)this + 8),&param_1->Name);
  if (pFVar2 != (FRigModuleReference *)0x0) {
    UModularRig::SetModuleVariableBindings(*(UModularRig **)this,&pFVar2->Name,&pFVar2->Bindings);
  }
  pUVar1 = (param_1->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar1 == (UControlRig *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    (param_1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar1 = (param_1->RigPtr).field0_0x0.DebugPtr;
    if (pUVar1 != (UControlRig *)0x0) {
      (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,1);
      return true;
    }
  }
  return true;
}

// AddModuleInstance @ 14a23bc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall
UModularRig::AddModuleInstance
          (UModularRig *this,FName *param_1,TSubclassOf<UControlRig> param_2,
          FRigModuleInstance *param_3,
          TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
          *param_4,FControlRigOverrideContainer *param_5)

{
  int *piVar1;
  TArray<FRigModuleInstance,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  URigHierarchy *pUVar5;
  code *pcVar6;
  FField *this_00;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  UControlRig *pUVar11;
  FRigModuleSettings *pFVar12;
  FRigModuleInstance *pFVar13;
  UControlRig *pUVar14;
  UPackage *pUVar15;
  undefined8 *puVar16;
  FControlRigExecuteContext *pFVar17;
  FString *pFVar18;
  FRigElementKeyRedirector *pFVar19;
  int iVar20;
  void *_Dst;
  undefined1 *puVar21;
  FScriptContainerElement *pFVar22;
  FName FVar23;
  ForAnyElementType FVar24;
  int iVar25;
  longlong lVar26;
  UControlRig *pUVar27;
  wchar_t *pwVar28;
  TMap<FName,UControlRig_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>_>
  *this_01;
  void *pvVar29;
  UModularRig *pUVar30;
  undefined1 auStackY_268 [32];
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216 [6];
  UModularRig *local_210;
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  TFieldIterator<FProperty> local_1f8;
  FName local_1e0;
  FRigModuleInstance *local_1d8;
  FName local_1d0;
  URigHierarchy *local_1c8;
  TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *local_1c0;
  FControlRigOverrideContainer *local_1b8;
  FRigElementKeyRedirector local_1b0;
  undefined1 local_108 [48];
  undefined1 local_d8 [64];
  void *local_98;
  undefined4 local_90;
  FRigModuleInstance *local_88;
  ForAnyElementType FStack_80;
  undefined8 local_78;
  ERigElementType local_70;
  FName local_6c;
  ushort local_64;
  int local_60;
  FRigBaseElement *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pUVar27 = (UControlRig *)0x0;
  local_1c0 = param_4;
  local_1b8 = param_5;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  local_210 = this;
  if (param_3 == (FRigModuleInstance *)0x0) {
    pFVar22 = (this->RootModules).AllocatorInstance.Data;
    iVar20 = (this->RootModules).ArrayNum;
    pFVar4 = pFVar22 + (longlong)iVar20 * 8;
    while( true ) {
      if ((this->RootModules).ArrayNum != iVar20) {
        local_217 = 0;
        `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_217);
      }
      FVar23 = local_1e0;
      if (pFVar22 == pFVar4) goto LAB_14a23bd1a;
      if (**(FName **)pFVar22 == *param_1) break;
      pFVar22 = pFVar22 + 8;
    }
  }
  else {
    pFVar22 = (param_3->CachedChildren).AllocatorInstance.Data;
    iVar20 = (param_3->CachedChildren).ArrayNum;
    pFVar4 = pFVar22 + (longlong)iVar20 * 8;
    while( true ) {
      if ((param_3->CachedChildren).ArrayNum != iVar20) {
        local_218 = 0;
        `TCheckedPointerIterator<FRigModuleInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_218);
      }
      if (pFVar22 == pFVar4) {
        FVar23 = param_3->Name;
        this = local_210;
        goto LAB_14a23bd1a;
      }
      if (**(FName **)pFVar22 == *param_1) break;
      pFVar22 = pFVar22 + 8;
    }
  }
  return (FRigModuleInstance *)0x0;
code_r0x00014a23bf7d:
  iVar8 = *(int *)(lVar26 + 0x10 + (longlong)iVar8 * 0x18);
  if (iVar8 == -1) goto LAB_14a23bf88;
  goto LAB_14a23bf70;
LAB_14a23bd1a:
  lVar26 = *(longlong *)param_2.Class.field0_0x0;
  pUVar11 = pUVar27;
  if ((lVar26 != 0) && (pUVar10 = UControlRig::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar20 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar26 + 0x38) < iVar20) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar26 + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar11 = *(UControlRig **)param_2.Class.field0_0x0;
    }
  }
  pUVar11 = UClass::GetDefaultObject<UControlRig>((UClass *)pUVar11);
  pFVar12 = UControlRig::GetRigModuleSettings(pUVar11);
  if ((pFVar12->Identifier).Name.Data.ArrayNum < 2) {
    return (FRigModuleInstance *)0x0;
  }
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  local_64 = 0xffff;
  pTVar2 = &this->Modules;
  local_108._8_8_ = (UClass *)0x0;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_108._16_8_ = (UControlRig *)0x0;
  local_108._24_8_ = (FScriptContainerElement *)0x0;
  local_108._32_4_ = 0;
  local_108._36_4_ = 0;
  local_108._40_4_ = 0;
  local_108._44_4_ = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_d8._32_8_ = 0;
  iVar20 = 0;
  local_d8._40_4_ = 0;
  local_d8._44_4_ = 0x80;
  local_d8._48_4_ = 0xffffffff;
  local_d8._52_4_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (FRigModuleInstance *)0x0;
  FStack_80.Data = (FScriptContainerElement *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_70 = None;
  local_6c.ComparisonIndex.Value = 0;
  local_6c.Number = 0;
  local_60 = -1;
  local_58 = (FRigBaseElement *)0x0;
  local_50._0_4_ = -1;
  local_50._4_4_ = -1;
  if (((pFVar4 <= (FScriptContainerElement *)local_108) &&
      ((FScriptContainerElement *)local_108 < pFVar4 + (longlong)(this->Modules).ArrayMax * 0xc0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FRigModuleInstance *)(*pcVar6)();
    return pFVar13;
  }
  iVar8 = (this->Modules).ArrayNum;
  piVar1 = &(this->Modules).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c0,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Modules).ArrayNum = iVar8 + 1;
  pFVar13 = FRigModuleInstance::FRigModuleInstance
                      ((FRigModuleInstance *)
                       ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0xc0),
                       (FRigModuleInstance *)local_108);
  local_1d8 = pFVar13;
  if (FStack_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_80.Data);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigVMExternalVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigVMExternalVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigVMExternalVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  if ((FScriptContainerElement *)local_108._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._24_8_);
  }
  pUVar30 = local_210;
  pFVar13->Name = *param_1;
  this_01 = &local_210->PreviousModuleRigs;
  pFVar13->ParentModuleName = FVar23;
  FVar23 = *param_1;
  uVar9 = ::GetTypeHash(FVar23.ComparisonIndex.Value);
  if (*(int *)&(pUVar30->PreviousModuleRigs).field_0x8 !=
      *(int *)&(pUVar30->PreviousModuleRigs).field_0x34) {
    puVar21 = *(undefined1 **)&(pUVar30->PreviousModuleRigs).field_0x40;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = &(pUVar30->PreviousModuleRigs).field_0x38;
    }
    iVar8 = *(int *)(puVar21 +
                    (ulonglong)
                    (*(int *)&(pUVar30->PreviousModuleRigs).field_0x48 - 1U & FVar23.Number + uVar9)
                    * 4);
    if (iVar8 != -1) {
      lVar26 = *(longlong *)&this_01->field_0x0;
LAB_14a23bf70:
      if (*(FName *)(lVar26 + (longlong)iVar8 * 0x18) != FVar23) goto code_r0x00014a23bf7d;
      if (((iVar8 != -1) && (lVar26 = lVar26 + (longlong)iVar8 * 0x18, lVar26 != 0)) &&
         ((puVar16 = (undefined8 *)(lVar26 + 8), puVar16 != (undefined8 *)0x0 &&
          (pUVar11 = (UControlRig *)*puVar16, pUVar11 != (UControlRig *)0x0)))) {
        if ((FName)pUVar11->_padding_ == *param_1) {
          lVar26 = *(longlong *)param_2.Class.field0_0x0;
          pUVar14 = pUVar27;
          if ((lVar26 != 0) && (pUVar10 = UControlRig::StaticClass(), pUVar10 != (UClass *)0x0)) {
            iVar8 = (int)pUVar10->_padding_;
            if ((*(int *)(lVar26 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar26 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar10->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              pUVar14 = *(UControlRig **)param_2.Class.field0_0x0;
            }
          }
          if ((UControlRig *)pUVar11->_padding_ != pUVar14) goto LAB_14a23c049;
        }
        else {
LAB_14a23c049:
          pcVar6 = *(code **)(pUVar11->_padding_ + 0x170);
          pUVar15 = GetTransientPackage();
          (*pcVar6)(pUVar11,0,pUVar15);
          UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar11);
          pUVar11 = pUVar27;
        }
        FVar23 = *param_1;
        local_1d0 = FVar23;
        if (*(int *)&(pUVar30->PreviousModuleRigs).field_0x8 !=
            *(int *)&(pUVar30->PreviousModuleRigs).field_0x34) {
          uVar9 = ::GetTypeHash(FVar23.ComparisonIndex.Value);
          TSet<TTuple<FName,UControlRig_*>,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,UControlRig_*>,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>,FDefaultSetAllocator>
                               *)this_01,FVar23.Number + uVar9,&local_1d0);
        }
        if (pUVar11 != (UControlRig *)0x0) {
          pUVar14 = UClass::GetDefaultObject<UControlRig>((UClass *)pUVar11->_padding_);
          local_1f8.Struct = (UStruct *)pUVar11->_padding_;
          if (local_1f8.Struct == (UStruct *)0x0) {
            local_1f8.Field = (FField *)0x0;
          }
          else {
            local_1f8.Field = (local_1f8.Struct)->ChildProperties;
          }
          local_1f8.InterfaceIndex = -1;
          local_1f8.bIncludeSuper = true;
          local_1f8.bIncludeDeprecated = true;
          local_1f8.bIncludeInterface = false;
          TFieldIterator<FProperty>::IterateToNext(&local_1f8);
          pUVar30 = local_210;
          this_00 = local_1f8.Field;
          while (local_210 = pUVar30, local_1f8.Field = this_00, this_00 != (FField *)0x0) {
            bVar7 = FField::IsNative(this_00);
            if (!bVar7) {
              if (((int)this_00[1]._padding_ < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FRigModuleInstance *)(*pcVar6)();
                return pFVar13;
              }
              if ((pUVar14 == (UControlRig *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FRigModuleInstance *)(*pcVar6)();
                return pFVar13;
              }
              pvVar29 = (void *)((longlong)&pUVar14->_padding_ +
                                (longlong)*(int *)((longlong)&this_00[1].Owner.Container + 4));
              if (((int)this_00[1]._padding_ < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                pFVar13 = (FRigModuleInstance *)(*pcVar6)();
                return pFVar13;
              }
              _Dst = (void *)((longlong)&pUVar11->_padding_ +
                             (longlong)*(int *)((longlong)&this_00[1].Owner.Container + 4));
              if (_Dst != pvVar29) {
                if ((*(uint *)&this_00[1].ClassPrivate >> 0x1e & 1) == 0) {
                  (**(code **)(this_00->_padding_ + 0xf0))(this_00,_Dst,pvVar29);
                }
                else {
                  memcpy(_Dst,pvVar29,
                         (longlong)*(int *)((longlong)&this_00[1]._padding_ + 4) *
                         (longlong)(int)this_00[1]._padding_);
                }
              }
            }
            local_1f8.Field = this_00->Next;
            TFieldIterator<FProperty>::IterateToNext(&local_1f8);
            pUVar30 = local_210;
            this_00 = local_1f8.Field;
          }
          goto LAB_14a23c222;
        }
      }
    }
  }
LAB_14a23bf88:
  lVar26 = *(longlong *)param_2.Class.field0_0x0;
  FVar23 = *param_1;
  pUVar11 = pUVar27;
  if ((lVar26 != 0) && (pUVar10 = UControlRig::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar26 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar26 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar11 = *(UControlRig **)param_2.Class.field0_0x0;
    }
  }
  pUVar30 = local_210;
  pUVar11 = NewObject<UControlRig>
                      ((UObject *)local_210,(UClass *)pUVar11,FVar23,RF_NoFlags,(UObject *)0x0,false
                       ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
LAB_14a23c222:
  pFVar13 = local_1d8;
  pUVar14 = (local_1d8->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar14 == (UControlRig *)0x0) || (((uint)pUVar14->_padding_ >> 0x1e & 1) != 0)) {
    (local_1d8->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar14 = (local_1d8->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar14 != (UControlRig *)0x0) && (pUVar14 != pUVar11)) {
      pcVar6 = *(code **)(pUVar14->_padding_ + 0x170);
      pUVar15 = GetTransientPackage();
      (*pcVar6)(pUVar14,0,pUVar15);
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar14);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar11 == (UControlRig *)0x0)) {
    (pFVar13->RigPtr).field0_0x0.DebugPtr = pUVar11;
    if (pUVar11 == (UControlRig *)0x0) {
      pUVar10 = (UClass *)0x0;
      goto LAB_14a23c2fb;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
    (pFVar13->RigPtr).field0_0x0.DebugPtr = pUVar11;
  }
  pUVar10 = (UClass *)pUVar11->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
LAB_14a23c2fb:
  (pFVar13->RigClass).Class.field0_0x0.DebugPtr = pUVar10;
  UpdateCachedChildren(pUVar30);
  pUVar14 = (pFVar13->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar14 == (UControlRig *)0x0) || (((uint)pUVar14->_padding_ >> 0x1e & 1) != 0)) {
    (pFVar13->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    pUVar14 = pUVar27;
  }
  else {
    pUVar14 = (pFVar13->RigPtr).field0_0x0.DebugPtr;
  }
  puVar16 = (undefined8 *)(**(code **)(pUVar14->_padding_ + 0x310))();
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200 = *(int *)(puVar16 + 1);
  lVar26 = (longlong)local_200;
  pvVar29 = (void *)*puVar16;
  if (local_200 == 0) {
    local_1fc = 0;
    iVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_200,0,&local_208,local_200,&local_1fc);
    memcpy(local_208.Data,pvVar29,lVar26 << 3);
    iVar8 = local_200;
  }
  pUVar30 = local_210;
  pFVar3 = (FName *)(local_208.Data + (longlong)iVar8 * 8);
  FVar24.Data = local_208.Data;
  iVar25 = iVar8;
  while( true ) {
    if (iVar25 != iVar8) {
      local_216[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_216);
    }
    pFVar13 = local_1d8;
    if ((FName *)FVar24.Data == pFVar3) break;
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (&pUVar30->SupportedEvents,(FName *)FVar24.Data);
    FVar24.Data = FVar24.Data + 8;
    iVar25 = local_200;
  }
  pwVar28 = L"";
  pUVar5 = (((TObjectPtr<URigHierarchy> *)&pUVar30->field_0x338)->field0_0x0).DebugPtr;
  if ((pUVar11->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RigVMExtendedExecuteContext != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                         ,0x14c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FRigModuleInstance *)(*pcVar6)();
    return pFVar13;
  }
  pFVar17 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>
                      ((FRigVMExtendedExecuteContext *)pUVar11->_padding_);
  (**(code **)(pUVar11->_padding_ + 0x318))(pUVar11);
  pUVar11->bCopyHierarchyBeforeConstruction = false;
  local_1c8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  UControlRig::SetDynamicHierarchy(pUVar11,(TObjectPtr<URigHierarchy>)&local_1c8);
  pFVar17->Hierarchy = pUVar5;
  pFVar17->ControlRig = (UControlRig *)pUVar30;
  pFVar18 = UControlRig::GetRigModulePrefix(pUVar11);
  ::FString::operator=(&pFVar17->RigModulePrefix,pFVar18);
  iVar8 = (pFVar17->RigModulePrefix).Data.ArrayNum;
  if (iVar8 != 0) {
    pwVar28 = (wchar_t *)(pFVar17->RigModulePrefix).Data.AllocatorInstance.Data;
    iVar20 = iVar8 + -1;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar20,pwVar28);
  pFVar17->RigModulePrefixHash = uVar9;
  pcVar6 = *(code **)(pUVar11->_padding_ + 0x3a0);
  pFVar19 = FRigElementKeyRedirector::FRigElementKeyRedirector(&local_1b0,local_1c0,pUVar5);
  (*pcVar6)(pUVar11,pFVar19);
  pUVar11 = (pFVar13->RigPtr).field0_0x0.DebugPtr;
  if ((pUVar11 == (UControlRig *)0x0) || (((uint)pUVar11->_padding_ >> 0x1e & 1) != 0)) {
    (pFVar13->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
  }
  else {
    pUVar27 = (pFVar13->RigPtr).field0_0x0.DebugPtr;
  }
  FControlRigOverrideContainer::CopyToUObject(local_1b8,(UObject *)pUVar27);
  if ((FName *)local_208.Data != (FName *)0x0) {
    FMemory::Free(local_208.Data);
    return pFVar13;
  }
  return pFVar13;
}

// BeginDestroy @ 14a2419e0

void __thiscall UModularRig::BeginDestroy(UModularRig *this)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel FStack_d8;
  FDestructionSentinel FStack_c0;
  FDestructionSentinel FStack_a8;
  FDestructionSentinel FStack_90;
  FDestructionSentinel FStack_78;
  FDestructionSentinel FStack_60;
  FDestructionSentinel FStack_48;
  
  this_00 = &this->field_0x2a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&FStack_d8);
  *(int *)&this->field_0x2c4 = *(int *)&this->field_0x2c4 + 1;
  bVar5 = false;
  uVar8 = *(int *)&this->field_0x2b8 - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar5 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x2b8) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar9 + 8 + *(longlong *)&this->field_0x2b0) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + *(longlong *)&this->field_0x2b0),
          plVar1 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar1 + 0x68))(), cVar4 == '\0')) {
        bVar5 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)&this->field_0x2c4 = *(int *)&this->field_0x2c4 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (FStack_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_d8.Accessor,&FStack_d8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&FStack_c0);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (FStack_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
  }
  URigVMHost::BeginDestroy((URigVMHost *)this);
  *(undefined8 *)&this->field_0x150 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x660,
             (FWriteAccessScope *)&FStack_a8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x660);
  if (FStack_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a8.Accessor,&FStack_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x680,
             (FWriteAccessScope *)&FStack_90);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x680);
  if (FStack_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_90.Accessor,&FStack_90);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x6a0,
             (FWriteAccessScope *)&FStack_78);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x6a0);
  if (FStack_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_78.Accessor,&FStack_78);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x6c0,
             (FWriteAccessScope *)&FStack_60);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x6c0);
  if (FStack_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_60.Accessor,&FStack_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x6e0,
             (FWriteAccessScope *)&FStack_48);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x6e0);
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  bVar5 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar5) {
    pUVar7 = (UObject *)(**(code **)(*(longlong *)this + 0x180))(this);
    bVar5 = FTraceFilter::IsObjectTraceable<1>(pUVar7);
    if (!bVar5) {
      return;
    }
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
  return;
}

// DiscardModuleRig @ 14a24fad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRig::DiscardModuleRig(UControlRig *param_1)

{
  code *pcVar1;
  UPackage *pUVar2;
  
  if (param_1 != (UControlRig *)0x0) {
    pcVar1 = *(code **)(param_1->_padding_ + 0x170);
    pUVar2 = GetTransientPackage();
    (*pcVar1)(param_1,0,pUVar2,0x34);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)param_1);
  }
  return;
}

// Evaluate_AnyThread @ 14a2538d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::Evaluate_AnyThread(UModularRig *this)

{
  (this->ExecutionQueue).ArrayNum = 0;
  if ((this->ExecutionQueue).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->ExecutionQueue).AllocatorInstance,0,&(this->ExecutionQueue).ArrayMax
              );
  }
  this->ExecutionQueueFront = 0;
  UControlRig::Evaluate_AnyThread((UControlRig *)this);
  return;
}

// ExecuteConnectorEvent @ 14a255c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UModularRig::ExecuteConnectorEvent
          (UModularRig *this,FRigElementKey *param_1,FRigModuleInstance *param_2,
          FRigElementKeyRedirector *param_3,
          TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *param_4)

{
  FName FVar1;
  undefined1 uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  FRigVMExtendedExecuteContext *this_00;
  FControlRigExecuteContext *pFVar5;
  FString *pFVar6;
  FRigModuleInstance *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FRigModuleInstance *this_01;
  FRigElementResolveResult *pFVar10;
  undefined1 auStackY_1b8 [32];
  FName local_178;
  undefined1 local_170 [4];
  undefined4 uStack_16c;
  uint local_168;
  int iStack_164;
  TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> local_160;
  FName local_150;
  FString local_148;
  TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
  local_138;
  TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
  local_120;
  FString local_108;
  FRigElementKeyRedirector *local_f8;
  undefined1 local_f0 [72];
  undefined4 local_a8;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  void *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_178 = (FName)param_1;
  local_150 = (FName)param_3;
  if ((param_2 == (FRigModuleInstance *)0x0) || (param_3 == (FRigElementKeyRedirector *)0x0)) {
    pFVar10 = (FRigElementResolveResult *)(param_4->AllocatorInstance).Data;
    if (param_4->ArrayMax < 0) {
      DestructItems<FRigElementResolveResult,int>(pFVar10,param_4->ArrayNum);
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
    }
    else {
      DestructItems<FRigElementResolveResult,int>(pFVar10,param_4->ArrayNum);
      param_4->ArrayNum = 0;
    }
  }
  else {
    this_01 = (FRigModuleInstance *)(this->Modules).AllocatorInstance.Data;
    pFVar7 = this_01 + (this->Modules).ArrayNum;
    for (; this_01 != pFVar7; this_01 = this_01 + 1) {
      if (this_01 == param_2) {
        pFVar10 = (FRigElementResolveResult *)(param_4->AllocatorInstance).Data;
        iVar8 = param_4->ArrayNum;
        if (this_01 != (FRigModuleInstance *)0x0) {
          local_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.ArrayNum = iVar8;
          if (iVar8 == 0) {
            local_160.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar8,0,&local_160.AllocatorInstance,iVar8,&local_160.ArrayMax);
            ConstructItems<FRigElementResolveResult,FRigElementResolveResult,int>
                      (local_160.AllocatorInstance.Data,pFVar10,iVar8);
          }
          this_00 = URigVMHost::GetRigVMExtendedExecuteContext((URigVMHost *)this);
          pFVar5 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>
                             (this_00);
          ::FName::ToString(&param_1->Name,&local_148);
          pwVar4 = FRigHierarchyModulePath::ModuleNameSuffix;
          pFVar6 = ::FName::ToString(&this_01->Name,&local_108);
          ::FString::ConcatFC((FString *)local_170,pFVar6,pwVar4);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          pwVar4 = (wchar_t *)CONCAT44(uStack_16c,local_170);
          iVar8 = local_168 + -1;
          if (local_168 == 0) {
            iVar8 = 0;
            pwVar4 = L"";
          }
          ::FString::RemoveFromStart(&local_148,pwVar4,iVar8,IgnoreCase);
          if ((void *)CONCAT44(uStack_16c,local_170) != (void *)0x0) {
            FMemory::Free((void *)CONCAT44(uStack_16c,local_170));
          }
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_148.Data.ArrayNum != 0) {
            FVar9.Data = local_148.Data.AllocatorInstance.Data;
          }
          uVar2 = *(undefined1 *)local_178;
          ::FName::FName(&local_178,(wchar_t *)FVar9.Data);
          FVar1 = *(FName *)&(pFVar5->UnitContext).ConnectionResolve.Connector;
          uVar3 = (pFVar5->UnitContext).ConnectionResolve.Connector.Name.Number;
          uStack_16c = local_178.ComparisonIndex.Value;
          local_168 = local_178.Number;
          local_170[0] = uVar2;
          (pFVar5->UnitContext).ConnectionResolve.Connector.Type = uVar2;
          *(undefined3 *)&(pFVar5->UnitContext).ConnectionResolve.Connector.field_0x1 =
               local_170._1_3_;
          (pFVar5->UnitContext).ConnectionResolve.Connector.Name.ComparisonIndex =
               (FNameEntryId)uStack_16c;
          (pFVar5->UnitContext).ConnectionResolve.Connector.Name.Number = local_168;
          local_178 = FVar1;
          TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
          ::
          TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
                    (&local_120,&(pFVar5->UnitContext).ConnectionResolve.Matches,&local_160);
          local_170 = (undefined1  [4])0x0;
          uStack_16c = 0;
          local_168 = 0;
          iStack_164 = 0;
          TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
          ::
          TGuardValue<TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>,TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>_>
                    (&local_138,&(pFVar5->UnitContext).ConnectionResolve.Excluded,
                     (TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_> *)local_170);
          DestructItems<FRigElementResolveResult,int>((FRigElementResolveResult *)0x0,0);
          local_f8 = (FRigElementKeyRedirector *)&this->field_0x780;
          FRigElementKeyRedirector::FRigElementKeyRedirector
                    ((FRigElementKeyRedirector *)local_f0,local_f8);
          FRigElementKeyRedirector::operator=(local_f8,(FRigElementKeyRedirector *)local_150);
          FLazyName::Resolve(&FRigUnit_ConnectorExecution::EventName);
          ExecuteEventOnModule(this,&local_150,this_01);
          ExecuteQueue(this);
          TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
                    (param_4,&(pFVar5->UnitContext).ConnectionResolve.Matches);
          FRigElementKeyRedirector::operator=(local_f8,(FRigElementKeyRedirector *)local_f0);
          local_58 = 0;
          if (local_60 != (void *)0x0) {
            FMemory::Free(local_60);
          }
          TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_a0);
          local_a8 = 0;
          if ((void *)local_f0._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_f0._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_f0);
          TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
                    (local_138.RefValue,&local_138.OriginalValue);
          DestructItems<FRigElementResolveResult,int>
                    ((FRigElementResolveResult *)local_138.OriginalValue.AllocatorInstance.Data,
                     local_138.OriginalValue.ArrayNum);
          if ((FRigElementResolveResult *)local_138.OriginalValue.AllocatorInstance.Data !=
              (FRigElementResolveResult *)0x0) {
            FMemory::Free(local_138.OriginalValue.AllocatorInstance.Data);
          }
          TArray<FRigElementResolveResult,TSizedDefaultAllocator<32>_>::operator=
                    (local_120.RefValue,&local_120.OriginalValue);
          DestructItems<FRigElementResolveResult,int>
                    ((FRigElementResolveResult *)local_120.OriginalValue.AllocatorInstance.Data,
                     local_120.OriginalValue.ArrayNum);
          if ((FRigElementResolveResult *)local_120.OriginalValue.AllocatorInstance.Data !=
              (FRigElementResolveResult *)0x0) {
            FMemory::Free(local_120.OriginalValue.AllocatorInstance.Data);
          }
          *(FName *)&(pFVar5->UnitContext).ConnectionResolve.Connector = local_178;
          (pFVar5->UnitContext).ConnectionResolve.Connector.Name.Number = uVar3;
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          DestructItems<FRigElementResolveResult,int>
                    ((FRigElementResolveResult *)local_160.AllocatorInstance.Data,local_160.ArrayNum
                    );
          if ((FRigElementResolveResult *)local_160.AllocatorInstance.Data ==
              (FRigElementResolveResult *)0x0) {
            return;
          }
          FMemory::Free(local_160.AllocatorInstance.Data);
          return;
        }
        goto LAB_14a255ce7;
      }
    }
    pFVar10 = (FRigElementResolveResult *)(param_4->AllocatorInstance).Data;
    iVar8 = param_4->ArrayNum;
LAB_14a255ce7:
    if (param_4->ArrayMax < 0) {
      DestructItems<FRigElementResolveResult,int>(pFVar10,iVar8);
      param_4->ArrayNum = 0;
      if (param_4->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      }
    }
    else {
      DestructItems<FRigElementResolveResult,int>(pFVar10,iVar8);
      param_4->ArrayNum = 0;
    }
  }
  return;
}

// ExecuteEventOnAllModules @ 14a256aa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRig::ExecuteEventOnAllModules
          (UModularRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  FName FVar3;
  code *pcVar4;
  FName *pFVar5;
  ForAnyElementType _Src;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FName *this_00;
  int iVar11;
  FName *pFVar12;
  longlong lVar13;
  FName local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  FName *local_c0;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> local_b8;
  int local_a8;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *local_a0;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> local_98;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *local_88;
  FName *local_80;
  code *local_78;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> **local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar10 = (this->RootModules).AllocatorInstance.Data;
  local_88 = &local_b8;
  iVar11 = (this->RootModules).ArrayNum;
  local_80 = &local_res18;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar10 + (longlong)iVar11 * 8;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_res18 = param_1;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar10 == pFVar1) break;
    local_70 = &local_88;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::ExecuteEventOnAllModules'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar7 = TraverseModules(*(FRigModuleInstance **)pFVar10,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_78);
    if (!bVar7) break;
    pFVar10 = pFVar10 + 8;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (local_b8.ArrayNum == 0) {
    if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a256e04;
    ::FName::ToString(&local_res18,&local_68);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
  }
  else {
    local_c0 = (FName *)&this->ExecutionQueue;
    local_98.ArrayNum = (this->ExecutionQueue).ArrayNum;
    lVar13 = (longlong)local_98.ArrayNum;
    pFVar1 = (((TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *)local_c0)->
             AllocatorInstance).Data;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0 = (TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *)local_c0;
    if (local_98.ArrayNum == 0) {
      local_98.ArrayMax = 0;
      iVar11 = local_b8.ArrayNum;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_98.ArrayNum,0,&local_98.AllocatorInstance,local_98.ArrayNum,
                 &local_98.ArrayMax);
      memcpy(local_98.AllocatorInstance.Data,pFVar1,lVar13 * 0x28);
      iVar11 = local_b8.ArrayNum;
    }
    pTVar6 = local_a0;
    _Src.Data = local_b8.AllocatorInstance.Data;
    if (local_a0 != &local_b8) {
      iVar8 = local_a0->ArrayMax;
      local_a0->ArrayNum = iVar11;
      if ((iVar11 == 0) && (iVar8 == 0)) {
        local_a0->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar11,iVar8,&local_a0->AllocatorInstance,iVar11,&local_a0->ArrayMax);
        if (iVar11 != 0) {
          memcpy((pTVar6->AllocatorInstance).Data,_Src.Data,(longlong)iVar11 * 0x28);
        }
      }
    }
    local_a8 = this->ExecutionQueueFront;
    this->ExecutionQueueFront = 0;
    ExecuteQueue(this);
    pFVar5 = local_c0;
    iVar11 = *(int *)((longlong)local_c0 + 8);
    this_00 = (FName *)((ForAnyElementType *)&local_c0->ComparisonIndex)->Data;
    pFVar12 = this_00 + (longlong)iVar11 * 5;
    local_c0 = pFVar12;
    while( true ) {
      if (*(int *)((longlong)pFVar5 + 8) != iVar11) {
        local_c8[0] = 0;
        `TCheckedPointerIterator<FRigModuleExecutionElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_c8);
      }
      if (this_00 == pFVar12) break;
      if ((char)this_00[3].ComparisonIndex.Value == '\0') {
        if (1 < (byte)LogControlRig._0_1_) {
          ::FName::ToString(&local_res18,&local_48);
          ::FName::ToString(this_00,&local_58);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          pFVar12 = local_c0;
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
            pFVar12 = local_c0;
          }
        }
        this_00 = this_00 + 5;
      }
      else {
        pFVar2 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar2 <= this_00) && (this_00 < pFVar2 + __return_storage_ptr__->ArrayMax)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        FVar3 = *this_00;
        this_00 = this_00 + 5;
        *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = FVar3;
      }
    }
    this->ExecutionQueueFront = local_a8;
    TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_>::operator=(local_a0,&local_98);
    local_68.Data.AllocatorInstance.Data = local_98.AllocatorInstance.Data;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14a256e04:
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteEventOnModule @ 14a256e40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRig::ExecuteEventOnModule(UModularRig *this,FName *param_1,FRigModuleInstance *param_2)

{
  FScriptContainerElement FVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  ForAnyElementType _Src_00;
  int iVar5;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> local_48;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> *local_38;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_> local_30;
  
  if (param_2 == (FRigModuleInstance *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InModule",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRig.cpp"
                       ,0x5d0,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x828,&local_48.AllocatorInstance,&local_48.ArrayMax);
  lVar10 = (longlong)iVar9;
  local_48.ArrayNum = iVar9 + 1;
  FVar2 = *param_1;
  FVar3 = param_2->Name;
  *(FRigModuleInstance **)(local_48.AllocatorInstance.Data + lVar10 * 0x28 + 8) = param_2;
  local_38 = &this->ExecutionQueue;
  *(FName *)(local_48.AllocatorInstance.Data + lVar10 * 0x28) = FVar3;
  *(FName *)(local_48.AllocatorInstance.Data + lVar10 * 0x28 + 0x10) = FVar2;
  local_48.AllocatorInstance.Data[lVar10 * 0x28 + 0x18] = (FScriptContainerElement)0x0;
  *(undefined8 *)(local_48.AllocatorInstance.Data + lVar10 * 0x28 + 0x20) = 0;
  local_30.ArrayNum = (this->ExecutionQueue).ArrayNum;
  lVar10 = (longlong)local_30.ArrayNum;
  _Src = (this->ExecutionQueue).AllocatorInstance.Data;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_30.ArrayNum == 0) {
    local_30.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,local_30.ArrayNum,0,&local_30.AllocatorInstance,local_30.ArrayNum,
               &local_30.ArrayMax);
    memcpy(local_30.AllocatorInstance.Data,_Src,lVar10 * 0x28);
  }
  pTVar6 = local_38;
  _Src_00.Data = local_48.AllocatorInstance.Data;
  if (local_38 != &local_48) {
    iVar5 = local_48.ArrayNum;
    lVar10 = (longlong)local_48.ArrayNum;
    iVar9 = local_38->ArrayMax;
    local_38->ArrayNum = local_48.ArrayNum;
    if ((local_48.ArrayNum == 0) && (iVar9 == 0)) {
      local_38->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,local_48.ArrayNum,iVar9,&local_38->AllocatorInstance,local_48.ArrayNum,
                 &local_38->ArrayMax);
      if (iVar5 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,_Src_00.Data,lVar10 * 0x28);
      }
    }
  }
  iVar9 = this->ExecutionQueueFront;
  this->ExecutionQueueFront = 0;
  ExecuteQueue(this);
  if ((this->ExecutionQueue).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
  }
  FVar1 = (this->ExecutionQueue).AllocatorInstance.Data[0x18];
  this->ExecutionQueueFront = iVar9;
  TArray<FRigModuleExecutionElement,TSizedDefaultAllocator<32>_>::operator=(local_38,&local_30);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return (bool)FVar1;
}

// ExecuteEventOnModuleByNameForBP @ 14a257070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRig::ExecuteEventOnModuleByNameForBP(UModularRig *this,FName param_1,FName param_2)

{
  UControlRig *pUVar1;
  char cVar2;
  bool bVar3;
  FRigModuleInstance *pFVar4;
  FString *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  pFVar4 = FindModule(this,local_res18);
  if (pFVar4 == (FRigModuleInstance *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    ::FName::ToString(local_res18,&local_18);
    pFVar6 = &::LOG_Static;
  }
  else {
    pUVar1 = (pFVar4->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar1 == (UControlRig *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
      (pFVar4->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    }
    else {
      pUVar1 = (pFVar4->RigPtr).field0_0x0.DebugPtr;
      if (pUVar1 != (UControlRig *)0x0) {
        cVar2 = (**(code **)(pUVar1->_padding_ + 0x308))(pUVar1,&local_res10);
        if (cVar2 != '\0') {
          bVar3 = ExecuteEventOnModule(this,&local_res10,pFVar4);
          return bVar3;
        }
        if ((byte)LogControlRig._0_1_ < 2) {
          return false;
        }
        ::FName::ToString(&local_res10,&local_18);
        ::FName::ToString(local_res18,&local_28);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        goto LAB_14a2571f1;
      }
    }
    if ((byte)LogControlRig._0_1_ < 2) {
      return false;
    }
    pFVar5 = ::FName::ToString(local_res18,&local_18);
    if ((pFVar5->Data).ArrayNum == 0) {
      pFVar6 = &::LOG_Static;
    }
    else {
      pFVar6 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogControlRig);
LAB_14a2571f1:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// ExecuteEventOnModuleForBP @ 14a257220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UModularRig::ExecuteEventOnModuleForBP(UModularRig *this,FName param_1,FString *param_2)

{
  UControlRig *pUVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  FRigModuleInstance *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  FName local_res10;
  FString local_18;
  
  local_res10 = param_1;
  pFVar5 = FindModule_Deprecated(this,param_2);
  if (pFVar5 == (FRigModuleInstance *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a25737a;
    pFVar6 = &::LOG_Static;
  }
  else {
    pUVar1 = (pFVar5->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar1 == (UControlRig *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
      (pFVar5->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    }
    else {
      pUVar1 = (pFVar5->RigPtr).field0_0x0.DebugPtr;
      if (pUVar1 != (UControlRig *)0x0) {
        cVar3 = (**(code **)(pUVar1->_padding_ + 0x308))(pUVar1,&local_res10);
        if (cVar3 != '\0') {
          bVar4 = ExecuteEventOnModule(this,&local_res10,pFVar5);
          pFVar2 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          return bVar4;
        }
        if (1 < (byte)LogControlRig._0_1_) {
          ::FName::ToString(&local_res10,&local_18);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14a25737a;
      }
    }
    if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a25737a;
    if ((param_2->Data).ArrayNum == 0) {
      pFVar6 = &::LOG_Static;
    }
    else {
      pFVar6 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogControlRig);
LAB_14a25737a:
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return false;
}

// ExecuteQueue @ 14a2585c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UModularRig::ExecuteQueue(UModularRig *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *this_00;
  TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  UControlRig *pUVar7;
  FRigVMExtendedExecuteContext *pFVar8;
  FRigVMExtendedExecuteContext *this_01;
  undefined8 uVar9;
  code *pcVar10;
  UControlRig *pUVar11;
  bool bVar12;
  char cVar13;
  uchar uVar14;
  int iVar15;
  FControlRigExecuteContext *pFVar16;
  longlong lVar17;
  FControlRigExecuteContext *this_02;
  UClass *pUVar18;
  FModularRigModel *this_03;
  FRigModuleReference *pFVar19;
  FName FVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  USceneComponent *pUVar24;
  FScriptContainerElement *pFVar25;
  undefined8 *puVar26;
  int iVar27;
  ForAnyElementType FVar28;
  int iVar29;
  URigHierarchy *pUVar30;
  int iVar31;
  FName *pFVar32;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FName *local_res20;
  longlong local_1c8;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_1b0;
  longlong local_1a0;
  UControlRig *local_198;
  FControlRigExecuteContext *local_190;
  undefined8 local_188;
  FName *local_180;
  URigHierarchy *local_178;
  undefined1 local_170 [8];
  ForAnyElementType local_168;
  int local_160;
  undefined1 local_158 [8];
  ForAnyElementType local_150;
  int local_148;
  FRigHierarchyRedirectorGuard local_140;
  FName local_130;
  FName local_128;
  TArray<UAssetUserData_const_*,TSizedDefaultAllocator<32>_> *local_120;
  FControlRigExecuteContext *local_118;
  FName local_110;
  FRigVMExtendedExecuteContext *local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0;
  undefined1 local_a8 [32];
  FReadAccessScope local_88 [3];
  
  if ((*(longlong *)&this->field_0x150 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RigVMExtendedExecuteContext != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                          ,0x14c,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar16 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>
                      (*(FRigVMExtendedExecuteContext **)&this->field_0x150);
  pUVar30 = *(URigHierarchy **)&this->field_0x338;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  local_190 = pFVar16;
  local_178 = pUVar30;
  do {
    while( true ) {
      iVar15 = this->ExecutionQueueFront;
      if ((iVar15 < 0) || ((this->ExecutionQueue).ArrayNum <= iVar15)) {
        iVar15 = (int)local_1b8;
        pFVar6 = local_1c0.Data + (longlong)(int)local_1b8 * 8;
        FVar28.Data = local_1c0.Data;
        while( true ) {
          if ((int)local_1b8 != iVar15) {
            `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (FVar28.Data == pFVar6) break;
          lVar17 = *(longlong *)FVar28.Data;
          iVar29 = URigHierarchy::GetNextSpawnIndex(pUVar30);
          *(int *)(lVar17 + 0xbc) = iVar29;
          FVar28.Data = FVar28.Data + 8;
        }
        if (local_1c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data);
        }
        return;
      }
      pFVar6 = (this->ExecutionQueue).AllocatorInstance.Data;
      pFVar32 = (FName *)(pFVar6 + (longlong)iVar15 * 0x28);
      local_1c8 = *(longlong *)(pFVar6 + (longlong)iVar15 * 0x28 + 8);
      local_180 = pFVar32;
      if (local_1c8 != 0) break;
LAB_14a25921a:
      this->ExecutionQueueFront = this->ExecutionQueueFront + 1;
    }
    if ((*(longlong *)(local_1c8 + 0x10) == 0) ||
       ((*(uint *)(*(longlong *)(local_1c8 + 0x10) + 8) >> 0x1e & 1) != 0)) {
      *(undefined8 *)(local_1c8 + 0x10) = 0;
      goto LAB_14a25921a;
    }
    pUVar7 = *(UControlRig **)(local_1c8 + 0x10);
    if (pUVar7 == (UControlRig *)0x0) goto LAB_14a25921a;
    FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
    pFVar32 = pFVar32 + 2;
    local_res20 = pFVar32;
    if (*pFVar32 == local_130) {
      iVar15 = URigHierarchy::GetNextSpawnIndex(pUVar30);
      *(int *)(local_1c8 + 0xb8) = iVar15;
      if (((local_1c0.Data <= (FScriptContainerElement *)&local_1c8) &&
          ((FScriptContainerElement *)&local_1c8 < local_1c0.Data + (longlong)local_1b8._4_4_ * 8))
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar15 = (int)local_1b8;
      if ((int)local_1b8 == local_1b8._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1c0,(int *)((longlong)&local_1b8 + 4));
      }
      local_1b8 = CONCAT44(local_1b8._4_4_,iVar15 + 1);
      *(longlong *)(local_1c0.Data + (longlong)iVar15 * 8) = local_1c8;
      local_198 = pUVar7;
    }
    else {
      FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
      local_198 = pUVar7;
      if (*pFVar32 == local_128) {
        iVar15 = URigHierarchy::GetNextSpawnIndex(pUVar30);
        *(int *)(local_1c8 + 0xbc) = iVar15;
        if (((local_1c0.Data <= (FScriptContainerElement *)&local_1c8) &&
            ((FScriptContainerElement *)&local_1c8 < local_1c0.Data + (longlong)local_1b8._4_4_ * 8)
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar28.Data = local_1c0.Data;
        lVar17 = (longlong)(int)local_1b8;
        local_198 = pUVar7;
        if ((int)local_1b8 != 0) {
          iVar29 = 0;
          lVar23 = 0;
          bVar12 = *(longlong *)local_1c0.Data != local_1c8;
          lVar22 = local_1c8;
          iVar15 = 0;
          do {
            iVar31 = iVar15;
            do {
              lVar23 = lVar23 + 1;
              iVar31 = iVar31 + 1;
              if (lVar17 <= lVar23) break;
            } while (bVar12 == (*(longlong *)(FVar28.Data + lVar23 * 8) != lVar22));
            if (bVar12 != false) {
              if (iVar29 != iVar15) {
                memmove(FVar28.Data + (longlong)iVar29 * 8,FVar28.Data + (longlong)iVar15 * 8,
                        (longlong)(iVar31 - iVar15) << 3);
                lVar22 = local_1c8;
              }
              iVar29 = iVar29 + (iVar31 - iVar15);
            }
            bVar12 = (bool)(bVar12 ^ 1);
            iVar15 = iVar31;
          } while (lVar23 < lVar17);
          local_1b8 = CONCAT44(local_1b8._4_4_,iVar29);
          pFVar16 = local_190;
          pUVar30 = local_178;
          pFVar32 = local_res20;
        }
      }
    }
    pUVar7 = local_198;
    cVar13 = (**(code **)(local_198->_padding_ + 0x308))(local_198,pFVar32);
    if (cVar13 == '\0') {
      this->ExecutionQueueFront = this->ExecutionQueueFront + 1;
    }
    else {
      FRigHierarchyRedirectorGuard::FRigHierarchyRedirectorGuard(&local_140,pUVar7);
      if ((pUVar7->_padding_ == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("RigVMExtendedExecuteContext != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                              ,0x14c,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = pUVar30->ExecuteContext;
      lpCriticalSection = &pUVar30->ExecuteContextLock;
      this_01 = (FRigVMExtendedExecuteContext *)pUVar7->_padding_;
      local_108 = pFVar8;
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      pUVar30->ExecuteContext = this_01;
      this_02 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>(this_01);
      (this_02->UnitContext).AnimAttributeContainer = (pFVar16->UnitContext).AnimAttributeContainer;
      this_00 = &(this_02->UnitContext).ElementsBeingInteracted;
      (this_02->UnitContext).DataSourceRegistry = (pFVar16->UnitContext).DataSourceRegistry;
      (this_02->UnitContext).HierarchySettings = (pFVar16->UnitContext).HierarchySettings;
      (this_02->UnitContext).InteractionType = (pFVar16->UnitContext).InteractionType;
      local_118 = this_02;
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
                (this_00,&(pFVar16->UnitContext).ElementsBeingInteracted);
      FModularRigResolveResult::operator=
                (&(this_02->UnitContext).ConnectionResolve,&(pFVar16->UnitContext).ConnectionResolve
                );
      *(undefined8 *)&this_02->field_0x58 = *(undefined8 *)&pFVar16->field_0x58;
      *(undefined8 *)&this_02->field_0x60 = *(undefined8 *)&pFVar16->field_0x60;
      this_02->RigModuleInstance = (FRigModuleInstance *)local_180[1];
      *(undefined8 *)&this_02->field_0x28 = *(undefined8 *)&pFVar16->field_0x28;
      *(undefined8 *)&this_02->field_0x20 = *(undefined8 *)&pFVar16->field_0x20;
      FRigVMExecuteContext::SetWorld
                ((FRigVMExecuteContext *)this_02,*(UWorld **)&pFVar16->field_0xe0);
      FRigVMExecuteContext::SetOwningActor
                ((FRigVMExecuteContext *)this_02,*(AActor **)&pFVar16->field_0xd8);
      pUVar24 = *(USceneComponent **)&pFVar16->field_0xd0;
      if (pUVar24 == (USceneComponent *)0x0) {
LAB_14a258aa6:
        pUVar24 = (USceneComponent *)0x0;
        pUVar11 = local_198;
      }
      else {
        pUVar18 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar15 = (int)pUVar18->_padding_;
        if ((*(int *)(pUVar24->_padding_ + 0x38) < iVar15) ||
           (pUVar11 = pUVar7,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pUVar24->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
           &pUVar18->_padding_)) goto LAB_14a258aa6;
      }
      local_198 = pUVar11;
      FRigVMExecuteContext::SetOwningComponent((FRigVMExecuteContext *)this_02,pUVar24);
      *(undefined8 *)&this_02->field_0x30 = *(undefined8 *)&pFVar16->field_0x30;
      uVar9 = *(undefined8 *)&pFVar16->field_0x78;
      *(undefined8 *)&this_02->field_0x70 = *(undefined8 *)&pFVar16->field_0x70;
      *(undefined8 *)&this_02->field_0x78 = uVar9;
      uVar9 = *(undefined8 *)&pFVar16->field_0x88;
      *(undefined8 *)&this_02->field_0x80 = *(undefined8 *)&pFVar16->field_0x80;
      *(undefined8 *)&this_02->field_0x88 = uVar9;
      uVar9 = *(undefined8 *)&pFVar16->field_0x98;
      *(undefined8 *)&this_02->field_0x90 = *(undefined8 *)&pFVar16->field_0x90;
      *(undefined8 *)&this_02->field_0x98 = uVar9;
      uVar9 = *(undefined8 *)&pFVar16->field_0xa8;
      *(undefined8 *)&this_02->field_0xa0 = *(undefined8 *)&pFVar16->field_0xa0;
      *(undefined8 *)&this_02->field_0xa8 = uVar9;
      uVar9 = *(undefined8 *)&pFVar16->field_0xb8;
      *(undefined8 *)&this_02->field_0xb0 = *(undefined8 *)&pFVar16->field_0xb0;
      *(undefined8 *)&this_02->field_0xb8 = uVar9;
      uVar9 = *(undefined8 *)&pFVar16->field_0xc8;
      *(undefined8 *)&this_02->field_0xc0 = *(undefined8 *)&pFVar16->field_0xc0;
      *(undefined8 *)&this_02->field_0xc8 = uVar9;
      if (&pFVar16->OnAddShapeLibraryDelegate != &this_02->OnAddShapeLibraryDelegate) {
        local_170 = (undefined1  [8])0x0;
        local_168.Data = (FScriptContainerElement *)0x0;
        local_160 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar16->OnAddShapeLibraryDelegate,(FReadAccessScope *)(local_a8 + 8));
        if ((*(int *)&(pFVar16->OnAddShapeLibraryDelegate).field_0x10 != 0) &&
           (plVar21 = *(longlong **)&(pFVar16->OnAddShapeLibraryDelegate).field_0x8,
           plVar21 != (longlong *)0x0)) {
          (**(code **)(*plVar21 + 0x50))(plVar21,local_170);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)(local_a8 + 8));
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->OnAddShapeLibraryDelegate,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_170);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_170,
                   (FWriteAccessScope *)&local_d8);
        if ((local_160 != 0) && (local_168.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_168.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,0x10);
          local_160 = 0;
        }
        if (local_d8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
        }
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_170);
      }
      pFVar16 = local_190;
      if (&local_190->OnShapeExistsDelegate != &this_02->OnShapeExistsDelegate) {
        local_158 = (undefined1  [8])0x0;
        local_150.Data = (FScriptContainerElement *)0x0;
        local_148 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &local_190->OnShapeExistsDelegate,local_88);
        if ((*(int *)&(pFVar16->OnShapeExistsDelegate).field_0x10 != 0) &&
           (plVar21 = *(longlong **)&(pFVar16->OnShapeExistsDelegate).field_0x8,
           plVar21 != (longlong *)0x0)) {
          (**(code **)(*plVar21 + 0x50))(plVar21,local_158);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_88);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->OnShapeExistsDelegate,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_158);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
                   (FWriteAccessScope *)&local_c0);
        if ((local_148 != 0) && (local_150.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_150.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_150,0,0,0x10);
          local_148 = 0;
        }
        if (local_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
        }
        if (local_150.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_158);
      }
      pFVar16 = local_190;
      *(undefined4 *)&this_02->field_0x38 = *(undefined4 *)&local_190->field_0x38;
      uVar9 = *(undefined8 *)&local_190->field_0x40;
      lVar17 = *(longlong *)&local_190->field_0x48;
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        UNLOCK();
      }
      local_e8 = *(undefined8 *)&this_02->field_0x40;
      pTStack_e0 = *(TReferenceControllerBase<1> **)&this_02->field_0x48;
      *(undefined8 *)&this_02->field_0x40 = uVar9;
      *(longlong *)&this_02->field_0x48 = lVar17;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_e0);
      cVar13 = (**(code **)(pUVar7->_padding_ + 800))(pUVar7);
      pFVar32 = local_180;
      if (cVar13 == '\0') {
LAB_14a258dbd:
        pUVar30 = local_178;
        pFVar25 = (this_00->AllocatorInstance).Data;
        local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b0.ArrayNum = 0;
        local_1b0.ArrayMax = 0;
        pFVar6 = pFVar25 + (longlong)(this_02->UnitContext).ElementsBeingInteracted.ArrayNum * 0xc;
        for (; pFVar25 != pFVar6; pFVar25 = pFVar25 + 0xc) {
          local_f8 = *(undefined8 *)pFVar25;
          local_f0 = *(undefined4 *)(pFVar25 + 8);
          FVar20 = URigHierarchy::GetModuleFName(pUVar30,(FRigElementKey *)local_a8);
          if (*pFVar32 == *(FName *)FVar20) {
            if (((local_1b0.AllocatorInstance.Data <= pFVar25) &&
                (pFVar25 < local_1b0.AllocatorInstance.Data + (longlong)local_1b0.ArrayMax * 0xc))
               && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar15 = local_1b0.ArrayNum;
            if (local_1b0.ArrayNum == local_1b0.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&local_1b0.AllocatorInstance,&local_1b0.ArrayMax);
            }
            local_1b0.ArrayNum = iVar15 + 1;
            *(undefined8 *)(local_1b0.AllocatorInstance.Data + (longlong)iVar15 * 0xc) =
                 *(undefined8 *)pFVar25;
            *(undefined4 *)(local_1b0.AllocatorInstance.Data + (longlong)iVar15 * 0xc + 8) =
                 *(undefined4 *)(pFVar25 + 8);
          }
        }
        if (this_00 == &local_1b0) {
          if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.AllocatorInstance.Data);
          }
        }
        else {
          pFVar6 = (this_00->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (this_00->AllocatorInstance).Data = local_1b0.AllocatorInstance.Data;
          (this_02->UnitContext).ElementsBeingInteracted.ArrayNum = local_1b0.ArrayNum;
          (this_02->UnitContext).ElementsBeingInteracted.ArrayMax = local_1b0.ArrayMax;
          local_1b0.ArrayNum = 0;
          local_1b0.ArrayMax = 0;
          local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if ((this_02->UnitContext).ElementsBeingInteracted.ArrayNum == 0) {
          uVar14 = '\0';
        }
        else {
          uVar14 = (this_02->UnitContext).InteractionType;
        }
        pTVar2 = &this_02->AssetUserData;
        (this_02->UnitContext).InteractionType = uVar14;
        piVar1 = &(this_02->AssetUserData).ArrayMax;
        (this_02->AssetUserData).ArrayNum = 0;
        local_120 = pTVar2;
        if ((this_02->AssetUserData).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        plVar21 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x30))(&pUVar7->_padding_);
        if (plVar21 != (longlong *)0x0) {
          puVar26 = (undefined8 *)*plVar21;
          lVar17 = plVar21[1];
          puVar3 = puVar26 + (int)lVar17;
          while( true ) {
            if ((int)plVar21[1] != (int)lVar17) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<UAssetUserData_*_const,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res10);
            }
            if (puVar26 == puVar3) break;
            local_188 = *puVar26;
            pFVar6 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_188) &&
                ((FScriptContainerElement *)&local_188 < pFVar6 + (longlong)*piVar1 * 8)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            iVar15 = (this_02->AssetUserData).ArrayNum;
            if (iVar15 == *piVar1) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            puVar26 = puVar26 + 1;
            (this_02->AssetUserData).ArrayNum = iVar15 + 1;
            *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_188;
          }
        }
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        local_1a0 = 0;
        if (((pFVar6 <= (FScriptContainerElement *)&local_1a0) &&
            ((FScriptContainerElement *)&local_1a0 < pFVar6 + (longlong)*piVar1 * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar15 = (this_02->AssetUserData).ArrayNum;
        if (iVar15 != 0) {
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          iVar31 = 0;
          lVar17 = 0;
          bVar12 = *(longlong *)pFVar6 != local_1a0;
          lVar23 = local_1a0;
          iVar29 = 0;
          do {
            iVar27 = iVar29;
            do {
              lVar17 = lVar17 + 1;
              iVar27 = iVar27 + 1;
              if (iVar15 <= lVar17) break;
            } while (bVar12 == (*(longlong *)(pFVar6 + lVar17 * 8) != lVar23));
            if (bVar12 != false) {
              if (iVar31 != iVar29) {
                memmove(pFVar6 + (longlong)iVar31 * 8,pFVar6 + (longlong)iVar29 * 8,
                        (longlong)(iVar27 - iVar29) << 3);
                lVar23 = local_1a0;
              }
              iVar31 = iVar31 + (iVar27 - iVar29);
            }
            bVar12 = (bool)(bVar12 ^ 1);
            iVar29 = iVar27;
          } while (lVar17 < iVar15);
          local_res20 = (FName *)CONCAT44(local_res20._4_4_,iVar31);
          local_120->ArrayNum = iVar31;
          this_02 = local_118;
        }
        pFVar32 = local_180;
        UpdateModuleVariables(this,(FRigModuleInstance *)local_180[1]);
        (**(code **)(local_198->_padding_ + 0x300))(local_198,pFVar32 + 2);
        *(undefined1 *)&pFVar32[3].ComparisonIndex.Value = 1;
        FLazyName::Resolve(&FRigUnit_ConnectorExecution::EventName);
        pFVar16 = local_190;
        if (pFVar32[2] == local_110) {
          FModularRigResolveResult::operator=
                    (&(local_190->UnitContext).ConnectionResolve,
                     &(this_02->UnitContext).ConnectionResolve);
        }
        pUVar30 = local_178;
        local_178->ExecuteContext = local_108;
        URigHierarchy::SendQueuedNotifications(local_178);
        LeaveCriticalSection((LPCRITICAL_SECTION)&pUVar30->ExecuteContextLock);
        *local_140.Guard.RefValue = local_140.Guard.OriginalValue;
        this->ExecutionQueueFront = this->ExecutionQueueFront + 1;
      }
      else {
        uVar4 = *(undefined4 *)((longlong)&pUVar7->_padding_ + 4);
        *(undefined4 *)((longlong)&pUVar7->_padding_ + 4) = uVar4;
        uVar5 = (undefined4)pUVar7->_padding_;
        *(undefined4 *)&pUVar7->_padding_ = uVar5;
        cVar13 = (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,local_res20);
        pUVar30 = local_178;
        if (cVar13 != '\0') {
          this_03 = GetModularRigModel(this);
          pFVar32 = local_180;
          pFVar19 = FModularRigModel::FindModule(this_03,local_180);
          if (pFVar19 != (FRigModuleReference *)0x0) {
            FControlRigOverrideContainer::CopyToUObject(&pFVar19->ConfigOverrides,(UObject *)pUVar7)
            ;
          }
          *(undefined4 *)&pUVar7->_padding_ = uVar5;
          *(undefined4 *)((longlong)&pUVar7->_padding_ + 4) = uVar4;
          goto LAB_14a258dbd;
        }
        this->ExecutionQueueFront = this->ExecutionQueueFront + 1;
        *(undefined4 *)&pUVar7->_padding_ = uVar5;
        *(undefined4 *)((longlong)&pUVar7->_padding_ + 4) = uVar4;
        local_178->ExecuteContext = pFVar8;
        URigHierarchy::SendQueuedNotifications(local_178);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        *local_140.Guard.RefValue = local_140.Guard.OriginalValue;
      }
    }
  } while( true );
}

// Execute_Internal @ 14a2595e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UModularRig::Execute_Internal(UModularRig *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FControlRigExecuteContext *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  code *local_48;
  UModularRig **local_40;
  UModularRig *local_38;
  FName *local_30;
  undefined8 local_28;
  FRigUnitContext *local_20;
  
  if (*(longlong *)&this->field_0x58 == 0) {
    return false;
  }
  if (*(longlong *)&this->field_0x150 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x14c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicDataSafe<FControlRigExecuteContext>
                     (*(FRigVMExtendedExecuteContext **)&this->field_0x150);
  iVar2 = (this->RootModules).ArrayNum;
  pFVar7 = (this->RootModules).AllocatorInstance.Data;
  local_20 = &pFVar6->UnitContext;
  local_28 = *(undefined8 *)&this->field_0x338;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  local_38 = this;
  local_30 = param_1;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::Execute_Internal'::__l5::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar4 = TraverseModules(*(FRigModuleInstance **)pFVar7,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_48);
    if (!bVar4) break;
    pFVar7 = pFVar7 + 8;
  }
  ExecuteQueue(this);
  if (this->field_0x54 != '\0') {
    *(float *)&this->field_0x4c = *(float *)&this->field_0x48 + *(float *)&this->field_0x4c;
  }
  return true;
}

// FindModule @ 14a25b4c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,FRigElementKey *param_1)

{
  FRigModuleInstance *pFVar1;
  FRigElementKey local_res8 [2];
  
  if (*(URigHierarchy **)&this->field_0x338 != (URigHierarchy *)0x0) {
    URigHierarchy::GetModuleFName(*(URigHierarchy **)&this->field_0x338,local_res8);
    if (local_res8[0]._0_8_ != 0) {
      pFVar1 = FindModule(this,(FName *)local_res8);
      return pFVar1;
    }
  }
  return (FRigModuleInstance *)0x0;
}

// FindModule @ 14a25b520

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  size_t sVar6;
  FRigModuleInstance *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FRigModuleInstance *pFVar10;
  int iVar11;
  FName local_res8;
  FString local_28;
  
  pFVar7 = (FRigModuleInstance *)(this->Modules).AllocatorInstance.Data;
  pFVar10 = pFVar7 + (this->Modules).ArrayNum;
  do {
    if (pFVar7 == pFVar10) {
LAB_14a25b56b:
      pFVar7 = (FRigModuleInstance *)0x0;
      pFVar5 = ::FName::ToString(param_1,&local_28);
      pwVar2 = FRigHierarchyModulePath::ModuleNameSuffix;
      iVar8 = 0;
      iVar4 = iVar8;
      if (FRigHierarchyModulePath::ModuleNameSuffix != (wchar_t *)0x0) {
        sVar6 = wcslen(FRigHierarchyModulePath::ModuleNameSuffix);
        iVar4 = (int)sVar6;
      }
      bVar3 = ::FString::EndsWith(pFVar5,pwVar2,iVar4,IgnoreCase);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pFVar5 = ::FName::ToString(param_1,&local_28);
        iVar4 = (pFVar5->Data).ArrayNum;
        iVar11 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar11 = iVar8;
        }
        if (iVar11 + -1 < iVar11) {
          iVar11 = iVar11 + -1;
        }
        if (0 < iVar11) {
          iVar8 = iVar11;
        }
        ::FString::RemoveAt(pFVar5,iVar8,1,No);
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar4 = (pFVar5->Data).ArrayNum;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        pFVar9 = (FScriptContainerElement *)L"";
        if (iVar4 != 0) {
          pFVar9 = pFVar1;
        }
        ::FName::FName(&local_res8,(wchar_t *)pFVar9);
        pFVar7 = FindModule(this,&local_res8);
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      return pFVar7;
    }
    if (pFVar7->Name == *param_1) {
      if (pFVar7 != (FRigModuleInstance *)0x0) {
        return pFVar7;
      }
      goto LAB_14a25b56b;
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// FindModule @ 14a25b6a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,FRigBaseElement *param_1)

{
  FRigModuleInstance *pFVar1;
  FRigElementKey local_res10 [2];
  
  if ((param_1 != (FRigBaseElement *)0x0) &&
     (*(URigHierarchy **)&this->field_0x338 != (URigHierarchy *)0x0)) {
    URigHierarchy::GetModuleFName(*(URigHierarchy **)&this->field_0x338,local_res10);
    if (local_res10[0]._0_8_ != 0) {
      pFVar1 = FindModule(this,(FName *)local_res10);
      return pFVar1;
    }
  }
  return (FRigModuleInstance *)0x0;
}

// FindModule @ 14a25b710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,UControlRig *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FRigModuleInstance *local_res18;
  UControlRig *local_38;
  FRigModuleInstance **local_30;
  code *local_28;
  UControlRig **local_20;
  
  pFVar4 = (this->RootModules).AllocatorInstance.Data;
  local_30 = &local_res18;
  iVar2 = (this->RootModules).ArrayNum;
  local_res18 = (FRigModuleInstance *)0x0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_38 = param_1;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::FindModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar3 = TraverseModules(*(FRigModuleInstance **)pFVar4,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_28);
    if (!bVar3) {
      return local_res18;
    }
    pFVar4 = pFVar4 + 8;
  }
  return local_res18;
}

// FindModule @ 14a25b7c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,FRigElementKey *param_1)

{
  FRigModuleInstance *pFVar1;
  FRigElementKey local_res8 [2];
  
  if (*(URigHierarchy **)&this->field_0x338 != (URigHierarchy *)0x0) {
    URigHierarchy::GetModuleFName(*(URigHierarchy **)&this->field_0x338,local_res8);
    if (local_res8[0]._0_8_ != 0) {
      pFVar1 = FindModule(this,(FName *)local_res8);
      return pFVar1;
    }
  }
  return (FRigModuleInstance *)0x0;
}

// FindModule @ 14a25b820

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  size_t sVar6;
  FRigModuleInstance *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FRigModuleInstance *pFVar10;
  int iVar11;
  FName FStackX_8;
  FString FStack_28;
  
  pFVar7 = (FRigModuleInstance *)(this->Modules).AllocatorInstance.Data;
  pFVar10 = pFVar7 + (this->Modules).ArrayNum;
  do {
    if (pFVar7 == pFVar10) {
LAB_14a25b56b:
      pFVar7 = (FRigModuleInstance *)0x0;
      pFVar5 = ::FName::ToString(param_1,&FStack_28);
      pwVar2 = FRigHierarchyModulePath::ModuleNameSuffix;
      iVar8 = 0;
      iVar4 = iVar8;
      if (FRigHierarchyModulePath::ModuleNameSuffix != (wchar_t *)0x0) {
        sVar6 = wcslen(FRigHierarchyModulePath::ModuleNameSuffix);
        iVar4 = (int)sVar6;
      }
      bVar3 = ::FString::EndsWith(pFVar5,pwVar2,iVar4,IgnoreCase);
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pFVar5 = ::FName::ToString(param_1,&FStack_28);
        iVar4 = (pFVar5->Data).ArrayNum;
        iVar11 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar11 = iVar8;
        }
        if (iVar11 + -1 < iVar11) {
          iVar11 = iVar11 + -1;
        }
        if (0 < iVar11) {
          iVar8 = iVar11;
        }
        ::FString::RemoveAt(pFVar5,iVar8,1,No);
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar4 = (pFVar5->Data).ArrayNum;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        pFVar9 = (FScriptContainerElement *)L"";
        if (iVar4 != 0) {
          pFVar9 = pFVar1;
        }
        ::FName::FName(&FStackX_8,(wchar_t *)pFVar9);
        pFVar7 = FindModule(this,&FStackX_8);
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
        }
      }
      return pFVar7;
    }
    if (pFVar7->Name == *param_1) {
      if (pFVar7 != (FRigModuleInstance *)0x0) {
        return pFVar7;
      }
      goto LAB_14a25b56b;
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// FindModule @ 14a25b830

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,FRigBaseElement *param_1)

{
  FRigModuleInstance *pFVar1;
  FRigElementKey local_res10 [2];
  
  if ((param_1 != (FRigBaseElement *)0x0) &&
     (*(URigHierarchy **)&this->field_0x338 != (URigHierarchy *)0x0)) {
    URigHierarchy::GetModuleFName(*(URigHierarchy **)&this->field_0x338,local_res10);
    if (local_res10[0]._0_8_ != 0) {
      pFVar1 = FindModule(this,(FName *)local_res10);
      return pFVar1;
    }
  }
  return (FRigModuleInstance *)0x0;
}

// FindModule @ 14a25b8a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall UModularRig::FindModule(UModularRig *this,UControlRig *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FRigModuleInstance *local_res18;
  UControlRig *local_38;
  FRigModuleInstance **local_30;
  code *local_28;
  UControlRig **local_20;
  
  pFVar4 = (this->RootModules).AllocatorInstance.Data;
  local_30 = &local_res18;
  iVar2 = (this->RootModules).ArrayNum;
  local_res18 = (FRigModuleInstance *)0x0;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_38 = param_1;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::FindModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar3 = TraverseModules(*(FRigModuleInstance **)pFVar4,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_28);
    if (!bVar3) {
      return local_res18;
    }
    pFVar4 = pFVar4 + 8;
  }
  return local_res18;
}

// FindModule_Deprecated @ 14a25bd80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall
UModularRig::FindModule_Deprecated(UModularRig *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FRigModuleInstance *pFVar3;
  FRigModuleInstance *this_00;
  bool bVar4;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,param_1);
  this_00 = (FRigModuleInstance *)(this->Modules).AllocatorInstance.Data;
  pFVar3 = this_00 + (this->Modules).ArrayNum;
  while( true ) {
    if (this_00 == pFVar3) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return (FRigModuleInstance *)0x0;
    }
    pFVar2 = FRigModuleInstance::GetModulePath_Deprecated(this_00,&local_18);
    iVar1 = (pFVar2->Data).ArrayNum;
    if (iVar1 == local_28.Data.ArrayNum) {
      if (iVar1 < 2) {
        bVar4 = true;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                           (wchar_t *)local_28.Data.AllocatorInstance.Data);
        bVar4 = iVar1 == 0;
      }
    }
    else {
      bVar4 = iVar1 + local_28.Data.ArrayNum == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    this_00 = this_00 + 1;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// FindModule_Deprecated @ 14a25be70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigModuleInstance * __thiscall
UModularRig::FindModule_Deprecated(UModularRig *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  FRigModuleInstance *pFVar3;
  FRigModuleInstance *this_00;
  bool bVar4;
  FString FStack_28;
  FString FStack_18;
  
  ::FString::FString(&FStack_28,param_1);
  this_00 = (FRigModuleInstance *)(this->Modules).AllocatorInstance.Data;
  pFVar3 = this_00 + (this->Modules).ArrayNum;
  while( true ) {
    if (this_00 == pFVar3) {
      if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
      }
      return (FRigModuleInstance *)0x0;
    }
    pFVar2 = FRigModuleInstance::GetModulePath_Deprecated(this_00,&FStack_18);
    iVar1 = (pFVar2->Data).ArrayNum;
    if (iVar1 == FStack_28.Data.ArrayNum) {
      if (iVar1 < 2) {
        bVar4 = true;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,
                           (wchar_t *)FStack_28.Data.AllocatorInstance.Data);
        bVar4 = iVar1 == 0;
      }
    }
    else {
      bVar4 = iVar1 + FStack_28.Data.ArrayNum == 1;
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    this_00 = this_00 + 1;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return this_00;
}

// ForEachModule @ 14a25d0f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UModularRig::ForEachModule
          (UModularRig *this,TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForAnyElementType *pFVar13;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  ForAnyElementType local_48;
  int local_40 [2];
  TFunctionRef<bool___cdecl(FRigModuleInstance_*)> local_38;
  
  if (param_2) {
    pFVar10 = (this->RootModules).AllocatorInstance.Data;
    iVar2 = (this->RootModules).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->RootModules).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar10 == pFVar1) break;
      local_38._0_8_ = *(undefined8 *)param_1;
      local_38._8_8_ = *(undefined8 *)&param_1->field_0x8;
      bVar5 = TraverseModules(*(FRigModuleInstance **)pFVar10,&local_38);
      if (!bVar5) {
        return;
      }
      pFVar10 = pFVar10 + 8;
    }
  }
  else {
    uVar8 = (this->Modules).ArrayNum;
    uVar11 = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40[0] = 0;
    local_40[1] = 0;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar8,&local_48,0,local_40 + 1);
    }
    if (((TArray<FRigModuleInstance_*,TSizedDefaultAllocator<32>_> *)&local_48 == &this->RootModules
        ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->RootModules).ArrayNum;
    if (iVar2 != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&local_48,local_40,local_40 + 1);
      memcpy(local_48.Data + (longlong)iVar7 * 8,(this->RootModules).AllocatorInstance.Data,
             (longlong)iVar2 << 3);
    }
    uVar12 = uVar11;
    if (0 < local_40[0]) {
      do {
        uVar9 = (uint)uVar11;
        uVar8 = 0;
        if ((int)uVar9 < local_40[0]) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res20 = *(undefined8 *)(local_48.Data + uVar12);
        cVar6 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20);
        if (cVar6 == '\0') break;
        uVar8 = 0;
        if ((int)uVar9 < local_40[0]) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = *(longlong *)(local_48.Data + uVar12);
        pFVar13 = (ForAnyElementType *)(lVar3 + 0x88);
        if ((&local_48 == pFVar13) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = *(int *)(lVar3 + 0x90);
        if (iVar2 != 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar2,&local_48,local_40,local_40 + 1);
          memcpy(local_48.Data + (longlong)iVar7 * 8,pFVar13->Data,(longlong)iVar2 << 3);
        }
        uVar11 = (ulonglong)(uVar9 + 1);
        uVar12 = uVar12 + 8;
      } while ((int)(uVar9 + 1) < local_40[0]);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// ForEachModule @ 14a25d3d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UModularRig::ForEachModule
          (UModularRig *this,TFunctionRef<bool___cdecl(FRigModuleInstance_const_*)> *param_1,
          bool param_2)

{
  TFunctionRef<bool___cdecl(FRigModuleInstance_const_*)> *local_res10 [3];
  code *local_18;
  TFunctionRef<bool___cdecl(FRigModuleInstance_const_*)> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
             ::Call;
  local_res10[0] = param_1;
  ForEachModule(this,(TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_18,param_2);
  return;
}

// GetControlsInOrder @ 14a261aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UModularRig::GetControlsInOrder
          (UModularRig *this,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 *puVar7;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  undefined8 local_110;
  code **local_108;
  undefined8 *local_100;
  TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *local_f8;
  code *local_f0;
  undefined8 **local_e8;
  code *local_e0;
  code ***local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  UModularRig *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if (*(URigHierarchy **)&this->field_0x338 != (URigHierarchy *)0x0) {
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UModularRig::GetControlsInOrder'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_a8 = local_98;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularRig::GetControlsInOrder'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                  ::Call;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_a0 = 0;
    local_b0 = this;
    URigHierarchy::Traverse
              (*(URigHierarchy **)&this->field_0x338,
               (TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_c8,true);
    pFVar6 = (this->RootModules).AllocatorInstance.Data;
    local_100 = (undefined8 *)local_98;
    iVar1 = (this->RootModules).ArrayNum;
    local_e8 = &local_100;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::GetControlsInOrder'::__l2::<lambda_2>,bool,FRigModuleInstance_const_*>
               ::Call;
    local_108 = &local_f0;
    pFVar5 = pFVar6 + (longlong)iVar1 * 8;
    local_f8 = param_1;
    while( true ) {
      if ((this->RootModules).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_118);
      }
      if (pFVar6 == pFVar5) break;
      local_d8 = &local_108;
      local_e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
                 ::Call;
      bVar2 = TraverseModules(*(FRigModuleInstance **)pFVar6,
                              (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_e0);
      if (!bVar2) break;
      pFVar6 = pFVar6 + 8;
    }
    local_110 = 0;
    uVar3 = ::GetTypeHash((FNameEntryId)0x0);
    if (local_98._8_4_ != local_64) {
      puVar7 = local_60;
      if (local_58 != (undefined1 *)0x0) {
        puVar7 = local_58;
      }
      iVar1 = *(int *)(puVar7 + (ulonglong)(local_50 - 1U & uVar3) * 4);
      while (iVar1 != -1) {
        pFVar5 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar1 * 0x20);
        if (*(longlong *)pFVar5 == 0) {
          pTVar4 = (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)(pFVar5 + 8);
          if (pFVar5 == (FScriptContainerElement *)0x0) {
            pTVar4 = (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar4 != (TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_> *)0x0) {
            TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>::
            Append<FRigControlElement_*,TSizedDefaultAllocator<32>_>(param_1,pTVar4);
          }
          break;
        }
        iVar1 = *(int *)(pFVar5 + 0x18);
      }
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigControlElement_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,0,local_98._8_4_);
    iVar1 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_68 = 0xffffffff;
    local_64 = 0;
    local_70 = 0;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  return;
}

// GetElementKeyRedirector @ 14a263060

FRigElementKeyRedirector * __thiscall UModularRig::GetElementKeyRedirector(UModularRig *this)

{
  return (FRigElementKeyRedirector *)&this->field_0x780;
}

// GetElementKeyRedirector @ 14a263070

FRigElementKeyRedirector * __thiscall
UModularRig::GetElementKeyRedirector
          (UModularRig *this,FRigElementKeyRedirector *__return_storage_ptr__)

{
  FRigElementKeyRedirector::FRigElementKeyRedirector
            (__return_storage_ptr__,(FRigElementKeyRedirector *)&this->field_0x780);
  return __return_storage_ptr__;
}

// GetEventsForAllModules @ 14a2637c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRig::GetEventsForAllModules
          (UModularRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res18;
  code **local_res20;
  code *local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_40;
  code *local_38;
  code ***local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = (this->RootModules).AllocatorInstance.Data;
  local_40 = &local_res18;
  iVar2 = (this->RootModules).ArrayNum;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModularRig::GetEventsForAllModules'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
             ::Call;
  local_res20 = &local_48;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_res18 = __return_storage_ptr__;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    local_30 = &local_res20;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar3 = TraverseModules(*(FRigModuleInstance **)pFVar4,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_38);
    if (!bVar3) {
      return __return_storage_ptr__;
    }
    pFVar4 = pFVar4 + 8;
  }
  return __return_storage_ptr__;
}

// GetEventsForModule @ 14a263880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRig::GetEventsForModule
          (UModularRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *_Src;
  FString *pFVar4;
  FString *pFVar5;
  UControlRig *pUVar6;
  undefined8 *puVar7;
  FString local_28;
  FString local_18;
  
  pFVar4 = ::FString::FString(&local_28,param_1);
  pFVar5 = ::FString::FString(&local_18,pFVar4);
  pUVar6 = GetModuleRig(this,pFVar5);
  pFVar3 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  piVar1 = &__return_storage_ptr__->ArrayMax;
  if (pUVar6 == (UControlRig *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(pUVar6->_padding_ + 0x310))();
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)(puVar7 + 1);
    _Src = (void *)*puVar7;
    __return_storage_ptr__->ArrayNum = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
    }
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// GetEventsForModuleByName @ 14a263980

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRig::GetEventsForModuleByName
          (UModularRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  UControlRig *pUVar3;
  undefined8 *puVar4;
  
  pUVar3 = GetModuleRigByName(this,param_1);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  if (pUVar3 == (UControlRig *)0x0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  puVar4 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x310))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(puVar4 + 1);
  _Src = (void *)*puVar4;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,piVar1);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return __return_storage_ptr__;
}

// GetModularRigModel @ 14a265630

FModularRigModel * __thiscall UModularRig::GetModularRigModel(UModularRig *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FModularRigModel *pFVar5;
  
  if ((*(uint *)&this->field_0x8 >> 4 & 1) != 0) {
    return &this->ModularRigModel;
  }
  while( true ) {
    pUVar4 = *(UClass **)&this->field_0x10;
    if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar4);
    }
    this = (UModularRig *)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if (((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar1) ||
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar4->_padding_)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L""), bVar3)) break;
    if ((*(uint *)&this->field_0x8 >> 4 & 1) != 0) {
      return &this->ModularRigModel;
    }
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FModularRigModel *)(*pcVar2)();
  return pFVar5;
}

// GetModularRigSettings @ 14a2656e0

FModularRigSettings * __thiscall UModularRig::GetModularRigSettings(UModularRig *this)

{
  int iVar1;
  UModularRig *pUVar2;
  UClass *pUVar3;
  
  if ((*(uint *)&this->field_0x8 >> 4 & 1) == 0) {
    while( true ) {
      pUVar3 = *(UClass **)&this->field_0x10;
      if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar3);
      }
      pUVar2 = (UModularRig *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UModularRig *)0x0) break;
      pUVar3 = StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar3->_padding_)) || (this = pUVar2, (*(uint *)&pUVar2->field_0x8 >> 4 & 1) != 0))
      break;
    }
  }
  return &this->ModularRigSettings;
}

// GetModuleNames @ 14a265a80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRig::GetModuleNames
          (UModularRig *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res10;
  code **local_res18;
  code *local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> **local_40;
  code *local_38;
  code ***local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = (this->Modules).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar2,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  pFVar5 = (this->RootModules).AllocatorInstance.Data;
  local_40 = &local_res10;
  iVar3 = (this->RootModules).ArrayNum;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModularRig::GetModuleNames'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
             ::Call;
  local_res18 = &local_48;
  pFVar1 = pFVar5 + (longlong)iVar3 * 8;
  local_res10 = __return_storage_ptr__;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    local_30 = &local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar4 = TraverseModules(*(FRigModuleInstance **)pFVar5,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_38);
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 8;
  }
  return __return_storage_ptr__;
}

// GetModulePaths @ 14a265df0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UModularRig::GetModulePaths
          (UModularRig *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  code **local_res18;
  code *local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_40;
  code *local_38;
  code ***local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = (this->Modules).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  pFVar5 = (this->RootModules).AllocatorInstance.Data;
  local_40 = &local_res10;
  iVar3 = (this->RootModules).ArrayNum;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModularRig::GetModulePaths'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
             ::Call;
  local_res18 = &local_48;
  pFVar1 = pFVar5 + (longlong)iVar3 * 8;
  local_res10 = __return_storage_ptr__;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    local_30 = &local_res18;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar4 = TraverseModules(*(FRigModuleInstance **)pFVar5,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_38);
    if (!bVar4) {
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 8;
  }
  return __return_storage_ptr__;
}

// GetModuleRig @ 14a266050

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UControlRig * __thiscall UModularRig::GetModuleRig(UModularRig *this,FString *param_1)

{
  UControlRig *pUVar1;
  FScriptContainerElement *pFVar2;
  FRigModuleInstance *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  
  pFVar3 = FindModule_Deprecated(this,param_1);
  if (pFVar3 == (FRigModuleInstance *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a266119;
    pFVar4 = &::LOG_Static;
  }
  else {
    UpdateModuleVariables(this,pFVar3);
    pUVar1 = (pFVar3->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar1 == (UControlRig *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
      (pFVar3->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    }
    else {
      pUVar1 = (pFVar3->RigPtr).field0_0x0.DebugPtr;
      if (pUVar1 != (UControlRig *)0x0) {
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        return pUVar1;
      }
    }
    if ((byte)LogControlRig._0_1_ < 2) goto LAB_14a266119;
    if ((param_1->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogControlRig);
LAB_14a266119:
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (UControlRig *)0x0;
}

// GetModuleRigByName @ 14a266140

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UControlRig * __thiscall UModularRig::GetModuleRigByName(UModularRig *this,FName param_1)

{
  UControlRig *pUVar1;
  FRigModuleInstance *pFVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pFVar2 = FindModule(this,local_res10);
  if (pFVar2 == (FRigModuleInstance *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return (UControlRig *)0x0;
    }
    ::FName::ToString(local_res10,&local_18);
    pFVar4 = &::LOG_Static;
  }
  else {
    UpdateModuleVariables(this,pFVar2);
    pUVar1 = (pFVar2->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar1 == (UControlRig *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
      (pFVar2->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    }
    else {
      pUVar1 = (pFVar2->RigPtr).field0_0x0.DebugPtr;
      if (pUVar1 != (UControlRig *)0x0) {
        return pUVar1;
      }
    }
    if ((byte)LogControlRig._0_1_ < 2) {
      return (UControlRig *)0x0;
    }
    pFVar3 = ::FName::ToString(local_res10,&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogControlRig);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (UControlRig *)0x0;
}

// GetModuleRigByName @ 14a266240

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UControlRig * __thiscall UModularRig::GetModuleRigByName(UModularRig *this,FName param_1)

{
  UControlRig *pUVar1;
  FRigModuleInstance *pFVar2;
  FString *pFVar3;
  FStaticBasicLogRecord *pFVar4;
  FName aFStackX_10 [3];
  FString FStack_18;
  
  aFStackX_10[0] = param_1;
  pFVar2 = FindModule(this,aFStackX_10);
  if (pFVar2 == (FRigModuleInstance *)0x0) {
    if ((byte)LogControlRig._0_1_ < 2) {
      return (UControlRig *)0x0;
    }
    ::FName::ToString(aFStackX_10,&FStack_18);
    pFVar4 = &::LOG_Static;
  }
  else {
    UpdateModuleVariables(this,pFVar2);
    pUVar1 = (pFVar2->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar1 == (UControlRig *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
      (pFVar2->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    }
    else {
      pUVar1 = (pFVar2->RigPtr).field0_0x0.DebugPtr;
      if (pUVar1 != (UControlRig *)0x0) {
        return pUVar1;
      }
    }
    if ((byte)LogControlRig._0_1_ < 2) {
      return (UControlRig *)0x0;
    }
    pFVar3 = ::FName::ToString(aFStackX_10,&FStack_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pFVar4 = &::LOG_Static;
    }
    else {
      pFVar4 = &::LOG_Static;
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogControlRig);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  return (UControlRig *)0x0;
}

// GetModuleRig_Deprecated @ 14a266250

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRig * __thiscall UModularRig::GetModuleRig_Deprecated(UModularRig *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  UControlRig *pUVar3;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,param_1);
  pUVar3 = GetModuleRig(this,pFVar2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar3;
}

// GetParentModuleName @ 14a266cc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall UModularRig::GetParentModuleName(UModularRig *this,FName *param_1)

{
  FRigModuleInstance *pFVar1;
  FName *in_R8;
  
  pFVar1 = FindModule(this,in_R8);
  if (pFVar1 != (FRigModuleInstance *)0x0) {
    *param_1 = pFVar1->ParentModuleName;
    return (FName)param_1;
  }
  param_1->ComparisonIndex = 0;
  param_1->Number = 0;
  return (FName)param_1;
}

// GetParentModuleNameForBP @ 14a266d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall UModularRig::GetParentModuleNameForBP(UModularRig *this,FName param_1)

{
  FRigModuleInstance *pFVar1;
  FName local_res18 [2];
  
  pFVar1 = FindModule(this,local_res18);
  if (pFVar1 != (FRigModuleInstance *)0x0) {
    *(FName *)param_1 = pFVar1->ParentModuleName;
    return param_1;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// GetParentPathForBP @ 14a266e40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
UModularRig::GetParentPathForBP(UModularRig *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FRigModuleInstance *this_00;
  FRigModuleReference *this_01;
  FRigHierarchyModulePath *pFVar2;
  wchar_t *pwVar3;
  FName local_res18 [2];
  FRigHierarchyModulePath local_48;
  
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(local_res18,pwVar3);
  this_00 = FindModule(this,local_res18);
  if (this_00 != (FRigModuleInstance *)0x0) {
    this_01 = FRigModuleInstance::GetModuleReference(this_00);
    if (this_01 != (FRigModuleReference *)0x0) {
      pFVar2 = FRigModuleReference::GetModulePath(this_01,&local_48);
      ::FString::FString(__return_storage_ptr__,&pFVar2->ModulePath);
      if ((local_48.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_48.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_48.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_48.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_48.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ModulePath.Data.AllocatorInstance.Data);
      }
      goto LAB_14a266ef8;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_14a266ef8:
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetPreloadDependencies @ 14a2676b0

void __thiscall
UModularRig::GetPreloadDependencies
          (UModularRig *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_10;
  
  UObject::GetPreloadDependencies((UObject *)this,param_1);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularRig::GetPreloadDependencies'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularRig::GetPreloadDependencies'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                ::Call;
  local_20 = param_1;
  FModularRigModel::ForEachModule
            (&this->ModularRigModel,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38
             ,true);
  return;
}

// GetPrivateStaticClass @ 14a268240

UClass * __cdecl UModularRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModularRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ModularRig",
               &Z_Registration_Info_UClass_UModularRig.InnerSingleton,
               StaticRegisterNativesUModularRig,0xe20,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UModularRig>,
               InternalVTableHelperCtorCaller<UModularRig>,local_res8,UControlRig::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModularRig.InnerSingleton;
}

// GetSupportedEvents @ 14a26ba20

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UModularRig::GetSupportedEvents(UModularRig *this)

{
  if ((this->SupportedEvents).ArrayNum == 0) {
    UpdateSupportedEvents(this);
  }
  return &this->SupportedEvents;
}

// InitializeFromCDO @ 14a2728c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::InitializeFromCDO(UModularRig *this)

{
  UControlRig::InitializeFromCDO((UControlRig *)this);
  UpdateModuleHierarchyFromCDO(this);
  return;
}

// InitializeVMs @ 14a2729d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::InitializeVMs(UModularRig *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  code *local_28;
  undefined1 *local_20;
  
  URigVMHost::Initialize((URigVMHost *)this,param_1);
  iVar2 = (this->RootModules).ArrayNum;
  pFVar4 = (this->RootModules).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_res10[0] = param_1;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    local_20 = local_res10;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::InitializeVMs'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar3 = TraverseModules(*(FRigModuleInstance **)pFVar4,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_28);
    if (!bVar3) {
      return;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// InitializeVMs @ 14a272a70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UModularRig::InitializeVMs(UModularRig *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  FName *local_res18;
  code *local_28;
  FName **local_20;
  
  URigVMHost::InitializeVM((URigVMHost *)this,param_1);
  UpdateModuleHierarchyFromCDO(this);
  iVar2 = (this->RootModules).ArrayNum;
  pFVar4 = (this->RootModules).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_res18 = param_1;
  while( true ) {
    if ((this->RootModules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    local_20 = &local_res18;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::InitializeVMs'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar3 = TraverseModules(*(FRigModuleInstance **)pFVar4,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_28);
    if (!bVar3) {
      return true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// InitializeVMsFromCDO @ 14a272b20

void __thiscall UModularRig::InitializeVMsFromCDO(UModularRig *this)

{
  URigVM *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
  *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  URigVMHost *pUVar5;
  
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    pUVar5 = UClass::GetDefaultObject<URigVMHost>(*(UClass **)&this->field_0x10);
    if (((*(URigVM **)&this->field_0x58 == (URigVM *)0x0) ||
        (*(URigVM **)&this->field_0x58 != (pUVar5->VM).field0_0x0.DebugPtr)) &&
       (pUVar1 = (pUVar5->VM).field0_0x0.DebugPtr, pUVar1 != (URigVM *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      *(TObjectPtr<URigVM>_u_0 *)&this->field_0x58 = (pUVar5->VM).field0_0x0;
    }
    (**(code **)(*(longlong *)this + 0x358))(this);
    FRigVMDrawContainer::operator=((FRigVMDrawContainer *)&this->field_0x158,&pUVar5->DrawContainer)
    ;
    *(int *)&this->field_0x30 = (pUVar5->VMRuntimeSettings).MaximumArraySize;
    pTVar2 = (pUVar5->VMRuntimeSettings).LogFunction.SharedReferenceCount.ReferenceController;
    pTVar3 = (pUVar5->VMRuntimeSettings).LogFunction.Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x40;
    *(TFunction<void___cdecl(FRigVMLogSettings_const_&,FRigVMExecuteContext_const_*,FString_const_&)>
      **)&this->field_0x38 = pTVar3;
    *(TReferenceControllerBase<1> **)&this->field_0x40 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// OnObjectsReplaced @ 14a2783d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UModularRig::OnObjectsReplaced
          (UModularRig *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObject *pUVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *pTVar9;
  bool bVar10;
  UClass *pUVar11;
  UControlRig *this_00;
  FRigModuleInstance *this_01;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  int local_res20;
  FName local_a8;
  UObject *local_a0;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if ((this->Modules).ArrayNum != 0) {
    iVar3 = *(int *)&param_1->field_0x28;
    iStack_90 = 0;
    local_78 = 0;
    uStack_8c = 1;
    puVar1 = &param_1->field_0x10;
    bVar8 = false;
    iStack_7c = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&param_1->field_0x20;
      if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar13 = *puVar15;
      while (uVar13 == 0) {
        iStack_90 = iStack_90 + 1;
        local_78 = local_78 + 0x20;
        iStack_7c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14a27848c;
        uVar13 = puVar15[iStack_90];
      }
      uStack_8c = ~(uVar13 - 1) & uVar13;
      uVar2 = (ulonglong)uStack_8c * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_res20 = (int)lVar6;
      iStack_7c = local_res20 + -1 + local_78;
      if (iVar3 < iStack_7c) {
        iStack_7c = iVar3;
      }
    }
LAB_14a27848c:
    uVar13 = *(uint *)&param_1->field_0x28;
    uVar16 = uVar13 & 0xffffffe0;
    iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
    uStack_80 = 0xffffffff;
    TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
    TStack_60.CurrentBitIndex = iStack_7c;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar13 >> 5;
    TStack_60._28_4_ = iStack_7c;
    TStack_60.BaseBitIndex = local_78;
    uStack_40 = CONCAT44(uStack_6c,iStack_70);
    local_98 = param_1;
    local_88 = puVar1;
    iStack_74 = iStack_7c;
    local_68 = param_1;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(uint *)&param_1->field_0x28;
    if (uVar13 != uVar4) {
      puVar14 = *(undefined1 **)&param_1->field_0x20;
      if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
      while (uVar13 == 0) {
        iVar12 = iVar12 + 1;
        uVar16 = uVar16 + 0x20;
        uVar13 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar12)
        goto LAB_14a2785a0;
        uVar13 = *(uint *)(puVar14 + (longlong)iVar12 * 4);
      }
      uVar2 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar13 = (int)lVar6 + -1 + uVar16;
      if ((int)uVar4 < (int)uVar13) {
        uVar13 = uVar4;
      }
    }
LAB_14a2785a0:
    while( true ) {
      pTVar9 = local_68;
      if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_60.CurrentBitIndex == uVar13) &&
          (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar9 == param_1)) break;
      pUVar5 = *(UObject **)(*(longlong *)pTVar9 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      if ((pUVar5 != (UObject *)0x0) && (*(UModularRig **)&pUVar5->field_0x20 == this)) {
        pUVar11 = UControlRig::StaticClass();
        iVar3 = (int)pUVar11->_padding_;
        if ((iVar3 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar11->_padding_)) {
          this_00 = CastChecked<UControlRig,UObject>(pUVar5);
          local_a8 = (FName)this_00->_padding_;
          this_01 = FindModule(this,&local_a8);
          if (this_01 != (FRigModuleInstance *)0x0) {
            FRigModuleInstance::SetRig(this_01,this_00);
            this_00->bCopyHierarchyBeforeConstruction = false;
            local_a0 = *(UObject **)&this->field_0x338;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)
               ) {
              UE::GC::MarkAsReachable(local_a0);
            }
            UControlRig::SetDynamicHierarchy(this_00,(TObjectPtr<URigHierarchy>)&local_a0);
            (**(code **)(this_00->_padding_ + 0x2c0))(this_00,1);
            bVar8 = true;
          }
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    if (bVar8) {
      UpdateSupportedEvents(this);
      (**(code **)(*(longlong *)this + 0x318))(this);
    }
  }
  return;
}

// PostInitInstance @ 14a27c710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::PostInitInstance(UModularRig *this,URigVMHost *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  URigVMHost *pUVar5;
  URigVMHost *pUVar6;
  UClass *pUVar7;
  FName *pFVar8;
  UObject *pUVar9;
  FName FVar10;
  UPackage *pUVar11;
  FString *pFVar12;
  FRigModuleSettings *pFVar13;
  URigVM *pUVar14;
  FUObjectItem *pFVar15;
  FRigElementKeyRedirector *pFVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  EObjectFlags EVar19;
  undefined1 auStackY_208 [32];
  FGCScopeGuard aFStack_1c8 [4];
  undefined8 uStack_1c4;
  undefined1 auStack_1b8 [16];
  FName FStack_1a8;
  FName FStack_1a0;
  FName FStack_198;
  FString FStack_190;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [72];
  undefined4 uStack_b0;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  TStack_a8;
  void *pvStack_68;
  undefined4 uStack_60;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  EVar19 = RF_DefaultSubObject|RF_Public;
  if ((*(uint *)&this->field_0x8 >> 4 & 1) == 0) {
    EVar19 = RF_Transient|RF_Transactional;
  }
  if (*(longlong *)&this->field_0x150 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("RigVMExtendedExecuteContext != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                       ,0x14c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar18 = *(longlong **)&this->field_0x150;
  pUVar5 = (URigVMHost *)FControlRigExecuteContext::StaticStruct();
  pUVar6 = (URigVMHost *)(**(code **)(plVar18[0x17] + 0x20))(plVar18 + 0x17);
  if (pUVar6 == (URigVMHost *)0x0) {
LAB_14a27c24e:
    pUVar6 = (URigVMHost *)0x0;
  }
  else {
    pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar7->_padding_)) goto LAB_14a27c24e;
  }
  if (pUVar6 != pUVar5) {
    (**(code **)(*plVar18 + 8))(plVar18,pUVar5);
  }
  URigVMHost::UpdateVMSettings((URigVMHost *)this);
  if ((*(uint *)&this->field_0x8 >> 4 & 1) == 0) {
    FGCScopeGuard::FGCScopeGuard(aFStack_1c8);
    pFVar8 = ::FName::FName((FName *)(auStack_1b8 + 8),L"DynamicHierarchy");
    FVar2 = *pFVar8;
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    pUVar9 = StaticFindObjectFast
                       (pUVar7,(UObject *)this,FVar2,ExactClass,RF_DefaultSubObject,Borrowed);
    if (pUVar9 != (UObject *)0x0) {
      pFVar8 = ::FName::FName(&FStack_1a8,L"DynamicHierarchy_Deleted");
      FVar2 = *pFVar8;
      FVar10 = (FName)Z_Construct_UClass_URigHierarchy_NoRegister();
      pUVar7 = (UClass *)GetTransientPackage();
      MakeUniqueObjectName((UObject *)auStack_1b8,pUVar7,FVar10,FVar2.ComparisonIndex.Value.Value);
      pcVar3 = *(code **)(*(longlong *)pUVar9 + 0x170);
      pUVar11 = GetTransientPackage();
      pFVar12 = ::FName::ToString((FName *)auStack_1b8,&FStack_190);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      (*pcVar3)(pUVar9,pwVar17,pUVar11);
      if (FStack_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_190.Data.AllocatorInstance.Data);
      }
      UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)pUVar9);
    }
    FGCScopeGuard::~FGCScopeGuard(aFStack_1c8);
  }
  pFVar13 = UControlRig::GetRigModuleSettings((UControlRig *)this);
  if ((pFVar13->Identifier).Name.Data.ArrayNum < 2) {
LAB_14a27c38a:
    pFVar8 = ::FName::FName(&FStack_1a0,L"DynamicHierarchy");
    uStack_1c4 = 0;
    FVar2 = *pFVar8;
    if (FVar2 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar7 = Z_Construct_UClass_URigHierarchy_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_178,pUVar7);
    auStack_178._48_8_ = (FObjectInstancingGraph *)0x0;
    auStack_178._56_8_ = (UPackage *)0x0;
    auStack_178._40_8_ = (UObject *)0x0;
    auStack_178[0x20] = false;
    auStack_178._8_8_ = this;
    auStack_178._16_8_ = FVar2;
    auStack_178._24_4_ = EVar19;
    pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_178);
    if (auStack_178._64_8_ != 0) {
      plVar18 = (longlong *)(auStack_178 + 0x50);
      if ((longlong *)auStack_178._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)auStack_178._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    *(UObject **)&this->field_0x338 = pUVar9;
    bVar4 = IsInGameThread();
    if (!bVar4) {
      UObjectBaseUtility::AtomicallyClearInternalFlags
                (*(UObjectBaseUtility **)&this->field_0x338,Async);
    }
  }
  else {
    pUVar7 = UControlRig::StaticClass();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
    if (pUVar9 == (UObject *)0x0) goto LAB_14a27c38a;
  }
  if ((*(uint *)&this->field_0x8 >> 4 & 1) == 0) {
    if (param_1 == (URigVMHost *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4044058622282436222>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xe7e,"InCDO");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (*(longlong *)&this->field_0x58 != 0) {
        pUVar14 = URigVMHost::GetVM(param_1);
        if (*(URigVM **)&this->field_0x58 == (URigVM *)0x0) {
          bVar4 = pUVar14 == (URigVM *)0x0;
        }
        else {
          bVar4 = *(URigVM **)&this->field_0x58 == pUVar14;
        }
        if (!bVar4) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4044058622282436224>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                             ,0xe80,"VM == nullptr || VM == InCDO->GetVM()");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (*(longlong *)&this->field_0x58 != 0) goto LAB_14a27c63b;
      }
      pUVar14 = URigVMHost::GetVM(param_1);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (URigVM *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      *(URigVM **)&this->field_0x58 = pUVar14;
LAB_14a27c63b:
      pUVar7 = UControlRig::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_14a27c661;
    }
  }
  else {
    if (param_1 != (URigVMHost *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCDO == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRig.cpp"
                         ,0xe89,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)&this->field_0x58 == 0) {
      pFVar8 = ::FName::FName(&FStack_198,L"ControlRig_VM");
      pUVar14 = NewObject<URigVM>((UObject *)this,*pFVar8,EVar19,(UObject *)0x0,false,
                                  (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (URigVM *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      *(URigVM **)&this->field_0x58 = pUVar14;
      bVar4 = IsInGameThread();
      if (!bVar4) {
        UObjectBaseUtility::AtomicallyClearInternalFlags
                  (*(UObjectBaseUtility **)&this->field_0x58,Async);
      }
    }
    pFVar15 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)(*(longlong *)&this->field_0x10 + 0xc));
    if (((ulonglong)((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      pFVar15 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)(*(longlong *)&this->field_0x58 + 0xc));
      FUObjectItem::SetRootFlags(pFVar15,RootSet);
      pFVar13 = UControlRig::GetRigModuleSettings((UControlRig *)this);
      if (1 < (pFVar13->Identifier).Name.Data.ArrayNum) {
        pUVar7 = UControlRig::StaticClass();
        pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
        if (pUVar9 != (UObject *)0x0) goto LAB_14a27c636;
      }
      pFVar15 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)(*(longlong *)&this->field_0x338 + 0xc));
      FUObjectItem::SetRootFlags(pFVar15,RootSet);
    }
LAB_14a27c636:
    if (param_1 != (URigVMHost *)0x0) goto LAB_14a27c63b;
  }
  param_1 = (URigVMHost *)0x0;
LAB_14a27c661:
  if (param_1 != (URigVMHost *)0x0) {
    pFVar16 = FRigElementKeyRedirector::FRigElementKeyRedirector
                        ((FRigElementKeyRedirector *)auStack_f8,
                         (FRigElementKeyRedirector *)
                         (param_1[2].EvaluateMutex.CriticalSection.Opaque3 + 2),
                         *(URigHierarchy **)&this->field_0x338);
    FRigElementKeyRedirector::operator=((FRigElementKeyRedirector *)&this->field_0x780,pFVar16);
    uStack_60 = 0;
    if (pvStack_68 != (void *)0x0) {
      FMemory::Free(pvStack_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&TStack_a8);
    uStack_b0 = 0;
    if ((void *)auStack_f8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_f8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_f8);
  }
  (**(code **)(*(longlong *)this + 0x318))(this);
  return;
}

// PostInitProperties @ 14a27c7d0

void __thiscall UModularRig::PostInitProperties(UModularRig *this)

{
  UObject::PostInitProperties((UObject *)this);
  FModularRigModel::UpdateCachedChildren(&this->ModularRigModel);
  FModularRigConnections::UpdateFromConnectionList(&(this->ModularRigModel).Connections);
  UpdateSupportedEvents(this);
  return;
}

// PostLoad @ 14a27cc70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::PostLoad(UModularRig *this)

{
  UControlRig::PostLoad((UControlRig *)this);
  FModularRigModel::UpdateCachedChildren(&this->ModularRigModel);
  FModularRigConnections::UpdateFromConnectionList(&(this->ModularRigModel).Connections);
  return;
}

// RequestInitVMs @ 14a288660

void __thiscall UModularRig::RequestInitVMs(UModularRig *this)

{
  this->field_0x228 = 1;
  return;
}

// ResetExecutionQueue @ 14a289940

void __thiscall UModularRig::ResetExecutionQueue(UModularRig *this)

{
  (this->ExecutionQueue).ArrayNum = 0;
  if ((this->ExecutionQueue).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&(this->ExecutionQueue).AllocatorInstance,0,&(this->ExecutionQueue).ArrayMax
              );
  }
  this->ExecutionQueueFront = 0;
  return;
}

// ResetModules @ 14a2899a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::ResetModules(UModularRig *this,bool param_1)

{
  int *piVar1;
  TArray<FRigModuleInstance,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  FRigModuleInstance *pFVar4;
  code *pcVar5;
  bool bVar6;
  UPackage *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  char local_res10;
  uint local_48;
  
  pTVar2 = &this->Modules;
  iVar3 = (this->Modules).ArrayNum;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  pFVar8 = pFVar9 + 0x90;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0xc0;
  local_res10 = param_1;
  do {
    while( true ) {
      if ((this->Modules).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigModuleInstance,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar10) {
        (this->RootModules).ArrayNum = 0;
        if ((this->RootModules).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->RootModules).AllocatorInstance,0,&(this->RootModules).ArrayMax);
        }
        piVar1 = &(this->Modules).ArrayMax;
        pFVar4 = (FRigModuleInstance *)(pTVar2->AllocatorInstance).Data;
        iVar3 = (this->Modules).ArrayNum;
        if ((this->Modules).ArrayMax < 0) {
          DestructItems<FRigModuleInstance,int>(pFVar4,iVar3);
          (this->Modules).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc0,8,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FRigModuleInstance,int>(pFVar4,iVar3);
          (this->Modules).ArrayNum = 0;
        }
        (this->SupportedEvents).ArrayNum = 0;
        if ((this->SupportedEvents).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(this->SupportedEvents).AllocatorInstance,0,
                     &(this->SupportedEvents).ArrayMax);
        }
        return;
      }
      *(undefined4 *)pFVar8 = 0;
      if (*(int *)(pFVar8 + 4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(pFVar8 + -8),0,(int *)(pFVar8 + 4));
      }
      local_48 = local_48 & 0xffffff00;
      *(ulonglong *)(pFVar8 + 8) = (ulonglong)local_48;
      *(undefined4 *)(pFVar8 + 0x10) = 0;
      *(undefined2 *)(pFVar8 + 0x14) = 0xffff;
      *(undefined4 *)(pFVar8 + 0x18) = 0xffffffff;
      *(undefined8 *)(pFVar8 + 0x20) = 0;
      if (param_1 != false) break;
LAB_14a289b2b:
      pFVar9 = pFVar9 + 0xc0;
      pFVar8 = pFVar8 + 0xc0;
    }
    if ((*(longlong *)(pFVar8 + -0x80) == 0) ||
       ((*(uint *)(*(longlong *)(pFVar8 + -0x80) + 8) >> 0x1e & 1) != 0)) {
      *(undefined8 *)(pFVar8 + -0x80) = 0;
      goto LAB_14a289b2b;
    }
    if (*(longlong *)(pFVar8 + -0x80) == 0) goto LAB_14a289b2b;
    if ((*(UModularRig **)(*(longlong *)(pFVar8 + -0x80) + 0x20) != this) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ModuleRig->GetOuter() == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRig.cpp"
                           ,0x330,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((*(longlong *)(pFVar8 + -0x80) != 0) &&
        ((*(uint *)(*(longlong *)(pFVar8 + -0x80) + 8) >> 0x1e & 1) == 0)) &&
       (this_00 = *(UObjectBaseUtility **)(pFVar8 + -0x80), this_00 != (UObjectBaseUtility *)0x0)) {
      pcVar5 = *(code **)(*(longlong *)this_00 + 0x170);
      pUVar7 = GetTransientPackage();
      (*pcVar5)(this_00,0,pUVar7,0x34);
      UObjectBaseUtility::MarkAsGarbage(this_00);
      param_1 = (bool)local_res10;
    }
    *(undefined8 *)(pFVar8 + -0x80) = 0;
    pFVar9 = pFVar9 + 0xc0;
    *(undefined8 *)(pFVar8 + -0x88) = 0;
    pFVar8 = pFVar8 + 0xc0;
  } while( true );
}

// Serialize @ 14a28f370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::Serialize(UModularRig *this,FArchive *param_1)

{
  UControlRig::Serialize((UControlRig *)this,param_1);
  if ((param_1->field_0x28 & 1) != 0) {
    FModularRigModel::UpdateCachedChildren(&this->ModularRigModel);
    FModularRigConnections::UpdateFromConnectionList(&(this->ModularRigModel).Connections);
    UpdateCachedChildren(this);
  }
  return;
}

// Serialize @ 14a28f3c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::Serialize(UModularRig *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UControlRig::Serialize((UControlRig *)this,pFVar1);
  if ((pFVar1->field_0x28 & 1) != 0) {
    FModularRigModel::UpdateCachedChildren(&this->ModularRigModel);
    FModularRigConnections::UpdateFromConnectionList(&(this->ModularRigModel).Connections);
    UpdateCachedChildren(this);
  }
  return;
}

// SetModuleVariableBindings @ 14a2949e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UModularRig::SetModuleVariableBindings
          (UModularRig *this,FName *param_1,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *_Src;
  UStruct *this_00;
  UControlRig *pUVar4;
  code *pcVar5;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FRigModuleInstance *pFVar11;
  FName *pFVar12;
  FProperty *pFVar13;
  TObjectPtr<UControlRig>_u_0 this_01;
  FRigVMExternalVariable *pFVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 local_res20 [8];
  FString local_1c8;
  TObjectPtr<UControlRig>_u_0 local_1b8;
  undefined8 uStack_1b0;
  FName local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  FString local_188;
  TObjectPtr<UControlRig>_u_0 local_178;
  FProperty *pFStack_170;
  FName local_168;
  UObject *pUStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  FRigHierarchyModulePath local_148;
  int local_108;
  int local_104;
  undefined1 local_100 [20];
  TObjectPtr<UControlRig>_u_0 local_ec;
  TSet<TTuple<FName,FRigVMExternalVariable>,TDefaultMapHashableKeyFuncs<FName,FRigVMExternalVariable,0>,FDefaultSetAllocator>
  *local_e0;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_d8;
  undefined1 auStack_d0 [20];
  uint uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong local_a8;
  TObjectPtr<UControlRig>_u_0 *local_a0;
  FName local_98 [4];
  undefined4 local_74;
  FRigVMExternalVariable local_70;
  
  pFVar11 = FindModule(this,param_1);
  if (pFVar11 == (FRigModuleInstance *)0x0) {
    return false;
  }
  local_e0 = (TSet<TTuple<FName,FRigVMExternalVariable>,TDefaultMapHashableKeyFuncs<FName,FRigVMExternalVariable,0>,FDefaultSetAllocator>
              *)&pFVar11->VariableBindings;
  TSet<TTuple<FName,FRigVMExternalVariable>,TDefaultMapHashableKeyFuncs<FName,FRigVMExternalVariable,0>,FDefaultSetAllocator>
  ::Reset(local_e0);
  iVar3 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iVar20 = 0;
  local_198._0_4_ = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar19 = *puVar22;
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar20;
      local_198._0_4_ = (int)local_198 + 0x20;
      iVar20 = iVar20 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14a294aad;
      uVar19 = (puVar22 + 1)[lVar15];
    }
    uVar9 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_108 = (int)lVar15;
    iVar10 = (int)local_198 + -1 + local_108;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14a294aad:
  uVar19 = *(uint *)&param_2->field_0x28;
  uVar18 = uVar19 & 0xffffffe0;
  uStack_1b0 = (FProperty *)CONCAT44(uVar9,iVar20);
  uStack_190 = CONCAT44(uStack_190._4_4_,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34)
  ;
  uStack_1a0 = (UObject *)CONCAT44(iVar10,0xffffffff);
  local_198._4_4_ = local_74;
  auStack_d0._0_8_ = uStack_1b0;
  iVar20 = (int)uVar19 >> 5;
  stack0xffffffffffffff40 = uStack_1a0;
  local_b8 = (int)local_198;
  uStack_b4 = local_74;
  uStack_b0 = uStack_190;
  local_1b8 = (TObjectPtr<UControlRig>_u_0)param_2;
  local_1a8 = (FName)puVar1;
  local_d8 = param_2;
  auStack_d0._8_8_ = puVar1;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&param_2->field_0x28;
  if (uVar19 != uVar9) {
    puVar21 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar20;
      uVar18 = uVar18 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14a294bc0;
      uVar19 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_104 = (int)lVar15;
    uVar19 = local_104 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar19) {
      uVar19 = uVar9;
    }
  }
LAB_14a294bc0:
  do {
    pTVar6 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((uStack_bc == uVar19) && ((undefined1 *)auStack_d0._8_8_ == puVar1)) && (pTVar6 == param_2)
       ) {
      return true;
    }
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar23 = (longlong)(int)uStack_bc * 0x20 + *(longlong *)pTVar6;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    local_1c8.Data.ArrayNum = *(int *)(lVar23 + 0x10);
    lVar15 = (longlong)local_1c8.Data.ArrayNum;
    _Src = *(void **)(lVar23 + 8);
    if (local_1c8.Data.ArrayNum == 0) {
      local_1c8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1c8.Data.ArrayNum,0,(ForAnyElementType *)&local_1c8,
                 local_1c8.Data.ArrayNum,&local_1c8.Data.ArrayMax);
      memcpy(local_1c8.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
    }
    this_01.DebugPtr = (UControlRig *)0x0;
    ::FString::FString(&local_148.ModulePath,(FString *)(lVar23 + 8));
    local_148.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_148.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_148.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax = -1;
    local_148.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_148.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayNum = 0;
    local_148._44_8_ = 0xffffffffffffffff;
    local_148.CachedModuleFName.field0_0x0.TypedValue.Number = 0;
    local_148.CachedElementFName.field0_0x0.TypedValue.ComparisonIndex.Value =
         (FNameEntryId)0xffffffff;
    local_148.CachedElementFName.field0_0x0.TypedValue.Number = 0;
    FRigHierarchyModulePath::Split(&local_148,&local_188,&local_1c8);
    if ((local_148.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_148.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_148.CachedElementNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if ((local_148.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_148.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_148.CachedModuleNameString.field0_0x0.TypedValue.Data.
                            AllocatorInstance.Data);
    }
    if (local_148.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.ModulePath.Data.AllocatorInstance.Data);
    }
    local_198._0_4_ = 0;
    local_198._4_4_ = 0;
    local_1b8.DebugPtr = (UControlRig *)0x0;
    uStack_1b0 = (FProperty *)0x0;
    local_1a8.ComparisonIndex.Value = 0;
    local_1a8.Number = 0;
    uStack_1a0 = (UObject *)0x0;
    uStack_190 = 0;
    if (local_188.Data.ArrayNum < 2) {
      this_00 = *(UStruct **)&this->field_0x10;
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_1c8.Data.ArrayNum != 0) {
        FVar16.Data = local_1c8.Data.AllocatorInstance.Data;
      }
      pFVar12 = ::FName::FName(local_98,(wchar_t *)FVar16.Data);
      pFVar13 = UStruct::FindPropertyByName(this_00,*pFVar12);
      if (pFVar13 != (FProperty *)0x0) {
        local_158 = 0;
        local_178 = (TObjectPtr<UControlRig>_u_0)0x0;
        pFStack_170 = (FProperty *)0x0;
        local_168.ComparisonIndex.Value = 0;
        local_168.Number = 0;
        pUStack_160 = (UObject *)0x0;
        uStack_150 = (undefined1 *)0x0;
        bVar7 = IsThisNotNull(pFVar13,"FField::GetFName");
        if (bVar7) {
          this_01 = (TObjectPtr<UControlRig>_u_0)pFVar13->_padding_;
        }
        local_158 = CONCAT62(local_158._2_6_,
                             CONCAT11(~(byte)(pFVar13->PropertyFlags >> 0x10),(undefined1)local_158)
                            ) & 0xffffffffffff01ff;
        local_158 = CONCAT53(local_158._3_5_,
                             CONCAT12((char)(pFVar13->PropertyFlags >> 4),(undefined2)local_158)) &
                    0xffffffffff01ffff;
        local_178 = this_01;
        pFStack_170 = pFVar13;
        if ((pFVar13->ArrayDim < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uStack_150 = &this->field_0x0 + pFVar13->Offset_Internal;
        if ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x15 & 1) != 0) {
          pFVar13 = (FProperty *)pFVar13[1]._padding_;
          local_158 = CONCAT71(local_158._1_7_,1);
        }
        local_158 = CONCAT44(pFVar13->ElementSize * pFVar13->ArrayDim,(int)local_158);
        RigVMPropertyUtils::GetTypeFromProperty(pFVar13,&local_168,&pUStack_160);
        local_1b8 = local_178;
        uStack_1b0 = pFStack_170;
        local_1a8 = local_168;
        uStack_1a0 = pUStack_160;
        local_198._0_4_ = (int)local_158;
        local_198._4_4_ = local_158._4_4_;
        uVar24 = (undefined4)uStack_150;
        uVar25 = uStack_150._4_4_;
LAB_14a294ec3:
        uStack_190 = CONCAT44(uVar25,uVar24);
      }
    }
    else {
      ::FName::FName((FName *)(local_100 + 4),(wchar_t *)local_188.Data.AllocatorInstance.Data);
      pFVar11 = FindModule(this,(FName *)(local_100 + 4));
      if (pFVar11 != (FRigModuleInstance *)0x0) {
        pUVar4 = (pFVar11->RigPtr).field0_0x0.DebugPtr;
        if ((pUVar4 == (UControlRig *)0x0) || (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
          (pFVar11->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
        }
        else {
          this_01 = (TObjectPtr<UControlRig>_u_0)(pFVar11->RigPtr).field0_0x0.DebugPtr;
        }
        FVar16.Data = (FScriptContainerElement *)L"";
        if (local_1c8.Data.ArrayNum != 0) {
          FVar16.Data = local_1c8.Data.AllocatorInstance.Data;
        }
        ::FName::FName((FName *)(local_100 + 0xc),(wchar_t *)FVar16.Data);
        pFVar14 = URigVMHost::GetPublicVariableByName
                            ((URigVMHost *)this_01.DebugPtr,&local_70,(FName *)(local_100 + 0xc));
        local_1b8.ObjectPtr.field0_0x0 = (FObjectPtr)pFVar14->_padding_;
        uStack_1b0 = (FProperty *)pFVar14->_padding_;
        local_1a8 = (FName)pFVar14->_padding_;
        uStack_1a0 = (UObject *)pFVar14->_padding_;
        local_198._0_4_ = (int)pFVar14->_padding_;
        local_198._4_4_ = *(undefined4 *)((longlong)&pFVar14->_padding_ + 4);
        uVar24 = *(undefined4 *)&pFVar14->Memory;
        uVar25 = *(undefined4 *)((longlong)&pFVar14->Memory + 4);
        goto LAB_14a294ec3;
      }
    }
    if (uStack_1b0 == (FProperty *)0x0) {
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_188.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return false;
      }
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
      return false;
    }
    if (*(int *)(lVar23 + 0x10) == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = *(wchar_t **)(lVar23 + 8);
    }
    ::FName::FName((FName *)&local_ec.ObjectPtr,pwVar17);
    local_1b8 = local_ec;
    local_a0 = &local_1b8;
    local_a8 = lVar23;
    TSet<TTuple<FName,FRigVMExternalVariable>,TDefaultMapHashableKeyFuncs<FName,FRigVMExternalVariable,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRigVMExternalVariable_const_&>_>
              (local_e0,(TPairInitializer<FName_const_&,FRigVMExternalVariable_const_&> *)local_100,
               (bool *)&local_a8);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    stack0xffffffffffffff40 = (UObject *)CONCAT44(uStack_bc,auStack_d0._16_4_ & ~auStack_d0._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
  } while( true );
}

// StaticRegisterNativesUModularRig @ 14a298110

void __cdecl UModularRig::StaticRegisterNativesUModularRig(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UModularRig_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsEvent @ 14a29b5a0

bool __thiscall UModularRig::SupportsEvent(UModularRig *this,FName *param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  FName *pFVar3;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0x310))();
  pFVar3 = (FName *)*plVar2;
  pFVar1 = pFVar3 + (int)plVar2[1];
  if (pFVar3 != pFVar1) {
    do {
      if (*pFVar3 == *param_1) {
        return true;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar1);
  }
  return false;
}

// TraverseModules @ 14a29dc40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
UModularRig::TraverseModules
          (FRigModuleInstance *param_1,TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FRigModuleInstance *local_res8;
  TFunctionRef<bool___cdecl(FRigModuleInstance_*)> local_28;
  
  local_res8 = param_1;
  cVar3 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res8);
  if (cVar3 != '\0') {
    pFVar5 = (param_1->CachedChildren).AllocatorInstance.Data;
    iVar2 = (param_1->CachedChildren).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->CachedChildren).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar5 == pFVar1) {
        return true;
      }
      local_28._0_8_ = *(undefined8 *)param_2;
      local_28._8_8_ = *(undefined8 *)&param_2->field_0x8;
      bVar4 = TraverseModules(*(FRigModuleInstance **)pFVar5,&local_28);
      if (!bVar4) break;
      pFVar5 = pFVar5 + 8;
    }
  }
  return false;
}

// UpdateCachedChildren @ 14a2a2510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::UpdateCachedChildren(UModularRig *this)

{
  int *piVar1;
  TArray<FRigModuleInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FString *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  FName *pFVar17;
  FName *pFVar18;
  ForAnyElementType *pFVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  FName *pFVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ForElementType<unsigned_int> FVar26;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [2];
  uint local_254;
  FName *local_250;
  FName *local_248;
  FName *local_240;
  uint local_238;
  uint uStack_234;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_230;
  undefined4 local_228;
  uint uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  uint local_218;
  uint uStack_214;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_210;
  undefined4 local_208;
  uint uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  FScriptContainerElement *local_1f8;
  int local_1f0;
  int local_1ec;
  undefined4 local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  int local_1dc;
  undefined1 local_1d8 [8];
  FName *local_1d0;
  FName *local_1c8;
  UModularRig *local_1c0;
  FString local_1b8;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  FName *local_158;
  FName **local_150;
  FScriptContainerElement **local_148;
  FName **local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iVar8 = (this->Modules).ArrayNum;
  uVar20 = 0;
  pFVar15 = (this->Modules).AllocatorInstance.Data;
  bVar7 = false;
  local_254 = 0;
  pFVar21 = pFVar15 + (longlong)iVar8 * 0xc0;
  local_1c0 = this;
  while( true ) {
    if ((this->Modules).ArrayNum != iVar8) {
      local_258 = 0;
      `TCheckedPointerIterator<FRigModuleInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_258);
    }
    if (pFVar15 == pFVar21) goto LAB_14a2a25a5;
    if (1 < *(int *)(pFVar15 + 0x20)) break;
    pFVar15 = pFVar15 + 0xc0;
  }
  bVar7 = true;
LAB_14a2a25a5:
  uVar14 = (this->Modules).ArrayNum;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (uVar14 != 0) {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_d8,uVar14);
    if (uVar14 < 4) {
      uVar14 = 1;
    }
    else {
      uVar24 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_1e8 = (undefined4)lVar5;
      uVar14 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((local_90 == 0) || ((int)local_90 < (int)uVar14)) {
      local_90 = uVar14;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
      }
      if (uVar14 != 0) {
        uVar23 = uVar14;
        if (uVar14 < 2) {
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            uVar23 = 0;
            goto LAB_14a2a268c;
          }
        }
        else {
LAB_14a2a268c:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar23,4)
          ;
        }
        if (0 < (int)uVar14) {
          uVar25 = (ulonglong)uVar14;
          uVar24 = uVar20;
          do {
            FVar12.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_98.Data;
            }
            uVar9 = (longlong)(int)uVar14 - 1U & uVar24;
            uVar24 = uVar24 + 1;
            *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
      }
      if (local_90 != 0) {
        pTStack_230 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        local_238 = 0;
        uStack_234 = 1;
        uStack_224 = 0;
        uStack_220 = 0;
        uVar24 = uVar20;
        if (local_b0 != 0) {
          FVar26 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_b8;
          }
          uVar14 = *(uint *)FVar26;
          uVar25 = uVar20;
          while (uVar14 == 0) {
            uStack_220 = (int)uVar25 + 0x20;
            uVar25 = (ulonglong)uStack_220;
            iVar8 = (int)uVar24;
            local_238 = iVar8 + 1;
            uVar24 = (ulonglong)local_238;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_238)
            goto LAB_14a2a27af;
            uVar14 = ((uint *)((longlong)FVar26 + 4))[iVar8];
          }
          uStack_234 = -uVar14 & uVar14;
          uVar24 = (ulonglong)uStack_234 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_1e4 = (int)lVar5;
          uStack_224 = (uStack_220 - 1) + local_1e4;
          uVar24 = (ulonglong)uStack_224;
          if ((int)local_b0 < (int)uStack_224) {
LAB_14a2a27af:
            uVar24 = (ulonglong)local_b0;
            uStack_224 = local_b0;
          }
        }
        local_228 = 0xffffffff;
        local_1a8 = (longlong *)local_d8;
        local_1a0._padding_ = CONCAT44(uStack_234,local_238);
        local_1a0.CurrentBitIndex = uStack_224;
        local_1a0.UnvisitedBitMask = 0xffffffff;
        local_1a0._28_4_ = uStack_21c;
        local_1a0.BaseBitIndex = uStack_220;
        local_1a0.Array = pTStack_230;
        if ((int)uVar24 < (int)local_b0) {
          do {
            iVar8 = (int)uVar24;
            uVar3 = *(undefined8 *)(*local_1a8 + (longlong)iVar8 * 0x18);
            lVar5 = *local_1a8 + (longlong)iVar8 * 0x18;
            uVar14 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar14 = local_90 - 1 & uVar14 + (int)((ulonglong)uVar3 >> 0x20);
            *(uint *)(lVar5 + 0x14) = uVar14;
            FVar12.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar12.Data = local_98.Data;
            }
            uVar24 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar14;
            *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(FVar12.Data + uVar24 * 4);
            *(int *)(FVar12.Data + uVar24 * 4) = iVar8;
            local_1a0.UnvisitedBitMask = local_1a0.UnvisitedBitMask & ~local_1a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
            uVar24 = (ulonglong)(uint)local_1a0.CurrentBitIndex;
          } while (local_1a0.CurrentBitIndex < (local_1a0.Array)->NumBits);
        }
      }
    }
  }
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (!bVar7) goto LAB_14a2a2b30;
  uVar14 = (this->Modules).ArrayNum;
  if (uVar14 == 0) goto LAB_14a2a2b30;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar24 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_1e0 = (undefined4)lVar5;
    uVar14 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar14 <= (int)local_40)) goto LAB_14a2a2b30;
  local_40 = uVar14;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar14 != 0) {
    uVar23 = uVar14;
    if (uVar14 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_14a2a2958;
      }
    }
    else {
LAB_14a2a2958:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar23,4);
    }
    if (0 < (int)uVar14) {
      uVar25 = (ulonglong)uVar14;
      uVar24 = uVar20;
      do {
        FVar12.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_48.Data;
        }
        uVar9 = (longlong)(int)uVar14 - 1U & uVar24;
        uVar24 = uVar24 + 1;
        *(undefined4 *)(FVar12.Data + uVar9 * 4) = 0xffffffff;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_210 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_218 = 0;
    uStack_214 = 1;
    uStack_204 = 0;
    uStack_200 = 0;
    uVar24 = uVar20;
    if (local_60 != 0) {
      FVar26 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_68;
      }
      uVar14 = *(uint *)FVar26;
      uVar25 = uVar20;
      while (uVar14 == 0) {
        uStack_200 = (int)uVar25 + 0x20;
        uVar25 = (ulonglong)uStack_200;
        iVar8 = (int)uVar24;
        local_218 = iVar8 + 1;
        uVar24 = (ulonglong)local_218;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_218)
        goto LAB_14a2a2a6b;
        uVar14 = ((uint *)((longlong)FVar26 + 4))[iVar8];
      }
      uStack_214 = -uVar14 & uVar14;
      uVar24 = (ulonglong)uStack_214 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_1dc = (int)lVar5;
      uStack_204 = local_1dc + -1 + uStack_200;
      uVar24 = (ulonglong)uStack_204;
      if ((int)local_60 < (int)uStack_204) {
LAB_14a2a2a6b:
        uVar24 = (ulonglong)local_60;
        uStack_204 = local_60;
      }
    }
    local_208 = 0xffffffff;
    local_180 = (longlong *)local_88;
    local_178._padding_ = CONCAT44(uStack_214,local_218);
    local_178.CurrentBitIndex = uStack_204;
    local_178.UnvisitedBitMask = 0xffffffff;
    local_178._28_4_ = uStack_1fc;
    local_178.BaseBitIndex = uStack_200;
    local_178.Array = pTStack_210;
    if ((int)uVar24 < (int)local_60) {
      do {
        puVar16 = (undefined8 *)((longlong)(int)uVar24 * 0x20 + *local_180);
        if (*(int *)(puVar16 + 1) == 0) {
          pwVar13 = L"";
          iVar8 = 0;
        }
        else {
          pwVar13 = (wchar_t *)*puVar16;
          iVar8 = *(int *)(puVar16 + 1) + -1;
        }
        uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar13);
        uVar14 = local_40 - 1 & uVar14;
        *(uint *)((longlong)puVar16 + 0x1c) = uVar14;
        FVar12.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_48.Data;
        }
        uVar25 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar16 + 3) = *(undefined4 *)(FVar12.Data + uVar25 * 4);
        *(int *)(FVar12.Data + uVar25 * 4) = (int)uVar24;
        local_178.UnvisitedBitMask = local_178.UnvisitedBitMask & ~local_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_178);
        uVar24 = (ulonglong)(uint)local_178.CurrentBitIndex;
      } while (local_178.CurrentBitIndex < (local_178.Array)->NumBits);
    }
  }
LAB_14a2a2b30:
  pFVar17 = (FName *)(this->Modules).AllocatorInstance.Data;
  iVar8 = (this->Modules).ArrayNum;
  pFVar22 = pFVar17 + 0x12;
  pFVar18 = pFVar17 + (longlong)iVar8 * 0x18;
  while( true ) {
    if ((this->Modules).ArrayNum != iVar8) {
      local_257 = 0;
      `TCheckedPointerIterator<FRigModuleInstance,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_257);
    }
    if (pFVar17 == pFVar18) break;
    pFVar22[-2].ComparisonIndex = 0;
    pFVar22[-2].Number = 0;
    uVar14 = pFVar22->Number;
    (pFVar22->ComparisonIndex).Value = 0;
    if ((int)uVar14 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(pFVar22 + -1),0,(int *)&pFVar22->Number);
    }
    local_150 = &local_1d0;
    local_1d0 = pFVar17;
    local_158 = pFVar17;
    TSet<TTuple<FName,FRigModuleInstance_*>,TDefaultMapHashableKeyFuncs<FName,FRigModuleInstance_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRigModuleInstance_*_&&>_>
              ((TSet<TTuple<FName,FRigModuleInstance_*>,TDefaultMapHashableKeyFuncs<FName,FRigModuleInstance_*,0>,FDefaultSetAllocator>
                *)local_d8,(TPairInitializer<FName_const_&,FRigModuleInstance_*_&&> *)local_1d8,
               (bool *)&local_158);
    if (bVar7) {
      local_1c8 = pFVar17;
      if ((int)pFVar22[-0xe].ComparisonIndex.Value < 2) {
        uVar14 = (uint)uVar20 | 8;
        pFVar10 = ::FName::ToString(pFVar17,&local_118);
      }
      else {
        uVar14 = (uint)uVar20 | 0x30;
        pFVar10 = ::FName::ToString(pFVar17,&local_128);
        pFVar10 = URigHierarchy::JoinNameSpace_Deprecated
                            (&local_138,(FString *)(pFVar22 + -0xf),pFVar10);
      }
      uVar20 = (ulonglong)uVar14;
      local_1f8 = (pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0 = (pFVar10->Data).ArrayNum;
      local_1ec = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
      if (((uVar14 & 0x20) != 0) &&
         (uVar20 = (ulonglong)(uVar14 & 0xffffffdf),
         local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((uVar20 & 0x10) != 0) &&
         (uVar20 = (ulonglong)((uint)uVar20 & 0xffffffef),
         local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((uVar20 & 8) != 0) &&
         (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffff7),
         local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      local_148 = &local_1f8;
      local_140 = &local_1c8;
      TSet<TTuple<FString,FRigModuleInstance_*>,TDefaultMapHashableKeyFuncs<FString,FRigModuleInstance_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FRigModuleInstance_*_&&>_>
                ((TSet<TTuple<FString,FRigModuleInstance_*>,TDefaultMapHashableKeyFuncs<FString,FRigModuleInstance_*,0>,FDefaultSetAllocator>
                  *)local_88,(TPairInitializer<FString_&&,FRigModuleInstance_*_&&> *)(local_1d8 + 4)
                 ,(bool *)&local_148);
      if (local_1f8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8);
      }
    }
    pFVar17 = pFVar17 + 0x18;
    pFVar22 = pFVar22 + 0x18;
  }
  pTVar2 = &this->RootModules;
  piVar1 = &(this->RootModules).ArrayMax;
  (this->RootModules).ArrayNum = 0;
  if ((this->RootModules).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_254 = (this->Modules).ArrayNum;
  uVar24 = (ulonglong)(int)local_254;
  pFVar22 = (FName *)(this->Modules).AllocatorInstance.Data;
  pFVar17 = pFVar22 + uVar24 * 0x18;
LAB_14a2a2d20:
  do {
    while( true ) {
      if ((local_1c0->Modules).ArrayNum != (int)uVar24) {
        local_256[0] = 0;
        `TCheckedPointerIterator<FRigModuleInstance,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_256);
      }
      if (pFVar22 == pFVar17) {
        local_40 = 0;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FRigModuleInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FRigModuleInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FRigModuleInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        local_90 = 0;
        if (local_98.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FRigModuleInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FRigModuleInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FRigModuleInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8);
        return;
      }
      FVar4 = pFVar22[5];
      if (FVar4 != (FName)0x0) break;
      pFVar15 = (pTVar2->AllocatorInstance).Data;
      local_250 = pFVar22;
      if (((pFVar15 <= (FScriptContainerElement *)&local_250) &&
          ((FScriptContainerElement *)&local_250 < pFVar15 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->RootModules).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar22 = pFVar22 + 0x18;
      (this->RootModules).ArrayNum = iVar8 + 1;
      *(FName **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_250;
      uVar24 = (ulonglong)local_254;
    }
    uVar14 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    if (local_d8._8_4_ != local_a4) {
      FVar12.Data = local_a0;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FVar12.Data = local_98.Data;
      }
      iVar8 = *(int *)(FVar12.Data + (ulonglong)(local_90 - 1 & FVar4.Number + uVar14) * 4);
      while (iVar8 != -1) {
        pFVar15 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)iVar8 * 0x18);
        if (*(FName *)(local_d8._0_8_ + (longlong)iVar8 * 0x18) == FVar4) {
          pFVar18 = (FName *)(pFVar15 + 8);
          if (pFVar15 == (FScriptContainerElement *)0x0) {
            pFVar18 = (FName *)0x0;
          }
          if (pFVar18 != (FName *)0x0) {
            pFVar22[0x10] = *pFVar18;
            FVar4 = *pFVar18;
            pFVar19 = (ForAnyElementType *)((longlong)FVar4 + 0x88);
            local_248 = pFVar22;
            if (((pFVar19->Data <= (FScriptContainerElement *)&local_248) &&
                ((FScriptContainerElement *)&local_248 <
                 pFVar19->Data + (longlong)*(int *)((longlong)FVar4 + 0x94) * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar8 = *(int *)((longlong)FVar4 + 0x90);
            if (iVar8 == *(int *)((longlong)FVar4 + 0x94)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar19,(int *)((longlong)FVar4 + 0x94));
            }
            *(int *)((longlong)FVar4 + 0x90) = iVar8 + 1;
            pFVar22 = pFVar22 + 0x18;
            *(FName **)(pFVar19->Data + (longlong)iVar8 * 8) = local_248;
            uVar24 = (ulonglong)local_254;
            goto LAB_14a2a2d20;
          }
          break;
        }
        iVar8 = *(int *)(pFVar15 + 0x10);
      }
    }
    if ((int)pFVar22[4].ComparisonIndex.Value < 2) {
      uVar14 = (uint)uVar20 | 1;
      pFVar10 = ::FName::ToString(pFVar22,&local_e8);
    }
    else {
      uVar14 = (uint)uVar20 | 6;
      pFVar10 = ::FName::ToString(pFVar22,&local_f8);
      pFVar10 = URigHierarchy::JoinNameSpace_Deprecated(&local_108,(FString *)(pFVar22 + 3),pFVar10)
      ;
    }
    uVar20 = (ulonglong)uVar14;
    pFVar15 = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar8 = (pFVar10->Data).ArrayNum;
    local_1b8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
    local_1b8.Data.AllocatorInstance.Data = pFVar15;
    local_1b8.Data.ArrayNum = iVar8;
    if (((uVar14 & 4) != 0) &&
       (uVar20 = (ulonglong)(uVar14 & 0xfffffffb),
       local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (((uVar20 & 2) != 0) &&
       (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffd),
       local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (((uVar20 & 1) != 0) &&
       (uVar20 = (ulonglong)((uint)uVar20 & 0xfffffffe),
       local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    iVar11 = iVar8 + -1;
    pFVar21 = pFVar15;
    if (iVar8 == 0) {
      iVar11 = 0;
      pFVar21 = (FScriptContainerElement *)L"";
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)pFVar21);
    iVar8 = TSet<TTuple<FString,FRigModuleInstance_*>,TDefaultMapHashableKeyFuncs<FString,FRigModuleInstance_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FRigModuleInstance_*>,TDefaultMapHashableKeyFuncs<FString,FRigModuleInstance_*,0>,FDefaultSetAllocator>
                        *)local_88,uVar14,&local_1b8);
    if (iVar8 == -1) {
      pFVar21 = (FScriptContainerElement *)0x0;
    }
    else {
      pFVar21 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar8 * 0x20);
    }
    pFVar18 = (FName *)(pFVar21 + 0x10);
    if (pFVar21 == (FScriptContainerElement *)0x0) {
      pFVar18 = (FName *)0x0;
    }
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    if (pFVar18 != (FName *)0x0) {
      pFVar22[0x10] = *pFVar18;
      FVar4 = *pFVar18;
      pFVar19 = (ForAnyElementType *)((longlong)FVar4 + 0x88);
      local_240 = pFVar22;
      if (((pFVar19->Data <= (FScriptContainerElement *)&local_240) &&
          ((FScriptContainerElement *)&local_240 <
           pFVar19->Data + (longlong)*(int *)((longlong)FVar4 + 0x94) * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = *(int *)((longlong)FVar4 + 0x90);
      if (iVar8 == *(int *)((longlong)FVar4 + 0x94)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar19,(int *)((longlong)FVar4 + 0x94));
      }
      *(int *)((longlong)FVar4 + 0x90) = iVar8 + 1;
      *(FName **)(pFVar19->Data + (longlong)iVar8 * 8) = local_240;
    }
    uVar24 = (ulonglong)local_254;
    pFVar22 = pFVar22 + 0x18;
  } while( true );
}

// UpdateModuleHierarchyFromCDO @ 14a2a51a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::UpdateModuleHierarchyFromCDO(UModularRig *this)

{
  undefined1 *puVar1;
  TMap<FName,UControlRig_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>_>
  *this_00;
  ulonglong uVar2;
  uint uVar3;
  UObjectBaseUtility *this_01;
  code *pcVar4;
  TMap<FName,UControlRig_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>_>
  *pTVar5;
  bool bVar6;
  UPackage *pUVar7;
  FModularRigModel *this_02;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_178;
  int local_170;
  FModularRigModel *local_168;
  TMap<FName,UControlRig_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>_>
  *local_160;
  int iStack_158;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 uStack_148;
  int iStack_144;
  int local_140;
  undefined4 uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  TMap<FName,UControlRig_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  FScriptContainerElement *local_100;
  longlong *local_f8;
  UModularRig *local_f0;
  FModularRigModel *local_e8;
  code *local_e0;
  UModularRig **local_d8;
  code *local_c8 [2];
  undefined **local_b8;
  UModularRig *local_b0;
  FModularRigModel *local_a8;
  undefined8 local_a0;
  code *local_98 [2];
  undefined **local_88;
  UModularRig *local_80;
  undefined8 local_70;
  undefined4 local_4c;
  
  if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
    if ((*(int *)&(this->PreviousModuleRigs).field_0x8 !=
         *(int *)&(this->PreviousModuleRigs).field_0x34) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PreviousModuleRigs.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRig.cpp"
                           ,0x174,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->Modules).ArrayNum;
    pFVar10 = (this->Modules).AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)iVar9 * 0xc0;
    while( true ) {
      if ((this->Modules).ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigModuleInstance,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar12) break;
      if ((*(longlong *)(pFVar10 + 0x10) == 0) ||
         ((*(uint *)(*(longlong *)(pFVar10 + 0x10) + 8) >> 0x1e & 1) != 0)) {
        *(undefined8 *)(pFVar10 + 0x10) = 0;
        local_178 = 0;
LAB_14a2a52b3:
        pFVar10 = pFVar10 + 0xc0;
      }
      else {
        local_178 = *(longlong *)(pFVar10 + 0x10);
        if ((local_178 == 0) || ((*(uint *)(local_178 + 8) >> 0x1e & 1) != 0)) goto LAB_14a2a52b3;
        local_f8 = &local_178;
        local_100 = pFVar10;
        TSet<TTuple<FName,UControlRig_*>,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,UControlRig_*_const_&>_>
                  ((TSet<TTuple<FName,UControlRig_*>,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>,FDefaultSetAllocator>
                    *)&this->PreviousModuleRigs,
                   (TPairInitializer<FName_const_&,UControlRig_*_const_&> *)(local_res18 + 8),
                   (bool *)&local_100);
        pFVar10 = pFVar10 + 0xc0;
      }
    }
    ResetModules(this,false);
    local_168 = GetModularRigModel(this);
    local_b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UModularRig::UpdateModuleHierarchyFromCDO'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_a0 = 0;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_1>,bool,FRigModuleReference_const_*>
                  ::Call;
    local_b0 = this;
    local_a8 = local_168;
    FModularRigModel::ForEachModule
              (local_168,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_c8,true);
    puVar1 = &(this->PreviousModuleRigs).field_0x10;
    local_140 = 0;
    iVar9 = *(int *)&(this->PreviousModuleRigs).field_0x28;
    this_00 = &this->PreviousModuleRigs;
    uStack_154 = 1;
    iStack_144 = local_140;
    iStack_158 = 0;
    if (iVar9 != 0) {
      puVar14 = *(uint **)&(this->PreviousModuleRigs).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar11 = *puVar14;
      local_140 = 0;
      while (uVar11 == 0) {
        lVar8 = (longlong)iStack_158;
        local_140 = local_140 + 0x20;
        iStack_158 = iStack_158 + 1;
        iStack_144 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_158) goto LAB_14a2a538e;
        uVar11 = puVar14[lVar8 + 1];
      }
      uStack_154 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_154 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_170 = (int)lVar8;
      iStack_144 = local_140 + -1 + local_170;
      if (iVar9 < iStack_144) {
        iStack_144 = iVar9;
      }
    }
LAB_14a2a538e:
    uVar11 = *(uint *)&(this->PreviousModuleRigs).field_0x28;
    uStack_13c = local_4c;
    uVar15 = uVar11 & 0xffffffe0;
    iStack_138 = *(int *)&(this->PreviousModuleRigs).field_0x8 -
                 *(int *)&(this->PreviousModuleRigs).field_0x34;
    uStack_148 = 0xffffffff;
    TStack_128._padding_ = CONCAT44(uStack_154,iStack_158);
    TStack_128.CurrentBitIndex = iStack_144;
    TStack_128.UnvisitedBitMask = 0xffffffff;
    iVar9 = (int)uVar11 >> 5;
    TStack_128._28_4_ = local_4c;
    TStack_128.BaseBitIndex = local_140;
    uStack_108 = CONCAT44(uStack_134,iStack_138);
    local_160 = this_00;
    local_150 = puVar1;
    local_130 = this_00;
    TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar11 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(uint *)&(this->PreviousModuleRigs).field_0x28;
    if (uVar11 != uVar3) {
      puVar13 = *(undefined1 **)&(this->PreviousModuleRigs).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar9 * 4);
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar9;
        uVar15 = uVar15 + 0x20;
        iVar9 = iVar9 + 1;
        uVar11 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14a2a54a0;
        uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar11 = (int)lVar8 + -1 + uVar15;
      if ((int)uVar3 < (int)uVar11) {
        uVar11 = uVar3;
      }
    }
LAB_14a2a54a0:
    while( true ) {
      pTVar5 = local_130;
      if (*(int *)(&local_130->field_0x0 + 8) - *(int *)(&local_130->field_0x0 + 0x34) !=
          (int)uStack_108) {
        `TSparseArray<TSparseSetElement<TTuple<FName,UControlRig_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_128.CurrentBitIndex == uVar11) &&
          (TStack_128.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar5 == this_00)) break;
      this_01 = *(UObjectBaseUtility **)
                 (*(longlong *)&pTVar5->field_0x0 + 8 + (longlong)TStack_128.CurrentBitIndex * 0x18)
      ;
      if (this_01 != (UObjectBaseUtility *)0x0) {
        pcVar4 = *(code **)(*(longlong *)this_01 + 0x170);
        pUVar7 = GetTransientPackage();
        (*pcVar4)(this_01,0,pUVar7,0x34);
        UObjectBaseUtility::MarkAsGarbage(this_01);
      }
      TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
    }
    TSet<TTuple<FName,UControlRig_*>,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,UControlRig_*>,TDefaultMapHashableKeyFuncs<FName,UControlRig_*,0>,FDefaultSetAllocator>
             *)this_00);
    pFVar12 = (this->RootModules).AllocatorInstance.Data;
    iVar9 = (this->RootModules).ArrayNum;
    pFVar10 = pFVar12 + (longlong)iVar9 * 8;
    local_e8 = local_168;
    local_f0 = this;
    while( true ) {
      if ((this->RootModules).ArrayNum != iVar9) {
        `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar12 == pFVar10) break;
      local_d8 = &local_f0;
      local_e0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UModularRig::UpdateModuleHierarchyFromCDO'::__l5::<lambda_2>,bool,FRigModuleInstance_*>
                 ::Call;
      bVar6 = TraverseModules(*(FRigModuleInstance **)pFVar12,
                              (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_e0);
      if (!bVar6) break;
      pFVar12 = pFVar12 + 8;
    }
    UpdateCachedChildren(this);
    (this->SupportedEvents).ArrayNum = 0;
    if ((this->SupportedEvents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->SupportedEvents).AllocatorInstance,0,
                 &(this->SupportedEvents).ArrayMax);
    }
    this_02 = GetModularRigModel(this);
    local_70 = 0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                  ::Call;
    local_80 = this;
    FModularRigModel::ForEachModule
              (this_02,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_98,true);
  }
  return;
}

// UpdateModuleVariables @ 14a2a5640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UModularRig::UpdateModuleVariables(UModularRig *this,FRigModuleInstance *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FName _Src;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  FName *pFVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  UControlRig *pUVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint *puVar19;
  UControlRig *pUVar20;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FRigVMExternalVariable local_68;
  UControlRig *pUVar18;
  
  pUVar20 = (param_1->RigPtr).field0_0x0.DebugPtr;
  pUVar15 = (UControlRig *)0x0;
  uVar14 = 0;
  if ((pUVar20 == (UControlRig *)0x0) || (((uint)pUVar20->_padding_ >> 0x1e & 1) != 0)) {
    (param_1->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    pUVar20 = pUVar15;
  }
  else {
    pUVar20 = (param_1->RigPtr).field0_0x0.DebugPtr;
  }
  if (pUVar20 != (UControlRig *)0x0) {
    iVar10 = *(int *)&(param_1->VariableBindings).field_0x28;
    uVar6 = 1;
    puVar1 = &(param_1->VariableBindings).field_0x10;
    iVar7 = 0;
    uVar17 = uVar14;
    if (iVar10 != 0) {
      puVar19 = *(uint **)&(param_1->VariableBindings).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar8 = *puVar19;
      pUVar18 = pUVar15;
      uVar17 = 0;
      uVar14 = 0;
      while (uVar8 == 0) {
        iVar13 = (int)pUVar15;
        uVar17 = (int)pUVar18 + 0x20;
        pUVar18 = (UControlRig *)(ulonglong)uVar17;
        uVar14 = iVar13 + 1;
        pUVar15 = (UControlRig *)(ulonglong)uVar14;
        iVar7 = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_14a2a572c;
        uVar8 = puVar19[(longlong)iVar13 + 1];
      }
      uVar6 = -uVar8 & uVar8;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar7 = (uVar17 - 1) + local_res18;
      if (iVar10 < iVar7) {
        iVar7 = iVar10;
      }
    }
LAB_14a2a572c:
    uVar8 = *(uint *)&(param_1->VariableBindings).field_0x28;
    uVar12 = uVar8 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uVar6,uVar14);
    TStack_90.CurrentBitIndex = iVar7;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar8 >> 5;
    TStack_90._28_4_ = iVar7;
    TStack_90.BaseBitIndex = uVar17;
    uStack_70 = CONCAT44(uStack_9c,
                         *(int *)&(param_1->VariableBindings).field_0x8 -
                         *(int *)&(param_1->VariableBindings).field_0x34);
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar14 = *(uint *)&(param_1->VariableBindings).field_0x28;
    if (uVar8 != uVar14) {
      puVar16 = *(undefined1 **)&(param_1->VariableBindings).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar10 * 4);
      while (uVar17 == 0) {
        lVar9 = (longlong)iVar10;
        uVar12 = uVar12 + 0x20;
        iVar10 = iVar10 + 1;
        uVar8 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14a2a5830;
        uVar17 = *(uint *)(puVar16 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      uVar8 = local_res20 + -1 + uVar12;
      if ((int)uVar14 < (int)uVar8) {
        uVar8 = uVar14;
      }
    }
LAB_14a2a5830:
    while( true ) {
      if (*(int *)&(param_1->VariableBindings).field_0x8 -
          *(int *)&(param_1->VariableBindings).field_0x34 != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FRigVMExternalVariable>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_90.CurrentBitIndex == uVar8) &&
         (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pFVar11 = (FName *)(*(longlong *)&param_1->VariableBindings +
                         (longlong)TStack_90.CurrentBitIndex * 0x40);
      URigVMHost::GetPublicVariableByName((URigVMHost *)pUVar20,&local_68,pFVar11);
      if ((FProperty *)local_68._padding_ == (FProperty *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3961507508312343622>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ModularRig.cpp"
                           ,0x446,"TargetVariable.Property");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        bVar5 = RigVMTypeUtils::AreCompatible
                          ((FProperty *)pFVar11[2],(FProperty *)local_68._padding_);
        if (bVar5) {
          _Src = pFVar11[6];
          FVar3 = pFVar11[2];
          if ((FName)local_68.Memory != _Src) {
            if ((*(uint *)((longlong)FVar3 + 0x38) >> 0x1e & 1) == 0) {
              (**(code **)(*(longlong *)FVar3 + 0xf0))
                        (FVar3,local_68.Memory,_Src,*(undefined4 *)((longlong)FVar3 + 0x30));
            }
            else {
              memcpy(local_68.Memory,(void *)_Src,
                     (longlong)*(int *)((longlong)FVar3 + 0x34) *
                     (longlong)*(int *)((longlong)FVar3 + 0x30));
            }
          }
        }
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  return;
}

// UpdateSupportedEvents @ 14a2a5c80

void __thiscall UModularRig::UpdateSupportedEvents(UModularRig *this)

{
  FModularRigModel *this_00;
  code *local_38 [2];
  undefined **local_28;
  UModularRig *local_20;
  undefined8 local_10;
  
  (this->SupportedEvents).ArrayNum = 0;
  if ((this->SupportedEvents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->SupportedEvents).AllocatorInstance,0,&(this->SupportedEvents).ArrayMax)
    ;
  }
  this_00 = GetModularRigModel(this);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UModularRig::UpdateSupportedEvents'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UModularRig::UpdateSupportedEvents'::__l2::<lambda_1>,bool,FRigModuleReference_const_*>
                ::Call;
  local_20 = this;
  FModularRigModel::ForEachModule
            (this_00,(TFunction<bool___cdecl(FRigModuleReference_const_*)> *)local_38,true);
  return;
}

// execExecuteEventOnAllModules @ 14a2b08b0

void __cdecl
UModularRig::execExecuteEventOnAllModules(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = ExecuteEventOnAllModules((UModularRig *)param_1,&local_18,local_res10);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execExecuteEventOnModuleByNameForBP @ 14a2b0990

void __cdecl
UModularRig::execExecuteEventOnModuleByNameForBP(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  FName local_res18 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = ExecuteEventOnModuleByNameForBP((UModularRig *)param_1,local_res18[0],local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execExecuteEventOnModuleForBP @ 14a2b0a60

void __cdecl
UModularRig::execExecuteEventOnModuleForBP(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  bool bVar2;
  longlong lVar3;
  FName local_res10;
  void *local_38;
  undefined8 local_30;
  FString local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  _Src = local_38;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_30;
  local_28.Data.ArrayNum = (int)local_30;
  if ((int)local_30 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_30,0,(ForAnyElementType *)&local_28,(int)local_30,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  bVar2 = ExecuteEventOnModuleForBP((UModularRig *)param_1,local_res10,&local_28);
  *(bool *)param_3 = bVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetEventsForAllModules @ 14a2b2280

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRig::execGetEventsForAllModules(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [8];
  void **local_res20;
  code **local_68;
  void *local_60;
  undefined8 local_58;
  code *local_50;
  void ***local_48;
  code *local_40;
  code ***local_38;
  
  local_60 = (void *)0x0;
  local_58 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20 = &local_60;
  puVar4 = *(undefined8 **)&param_1[0x4f].field_0x8;
  iVar2 = *(int *)&param_1[0x4f].field_0x10;
  local_48 = &local_res20;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModularRig::GetEventsForAllModules'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
             ::Call;
  local_68 = &local_50;
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)&param_1[0x4f].field_0x10 != iVar2) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (puVar4 == puVar1) break;
    local_38 = &local_68;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar3 = TraverseModules((FRigModuleInstance *)*puVar4,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_40);
    if (!bVar3) break;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != &local_60) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_60;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_58._4_4_;
    local_58 = 0;
    local_60 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// execGetEventsForModule @ 14a2b23b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRig::execGetEventsForModule(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FString *pFVar5;
  FString *pFVar6;
  UControlRig *pUVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ForAnyElementType local_68;
  undefined8 local_60;
  FString local_58;
  void *local_48;
  undefined8 local_40;
  FString local_38;
  FString local_28;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pvVar4 = local_48;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar9 = (longlong)(int)local_40;
  local_58.Data.ArrayNum = (int)local_40;
  if ((int)local_40 == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,(ForAnyElementType *)&local_58,(int)local_40,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pvVar4,lVar9 * 2);
  }
  pFVar5 = ::FString::FString(&local_38,&local_58);
  pFVar6 = ::FString::FString(&local_28,pFVar5);
  pUVar7 = GetModuleRig((UModularRig *)param_1,pFVar6);
  pFVar3 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (pUVar7 == (UControlRig *)0x0) {
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(pUVar7->_padding_ + 0x310))(pUVar7);
    local_68.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)(puVar8 + 1);
    pvVar4 = (void *)*puVar8;
    local_60 = CONCAT44(local_60._4_4_,iVar1);
    if (iVar1 == 0) {
      local_60 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar1,0,&local_68,iVar1,(int *)((longlong)&local_60 + 4));
      memcpy(local_68.Data,pvVar4,(longlong)iVar1 << 3);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetEventsForModuleByName @ 14a2b25b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRig::execGetEventsForModuleByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  void *_Src;
  UControlRig *pUVar3;
  undefined8 *puVar4;
  FName local_res10;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetModuleRigByName((UModularRig *)param_1,local_res10);
  if (pUVar3 == (UControlRig *)0x0) {
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(pUVar3->_padding_ + 0x310))(pUVar3);
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)(puVar4 + 1);
    _Src = (void *)*puVar4;
    local_10 = CONCAT44(local_10._4_4_,iVar1);
    if (iVar1 == 0) {
      local_10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
    }
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetModuleNames @ 14a2b2d90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRig::execGetModuleNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  ForAnyElementType *local_res10;
  code **local_res20;
  ForAnyElementType local_68;
  undefined8 local_60;
  code *local_58;
  ForAnyElementType **local_50;
  code *local_48;
  code ***local_40;
  
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(uint *)(param_1 + 0x4f);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar2,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  puVar5 = *(undefined8 **)&param_1[0x4f].field_0x8;
  local_res10 = &local_68;
  iVar3 = *(int *)&param_1[0x4f].field_0x10;
  local_50 = &local_res10;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModularRig::GetModuleNames'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
             ::Call;
  local_res20 = &local_58;
  puVar1 = puVar5 + iVar3;
  while( true ) {
    if (*(int *)&param_1[0x4f].field_0x10 != iVar3) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    local_40 = &local_res20;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar4 = TraverseModules((FRigModuleInstance *)*puVar5,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_48);
    if (!bVar4) break;
    puVar5 = puVar5 + 1;
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetModulePaths @ 14a2b2ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRig::execGetModulePaths(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  ForAnyElementType *local_res10;
  code **local_res20;
  ForAnyElementType local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 **local_50;
  code *local_48;
  undefined8 **local_40;
  
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(uint *)(param_1 + 0x4f);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  puVar5 = *(undefined8 **)&param_1[0x4f].field_0x8;
  local_res10 = &local_68;
  iVar3 = *(int *)&param_1[0x4f].field_0x10;
  local_50 = &local_res10;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UModularRig::GetModulePaths'::__l2::<lambda_1>,bool,FRigModuleInstance_const_*>
             ::Call;
  local_res20 = &local_58;
  puVar1 = puVar5 + iVar3;
  while( true ) {
    if (*(int *)&param_1[0x4f].field_0x10 != iVar3) {
      `TCheckedPointerIterator<FRigModuleInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    local_40 = &local_res20;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UModularRig::ForEachModule'::__l2::<lambda_1>,bool,FRigModuleInstance_*>
               ::Call;
    bVar4 = TraverseModules((FRigModuleInstance *)*puVar5,
                            (TFunctionRef<bool___cdecl(FRigModuleInstance_*)> *)&local_48);
    if (!bVar4) break;
    puVar5 = puVar5 + 1;
  }
  if (param_3 == &local_68) {
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data;
    *(int *)((longlong)param_3 + 8) = (int)local_60;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = 0;
    local_60._0_4_ = 0;
  }
  DestructItems<FString,int>((FString *)local_68.Data,(int)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetModuleRig @ 14a2b31c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UModularRig::execGetModuleRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  FRigModuleInstance *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  longlong lVar4;
  UControlRig *pUVar5;
  FString local_28;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  _Src = local_18;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_10;
  local_28.Data.ArrayNum = (int)local_10;
  if ((int)local_10 == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_10,0,(ForAnyElementType *)&local_28,(int)local_10,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  pFVar2 = FindModule_Deprecated((UModularRig *)param_1,&local_28);
  if (pFVar2 == (FRigModuleInstance *)0x0) {
    if (1 < (byte)LogControlRig._0_1_) {
      pFVar3 = &::LOG_Static;
      goto LAB_14a2b3309;
    }
  }
  else {
    UpdateModuleVariables((UModularRig *)param_1,pFVar2);
    pUVar5 = (pFVar2->RigPtr).field0_0x0.DebugPtr;
    if ((pUVar5 == (UControlRig *)0x0) || (((uint)pUVar5->_padding_ >> 0x1e & 1) != 0)) {
      (pFVar2->RigPtr).field0_0x0.DebugPtr = (UControlRig *)0x0;
    }
    else {
      pUVar5 = (pFVar2->RigPtr).field0_0x0.DebugPtr;
      if (pUVar5 != (UControlRig *)0x0) {
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        goto LAB_14a2b3338;
      }
    }
    if (1 < (byte)LogControlRig._0_1_) {
      pFVar3 = &::LOG_Static;
LAB_14a2b3309:
      UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogControlRig);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pUVar5 = (UControlRig *)0x0;
LAB_14a2b3338:
  *(UControlRig **)param_3 = pUVar5;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetModuleRigByName @ 14a2b3370

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRig::execGetModuleRigByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UControlRig *pUVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetModuleRigByName((UModularRig *)param_1,local_res10);
  *(UControlRig **)param_3 = pUVar2;
  return;
}

// execGetParentModuleNameForBP @ 14a2b3410

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
UModularRig::execGetParentModuleNameForBP(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRigModuleInstance *pFVar2;
  FName local_res10;
  FName local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10;
  pFVar2 = FindModule((UModularRig *)param_1,local_res18);
  if (pFVar2 != (FRigModuleInstance *)0x0) {
    *(FName *)param_3 = pFVar2->ParentModuleName;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetParentPathForBP @ 14a2b34d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl UModularRig::execGetParentPathForBP(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *_Src;
  void *_Src_00;
  FRigModuleInstance *this;
  FRigModuleReference *this_00;
  FRigHierarchyModulePath *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FName local_res10;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  FRigHierarchyModulePath local_58;
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  _Src_00 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar5 = (longlong)(int)local_60;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = (int)local_60;
  if ((int)local_60 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,&local_78,(int)local_60,&local_6c);
    memcpy(local_78.Data,_Src_00,lVar5 * 2);
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_70 != 0) {
    FVar4.Data = local_78.Data;
  }
  ::FName::FName(&local_res10,(wchar_t *)FVar4.Data);
  this = FindModule((UModularRig *)param_1,&local_res10);
  if (this != (FRigModuleInstance *)0x0) {
    this_00 = FRigModuleInstance::GetModuleReference(this);
    if (this_00 != (FRigModuleReference *)0x0) {
      pFVar3 = FRigModuleReference::GetModulePath(this_00,&local_58);
      local_88.Data = (FScriptContainerElement *)0x0;
      iVar1 = (pFVar3->ModulePath).Data.ArrayNum;
      _Src = (pFVar3->ModulePath).Data.AllocatorInstance.Data;
      local_80 = CONCAT44(local_80._4_4_,iVar1);
      if (iVar1 == 0) {
        local_80 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,0,&local_88,iVar1,(int *)((longlong)&local_80 + 4));
        memcpy(local_88.Data,_Src,(longlong)iVar1 * 2);
      }
      if ((local_58.CachedElementNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_58.CachedElementNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_58.CachedElementNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if ((local_58.CachedModuleNameString.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
         (local_58.CachedModuleNameString.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_58.CachedModuleNameString.field0_0x0.TypedValue.Data.
                              AllocatorInstance.Data);
      }
      if (local_58.ModulePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ModulePath.Data.AllocatorInstance.Data);
      }
      goto LAB_14a2b3687;
    }
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
LAB_14a2b3687:
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (param_3 != &local_88) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_88.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_80;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_80._4_4_;
    local_80 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

