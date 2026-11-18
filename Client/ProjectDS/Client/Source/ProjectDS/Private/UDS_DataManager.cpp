// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b480680

UClass * __cdecl UDS_DataManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataManager",
               &Z_Registration_Info_UClass_UDS_DataManager.InnerSingleton,
               StaticRegisterNativesUDS_DataManager,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_DataManager>,InternalVTableHelperCtorCaller<UDS_DataManager>
               ,local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataManager.InnerSingleton;
}

// UDS_DataManager @ 14b4833d0

UDS_DataManager * __thiscall
UDS_DataManager::UDS_DataManager(UDS_DataManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DataManager__6B_;
  *(undefined8 *)&this->DataSetContainerMap = 0;
  *(undefined8 *)&(this->DataSetContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataSetContainerMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataSetContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x48 = 0;
  (this->DataSetContainerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetContainerList).ArrayNum = 0;
  (this->DataSetContainerList).ArrayMax = 0;
  *(undefined8 *)&this->DonotDestroyMap = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x8 = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x20 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x28 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x34 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x40 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x48 = 0;
  (this->RepoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepoArray).ArrayNum = 0;
  (this->RepoArray).ArrayMax = 0;
  (this->TimeData).field0_0x0.DebugPtr = (UDS_TimeData *)0x0;
  (this->LoadingData).field0_0x0.DebugPtr = (UDS_LoadingData *)0x0;
  (this->CheatData).field0_0x0.DebugPtr = (UDS_CheatData *)0x0;
  (this->FadeInOutData).field0_0x0.DebugPtr = (UDS_FadeInOutData *)0x0;
  return this;
}

// UDS_DataManager @ 14b4834a0

UDS_DataManager * __thiscall
UDS_DataManager::UDS_DataManager(UDS_DataManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_DataManager__6B_;
  *(undefined8 *)&this->DataSetContainerMap = 0;
  *(undefined8 *)&(this->DataSetContainerMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataSetContainerMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataSetContainerMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x48 = 0;
  (this->DataSetContainerList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetContainerList).ArrayNum = 0;
  (this->DataSetContainerList).ArrayMax = 0;
  *(undefined8 *)&this->DonotDestroyMap = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x8 = 0;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x20 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x28 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x34 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DonotDestroyMap).field_0x40 = 0;
  *(undefined4 *)&(this->DonotDestroyMap).field_0x48 = 0;
  (this->RepoArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepoArray).ArrayNum = 0;
  (this->RepoArray).ArrayMax = 0;
  (this->TimeData).field0_0x0.DebugPtr = (UDS_TimeData *)0x0;
  (this->LoadingData).field0_0x0.DebugPtr = (UDS_LoadingData *)0x0;
  (this->CheatData).field0_0x0.DebugPtr = (UDS_CheatData *)0x0;
  (this->FadeInOutData).field0_0x0.DebugPtr = (UDS_FadeInOutData *)0x0;
  return this;
}

// ~UDS_DataManager @ 14b483e80

void __thiscall UDS_DataManager::~UDS_DataManager(UDS_DataManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_DataManager__6B_;
  pFVar1 = (this->RepoArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DonotDestroyMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DonotDestroyMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DonotDestroyMap);
  pFVar1 = (this->DataSetContainerList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DataSetContainerMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DataSetContainerMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataSetContainerMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b484eb0

UClass * __cdecl UDS_DataManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DataManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DataManager",
               &Z_Registration_Info_UClass_UDS_DataManager.InnerSingleton,
               StaticRegisterNativesUDS_DataManager,0x110,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_DataManager>,InternalVTableHelperCtorCaller<UDS_DataManager>
               ,local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DataManager.InnerSingleton;
}

// StaticRegisterNativesUDS_DataManager @ 14b4855b0

void __cdecl UDS_DataManager::StaticRegisterNativesUDS_DataManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_DataManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCheckDirty @ 14b486830

void __cdecl UDS_DataManager::execCheckDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CheckDirty((UDS_DataManager *)param_1);
  return;
}

// AddRepo @ 14b8b4ef0

void __thiscall UDS_DataManager::AddRepo(UDS_DataManager *this,FDS_SingletonInterface *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->RepoArray).ArrayNum;
  piVar1 = &(this->RepoArray).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RepoArray).AllocatorInstance,piVar1);
  }
  (this->RepoArray).ArrayNum = iVar2 + 1;
  *(FDS_SingletonInterface **)((this->RepoArray).AllocatorInstance.Data + (longlong)iVar2 * 8) =
       param_1;
  return;
}

