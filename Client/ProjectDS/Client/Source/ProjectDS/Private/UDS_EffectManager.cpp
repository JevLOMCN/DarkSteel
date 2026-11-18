// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b4876f0

UClass * __cdecl UDS_EffectManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EffectManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EffectManager",
               &Z_Registration_Info_UClass_UDS_EffectManager.InnerSingleton,
               StaticRegisterNativesUDS_EffectManager,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EffectManager>,
               InternalVTableHelperCtorCaller<UDS_EffectManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EffectManager.InnerSingleton;
}

// UDS_EffectManager @ 14b48b480

UDS_EffectManager * __thiscall
UDS_EffectManager::UDS_EffectManager(UDS_EffectManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EffectManager__6B_;
  *(undefined8 *)&this->EffectListMap = 0;
  *(undefined8 *)&(this->EffectListMap).field_0x8 = 0;
  *(undefined8 *)&(this->EffectListMap).field_0x20 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x28 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EffectListMap).field_0x34 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EffectListMap).field_0x40 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x48 = 0;
  (this->AttachedEffectInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachedEffectInfoList).ArrayNum = 0;
  (this->AttachedEffectInfoList).ArrayMax = 0;
  return this;
}

// UDS_EffectManager @ 14b48b4e0

UDS_EffectManager * __thiscall
UDS_EffectManager::UDS_EffectManager(UDS_EffectManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_EffectManager__6B_;
  *(undefined8 *)&this->EffectListMap = 0;
  *(undefined8 *)&(this->EffectListMap).field_0x8 = 0;
  *(undefined8 *)&(this->EffectListMap).field_0x20 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x28 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EffectListMap).field_0x34 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EffectListMap).field_0x40 = 0;
  *(undefined4 *)&(this->EffectListMap).field_0x48 = 0;
  (this->AttachedEffectInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachedEffectInfoList).ArrayNum = 0;
  (this->AttachedEffectInfoList).ArrayMax = 0;
  return this;
}

// ~UDS_EffectManager @ 14b48be90

void __thiscall UDS_EffectManager::~UDS_EffectManager(UDS_EffectManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_EffectManager__6B_;
  pFVar1 = (this->AttachedEffectInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->EffectListMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->EffectListMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EffectListMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b48d550

UClass * __cdecl UDS_EffectManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EffectManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EffectManager",
               &Z_Registration_Info_UClass_UDS_EffectManager.InnerSingleton,
               StaticRegisterNativesUDS_EffectManager,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_EffectManager>,
               InternalVTableHelperCtorCaller<UDS_EffectManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EffectManager.InnerSingleton;
}

// StaticRegisterNativesUDS_EffectManager @ 14b48d8f0

void __cdecl UDS_EffectManager::StaticRegisterNativesUDS_EffectManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_EffectManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOwnerActorEndPlay @ 14b48e980

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
UDS_EffectManager::execOnOwnerActorEndPlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  AActor *local_res20;
  
  local_res20 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOwnerActorEndPlay((UDS_EffectManager *)param_1,local_res20,(uint)local_res10[0]);
  return;
}

// AddEffectListMap @ 14baefa40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDS_EffectManager::AddEffectListMap
          (UDS_EffectManager *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> param_2)

