// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b57ab50

UClass * __cdecl UDS_RenderRoomManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RenderRoomManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RenderRoomManager",
               &Z_Registration_Info_UClass_UDS_RenderRoomManager.InnerSingleton,
               StaticRegisterNativesUDS_RenderRoomManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RenderRoomManager>,
               InternalVTableHelperCtorCaller<UDS_RenderRoomManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RenderRoomManager.InnerSingleton;
}

// UDS_RenderRoomManager @ 14b57e0b0

UDS_RenderRoomManager * __thiscall
UDS_RenderRoomManager::UDS_RenderRoomManager(UDS_RenderRoomManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RenderRoomManager__6B_;
  *(undefined8 *)&this->RenderRoomMap = 0;
  *(undefined8 *)&(this->RenderRoomMap).field_0x8 = 0;
  *(undefined8 *)&(this->RenderRoomMap).field_0x20 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x28 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderRoomMap).field_0x34 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RenderRoomMap).field_0x40 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x48 = 0;
  return this;
}

// UDS_RenderRoomManager @ 14b57e100

UDS_RenderRoomManager * __thiscall
UDS_RenderRoomManager::UDS_RenderRoomManager
          (UDS_RenderRoomManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RenderRoomManager__6B_;
  *(undefined8 *)&this->RenderRoomMap = 0;
  *(undefined8 *)&(this->RenderRoomMap).field_0x8 = 0;
  *(undefined8 *)&(this->RenderRoomMap).field_0x20 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x28 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderRoomMap).field_0x34 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RenderRoomMap).field_0x40 = 0;
  *(undefined4 *)&(this->RenderRoomMap).field_0x48 = 0;
  return this;
}

// ~UDS_RenderRoomManager @ 14b57e810

void __thiscall UDS_RenderRoomManager::~UDS_RenderRoomManager(UDS_RenderRoomManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_RenderRoomManager__6B_;
  *(undefined4 *)&(this->RenderRoomMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RenderRoomMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RenderRoomMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5807c0

UClass * __cdecl UDS_RenderRoomManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RenderRoomManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RenderRoomManager",
               &Z_Registration_Info_UClass_UDS_RenderRoomManager.InnerSingleton,
               StaticRegisterNativesUDS_RenderRoomManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RenderRoomManager>,
               InternalVTableHelperCtorCaller<UDS_RenderRoomManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RenderRoomManager.InnerSingleton;
}

// StaticRegisterNativesUDS_RenderRoomManager @ 14b580a00

void __cdecl UDS_RenderRoomManager::StaticRegisterNativesUDS_RenderRoomManager(void)

{
  return;
}

// AddRenderRoom @ 14bb4f9d0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_RenderRoomManager::AddRenderRoom
          (UDS_RenderRoomManager *this,FString *param_1,ADS_RenderRoom *param_2)

{
  FScriptContainerElement *pFVar1;
  TPairInitializer<FString_&,ADS_RenderRoom_*_&> local_res8;
  ADS_RenderRoom *local_res18 [2];
  FString *local_18;
  ADS_RenderRoom **local_10;
  
  local_10 = local_res18;
  local_res18[0] = param_2;
  local_18 = param_1;
  TSet<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ADS_RenderRoom>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&,ADS_RenderRoom_*_&>_>
            ((TSet<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ADS_RenderRoom>,0>,FDefaultSetAllocator>
              *)&this->RenderRoomMap,&local_res8,(bool *)&local_18);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// FindRenderRoom @ 14bb62b50

TWeakObjectPtr<ADS_RenderRoom,FWeakObjectPtr> __thiscall
UDS_RenderRoomManager::FindRenderRoom(UDS_RenderRoomManager *this,FString *param_1)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  FString *in_R8;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  iVar4 = (in_R8->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(in_R8->Data).AllocatorInstance.Data;
  }
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ADS_RenderRoom>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ADS_RenderRoom>,0>,FDefaultSetAllocator>
                      *)&this->RenderRoomMap,uVar3,in_R8);
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->RenderRoomMap).field_0x0;
    puVar8 = (undefined8 *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    if (puVar8 != (undefined8 *)0x0) {
      pUVar1 = (UObject *)*puVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)local_res8;
      goto LAB_14bb62c1c;
    }
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = (UObject *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)local_res18);
LAB_14bb62c1c:
  pFVar2 = (in_R8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (TWeakObjectPtr<ADS_RenderRoom,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetInst @ 14bb65e10

UDS_RenderRoomManager * __cdecl UDS_RenderRoomManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_RenderRoomManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_RenderRoomManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_RenderRoomManager_NoRegister();
  pUVar3 = (UDS_RenderRoomManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_RenderRoomManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_RenderRoomManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_RenderRoomManager *)0x0;
}

// RemoveRenderRoom @ 14bb840a0

void __thiscall
UDS_RenderRoomManager::RemoveRenderRoom(UDS_RenderRoomManager *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  
  if (*(int *)&(this->RenderRoomMap).field_0x8 != *(int *)&(this->RenderRoomMap).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar5 = L"";
      iVar4 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
    TSet<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ADS_RenderRoom>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TObjectPtr<ADS_RenderRoom>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<ADS_RenderRoom>,0>,FDefaultSetAllocator>
                *)&this->RenderRoomMap,uVar3,param_1);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