// ChangeDataSetContainerKey @ 14ba95af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DataManager::ChangeDataSetContainerKey(UDS_DataManager *this,ulong64 param_1,ulong64 param_2)

{
  TMap<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
  *this_00;
  longlong lVar1;
  UDS_LogManager *pUVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStackY_1b8 [32];
  UDS_DataSetContainer *local_178;
  TObjectPtr<UDS_DataSetContainer>_u_0 local_170;
  TPairInitializer<unsigned___int64_const_&,TObjectPtr<UDS_DataSetContainer>_&> local_168;
  UDS_DataSetContainer **local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->DataSetContainerMap;
  local_178 = (UDS_DataSetContainer *)0x0;
  local_170 = (TObjectPtr<UDS_DataSetContainer>_u_0)param_2;
  if (*(int *)&(this->DataSetContainerMap).field_0x8 !=
      *(int *)&(this->DataSetContainerMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->DataSetContainerMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->DataSetContainerMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->DataSetContainerMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == param_1) {
          if ((UE::GC::GIsIncrementalReachabilityPending) &&
             (*(UObject **)(lVar1 + 8) != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(*(UObject **)(lVar1 + 8));
          }
          local_178 = *(UDS_DataSetContainer **)(lVar1 + 8);
          TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
                           *)this_00,iVar4);
          UDS_DataSetContainer::SetEntityID(local_178,(ulong64)local_170);
          local_168.Value = (TObjectPtr<UDS_DataSetContainer> *)&local_170;
          local_158 = &local_178;
          TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<unsigned___int64_const_&,TObjectPtr<UDS_DataSetContainer>_&>_>
                    ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
                      *)this_00,&local_168,(bool *)&local_168.Value);
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_DataManager::ChangeDataSetContainerKey",0x2a,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_148.Ptr,0xfa,L"Can not find DataSetContainer. (%llu)");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// CheckDirty @ 14ba966f0

void __thiscall UDS_DataManager::CheckDirty(UDS_DataManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_DataSetContainer *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DataSetContainerList).AllocatorInstance.Data;
  iVar2 = (this->DataSetContainerList).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
LAB_14ba96717:
  do {
    if ((this->DataSetContainerList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataSetContainer>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) {
      return;
    }
    this_00 = *(UDS_DataSetContainer **)pFVar3;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 != (UDS_DataSetContainer *)0x0) {
        UDS_DataSetContainer::CheckDirty(this_00);
      }
    }
    else if (this_00 != (UDS_DataSetContainer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_00);
      UDS_DataSetContainer::CheckDirty(this_00);
      pFVar3 = pFVar3 + 8;
      goto LAB_14ba96717;
    }
    pFVar3 = pFVar3 + 8;
  } while( true );
}

// ClearAllDataSetContainer @ 14ba97d50

void __thiscall UDS_DataManager::ClearAllDataSetContainer(UDS_DataManager *this)

{
  TMap<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
  *this_00;
  int *piVar1;
  TArray<TObjectPtr<UDS_DataSetContainer>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint uVar5;
  UDS_DataSetContainer *this_01;
  undefined1 *puVar6;
  UObject *pUVar7;
  code *pcVar8;
  TObjectPtr<UDS_DataSetContainer> *pTVar9;
  TMap<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong64 uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_a4;
  TPairInitializer<unsigned___int64_const_&,TObjectPtr<UDS_DataSetContainer>_const_&> local_a0;
  TMap<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  longlong local_60;
  FScriptContainerElement *local_58;
  
  pTVar2 = &this->DataSetContainerList;
  pFVar19 = (pTVar2->AllocatorInstance).Data;
  iVar17 = (this->DataSetContainerList).ArrayNum;
  pFVar3 = pFVar19 + (longlong)iVar17 * 8;
  while( true ) {
    if ((this->DataSetContainerList).ArrayNum != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDS_DataSetContainer>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar3) break;
    this_01 = *(UDS_DataSetContainer **)pFVar19;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 != (UDS_DataSetContainer *)0x0) goto LAB_14ba97dc0;
    }
    else if (this_01 != (UDS_DataSetContainer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14ba97dc0:
      uVar15 = UDS_DataSetContainer::GetEntityID(this_01);
      if (*(int *)&(this->DonotDestroyMap).field_0x8 != *(int *)&(this->DonotDestroyMap).field_0x34)
      {
        puVar6 = *(undefined1 **)&(this->DonotDestroyMap).field_0x40;
        puVar21 = &(this->DonotDestroyMap).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar21 = puVar6;
        }
        iVar12 = *(int *)(puVar21 +
                         ((uVar15 >> 0x20) * 0x17 + uVar15 &
                         (ulonglong)(*(int *)&(this->DonotDestroyMap).field_0x48 - 1)) * 4);
        if (iVar12 != -1) {
          do {
            if (*(ulong64 *)(*(longlong *)&this->DonotDestroyMap + (longlong)iVar12 * 0x18) ==
                uVar15) goto LAB_14ba97e3e;
            iVar12 = *(int *)(*(longlong *)&this->DonotDestroyMap + 0x10 + (longlong)iVar12 * 0x18);
          } while (iVar12 != -1);
        }
      }
      UDS_DataSetContainer::ClearAllDataSet(this_01);
    }