{
  int *piVar1;
  code *pcVar2;
  UObject *pUVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  FDS_EffectList *pFVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  UPrimitiveComponent *pUVar15;
  int iVar16;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_a8;
  void *local_a0;
  undefined8 local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  UObject *local_80;
  UDS_EffectManager *local_78;
  FWeakObjectPtr *local_70;
  void **local_68;
  FDestructionSentinel local_60;
  undefined1 *local_48;
  undefined1 local_40 [8];
  
  local_res10 = param_1.WeakPtr;
  local_res18[0] = param_2.WeakPtr;
  bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar5) {
    return;
  }
  bVar5 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (bVar5) {
    return;
  }
  local_90 = local_res10;
  iVar6 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
                      *)&this->EffectListMap,
                     local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                     (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_90);
  pUVar12 = (UObject *)0x0;
  if (iVar6 == -1) {
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    pUVar8 = (UObject *)strstr("&UDS_EffectManager::OnOwnerActorEndPlay","::");
    pUVar10 = pUVar12;
    while (pUVar3 = pUVar8, pUVar3 != (UObject *)0x0) {
      pUVar8 = (UObject *)strstr(&pUVar3->field_0x1,"::");
      pUVar10 = pUVar3;
    }
    if (((pUVar10 == (UObject *)0x0) || (pUVar10->field_0x2 == '0')) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result && Result[2] != \'0\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                           ,0x1da,L"\'%hs\' does not look like a member function"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FName::FName(&local_88,&pUVar10->field_0x2);
    TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
    ::__Internal_AddDynamic<UDS_EffectManager>
              ((TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>
                *)&pUVar7[0xd].field_0xf,this,(pmf_855c2143)0x14bb20740,local_88);
    local_70 = &local_res10;
    local_a0 = (void *)0x0;
    local_68 = &local_a0;
    local_98 = 0;
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_&,FDS_EffectList_&&>_>
              ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
                *)&this->EffectListMap,
               (TPairInitializer<TWeakObjectPtr<AActor,FWeakObjectPtr>_&,FDS_EffectList_&&> *)
               (local_res18 + 1),(bool *)&local_70);
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
  }
  pFVar9 = TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
           ::FindChecked((TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
                          *)&this->EffectListMap,
                         (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_res10);
  iVar6 = (pFVar9->NiagaraComponentList).ArrayNum;
  pUVar10 = pUVar12;
  if (0 < iVar6) {
    do {
      iVar16 = (int)pUVar10;
      if (((pFVar9->NiagaraComponentList).ArrayNum <= iVar16) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar5 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)
                         ((pFVar9->NiagaraComponentList).AllocatorInstance.Data +
                         (longlong)pUVar10 * 8),(void *)0x0);
      FVar4 = local_res18[0];
      if (bVar5) {
        if (((pFVar9->NiagaraComponentList).ArrayNum <= iVar16) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(FWeakObjectPtr *)
         ((pFVar9->NiagaraComponentList).AllocatorInstance.Data + (longlong)pUVar10 * 8) = FVar4;
        goto LAB_14baefc8b;
      }
      pUVar10 = (UObject *)(ulonglong)(iVar16 + 1U);
    } while ((int)(iVar16 + 1U) < iVar6);
  }
  iVar6 = (pFVar9->NiagaraComponentList).ArrayNum;
  piVar1 = &(pFVar9->NiagaraComponentList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)pFVar9,piVar1);
  }
  (pFVar9->NiagaraComponentList).ArrayNum = iVar6 + 1;
  *(FWeakObjectPtr *)((pFVar9->NiagaraComponentList).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res18[0];
LAB_14baefc8b:
  pUVar10 = FWeakObjectPtr::Get(local_res18);
  if (pUVar10 != (UObject *)0x0) {
    pUVar11 = Z_Construct_UClass_UDS_NiagaraComponent_NoRegister();
    iVar6 = (int)pUVar11->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar11->_padding_)) goto LAB_14baefcd2;
  }
  pUVar10 = pUVar12;
LAB_14baefcd2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  local_80 = pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_80);
  bVar5 = TWeakObjectPtr<UDS_NiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NiagaraComponent,FWeakObjectPtr> *)&local_a8,(void *)0x0);
  if (!bVar5) {
    pUVar12 = FWeakObjectPtr::Get(&local_a8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar12[0x33].field_0x8,this);
    pUVar12 = FWeakObjectPtr::Get(&local_a8);
    TMulticastDelegateRegistration<void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_EffectManager,TWeakObjectPtr<AActor,FWeakObjectPtr>_&>
              ((TMulticastDelegateRegistration<void___cdecl(UActorComponent_*,bool),FDefaultDelegateUserPolicy>
                *)&pUVar12[0x33].field_0x8,(UDS_EffectManager *)local_40,(pmf_701738da)this,
               (TWeakObjectPtr<AActor,FWeakObjectPtr> *)SetHiddenActivatedComponent);
    pUVar12 = FWeakObjectPtr::Get(&local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar12 + 0x34),
               (FWriteAccessScope *)&local_60);
    local_48 = &pUVar12[0x34].field_0x8;
    puVar13 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_48);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_EffectManager____A6AXPEAVUActorComponent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_EffectManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar13[3] = 0;
      local_78 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_EffectManager *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 3),(FObjectPtr)&local_78);
      puVar13[4] = OnUnregisteredComponent;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
  }
  bVar5 = FDS_EntityBase::IsHiddenActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if (bVar5) {
    pUVar15 = (UPrimitiveComponent *)FWeakObjectPtr::Get(local_res18);
    WN_RegisterHiddenPrimitive(pUVar15,true);
  }
  return;
}