LAB_14ba97e3e:
    pFVar19 = pFVar19 + 8;
  }
  this_00 = &this->DataSetContainerMap;
  bVar11 = 1 < *(int *)&(this->DataSetContainerMap).field_0x48;
  if (!bVar11) {
    TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  iVar17 = 0;
  puVar6 = &(this->DataSetContainerMap).field_0xc;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x8 = 0;
  if (*(int *)puVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar6);
  }
  *(undefined4 *)&(this->DataSetContainerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x34 = 0;
  iVar12 = *(int *)&(this->DataSetContainerMap).field_0x2c;
  *(undefined4 *)&(this->DataSetContainerMap).field_0x28 = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)&(this->DataSetContainerMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->DataSetContainerMap).field_0x10,0);
  }
  uVar13 = 1;
  if (bVar11) {
    *(undefined4 *)&(this->DataSetContainerMap).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar1 = &(this->DataSetContainerList).ArrayMax;
  (this->DataSetContainerList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  puVar6 = &(this->DonotDestroyMap).field_0x10;
  iVar12 = *(int *)&(this->DonotDestroyMap).field_0x28;
  local_a0.Value = (TObjectPtr<UDS_DataSetContainer> *)&this->DonotDestroyMap;
  iVar20 = 0;
  iVar14 = 0;
  if (iVar12 != 0) {
    puVar22 = *(uint **)&(this->DonotDestroyMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar6;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar17;
      iVar20 = iVar20 + 0x20;
      iVar17 = iVar17 + 1;
      iVar14 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ba97f81;
      uVar18 = puVar22[lVar16 + 1];
    }
    uVar13 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uVar13 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res18 = (int)lVar16;
    iVar14 = iVar20 + -1 + local_res18;
    if (iVar12 < iVar14) {
      iVar14 = iVar12;
    }
  }
LAB_14ba97f81:
  local_90 = &this->DonotDestroyMap;
  uVar18 = *(uint *)&(this->DonotDestroyMap).field_0x28;
  TStack_88._padding_ = CONCAT44(uVar13,iVar17);
  TStack_88.CurrentBitIndex = iVar14;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  uVar13 = uVar18 & 0xffffffe0;
  iVar17 = (int)uVar18 >> 5;
  TStack_88._28_4_ = iVar14;
  TStack_88.BaseBitIndex = iVar20;
  uStack_68 = CONCAT44(uStack_a4,
                       *(int *)&(this->DonotDestroyMap).field_0x8 -
                       *(int *)&(this->DonotDestroyMap).field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
  if ((((int)uVar18 < 0) || (iVar12 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar9 = local_a0.Value;
  uVar5 = *(uint *)&(this->DonotDestroyMap).field_0x28;
  if (uVar18 != uVar5) {
    puVar21 = *(undefined1 **)&(this->DonotDestroyMap).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar6;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar17;
      uVar13 = uVar13 + 0x20;
      iVar17 = iVar17 + 1;
      uVar18 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ba980a0;
      uVar18 = *(uint *)(puVar21 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    uVar18 = local_res20 + -1 + uVar13;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14ba980a0:
  while( true ) {
    pTVar10 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_88.CurrentBitIndex == uVar18) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar6)) &&
       (pTVar10 ==
        (TMap<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
         *)pTVar9)) break;
    local_60 = *(longlong *)pTVar10 + (longlong)TStack_88.CurrentBitIndex * 0x18;
    pFVar3 = (FScriptContainerElement *)(local_60 + 8);
    local_58 = pFVar3;
    TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,TObjectPtr<UDS_DataSetContainer>_const_&>_>
              ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
                *)this_00,&local_a0,(bool *)&local_60);
    pFVar19 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar19 <= pFVar3) && (pFVar3 < pFVar19 + (longlong)*piVar1 * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar17 = (this->DataSetContainerList).ArrayNum;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar19 = (pTVar2->AllocatorInstance).Data;
    (this->DataSetContainerList).ArrayNum = iVar17 + 1;
    pUVar7 = *(UObject **)pFVar3;
    *(UObject **)(pFVar19 + (longlong)iVar17 * 8) = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// CreateDataSetContainer @ 14ba9c270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_DataManager::CreateDataSetContainer
          (UDS_DataManager *this,ulong64 param_1,EDS_EntityType param_2,int param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined1 auStackY_408 [32];
  UDS_DataSetContainer *local_3c8;
  UDS_DataSetContainer *local_3c0;
  undefined1 local_3b8 [8];
  UDS_DataSetContainer **local_3b0;
  UDS_DataSetContainer **local_3a8;
  UDS_DataSetContainer **local_3a0;
  UDS_DataSetContainer **local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_3c8 = (UDS_DataSetContainer *)param_1;
  if ((param_1 != 0) &&
     (*(int *)&(this->DataSetContainerMap).field_0x8 !=
      *(int *)&(this->DataSetContainerMap).field_0x34)) {
    puVar9 = *(undefined1 **)&(this->DataSetContainerMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->DataSetContainerMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->DataSetContainerMap).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar6 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->DataSetContainerMap + (longlong)iVar6 * 0x18) ==
            param_1) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7730636739877797777>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DataManager.cpp"
                             ,0x6f,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14ba9c401;
          pUVar7 = UDS_LogManager::GetInst();
          local_388._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_388,"UDS_DataManager::CreateDataSetContainer",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_388.Ptr,0x70,
                     L"DataSetContainer already exists. EntityID : (%lld)");
          pvVar8 = (void *)local_388._padding_;
          goto LAB_14ba9c3f7;
        }
        iVar6 = *(int *)(*(longlong *)&this->DataSetContainerMap + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  if (*(int *)&(this->DataSetContainerMap).field_0x8 !=
      *(int *)&(this->DataSetContainerMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->DataSetContainerMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->DataSetContainerMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + ((param_1 >> 0x20) * 0x17 + param_1 &
                              (ulonglong)(*(int *)&(this->DataSetContainerMap).field_0x48 - 1)) * 4)
    ;
    if (iVar6 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->DataSetContainerMap + (longlong)iVar6 * 0x18) ==
            param_1) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7730636739877797768>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_DataManager.cpp"
                             ,0x78,"false");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14ba9c401;
          pUVar7 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_DataManager::CreateDataSetContainer",0x27,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_268.Ptr,0x79,
                     L"DataSetContainer already exists. EntityID : (%lld)");
          pvVar8 = (void *)local_268._padding_;
          goto LAB_14ba9c3f7;
        }
        iVar6 = *(int *)(*(longlong *)&this->DataSetContainerMap + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  local_3c0 = UDS_DataSetContainer::Create(param_1,param_2,param_3);
  if (local_3c0 == (UDS_DataSetContainer *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DataManager::CreateDataSetContainer",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x80,L"dataSetContainer is nullptr.");
      pvVar8 = (void *)local_148._padding_;
LAB_14ba9c3f7:
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
    }
LAB_14ba9c401:
    bVar4 = false;
  }
  else {
    local_3b0 = &local_3c8;
    local_3a8 = &local_3c0;
    TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_&,UDS_DataSetContainer_*_&>_>
              ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
                *)&this->DataSetContainerMap,
               (TPairInitializer<unsigned___int64_&,UDS_DataSetContainer_*_&> *)local_3b8,
               (bool *)&local_3b0);
    iVar6 = (this->DataSetContainerList).ArrayNum;
    piVar1 = &(this->DataSetContainerList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->DataSetContainerList).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->DataSetContainerList).AllocatorInstance.Data;
    (this->DataSetContainerList).ArrayNum = iVar6 + 1;
    *(UDS_DataSetContainer **)(pFVar2 + (longlong)iVar6 * 8) = local_3c0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_3c0 != (UDS_DataSetContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_3c0);
    }
    if (param_4) {
      local_3a0 = &local_3c8;
      local_398 = &local_3c0;
      TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_&,UDS_DataSetContainer_*_&>_>
                ((TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
                  *)&this->DonotDestroyMap,
                 (TPairInitializer<unsigned___int64_&,UDS_DataSetContainer_*_&> *)(local_3b8 + 4),
                 (bool *)&local_3a0);
    }
    bVar4 = true;
  }
  return bVar4;
}

// Created @ 14ba9d540

void __thiscall UDS_DataManager::Created(UDS_DataManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14ba9e620

void __thiscall UDS_DataManager::Destroyed(UDS_DataManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ba9e623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// GetCheatData @ 14baa51e0

TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr> __thiscall
UDS_DataManager::GetCheatData(UDS_DataManager *this)

{
  UDS_CheatData *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_CheatData *local_res8;
  
  pUVar1 = (this->CheatData).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_CheatData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_CheatData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_CheatData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr>)in_RDX;
}

// GetDataSetContainer @ 14baa9420

TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> __thiscall
UDS_DataManager::GetDataSetContainer(UDS_DataManager *this,ulong64 param_1)

{
  longlong lVar1;
  UDS_DataSetContainer *pUVar2;
  int iVar3;
  TObjectPtr<UDS_DataSetContainer> *pTVar4;
  undefined1 *puVar5;
  int in_R8D;
  int in_register_00000084;
  UDS_DataSetContainer *local_res8;
  
  if (*(int *)&(this->DataSetContainerMap).field_0x8 !=
      *(int *)&(this->DataSetContainerMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataSetContainerMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataSetContainerMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->DataSetContainerMap).field_0x48 - 1U &
                              in_register_00000084 * 0x17 + in_R8D) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->DataSetContainerMap;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar3 * 0x18) == CONCAT44(in_register_00000084,in_R8D))
        {
          pTVar4 = TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
                                  *)&this->DataSetContainerMap,CONCAT44(in_register_00000084,in_R8D)
                                );
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_DataSetContainer *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_DataSetContainer *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          *(undefined8 *)param_1 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_DataSetContainer *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res8 = (UDS_DataSetContainer *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetFadeInOutData @ 14baaa5d0

TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr> __thiscall
UDS_DataManager::GetFadeInOutData(UDS_DataManager *this)

{
  UDS_FadeInOutData *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_FadeInOutData *local_res8;
  
  pUVar1 = (this->FadeInOutData).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_FadeInOutData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_FadeInOutData *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_FadeInOutData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_FadeInOutData,FWeakObjectPtr>)in_RDX;
}