// AsyncLoadNiagara @ 14baf2470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_EffectManager::AsyncLoadNiagara(UDS_EffectManager *this,FDS_EffectSpawnInfo *param_1)

{
  float fVar1;
  float fVar2;
  UDS_LogManager *pUVar3;
  FDS_ResourceEffectTableRow *pFVar4;
  FName *pFVar5;
  UAssetManager *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TSharedPtr<FStreamableHandle,1> *pTVar9;
  TSharedPtr<FStreamableHandle,1> *pTVar10;
  undefined1 auStackY_238 [32];
  uint uVar11;
  wchar_t *pwVar12;
  undefined1 local_1e8 [8];
  FDelegateAllocation local_1e0;
  undefined1 local_1d0 [24];
  FName local_1b8;
  FString local_1b0;
  undefined1 local_198 [16];
  char *local_188;
  FDelegateAllocation *local_180;
  TSharedPtr<FStreamableHandle,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (param_1->EffectID < 1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_EffectManager::AsyncLoadNiagara",0x23,Yes);
    pwVar12 = L"Invalid EffectID. (%d)";
    uVar11 = 0x66;
  }
  else {
    pFVar4 = FDS_ResourceEffectTableRow::Get((longlong)param_1->EffectID,true);
    if (pFVar4 != (FDS_ResourceEffectTableRow *)0x0) {
      FSoftObjectPath::operator=(&param_1->EffectResourcePath,&pFVar4->EffectPath);
      if (param_1->SocketNameToAttach == (FName)0x0) {
        if ((pFVar4->Socket).Data.ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(pFVar4->Socket).Data.AllocatorInstance.Data;
        }
        pFVar5 = ::FName::FName(&local_1b8,pwVar12);
        param_1->SocketNameToAttach = *pFVar5;
      }
      fVar1 = pFVar4->EWScaleX;
      fVar2 = pFVar4->EWScaleY;
      (param_1->Scale).field0_0x0._s_0.X = (double)fVar1;
      (param_1->Scale).field0_0x0._s_0.Y = (double)fVar2;
      (param_1->Scale).field0_0x0._s_0.Z = (double)fVar1;
      pUVar6 = UAssetManager::Get();
      local_1d0._0_4_ = 0x7a;
      local_1d0._4_4_ = 0x46;
      local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0._8_8_ =
           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EffectManager.cpp";
      local_1b0.Data.ArrayNum = 0;
      local_1b0.Data.ArrayMax = 0;
      local_1d0._16_8_ =
           "bool __cdecl UDS_EffectManager::AsyncLoadNiagara(struct FDS_EffectSpawnInfo &)";
      local_1e8 = (undefined1  [8])0x0;
      local_1e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1e0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                 (FWriteAccessScope *)local_198);
      local_180 = &local_1e0;
      puVar7 = UE::Core::Private::DelegateAllocate(0xf8,&local_1e0);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFDS_EffectSpawnInfo____6B_
        ;
        FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)(puVar7 + 1),param_1);
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[0x1c] = uVar8;
        *puVar7 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_EffectManager____A6AXXZUFDefaultDelegateUserPolicy__UFDS_EffectSpawnInfo____6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_EffectManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar7[0x1d] = 0;
        local_1b8 = (FName)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_EffectManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 0x1d),(FObjectPtr)&local_1b8);
        puVar7[0x1e] = OnAsyncLoadNiagaraComplete;
      }
      if (local_188._0_1_ == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_198._8_8_,(FDestructionSentinel *)local_198
                  );
      }
      local_198._4_4_ = local_1d0._4_4_;
      local_198._0_4_ = local_1d0._0_4_;
      local_198._8_8_ = local_1d0._8_8_;
      local_188 = (char *)local_1d0._16_8_;
      pTVar9 = FStreamableManager::
               RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                         (&pUVar6->StreamableManager,&local_178,&param_1->EffectResourcePath,
                          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1e8,0,
                          false,false,&local_1b0,(FSourceLocation *)local_198);
      pTVar10 = &param_1->AsyncLoadHandle;
      if (pTVar10 != pTVar9) {
        pTVar10->Object = pTVar9->Object;
        pTVar9->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_1->AsyncLoadHandle).SharedReferenceCount,&pTVar9->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
                 (FWriteAccessScope *)local_1d0);
      if ((local_1e0.DelegateSize != 0) &&
         (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_1e0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_1e0,0,0,0x10);
        local_1e0.DelegateSize = 0;
      }
      if (local_1d0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_1d0._8_8_,(FDestructionSentinel *)local_1d0
                  );
      }
      if (local_1e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_1e0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_1e8);
      return pTVar10->Object != (FStreamableHandle *)0x0;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_168._padding_ = (longlong)pFVar4;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_EffectManager::AsyncLoadNiagara",0x23,Yes);
    pwVar12 = L"resourceEffectTable is nullptr. (%d)";
    uVar11 = 0x6d;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_168.Ptr,uVar11,pwVar12);
  if ((FDS_ResourceEffectTableRow *)local_168._padding_ != (FDS_ResourceEffectTableRow *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return false;
}

// Created @ 14bb014a0

void __thiscall UDS_EffectManager::Created(UDS_EffectManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb02b00

void __thiscall UDS_EffectManager::Destroyed(UDS_EffectManager *this)

{
  return;
}

// GetInst @ 14bb0b790

UDS_EffectManager * __cdecl UDS_EffectManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_EffectManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_EffectManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_EffectManager_NoRegister();
  pUVar3 = (UDS_EffectManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_EffectManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_EffectManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_EffectManager *)0x0;
}

// Init @ 14bb13510

void __thiscall UDS_EffectManager::Init(UDS_EffectManager *this)

{
  return;
}

// OnAsyncLoadNiagaraComplete @ 14bb1ac30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_EffectManager::OnAsyncLoadNiagaraComplete(UDS_EffectManager *this,FDS_EffectSpawnInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  double dVar3;
  bool bVar4;
  longlong *plVar5;
  FName FVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  FWeakObjectPtr FVar15;
  UClass *pUVar16;
  UDS_LogManager *pUVar17;
  USceneComponent *pUVar18;
  UNiagaraComponent *pUVar19;
  UObject *pUVar20;
  TVector<double>_u_0 *this_00;
  FScriptContainerElement *pFVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStackY_2b8 [32];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  FWeakObjectPtr local_238 [2];
  FWeakObjectPtr local_228 [2];
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FVar15 = (FWeakObjectPtr)FSoftObjectPath::ResolveObject(&param_1->EffectResourcePath);
  local_228[0] = FVar15;
  if (FVar15 == (FWeakObjectPtr)0x0) {
LAB_14bb1b27c:
    pUVar17 = UDS_LogManager::GetInst();
    pUVar19 = (UNiagaraComponent *)0x0;
    if (pUVar17 != (UDS_LogManager *)0x0) {
      pUVar17 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(&param_1->EffectResourcePath,(FString *)&local_218._s_0);
      local_1d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1d8,"UDS_EffectManager::OnAsyncLoadNiagaraComplete",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar17,1,Warning,local_1d8.Ptr,0xeb,L"niagaraSystem is nullptr. (%s)");
      if ((void *)local_1d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._padding_);
      }
      if ((UNiagaraComponent *)local_218._s_0.X != (UNiagaraComponent *)0x0) {
        FMemory::Free((void *)local_218._s_0.X);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->EffectSpawnCompleteDelegate,(FReadAccessScope *)&local_1f8._s_0);
    if (*(int *)&(param_1->EffectSpawnCompleteDelegate).field_0x10 != 0) {
      plVar5 = *(longlong **)&(param_1->EffectSpawnCompleteDelegate).field_0x8;
joined_r0x00014bb1b34a:
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x68))(plVar5,pUVar19);
      }
    }