// GetInst @ 14baab690

UDS_DataManager * __cdecl UDS_DataManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_DataManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_DataManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_DataManager_NoRegister();
  pUVar3 = (UDS_DataManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_DataManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_DataManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_DataManager *)0x0;
}

// GetLoadingData @ 14baad460

TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr> __thiscall
UDS_DataManager::GetLoadingData(UDS_DataManager *this)

{
  UDS_LoadingData *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_LoadingData *local_res8;
  
  pUVar1 = (this->LoadingData).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_LoadingData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_LoadingData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_LoadingData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_LoadingData,FWeakObjectPtr>)in_RDX;
}

// GetTimeData @ 14bab0be0

TWeakObjectPtr<UDS_TimeData,FWeakObjectPtr> __thiscall
UDS_DataManager::GetTimeData(UDS_DataManager *this)

{
  UDS_TimeData *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_TimeData *local_res8;
  
  pUVar1 = (this->TimeData).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_TimeData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_TimeData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_TimeData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_TimeData,FWeakObjectPtr>)in_RDX;
}

// Init @ 14bab3cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_DataManager::Init(UDS_DataManager *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_TimeData *pUVar3;
  UDS_LoadingData *pUVar4;
  UDS_CheatData *pUVar5;
  UDS_FadeInOutData *pUVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_TimeData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UDS_TimeData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UDS_TimeData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->TimeData).field0_0x0.DebugPtr = pUVar3;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_LoadingData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar4 = (UDS_LoadingData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_LoadingData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->LoadingData).field0_0x0.DebugPtr = pUVar4;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_CheatData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar5 = (UDS_CheatData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_CheatData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CheatData).field0_0x0.DebugPtr = pUVar5;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UDS_FadeInOutData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar6 = (UDS_FadeInOutData *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UDS_FadeInOutData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->FadeInOutData).field0_0x0.DebugPtr = pUVar6;
  UDS_CheatData::Init((this->CheatData).field0_0x0.DebugPtr);
  return;
}

// RemoveDataSetContainer @ 14bac7630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DataManager::RemoveDataSetContainer
          (UDS_DataManager *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UDS_DataManager *this_00;
  UDS_LogManager *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = GetInst();
  if (this_00 == (UDS_DataManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_DataManager::RemoveDataSetContainer",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x9e,L"dataMng is nullptr.");
      if ((UDS_DataManager *)local_148._padding_ != (UDS_DataManager *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pFVar4 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar2 = pFVar4 + (longlong)iVar1 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if (pFVar4 == pFVar2) break;
      if (UDS_PlayerData::MainPlayerEntityID != *(ulong64 *)pFVar4) {
        RemoveDataSetContainer(this_00,*(ulong64 *)pFVar4,true,false);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// RemoveDataSetContainer @ 14bac7770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_DataManager::RemoveDataSetContainer
          (UDS_DataManager *this,ulong64 param_1,bool param_2,bool param_3)

{
  TObjectPtr<UDS_DataSetContainer>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UDS_LogManager *pUVar6;
  TObjectPtr<UDS_DataSetContainer> *pTVar7;
  TObjectPtr<UDS_DataSetContainer>_u_0 TVar8;
  void *pvVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStackY_2e8 [32];
  TObjectPtr<UDS_DataSetContainer>_u_0 local_298 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  iVar11 = (int)(param_1 >> 0x20);
  if (param_3) {
    TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
    ::Remove((TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
              *)&this->DonotDestroyMap,param_1);
  }
  else if (*(int *)&(this->DonotDestroyMap).field_0x8 != *(int *)&(this->DonotDestroyMap).field_0x34
          ) {
    puVar10 = *(undefined1 **)&(this->DonotDestroyMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->DonotDestroyMap).field_0x38;
    }
    iVar14 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->DonotDestroyMap).field_0x48 - 1U &
                     iVar11 * 0x17 + (int)param_1) * 4);
    if (iVar14 != -1) {
      lVar12 = *(longlong *)&this->DonotDestroyMap;
      do {
        if (*(ulong64 *)(lVar12 + (longlong)iVar14 * 0x18) == param_1) {
          if (iVar14 != -1) {
            return false;
          }
          break;
        }
        iVar14 = *(int *)(lVar12 + 0x10 + (longlong)iVar14 * 0x18);
      } while (iVar14 != -1);
    }
  }
  if (*(int *)&(this->DataSetContainerMap).field_0x8 !=
      *(int *)&(this->DataSetContainerMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->DataSetContainerMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->DataSetContainerMap).field_0x38;
    }
    iVar11 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->DataSetContainerMap).field_0x48 - 1U &
                     iVar11 * 0x17 + (int)param_1) * 4);
    if (iVar11 != -1) {
      do {
        if (*(ulong64 *)(*(longlong *)&this->DataSetContainerMap + (longlong)iVar11 * 0x18) ==
            param_1) {
          pTVar7 = TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
                                  *)&this->DataSetContainerMap,param_1);
          local_298[0].ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar7->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14bac7939:
            if (local_298[0].DebugPtr != (UDS_DataSetContainer *)0x0) {
              if (param_2) {
                UDS_DataSetContainer::ClearAllDataSet(local_298[0].DebugPtr);
              }
              TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
              ::Remove((TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
                        *)&this->DataSetContainerMap,param_1);
              pTVar1 = (TObjectPtr<UDS_DataSetContainer>_u_0 *)
                       (this->DataSetContainerList).AllocatorInstance.Data;
              if (((pTVar1 <= local_298) &&
                  (local_298 < pTVar1 + (this->DataSetContainerList).ArrayMax)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              iVar11 = (this->DataSetContainerList).ArrayNum;
              if (iVar11 != 0) {
                iVar15 = 0;
                pFVar2 = (this->DataSetContainerList).AllocatorInstance.Data;
                bVar4 = *(UDS_DataSetContainer **)pFVar2 != local_298[0].DebugPtr;
                lVar12 = 0;
                TVar8 = local_298[0];
                iVar14 = 0;
                do {
                  iVar13 = iVar14;
                  do {
                    lVar12 = lVar12 + 1;
                    iVar13 = iVar13 + 1;
                    if (iVar11 <= lVar12) break;
                  } while (bVar4 == (*(UDS_DataSetContainer **)(pFVar2 + lVar12 * 8) !=
                                    TVar8.DebugPtr));
                  if (bVar4 != false) {
                    if (iVar15 != iVar14) {
                      memmove(pFVar2 + (longlong)iVar15 * 8,pFVar2 + (longlong)iVar14 * 8,
                              (longlong)(iVar13 - iVar14) << 3);
                      TVar8 = local_298[0];
                    }
                    iVar15 = iVar15 + (iVar13 - iVar14);
                  }
                  bVar4 = (bool)(bVar4 ^ 1);
                  iVar14 = iVar13;
                } while (lVar12 < iVar11);
                (this->DataSetContainerList).ArrayNum = iVar15;
              }
              return true;
            }
          }
          else if (local_298[0].DebugPtr != (UDS_DataSetContainer *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_298[0].DebugPtr);
            goto LAB_14bac7939;
          }
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_DataManager::RemoveDataSetContainer",0x27,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_288.Ptr,0xc5,L"Container is nullptr.");
          pvVar9 = (void *)local_288._padding_;
          goto LAB_14bac78e3;
        }
        iVar11 = *(int *)(*(longlong *)&this->DataSetContainerMap + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_DataManager::RemoveDataSetContainer",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0xbe,L"Couldn\'t find container. (%llu)");
    pvVar9 = (void *)local_168._padding_;
LAB_14bac78e3:
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
  }
  return false;
}