LAB_14bb1b355:
    this_00 = &local_1f8;
  }
  else {
    pUVar16 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
    iVar14 = (int)pUVar16->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar15 + 0x10) + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar15 + 0x10) + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar16->_padding_)) goto LAB_14bb1b27c;
    dVar8 = (param_1->AdditionalScale).field0_0x0._s_0.X * (param_1->Scale).field0_0x0._s_0.X;
    local_1f8._s_0.Z =
         (param_1->AdditionalScale).field0_0x0._s_0.Z * (param_1->Scale).field0_0x0._s_0.Z;
    dVar7 = (param_1->AdditionalScale).field0_0x0._s_0.Y * (param_1->Scale).field0_0x0._s_0.Y;
    if (((dVar8 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
        (dVar7 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) ||
       (local_1f8._s_0.Z != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
      bVar13 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                         (&param_1->AttachComponent,(void *)0x0);
      uVar12 = local_1f8._s_0.Z;
      uVar22 = SUB84(dVar7,0);
      uVar23 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if ((bVar13) || (param_1->bIsLockRotation != false)) {
        bVar13 = param_1->bAutoStart;
        bVar4 = param_1->bAutoDestroy;
        auVar11._0_8_ = (param_1->Rotation).Pitch;
        auVar11._8_8_ = (param_1->Rotation).Yaw;
        dVar7 = (param_1->Rotation).Roll;
        pUVar19 = (UNiagaraComponent *)(param_1->Location).field0_0x0._s_0.X;
        dVar9 = (param_1->Location).field0_0x0._s_0.Y;
        dVar3 = (param_1->Location).field0_0x0._s_0.Z;
        pUVar20 = (UObject *)(**(code **)(this->_padding_ + 0x180))(this);
        local_1f8._8_4_ = uVar22;
        local_1f8._0_8_ = dVar8;
        local_1f8._12_4_ = uVar23;
        local_248 = auVar11;
        local_238[0] = (FWeakObjectPtr)dVar7;
        local_218._s_0.X = (double)pUVar19;
        local_218._s_0.Y = dVar9;
        local_218._s_0.Z = dVar3;
        local_1f8._s_0.Z = (double)uVar12;
        pUVar19 = UNiagaraFunctionLibrary::SpawnSystemAtLocation
                            (pUVar20,(UNiagaraSystem *)FVar15,(TVector<double> *)&local_218._s_0,
                             (TRotator<double> *)local_248,(TVector<double> *)&local_1f8._s_0,bVar4,
                             bVar13,None,true);
      }
      else {
        bVar13 = param_1->bAutoStart;
        bVar4 = param_1->bAutoDestroy;
        pUVar19 = (UNiagaraComponent *)(param_1->Rotation).Pitch;
        dVar9 = (param_1->Rotation).Yaw;
        FVar6 = param_1->SocketNameToAttach;
        dVar7 = (param_1->Rotation).Roll;
        auVar11 = *(undefined1 (*) [16])&(param_1->Location).field0_0x0;
        dVar3 = (param_1->Location).field0_0x0._s_0.Z;
        pUVar18 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->AttachComponent).WeakPtr);
        local_248._8_4_ = uVar22;
        local_248._0_8_ = dVar8;
        local_248._12_4_ = uVar23;
        local_238[0] = (FWeakObjectPtr)uVar12;
        local_218._s_0.X = (double)pUVar19;
        local_218._s_0.Y = dVar9;
        local_218._s_0.Z = dVar7;
        local_1f8._0_16_ = auVar11;
        local_1f8._s_0.Z = dVar3;
        pUVar19 = UNiagaraFunctionLibrary::SpawnSystemAttached
                            ((UNiagaraSystem *)local_228[0],pUVar18,FVar6,
                             (TVector<double> *)&local_1f8._s_0,(TRotator<double> *)&local_218._s_0,
                             (TVector<double> *)local_248,KeepRelativeOffset,bVar4,None,bVar13,true)
        ;
      }
      if (pUVar19 == (UNiagaraComponent *)0x0) {
        pUVar17 = UDS_LogManager::GetInst();
        if (pUVar17 != (UDS_LogManager *)0x0) {
          pUVar17 = UDS_LogManager::GetInst();
          FSoftObjectPath::ToString(&param_1->EffectResourcePath,(FString *)&local_218._s_0);
          local_1d8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1d8,"UDS_EffectManager::OnAsyncLoadNiagaraComplete",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar17,1,Warning,local_1d8.Ptr,0x11b,L"NiagaraComponent is nullptr. (%s)");
          if ((void *)local_1d8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1d8._padding_);
          }
          if ((UNiagaraComponent *)local_218._s_0.X != (UNiagaraComponent *)0x0) {
            FMemory::Free((void *)local_218._s_0.X);
          }
        }
        TDelegate<void___cdecl(FDS_EffectSpawnCompleteInfo),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&param_1->EffectSpawnCompleteDelegate,(FDS_EffectSpawnCompleteInfo)0x0);
        goto LAB_14bb1b35e;
      }
      if (param_1->bIsFollowOwnerActorVisiblity == true) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        local_228[0].ObjectIndex = 0;
        local_228[0].ObjectSerialNumber = 0;
        local_218._0_8_ = pUVar19;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        FWeakObjectPtr::operator=(local_228,(FObjectPtr)&local_218);
        AddEffectListMap(this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)(param_1->OwnerActor).WeakPtr,
                         (TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>)local_228[0]);
      }
      if (param_1->bIsLockRotation == true) {
        bVar13 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                           (&param_1->AttachComponent,(void *)0x0);
        if (bVar13) {
          pUVar17 = UDS_LogManager::GetInst();
          if (pUVar17 != (UDS_LogManager *)0x0) {
            pUVar17 = UDS_LogManager::GetInst();
            local_1d8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_1d8,"UDS_EffectManager::OnAsyncLoadNiagaraComplete",0x2d,Yes);
            UDS_LogManager::PrintLog
                      (pUVar17,1,Warning,local_1d8.Ptr,0x144,
                       L"InSpawnInfo.AttachComponent is nullptr.");
            if ((void *)local_1d8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_1d8._padding_);
            }
          }
        }
        else {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = local_248._8_8_;
          local_248 = auVar10 << 0x40;
          local_218._s_0.X = 0.0;
          FWeakObjectPtr::operator=((FWeakObjectPtr *)local_248,(FObjectPtr)&local_218);
          ::FName::FName((FName *)(local_248 + 8),"");
          local_238[0] = (FWeakObjectPtr)0x0;
          local_218._s_0.X = 0.0;
          FWeakObjectPtr::operator=(local_238,(FObjectPtr)&local_218);
          local_248._0_8_ = param_1->AttachComponent;
          local_248._8_4_ = (param_1->SocketNameToAttach).ComparisonIndex;
          local_248._12_4_ = (param_1->SocketNameToAttach).Number;
          local_218._0_8_ = pUVar19;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar19);
          }
          FWeakObjectPtr::operator=(local_238,(FObjectPtr)&local_218);
          iVar14 = (this->AttachedEffectInfoList).ArrayNum;
          pFVar21 = (this->AttachedEffectInfoList).AllocatorInstance.Data;
          pFVar1 = pFVar21 + (longlong)iVar14 * 0x18;
          while( true ) {
            if ((this->AttachedEffectInfoList).ArrayNum != iVar14) {
              `TCheckedPointerIterator<FDS_AttachedEffectInfo,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_258);
            }
            if (pFVar21 == pFVar1) {
              iVar14 = (this->AttachedEffectInfoList).ArrayNum;
              piVar2 = &(this->AttachedEffectInfoList).ArrayMax;
              if (iVar14 == *piVar2) {
                iVar14 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x418,&(this->AttachedEffectInfoList).AllocatorInstance,piVar2);
              }
              (this->AttachedEffectInfoList).ArrayNum = iVar14 + 1;
              pFVar21 = (this->AttachedEffectInfoList).AllocatorInstance.Data;
              pFVar1 = pFVar21 + (longlong)iVar14 * 0x18;
              *(undefined8 *)pFVar1 = local_248._0_8_;
              *(undefined8 *)(pFVar1 + 8) = local_248._8_8_;
              *(FWeakObjectPtr *)(pFVar21 + (longlong)iVar14 * 0x18 + 0x10) = local_238[0];
              goto LAB_14bb1b22f;
            }
            bVar13 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                               ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)(pFVar21 + 0x10)
                                ,(void *)0x0);
            if (bVar13) break;
            pFVar21 = pFVar21 + 0x18;
          }
          *(undefined8 *)pFVar21 = local_248._0_8_;
          *(undefined8 *)(pFVar21 + 8) = local_248._8_8_;
          *(FWeakObjectPtr *)(pFVar21 + 0x10) = local_238[0];
        }
      }
LAB_14bb1b22f:
      local_1f8._8_4_ = uVar22;
      local_1f8._0_8_ = dVar8;
      local_1f8._12_4_ = uVar23;
      local_1f8._s_0.Z = (double)uVar12;
      USceneComponent::SetRelativeScale3D
                ((USceneComponent *)pUVar19,(TVector<double> *)&local_1f8._s_0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &param_1->EffectSpawnCompleteDelegate,(FReadAccessScope *)&local_1f8._s_0);
      if (*(int *)&(param_1->EffectSpawnCompleteDelegate).field_0x10 != 0) {
        plVar5 = *(longlong **)&(param_1->EffectSpawnCompleteDelegate).field_0x8;
        goto joined_r0x00014bb1b34a;
      }
      goto LAB_14bb1b355;
    }
    pUVar17 = UDS_LogManager::GetInst();
    if (pUVar17 != (UDS_LogManager *)0x0) {
      pUVar17 = UDS_LogManager::GetInst();
      local_1d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1d8,"UDS_EffectManager::OnAsyncLoadNiagaraComplete",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar17,1,Warning,local_1d8.Ptr,0xf3,L"effectScale is 0. (%d)");
      if ((void *)local_1d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._padding_);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->EffectSpawnCompleteDelegate,(FReadAccessScope *)local_248);
    if ((*(int *)&(param_1->EffectSpawnCompleteDelegate).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->EffectSpawnCompleteDelegate).field_0x8,
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))(plVar5,0);
    }
    this_00 = (TVector<double>_u_0 *)local_248;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&this_00->_s_0);
LAB_14bb1b35e:
  FDS_EffectSpawnInfo::~FDS_EffectSpawnInfo(param_1);
  return;
}

// OnChangedShowEntity @ 14bb1cc10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDS_EffectManager::OnChangedShowEntity
          (UDS_EffectManager *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,bool *param_2)

{
  FWeakObjectPtr *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FDS_EffectList *pFVar5;
  UPrimitiveComponent *pUVar6;
  uint uVar7;
  longlong lVar8;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  
  local_res10[0] = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar2) {
    local_res20 = local_res10[0];
    iVar3 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
                        *)&this->EffectListMap,
                       local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                       (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_res20);
    if (iVar3 != -1) {
      pFVar5 = TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
               ::FindChecked((TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
                              *)&this->EffectListMap,
                             (TWeakObjectPtr<AActor_const_,FWeakObjectPtr>)local_res10[0]);
      uVar7 = 0;
      iVar3 = (pFVar5->NiagaraComponentList).ArrayNum;
      if (0 < iVar3) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < (pFVar5->NiagaraComponentList).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this_00 = (FWeakObjectPtr *)
                    ((pFVar5->NiagaraComponentList).AllocatorInstance.Data + lVar8 * 8);
          bVar2 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)this_00,(void *)0x0
                            );
          if (!bVar2) {
            if (*param_2 == false) {
              pUVar6 = (UPrimitiveComponent *)FWeakObjectPtr::Get(this_00);
              WN_RegisterHiddenPrimitive(pUVar6,true);
            }
            else {
              pUVar6 = (UPrimitiveComponent *)FWeakObjectPtr::Get(this_00);
              WN_UnregisterHiddenPrimitive(pUVar6,true);
            }
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 1;
        } while ((int)uVar7 < iVar3);
      }
    }
  }
  return;
}

// OnOwnerActorEndPlay @ 14bb20740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_EffectManager::OnOwnerActorEndPlay(UDS_EffectManager *this,AActor *param_1,Type param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FActorEndPlaySignature FVar4;
  int iVar5;
  FWeakObjectPtr local_res10 [2];
  FWeakObjectPtr local_res20;
  AActor *local_38;
  FWeakObjectPtr local_30;
  AActor *local_28;
  FWeakObjectPtr local_20;
  
  if (param_1 != (AActor *)0x0) {
    if (param_1->OnEndPlay != (FActorEndPlaySignature)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnEndPlay");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar2 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1,false);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar4 = (FActorEndPlaySignature)
              FSparseDelegateStorage::RemoveAll((UObject *)param_1,FVar2,(UObject *)this);
      param_1->OnEndPlay = FVar4;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10[0].ObjectIndex = 0;
    local_res10[0].ObjectSerialNumber = 0;
    local_38 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_res10,(FObjectPtr)&local_38);
    local_30 = local_res10[0];
    iVar5 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                      ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
                        *)&this->EffectListMap,
                       local_res10[0].ObjectSerialNumber ^ local_res10[0].ObjectIndex,
                       (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_30);
    if (iVar5 != -1) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_28 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
      local_20 = local_res20;
      if (*(int *)&(this->EffectListMap).field_0x8 != *(int *)&(this->EffectListMap).field_0x34) {
        TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                  ((TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
                    *)&this->EffectListMap,local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                   (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_20);
      }
    }
  }
  return;
}

// OnUnregisteredComponent @ 14bb23530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_EffectManager::OnUnregisteredComponent(UDS_EffectManager *this,UActorComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      WN_UnregisterHiddenPrimitive((UPrimitiveComponent *)param_1,true);
    }
  }
  return;
}

// PlayEffect @ 14bb271f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_EffectManager::PlayEffect(FDS_EffectSpawnInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_EffectManager *this;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = UDS_GameInstance::IsValidLocation(&param_1->Location);
  if (bVar2) {
    this = GetInst();
    if (this != (UDS_EffectManager *)0x0) {
      bVar2 = AsyncLoadNiagara(this,param_1);
      return bVar2;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EffectManager::PlayEffect",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x5c,L"effectMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7110401006583677013>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_EffectManager.cpp"
                       ,0x55,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// Reset @ 14bb32b30

void __thiscall UDS_EffectManager::Reset(UDS_EffectManager *this)

{
  return;
}

// SetHiddenActivatedComponent @ 14bb36a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_EffectManager::SetHiddenActivatedComponent
          (UDS_EffectManager *this,UActorComponent *param_1,bool param_2,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FWeakObjectPtr local_res20;
  
  local_res20 = param_3.WeakPtr;
  if (param_1 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14bb36aa7;
  }
  param_1 = (UActorComponent *)0x0;
LAB_14bb36aa7:
  bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if ((!bVar2) && ((UPrimitiveComponent *)param_1 != (UPrimitiveComponent *)0x0)) {
    bVar2 = FDS_EntityBase::IsHiddenActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res20);
    if (bVar2) {
      WN_RegisterHiddenPrimitive((UPrimitiveComponent *)param_1,true);
      return;
    }
    WN_UnregisterHiddenPrimitive((UPrimitiveComponent *)param_1,true);
  }
  return;
}

// Update @ 14bb3ef00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_EffectManager::Update(UDS_EffectManager *this,float *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  USceneComponent *this_00;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr *this_02;
  undefined1 auStack_d8 [32];
  undefined1 local_a8 [16];
  TVector<double>_u_0 local_98;
  undefined1 local_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar2 = (this->AttachedEffectInfoList).ArrayNum;
  this_01 = (FWeakObjectPtr *)(this->AttachedEffectInfoList).AllocatorInstance.Data;
  this_02 = this_01 + 2;
  pFVar1 = this_01 + (longlong)iVar2 * 3;
  while( true ) {
    if ((this->AttachedEffectInfoList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_AttachedEffectInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a8);
    }
    if (this_01 == pFVar1) break;
    bVar3 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *)this_02,(void *)0x0);
    if (!bVar3) {
      bVar3 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *)this_01,(void *)0x0);
      if (!bVar3) {
        pUVar4 = FWeakObjectPtr::Get(this_01);
        (**(code **)(*(longlong *)pUVar4 + 0x520))(pUVar4,local_78);
        this_00 = (USceneComponent *)FWeakObjectPtr::Get(this_02);
        local_98._s_0.X = local_58;
        local_98._s_0.Y = dStack_50;
        local_98._s_0.Z = local_48;
        USceneComponent::SetWorldLocation
                  (this_00,(TVector<double> *)&local_98._s_0,false,(FHitResult *)0x0,None);
      }
    }
    this_01 = this_01 + 3;
    this_02 = this_02 + 3;
  }
  return;
}