// Reset @ 14bac9780

void __thiscall UDS_DataManager::Reset(UDS_DataManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (this->TimeData).field0_0x0.DebugPtr = (UDS_TimeData *)0x0;
  (this->LoadingData).field0_0x0.DebugPtr = (UDS_LoadingData *)0x0;
  (this->CheatData).field0_0x0.DebugPtr = (UDS_CheatData *)0x0;
  (this->FadeInOutData).field0_0x0.DebugPtr = (UDS_FadeInOutData *)0x0;
  pFVar4 = (this->RepoArray).AllocatorInstance.Data;
  iVar3 = (this->RepoArray).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->RepoArray).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_SingletonInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    (**(code **)**(undefined8 **)pFVar4)();
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->RepoArray).ArrayMax;
  (this->RepoArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RepoArray).AllocatorInstance,0,piVar1);
  }
  ClearAllDataSetContainer(this);
  return;
}

// Update @ 14bad34c0

void __thiscall UDS_DataManager::Update(UDS_DataManager *this,float *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_DataSetContainer *pUVar3;
  UDS_LoadingData *this_00;
  UDS_FadeInOutData *this_01;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->DataSetContainerList).ArrayNum;
  pFVar4 = (this->DataSetContainerList).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
LAB_14bad34f7:
  do {
    if ((this->DataSetContainerList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataSetContainer>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(UDS_DataSetContainer **)pFVar4;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UDS_DataSetContainer *)0x0) {
        UDS_DataSetContainer::Update(pUVar3,param_1);
      }
    }
    else if (pUVar3 != (UDS_DataSetContainer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      UDS_DataSetContainer::Update(pUVar3,param_1);
      pFVar4 = pFVar4 + 8;
      goto LAB_14bad34f7;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
  pFVar4 = (this->DataSetContainerList).AllocatorInstance.Data;
  iVar2 = (this->DataSetContainerList).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
LAB_14bad3560:
  do {
    if ((this->DataSetContainerList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataSetContainer>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) {
      this_00 = (this->LoadingData).field0_0x0.DebugPtr;
      if (this_00 != (UDS_LoadingData *)0x0) {
        UDS_LoadingData::Update(this_00,param_1);
      }
      this_01 = (this->FadeInOutData).field0_0x0.DebugPtr;
      if (this_01 != (UDS_FadeInOutData *)0x0) {
        UDS_FadeInOutData::Update(this_01,param_1);
        return;
      }
      return;
    }
    pUVar3 = *(UDS_DataSetContainer **)pFVar4;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UDS_DataSetContainer *)0x0) {
        UDS_DataSetContainer::CheckDirty(pUVar3);
      }
    }
    else if (pUVar3 != (UDS_DataSetContainer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      UDS_DataSetContainer::CheckDirty(pUVar3);
      pFVar4 = pFVar4 + 8;
      goto LAB_14bad3560;
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

