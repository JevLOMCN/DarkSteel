// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 49

// StaticClass @ 14b448d80

UClass * __cdecl UDS_CharStatusData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharStatusData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharStatusData",
               &Z_Registration_Info_UClass_UDS_CharStatusData.InnerSingleton,
               StaticRegisterNativesUDS_CharStatusData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharStatusData>,
               InternalVTableHelperCtorCaller<UDS_CharStatusData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharStatusData.InnerSingleton;
}

// UDS_CharStatusData @ 14b44d5a0

UDS_CharStatusData * __thiscall
UDS_CharStatusData::UDS_CharStatusData(UDS_CharStatusData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharStatusData__6B_;
  *(undefined8 *)&this->StatusInfoMap = 0;
  *(undefined8 *)&(this->StatusInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->StatusInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->StatusInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->StatusInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatusInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->StatusInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StatusInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->StatusInfoMap).field_0x48 = 0;
  this->IsInitOriginByServer = false;
  this->MaxMoveSpeed = 0.0;
  *(undefined8 *)&this->ChangedMaxMoveSpeedDelegate = 0;
  *(undefined8 *)&(this->ChangedMaxMoveSpeedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedMaxMoveSpeedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedMaxMoveSpeedDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_CharStatusData @ 14b4500c0

void __thiscall UDS_CharStatusData::~UDS_CharStatusData(UDS_CharStatusData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CharStatusData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedMaxMoveSpeedDelegate).field_0x8,
             *(int *)&(this->ChangedMaxMoveSpeedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedMaxMoveSpeedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedMaxMoveSpeedDelegate);
  *(undefined4 *)&(this->StatusInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StatusInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_StatusInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_StatusInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StatusInfoMap);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b454170

UClass * __cdecl UDS_CharStatusData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharStatusData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharStatusData",
               &Z_Registration_Info_UClass_UDS_CharStatusData.InnerSingleton,
               StaticRegisterNativesUDS_CharStatusData,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharStatusData>,
               InternalVTableHelperCtorCaller<UDS_CharStatusData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharStatusData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharStatusData @ 14b455140

void __cdecl UDS_CharStatusData::StaticRegisterNativesUDS_CharStatusData(void)

{
  return;
}

// UDS_CharStatusData @ 14ba32830

UDS_CharStatusData * __thiscall
UDS_CharStatusData::UDS_CharStatusData(UDS_CharStatusData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->StatusInfoMap = 0;
  *(undefined8 *)&(this->StatusInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->StatusInfoMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7UDS_CharStatusData__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&(this->StatusInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->StatusInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatusInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatusInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->StatusInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->StatusInfoMap).field_0x48 = 0;
  this->IsInitOriginByServer = false;
  this->MaxMoveSpeed = 0.0;
  *(undefined8 *)&this->ChangedMaxMoveSpeedDelegate = 0;
  *(undefined8 *)&(this->ChangedMaxMoveSpeedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedMaxMoveSpeedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedMaxMoveSpeedDelegate).field_0x18 = 2;
  return this;
}

// operator() @ 14ba340b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UDS_CharStatusData::Created'::__l2::<lambda_1>::operator()(void *this,EDS_StatusType param_1)

{
  EDS_StatusType local_res10;
  undefined1 auStack_138 [32];
  TPairInitializer<EDS_StatusType_&,FDS_StatusInfo_&&> local_118;
  FDS_StatusInfo *local_108;
  FDS_StatusInfo local_100;
  ulonglong local_10;
  
  if ((param_1 != None) &&
     (local_10 = __security_cookie.value ^ (ulonglong)auStack_138, param_1 != Max)) {
    local_100.OriginValue = 0;
    local_100.MaxValue = 0.0;
    local_100.CurrentValue = 0;
    local_100.bIsDirty = false;
    local_100.ContentsStatusMap._0_8_ = 0;
    local_100.ContentsStatusMap._8_8_ = 0;
    local_100.ContentsStatusMap._32_8_ = 0;
    local_100.ContentsStatusMap._64_8_ = 0;
    local_100.ContentsStatusMap._72_4_ = 0;
    local_100.bIsUpdatedContentsStatus = false;
    local_118.Value = (FDS_StatusInfo *)&local_res10;
    local_108 = &local_100;
    local_100.ContentsStatusMap._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_100.ContentsStatusMap._48_8_ = _UNK_150631d98;
    local_100.ChangeOriginValueDelegate._0_8_ = 0;
    local_100.ChangeOriginValueDelegate._8_8_ = 0;
    local_100.ChangeOriginValueDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
    local_100.ChangeOriginValueDelegate._24_8_ = _UNK_150631d48;
    local_100.ChangeMaxValueDelegate._0_8_ = 0;
    local_100.ChangeMaxValueDelegate._8_8_ = 0;
    local_100.ChangeMaxValueDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
    local_100.ChangeMaxValueDelegate._24_8_ = _UNK_150631d48;
    local_100.ChangeCurrentValueDelegate._0_8_ = 0;
    local_100.ChangeCurrentValueDelegate._8_8_ = 0;
    local_100.ChangeCurrentValueDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
    local_100.ChangeCurrentValueDelegate._24_8_ = _UNK_150631d48;
    local_100.ChangeStatusDelegate._0_8_ = 0;
    local_100.ChangeStatusDelegate._8_8_ = 0;
    local_100.ChangeStatusDelegate._16_8_ = ___xmm_00000000000000020000000000000000;
    local_100.ChangeStatusDelegate._24_8_ = _UNK_150631d48;
    local_res10 = param_1;
    local_100.StatusType = param_1;
    TSet<TTuple<enum_EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_StatusType_&,FDS_StatusInfo_&&>_>
              ((void *)(*(longlong *)this + 0x58),&local_118,(bool *)&local_118.Value);
    FDS_StatusInfo::~FDS_StatusInfo(&local_100);
  }
  return;
}

// Created @ 14ba3c080

void __thiscall UDS_CharStatusData::Created(UDS_CharStatusData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res8 [8];
  UDS_CharStatusData *local_res10;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10 = this;
  EDS_StatusTypeValues(&local_28);
  iVar2 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar2 * 4;
  FVar3.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    `UDS_CharStatusData::Created'::__l2::<lambda_1>::operator()
              (&local_res10,*(EDS_StatusType *)FVar3.Data);
    FVar3.Data = FVar3.Data + 4;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (RelatedStatusInfoMap._8_4_ == RelatedStatusInfoMap._52_4_) {
    InitRelatedStatusInfoMap(this);
  }
  if (RelatedToMaxMoveSpeed_CharState == None) {
    InitRelatedToMaxMoveSpeed(this);
  }
  return;
}

// Deleted @ 14ba3c9d0

void __thiscall UDS_CharStatusData::Deleted(UDS_CharStatusData *this)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_38 [16];
  
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar2) {
    return;
  }
  pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_38);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
  pUVar7 = (UObject *)0x0;
  if (pUVar5 == (UObject *)0x0) {
LAB_14ba3ca4c:
    pUVar5 = pUVar7;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_CharStateData_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14ba3ca4c;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[7].field_0x20,this);
  }
  pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_38);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
  if (pUVar5 == (UObject *)0x0) {
LAB_14ba3cb09:
    pUVar5 = pUVar7;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_CharBuffData_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14ba3cb09;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar5 + 7),this);
  }
  pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_38);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_EntityData_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14ba3cbc6;
  }
  pUVar5 = pUVar7;
LAB_14ba3cbc6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[5].field_0x20,this);
  }
  return;
}

// GetCharacterContentsStatus @ 14ba45ba0

int __thiscall
UDS_CharStatusData::GetCharacterContentsStatus(UDS_CharStatusData *this,EDS_StatusType param_1)

{
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *this_00;
  FDS_StatusInfo *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  this_00 = &this->StatusInfoMap;
  if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->StatusInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1)
                              * 4);
    if (iVar5 != -1) {
      do {
        if (*(EDS_StatusType *)((longlong)iVar5 * 0x100 + *(longlong *)this_00) == param_1) {
          pFVar1 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                   ::FindChecked(this_00,param_1);
          iVar5 = 0;
          if (*(int *)&(pFVar1->ContentsStatusMap).field_0x8 ==
              *(int *)&(pFVar1->ContentsStatusMap).field_0x34) goto LAB_14ba45c84;
          puVar3 = *(undefined1 **)&(pFVar1->ContentsStatusMap).field_0x40;
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &(pFVar1->ContentsStatusMap).field_0x38;
          }
          iVar4 = *(int *)(puVar3 + (ulonglong)
                                    (*(int *)&(pFVar1->ContentsStatusMap).field_0x48 - 1U & 0xc9) *
                                    4);
          iVar5 = 0;
          if (iVar4 == -1) goto LAB_14ba45c84;
          goto LAB_14ba45c50;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x100 + 0xf8 + *(longlong *)this_00);
      } while (iVar5 != -1);
    }
  }
  return 0;
  while (iVar4 = *(int *)(*(longlong *)&pFVar1->ContentsStatusMap + 8 + (longlong)iVar4 * 0x10),
        iVar4 != -1) {
LAB_14ba45c50:
    if (*(int *)(*(longlong *)&pFVar1->ContentsStatusMap + (longlong)iVar4 * 0x10) == 0xc9) {
      pFVar1 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
               ::FindChecked(this_00,param_1);
      piVar2 = TMapBase<enum_EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusContentsInfo,int,0>_>
               ::FindChecked(&pFVar1->ContentsStatusMap,Character_Level);
      iVar5 = *piVar2;
      break;
    }
  }
LAB_14ba45c84:
  pFVar1 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
           ::FindChecked(this_00,param_1);
  if (*(int *)&(pFVar1->ContentsStatusMap).field_0x8 !=
      *(int *)&(pFVar1->ContentsStatusMap).field_0x34) {
    puVar3 = *(undefined1 **)&(pFVar1->ContentsStatusMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(pFVar1->ContentsStatusMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(pFVar1->ContentsStatusMap).field_0x48 - 1U & 0xca) * 4);
    if (iVar4 != -1) {
      while (*(int *)(*(longlong *)&pFVar1->ContentsStatusMap + (longlong)iVar4 * 0x10) != 0xca) {
        iVar4 = *(int *)(*(longlong *)&pFVar1->ContentsStatusMap + 8 + (longlong)iVar4 * 0x10);
        if (iVar4 == -1) {
          return iVar5;
        }
      }
      pFVar1 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
               ::FindChecked(this_00,param_1);
      piVar2 = TMapBase<enum_EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusContentsInfo,int,0>_>
               ::FindChecked(&pFVar1->ContentsStatusMap,Character_Evolution);
      iVar5 = iVar5 + *piVar2;
    }
  }
  return iVar5;
}

// GetCurrentStatus @ 14ba46fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_CharStatusData::GetCurrentStatus(UDS_CharStatusData *this,EDS_SkillCostType param_1)

{
  int iVar1;
  UDS_LogManager *pUVar2;
  EDS_StatusType EVar3;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_1 == Mp) {
    EVar3 = Mp;
  }
  else if (param_1 == Vigor) {
    EVar3 = Vigor;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    EVar3 = None;
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_CharStatusData::GetStatusTypeByCostType",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x1db,L"InCostType is wrong. (%d)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  iVar1 = GetCurrentStatus(this,EVar3);
  return iVar1;
}

// GetCurrentStatus @ 14ba470f0

int __thiscall UDS_CharStatusData::GetCurrentStatus(UDS_CharStatusData *this,EDS_StatusType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_StatusInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StatusInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->StatusInfoMap;
      do {
        if (*(EDS_StatusType *)((longlong)iVar2 * 0x100 + lVar1) == param_1) {
          pFVar3 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                   ::FindChecked(&this->StatusInfoMap,param_1);
          return pFVar3->CurrentValue;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x100 + 0xf8 + lVar1);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// GetCurrentStatusMap @ 14ba47170

TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_> *
__thiscall
UDS_CharStatusData::GetCurrentStatusMap
          (UDS_CharStatusData *this,
          TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
          *__return_storage_ptr__,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  FDS_StatusInfo *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  EDS_StatusType local_res10 [2];
  int local_res18 [4];
  undefined8 local_88;
  int *piStack_80;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  uVar11 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar13 = param_1->ArrayNum;
  if (uVar13 == 0) {
    return __return_storage_ptr__;
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar13 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14ba473b1;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar13;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar13 != 0) {
    uVar6 = uVar13;
    if (uVar13 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar6 = 0;
        goto LAB_14ba4723e;
      }
    }
    else {
LAB_14ba4723e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar6,4);
    }
    if (0 < (int)uVar13) {
      uVar14 = (ulonglong)uVar13;
      uVar8 = uVar11;
      do {
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar4 = (longlong)(int)uVar13 - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar7 + uVar4 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar13 = *(uint *)&__return_storage_ptr__->field_0x28;
    piStack_80 = (int *)&__return_storage_ptr__->field_0x10;
    local_88 = (EDS_StatusType *)&DAT_100000000;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar13 != 0) {
      puVar15 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)piStack_80;
      }
      uVar6 = *puVar15;
      uVar8 = uVar11;
      while (uVar6 == 0) {
        iVar10 = (int)uVar11;
        uStack_70 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_70;
        uVar6 = iVar10 + 1;
        uVar11 = (ulonglong)local_88 >> 0x20;
        local_88 = (EDS_StatusType *)CONCAT44((int)uVar11,uVar6);
        uVar11 = (ulonglong)uVar6;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar6)
        goto LAB_14ba4732b;
        uVar6 = puVar15[(longlong)iVar10 + 1];
      }
      local_88 = (EDS_StatusType *)CONCAT44(-uVar6 & uVar6,SUB84(local_88,0));
      uVar11 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_74 = (int)lVar2 + -1 + uStack_70;
      uVar11 = (ulonglong)uStack_74;
      if ((int)uVar13 < (int)uStack_74) {
LAB_14ba4732b:
        uVar11 = (ulonglong)uVar13;
        uStack_74 = uVar13;
      }
    }
    local_78 = 0xffffffff;
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_60._padding_ = (longlong)local_88;
    local_68 = __return_storage_ptr__;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)piStack_80;
    if ((int)uVar11 < (int)uVar13) {
      do {
        puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 + *(longlong *)local_68);
        uVar13 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *puVar15;
        puVar15[3] = uVar13;
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar8 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar13;
        puVar15[2] = *(uint *)(puVar7 + uVar8 * 4);
        *(int *)(puVar7 + uVar8 * 4) = (int)uVar11;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        uVar11 = (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_14ba473b1:
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar10 = param_1->ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar10 * 4;
  do {
    if (param_1->ArrayNum != iVar10) {
      `TCheckedPointerIterator<enum_EDS_StatusType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar12 == pFVar1) {
      return __return_storage_ptr__;
    }
    local_res10[0] = *(EDS_StatusType *)pFVar12;
    if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
      puVar7 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
      puVar9 = &(this->StatusInfoMap).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar9 = puVar7;
      }
      iVar3 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->StatusInfoMap).field_0x48 - Hp & local_res10[0]) *
                                4);
      if (iVar3 != -1) {
        do {
          if (*(EDS_StatusType *)((longlong)iVar3 * 0x100 + *(longlong *)&this->StatusInfoMap) ==
              local_res10[0]) {
            pFVar5 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                     ::FindChecked(&this->StatusInfoMap,local_res10[0]);
            local_res18[0] = pFVar5->CurrentValue;
            goto LAB_14ba4743e;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
        } while (iVar3 != -1);
      }
    }
    local_res18[0] = -1;
LAB_14ba4743e:
    local_88 = local_res10;
    piStack_80 = local_res18;
    TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_StatusType_&,int_&&>_>
              (__return_storage_ptr__,(TPairInitializer<EDS_StatusType_&,int_&&> *)(local_res18 + 2)
               ,(bool *)&local_88);
    pFVar12 = pFVar12 + 4;
  } while( true );
}

// GetData @ 14ba47e20

TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> __cdecl
UDS_CharStatusData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_CharDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CharStatusData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba47ec4;
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba47ec4:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetGroggyPointReductionType @ 14ba4be70

EDS_GroggyPointReductionType __thiscall
UDS_CharStatusData::GetGroggyPointReductionType(UDS_CharStatusData *this)

{
  longlong *this_00;
  bool bVar1;
  UObject *pUVar2;
  FDS_NpcBaseTableRow *pFVar3;
  FDS_NpcBattleTableRow *pFVar4;
  FDS_NpcGroggyTableRow *pFVar5;
  char cVar6;
  int iVar7;
  
  this_00 = &this->_padding_;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)this_00,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (bVar1) {
      cVar6 = '\0';
    }
    else {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      cVar6 = pUVar2[1].field_0x8;
    }
    if (cVar6 == '\x05') {
      bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)this_00,(void *)0x0);
      if (!bVar1) {
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                           (void *)0x0);
        if (bVar1) {
          iVar7 = 0;
        }
        else {
          pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
          iVar7 = *(int *)&pUVar2[1].field_0xc;
        }
        if (0 < iVar7) {
          pFVar3 = FDS_NpcBaseTableRow::Get((longlong)iVar7,true);
          if (pFVar3 != (FDS_NpcBaseTableRow *)0x0) {
            pFVar4 = FDS_NpcBattleTableRow::Get((longlong)pFVar3->ID_NpcBattle,true);
            if ((pFVar4 != (FDS_NpcBattleTableRow *)0x0) && (0 < pFVar4->ID_NpcGroggy)) {
              pFVar5 = FDS_NpcGroggyTableRow::Get((longlong)pFVar4->ID_NpcGroggy,true);
              if (pFVar5 != (FDS_NpcGroggyTableRow *)0x0) {
                if (pFVar5->IsCheckSkillUse == true) {
                  return SkillUse;
                }
                return (pFVar5->IsCheckAbnormal != true) + Abnormal;
              }
            }
          }
        }
      }
    }
  }
  return None;
}

// GetMaxStatus @ 14ba4cd90

float __thiscall UDS_CharStatusData::GetMaxStatus(UDS_CharStatusData *this,EDS_StatusType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_StatusInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StatusInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->StatusInfoMap;
      do {
        if (*(EDS_StatusType *)((longlong)iVar2 * 0x100 + lVar1) == param_1) {
          pFVar3 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                   ::FindChecked(&this->StatusInfoMap,param_1);
          return pFVar3->MaxValue;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x100 + 0xf8 + lVar1);
      } while (iVar2 != -1);
    }
  }
  return __real_bf800000;
}

// GetMaxStatusMap @ 14ba4ce10

TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
* __thiscall
UDS_CharStatusData::GetMaxStatusMap
          (UDS_CharStatusData *this,
          TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
          *__return_storage_ptr__,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  FDS_StatusInfo *pFVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  float fVar18;
  EDS_StatusType local_res10 [2];
  float local_res18 [4];
  undefined8 local_98;
  float *pfStack_90;
  undefined4 local_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  
  uVar12 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar14 = param_1->ArrayNum;
  if (uVar14 == 0) {
    return __return_storage_ptr__;
  }
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  if (uVar14 < 4) {
    uVar14 = 1;
  }
  else {
    uVar9 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar14 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14ba4d064;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar14;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar14 != 0) {
    uVar7 = uVar14;
    if (uVar14 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar7 = 0;
        goto LAB_14ba4cee6;
      }
    }
    else {
LAB_14ba4cee6:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar7,4);
    }
    if (0 < (int)uVar14) {
      uVar15 = (ulonglong)uVar14;
      uVar9 = uVar12;
      do {
        puVar8 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar5 = (longlong)(int)uVar14 - 1U & uVar9;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(puVar8 + uVar5 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar14 = *(uint *)&__return_storage_ptr__->field_0x28;
    pfStack_90 = (float *)&__return_storage_ptr__->field_0x10;
    local_98 = (EDS_StatusType *)&DAT_100000000;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar14 != 0) {
      puVar16 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar16 = (uint *)pfStack_90;
      }
      uVar7 = *puVar16;
      uVar9 = uVar12;
      while (uVar7 == 0) {
        iVar11 = (int)uVar12;
        uStack_80 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_80;
        uVar7 = iVar11 + 1;
        uVar12 = (ulonglong)local_98 >> 0x20;
        local_98 = (EDS_StatusType *)CONCAT44((int)uVar12,uVar7);
        uVar12 = (ulonglong)uVar7;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar7)
        goto LAB_14ba4cfdb;
        uVar7 = puVar16[(longlong)iVar11 + 1];
      }
      local_98 = (EDS_StatusType *)CONCAT44(-uVar7 & uVar7,SUB84(local_98,0));
      uVar12 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_84 = (int)lVar2 + -1 + uStack_80;
      uVar12 = (ulonglong)uStack_84;
      if ((int)uVar14 < (int)uStack_84) {
LAB_14ba4cfdb:
        uVar12 = (ulonglong)uVar14;
        uStack_84 = uVar14;
      }
    }
    local_88 = 0xffffffff;
    local_70.CurrentBitIndex = uStack_84;
    local_70.UnvisitedBitMask = 0xffffffff;
    local_70._28_4_ = uStack_7c;
    local_70.BaseBitIndex = uStack_80;
    local_70._padding_ = (longlong)local_98;
    local_78 = __return_storage_ptr__;
    local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)pfStack_90;
    if ((int)uVar12 < *(int *)&__return_storage_ptr__->field_0x28) {
      do {
        lVar2 = *(longlong *)local_78;
        lVar17 = (longlong)(int)uVar12 * 0x10;
        uVar14 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *(uint *)(lVar17 + lVar2);
        *(uint *)(lVar17 + 0xc + lVar2) = uVar14;
        puVar8 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar8 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar9 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar17 + 8 + lVar2) = *(undefined4 *)(puVar8 + uVar9 * 4);
        *(int *)(puVar8 + uVar9 * 4) = (int)uVar12;
        local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
        uVar12 = (ulonglong)(uint)local_70.CurrentBitIndex;
      } while (local_70.CurrentBitIndex < (local_70.Array)->NumBits);
    }
  }
LAB_14ba4d064:
  fVar3 = __real_bf800000;
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar11 = param_1->ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar11 * 4;
  do {
    if (param_1->ArrayNum != iVar11) {
      `TCheckedPointerIterator<enum_EDS_StatusType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar13 == pFVar1) {
      return __return_storage_ptr__;
    }
    local_res10[0] = *(EDS_StatusType *)pFVar13;
    fVar18 = fVar3;
    if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
      puVar10 = &(this->StatusInfoMap).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar10 = puVar8;
      }
      iVar4 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & local_res10[0]) *
                      4);
      if (iVar4 != -1) {
        do {
          if (*(EDS_StatusType *)((longlong)iVar4 * 0x100 + *(longlong *)&this->StatusInfoMap) ==
              local_res10[0]) {
            pFVar6 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                     ::FindChecked(&this->StatusInfoMap,local_res10[0]);
            fVar18 = pFVar6->MaxValue;
            break;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
        } while (iVar4 != -1);
      }
    }
    local_98 = local_res10;
    pfStack_90 = local_res18;
    local_res18[0] = fVar18;
    TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_StatusType_&,float_&&>_>
              (__return_storage_ptr__,
               (TPairInitializer<EDS_StatusType_&,float_&&> *)(local_res18 + 2),(bool *)&local_98);
    pFVar13 = pFVar13 + 4;
  } while( true );
}

// GetOriginStatus @ 14ba4dbe0

int __thiscall UDS_CharStatusData::GetOriginStatus(UDS_CharStatusData *this,EDS_StatusType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_StatusInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StatusInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->StatusInfoMap;
      do {
        if (*(EDS_StatusType *)((longlong)iVar2 * 0x100 + lVar1) == param_1) {
          pFVar3 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                   ::FindChecked(&this->StatusInfoMap,param_1);
          return pFVar3->OriginValue;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x100 + 0xf8 + lVar1);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// GetOriginStatusMap @ 14ba4dc60

TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_> *
__thiscall
UDS_CharStatusData::GetOriginStatusMap
          (UDS_CharStatusData *this,
          TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
          *__return_storage_ptr__,TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  FDS_StatusInfo *pFVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  EDS_StatusType local_res10 [2];
  int local_res18 [4];
  undefined8 local_88;
  int *piStack_80;
  undefined4 local_78;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  uVar11 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar13 = param_1->ArrayNum;
  if (uVar13 == 0) {
    return __return_storage_ptr__;
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar13 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_14ba4dea1;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar13;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar13 != 0) {
    uVar6 = uVar13;
    if (uVar13 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar6 = 0;
        goto LAB_14ba4dd2e;
      }
    }
    else {
LAB_14ba4dd2e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar6,4);
    }
    if (0 < (int)uVar13) {
      uVar14 = (ulonglong)uVar13;
      uVar8 = uVar11;
      do {
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar4 = (longlong)(int)uVar13 - 1U & uVar8;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar7 + uVar4 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar13 = *(uint *)&__return_storage_ptr__->field_0x28;
    piStack_80 = (int *)&__return_storage_ptr__->field_0x10;
    local_88 = (EDS_StatusType *)&DAT_100000000;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar13 != 0) {
      puVar15 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)piStack_80;
      }
      uVar6 = *puVar15;
      uVar8 = uVar11;
      while (uVar6 == 0) {
        iVar10 = (int)uVar11;
        uStack_70 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_70;
        uVar6 = iVar10 + 1;
        uVar11 = (ulonglong)local_88 >> 0x20;
        local_88 = (EDS_StatusType *)CONCAT44((int)uVar11,uVar6);
        uVar11 = (ulonglong)uVar6;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar6)
        goto LAB_14ba4de1b;
        uVar6 = puVar15[(longlong)iVar10 + 1];
      }
      local_88 = (EDS_StatusType *)CONCAT44(-uVar6 & uVar6,SUB84(local_88,0));
      uVar11 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_74 = (int)lVar2 + -1 + uStack_70;
      uVar11 = (ulonglong)uStack_74;
      if ((int)uVar13 < (int)uStack_74) {
LAB_14ba4de1b:
        uVar11 = (ulonglong)uVar13;
        uStack_74 = uVar13;
      }
    }
    local_78 = 0xffffffff;
    local_60.CurrentBitIndex = uStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    local_60._padding_ = (longlong)local_88;
    local_68 = __return_storage_ptr__;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)piStack_80;
    if ((int)uVar11 < (int)uVar13) {
      do {
        puVar15 = (uint *)((longlong)(int)uVar11 * 0x10 + *(longlong *)local_68);
        uVar13 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & *puVar15;
        puVar15[3] = uVar13;
        puVar7 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar7 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar8 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar13;
        puVar15[2] = *(uint *)(puVar7 + uVar8 * 4);
        *(int *)(puVar7 + uVar8 * 4) = (int)uVar11;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        uVar11 = (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
LAB_14ba4dea1:
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar10 = param_1->ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar10 * 4;
  do {
    if (param_1->ArrayNum != iVar10) {
      `TCheckedPointerIterator<enum_EDS_StatusType_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar12 == pFVar1) {
      return __return_storage_ptr__;
    }
    local_res10[0] = *(EDS_StatusType *)pFVar12;
    if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
      puVar7 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
      puVar9 = &(this->StatusInfoMap).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar9 = puVar7;
      }
      iVar3 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->StatusInfoMap).field_0x48 - Hp & local_res10[0]) *
                                4);
      if (iVar3 != -1) {
        do {
          if (*(EDS_StatusType *)((longlong)iVar3 * 0x100 + *(longlong *)&this->StatusInfoMap) ==
              local_res10[0]) {
            pFVar5 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                     ::FindChecked(&this->StatusInfoMap,local_res10[0]);
            local_res18[0] = pFVar5->OriginValue;
            goto LAB_14ba4df2e;
          }
          iVar3 = *(int *)((longlong)iVar3 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
        } while (iVar3 != -1);
      }
    }
    local_res18[0] = -1;
LAB_14ba4df2e:
    local_88 = local_res10;
    piStack_80 = local_res18;
    TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_StatusType_&,int_&&>_>
              (__return_storage_ptr__,(TPairInitializer<EDS_StatusType_&,int_&&> *)(local_res18 + 2)
               ,(bool *)&local_88);
    pFVar12 = pFVar12 + 4;
  } while( true );
}

// GetStatusInfo @ 14ba4fd10

FDS_StatusInfo * __thiscall
UDS_CharStatusData::GetStatusInfo(UDS_CharStatusData *this,EDS_StatusType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_StatusInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StatusInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->StatusInfoMap;
      do {
        if (*(EDS_StatusType *)((longlong)iVar2 * 0x100 + lVar1) == param_1) {
          pFVar3 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                   ::FindChecked(&this->StatusInfoMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x100 + 0xf8 + lVar1);
      } while (iVar2 != -1);
    }
  }
  return (FDS_StatusInfo *)0x0;
}

// GetStatusTypeByCostType @ 14ba4fd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_StatusType __thiscall
UDS_CharStatusData::GetStatusTypeByCostType(UDS_CharStatusData *this,EDS_SkillCostType param_1)

{
  EDS_StatusType EVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == Mp) {
    EVar1 = Mp;
  }
  else if (param_1 == Vigor) {
    EVar1 = Vigor;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharStatusData::GetStatusTypeByCostType",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1db,L"InCostType is wrong. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    EVar1 = None;
  }
  return EVar1;
}

// GetTempStatusData @ 14ba50b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr> __cdecl
UDS_CharStatusData::GetTempStatusData(void)

{
  UDS_CharStatusData *pUVar1;
  UObject *pUVar2;
  FUObjectItem *this;
  FWeakObjectPtr in_RCX;
  UDS_CharStatusData *local_res8;
  
  if (TempStatusData == (UDS_CharStatusData *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    TempStatusData = NewObject<UDS_CharStatusData>(pUVar2);
    this = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&TempStatusData->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  pUVar1 = TempStatusData;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TempStatusData != (UDS_CharStatusData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TempStatusData);
  }
  local_res8 = pUVar1;
  *(undefined8 *)in_RCX = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_CharStatusData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_CharStatusData,FWeakObjectPtr>)in_RCX;
}

// InitByEntityInfo @ 14ba537e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CharStatusData::InitByEntityInfo(UDS_CharStatusData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_DataSetBase *pUVar5;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  FDS_StatusInfo *pFVar9;
  atomic<unsigned_char> *paVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  UObject *pUVar13;
  int iVar14;
  undefined1 auStackY_548 [32];
  undefined1 local_518 [8];
  FWeakObjectPtr local_510;
  FWeakObjectPtr local_508;
  FWeakObjectPtr local_500;
  UObject *local_4f8;
  UObject *local_4f0;
  UObject *local_4e8;
  undefined1 local_4e0 [8];
  undefined1 local_4d8 [24];
  undefined1 local_4c0 [8];
  undefined1 local_4b8 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_548;
  UpdateMaxMoveSpeed(this);
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_4a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4a8,"UDS_CharStatusData::InitByEntityInfo",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_4a8.Ptr,0x82,L"MyDataSet is nullptr.");
      if ((void *)local_4a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4a8._padding_);
      }
    }
    iVar14 = 0x83;
    paVar10 = &bGEnsureHasExecuted<5845411628991905923>;
  }
  else {
    pUVar5 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    TVar6 = UDS_DataSetBase::GetData(pUVar5,(ulong64)local_4e0);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar6.WeakPtr);
    pUVar13 = (UObject *)0x0;
    if (pUVar7 == (UObject *)0x0) {
LAB_14ba53946:
      pUVar7 = pUVar13;
    }
    else {
      pUVar8 = Z_Construct_UClass_UDS_CharStateData_NoRegister();
      iVar14 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
          &pUVar8->_padding_)) goto LAB_14ba53946;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    local_510.ObjectIndex = 0;
    local_510.ObjectSerialNumber = 0;
    local_4f8 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_510,(FObjectPtr)&local_4f8);
    bVar3 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_510,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_388._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_388,"UDS_CharStatusData::InitByEntityInfo",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_388.Ptr,0x8b,L"charStateData is nullptr.");
        if ((void *)local_388._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_388._padding_);
        }
      }
      iVar14 = 0x8c;
      paVar10 = &bGEnsureHasExecuted<5845411628991905932>;
    }
    else {
      pUVar7 = FWeakObjectPtr::Get(&local_510);
      TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_CharStatusData>
                ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                  *)&pUVar7[7].field_0x20,(UDS_CharStatusData *)local_4d8,(pmf_21a5044e)this);
      pUVar5 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      TVar6 = UDS_DataSetBase::GetData(pUVar5,(ulong64)(local_4d8 + 8));
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar6.WeakPtr);
      if (pUVar7 == (UObject *)0x0) {
LAB_14ba53ab8:
        pUVar7 = pUVar13;
      }
      else {
        pUVar8 = Z_Construct_UClass_UDS_CharBuffData_NoRegister();
        iVar14 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar14) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar8->_padding_)) goto LAB_14ba53ab8;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_508.ObjectIndex = 0;
      local_508.ObjectSerialNumber = 0;
      local_4f0 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=(&local_508,(FObjectPtr)&local_4f0);
      bVar3 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_508,(void *)0x0);
      if (!bVar3) {
        pUVar7 = FWeakObjectPtr::Get(&local_508);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,enum_EDS_SpecialBuffType_const_&,bool_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_CharStatusData>
                  (pUVar7 + 7,(UDS_CharStatusData *)(local_4d8 + 0x10),(pmf_68344c21)this);
        pUVar5 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        TVar6 = UDS_DataSetBase::GetData(pUVar5,(ulong64)local_4c0);
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar6.WeakPtr);
        if (pUVar7 == (UObject *)0x0) {
LAB_14ba53c25:
          pUVar7 = pUVar13;
        }
        else {
          pUVar8 = Z_Construct_UClass_UDS_EntityData_NoRegister();
          iVar14 = (int)pUVar8->_padding_;
          if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar8->_padding_)) goto LAB_14ba53c25;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        local_500.ObjectIndex = 0;
        local_500.ObjectSerialNumber = 0;
        local_4e8 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=(&local_500,(FObjectPtr)&local_4e8);
        bVar3 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_500,(void *)0x0);
        if (!bVar3) {
          pUVar7 = FWeakObjectPtr::Get(&local_500);
          TMulticastDelegateRegistration<void___cdecl(enum_EDS_MoveMode),FDefaultDelegateUserPolicy>
          ::AddUObject<UDS_CharStatusData>
                    (&pUVar7[5].field_0x20,(UDS_CharStatusData *)local_4b8,(pmf_dfefbad4)this);
          iVar14 = RelatedToMaxMoveSpeed_StatusType.ArrayNum;
          uVar11 = (ulonglong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
          pFVar1 = RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + uVar11 * 4;
          FVar12 = RelatedToMaxMoveSpeed_StatusType.AllocatorInstance;
          while( true ) {
            if ((int)uVar11 != iVar14) {
              `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_518);
            }
            if (FVar12.Data == pFVar1) break;
            pFVar9 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                     ::FindChecked(&this->StatusInfoMap,*(EDS_StatusType *)FVar12.Data);
            TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
            AddUObject<UDS_CharStatusData>
                      ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>
                        *)&pFVar9->ChangeMaxValueDelegate,(UDS_CharStatusData *)(local_4b8 + 8),
                       (pmf_82e3750e)this);
            uVar11 = (ulonglong)(uint)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
            FVar12.Data = FVar12.Data + 4;
          }
          return;
        }
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_CharStatusData::InitByEntityInfo",0x24,Yes);
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x9f,L"entityData is nullptr.");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5845411628991905952>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStatusData.cpp"
                           ,0xa0,"false");
        if (!bVar3) {
          return;
        }
        goto code_r0x00014ba53d2c;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_CharStatusData::InitByEntityInfo",0x24,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_268.Ptr,0x95,L"charBuffData is nullptr.");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
      iVar14 = 0x96;
      paVar10 = &bGEnsureHasExecuted<5845411628991905942>;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharStatusData.cpp"
                     ,iVar14,"false");
  if (!bVar3) {
    return;
  }
code_r0x00014ba53d2c:
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// InitRelatedStatusInfoMap @ 14ba54650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CharStatusData::InitRelatedStatusInfoMap(UDS_CharStatusData *this)

{
  FScriptContainerElement *pFVar1;
  EDS_StatusType *pEVar2;
  EDS_StatusType EVar3;
  int iVar4;
  undefined8 uVar5;
  UDS_LogManager *pUVar6;
  FDS_RelatedStatusInfo *this_00;
  int iVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  EDS_StatusType *pEVar10;
  undefined1 auStackY_1e8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  undefined1 local_1b8 [8];
  EDS_StatusType local_1b0 [2];
  TPairInitializer<EDS_StatusType_&,FDS_RelatedStatusInfo_&&> local_1a8;
  undefined8 local_198;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> local_190;
  TArray<FDS_StatusTableRow_const_*,TSizedDefaultAllocator<32>_> local_180;
  EDS_StatusType *local_170;
  FDS_RelatedStatusInfo **local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  EDS_StatusTypeValues(&local_190);
  iVar7 = local_190.ArrayNum;
  pFVar1 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 4;
  FVar9.Data = local_190.AllocatorInstance.Data;
  while( true ) {
    if (local_190.ArrayNum != iVar7) {
      `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (FVar9.Data == pFVar1) break;
    local_1b0[0] = *(EDS_StatusType *)FVar9.Data;
    if ((local_1b0[0] != None) && (local_1b0[0] != Max)) {
      local_170 = local_1b0;
      local_1a8.Value = (FDS_RelatedStatusInfo *)0x0;
      local_168 = &local_1a8.Value;
      local_198 = 0;
      TSet<TTuple<enum_EDS_StatusType,FDS_RelatedStatusInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_RelatedStatusInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&,FDS_RelatedStatusInfo_&&>_>
                (&RelatedStatusInfoMap,&local_1a8,(bool *)&local_170);
      if (local_1a8.Value != (FDS_RelatedStatusInfo *)0x0) {
        FMemory::Free(local_1a8.Value);
      }
    }
    FVar9.Data = FVar9.Data + 4;
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  FDS_StatusTableRow::GetAll(&local_180);
  iVar7 = local_180.ArrayNum;
  local_1a8.Key = (EDS_StatusType *)(local_180.AllocatorInstance.Data + (longlong)iVar7 * 8);
  FVar9.Data = local_180.AllocatorInstance.Data;
  while( true ) {
    pEVar2 = local_1a8.Key;
    if (local_180.ArrayNum != iVar7) {
      `TCheckedPointerIterator<FDS_StatusTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1b8);
    }
    if (FVar9.Data == (FScriptContainerElement *)pEVar2) goto LAB_14ba549bd;
    uVar5 = *(undefined8 *)FVar9.Data;
    if (uVar5 == None) break;
    EVar3 = *(EDS_StatusType *)(uVar5 + RegenMp);
    if (RelatedStatusInfoMap._8_4_ == RelatedStatusInfoMap._52_4_) {
LAB_14ba547c5:
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_CharStatusData::InitRelatedStatusInfoMap",0x2c,Yes);
        pwVar12 = L"RelatedStatusInfoMap is invalid.";
        uVar11 = 0x2c5;
LAB_14ba54992:
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,uVar11,pwVar12);
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
LAB_14ba549bd:
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      return;
    }
    lVar8 = 0x154cf7368;
    if (RelatedStatusInfoMap._64_8_ != 0) {
      lVar8 = RelatedStatusInfoMap._64_8_;
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(RelatedStatusInfoMap._72_4_ - Hp & EVar3) * 4);
    while( true ) {
      if (iVar4 == -1) goto LAB_14ba547c5;
      if (*(EDS_StatusType *)((longlong)iVar4 * 0x20 + RelatedStatusInfoMap._0_8_) == EVar3) break;
      iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + RelatedStatusInfoMap._0_8_);
    }
    this_00 = TMapBase<enum_EDS_StatusType,FDS_RelatedStatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_RelatedStatusInfo,0>_>
              ::FindChecked(&RelatedStatusInfoMap,EVar3);
    TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<enum_EDS_StatusType_const_&>(this_00,(EDS_StatusType *)(uVar5 + RegenMp));
    pEVar10 = *(EDS_StatusType **)(uVar5 + 0x40);
    iVar4 = *(int *)(uVar5 + 0x48);
    pEVar2 = pEVar10 + iVar4;
    while( true ) {
      if (*(int *)(uVar5 + 0x48) != iVar4) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1b8);
      }
      if ((pEVar10 == pEVar2) || (*pEVar10 == None)) break;
      local_1b0[0] = *pEVar10;
      TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StatusType>
                (this_00,local_1b0);
      pEVar10 = pEVar10 + 1;
    }
    pEVar10 = *(EDS_StatusType **)(uVar5 + 0x50);
    iVar4 = *(int *)(uVar5 + 0x58);
    pEVar2 = pEVar10 + iVar4;
    while( true ) {
      if (*(int *)(uVar5 + 0x58) != iVar4) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1b8);
      }
      if ((pEVar10 == pEVar2) || (*pEVar10 == None)) break;
      local_1b0[0] = *pEVar10;
      TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StatusType>
                (this_00,local_1b0);
      pEVar10 = pEVar10 + 1;
    }
    pEVar10 = *(EDS_StatusType **)(uVar5 + 0x60);
    iVar4 = *(int *)(uVar5 + RateMagicAttack);
    pEVar2 = pEVar10 + iVar4;
    while( true ) {
      if (*(int *)(uVar5 + RateMagicAttack) != iVar4) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1b8);
      }
      if ((pEVar10 == pEVar2) || (*pEVar10 == None)) break;
      local_1b0[0] = *pEVar10;
      TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StatusType>
                (this_00,local_1b0);
      pEVar10 = pEVar10 + 1;
    }
    pEVar10 = *(EDS_StatusType **)(uVar5 + NormalPveAccuracy);
    iVar4 = *(int *)(uVar5 + PvpCriticalOutcome);
    pEVar2 = pEVar10 + iVar4;
    while( true ) {
      if (*(int *)(uVar5 + PvpCriticalOutcome) != iVar4) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1b8);
      }
      if ((pEVar10 == pEVar2) || (*pEVar10 == None)) break;
      local_1b0[0] = *pEVar10;
      TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>::AddUniqueImpl<enum_EDS_StatusType>
                (this_00,local_1b0);
      pEVar10 = pEVar10 + 1;
    }
    FVar9.Data = FVar9.Data + 8;
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14ba549bd;
  pUVar6 = UDS_LogManager::GetInst();
  local_158._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_158,"UDS_CharStatusData::InitRelatedStatusInfoMap",0x2c,Yes);
  pwVar12 = L"tableRow is nullptr.";
  uVar11 = 0x2bd;
  goto LAB_14ba54992;
}

// InitRelatedToMaxMoveSpeed @ 14ba54a10

void __thiscall UDS_CharStatusData::InitRelatedToMaxMoveSpeed(UDS_CharStatusData *this)

{
  longlong lVar1;
  
  RelatedToMaxMoveSpeed_CharState = Mount|Battle|ToggleSkill|Swim;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayMax < 9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,9,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
               RelatedToMaxMoveSpeed_CharDetailState.ArrayNum,
               &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 0x65;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 1;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 6;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 7;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 8;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 9;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 10;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 0xb;
  if (RelatedToMaxMoveSpeed_CharDetailState.ArrayNum ==
      RelatedToMaxMoveSpeed_CharDetailState.ArrayMax) {
    RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_CharDetailState.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum;
  RelatedToMaxMoveSpeed_CharDetailState.ArrayNum =
       RelatedToMaxMoveSpeed_CharDetailState.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data + lVar1 * 4) = 0xc;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayMax < 0xc) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0xc,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
               RelatedToMaxMoveSpeed_StatusType.ArrayNum,&RelatedToMaxMoveSpeed_StatusType.ArrayMax)
    ;
  }
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x27;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x28;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x136;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x137;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x138;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x139;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x13a;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x13b;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x13c;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x13d;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x13e;
  if (RelatedToMaxMoveSpeed_StatusType.ArrayNum == RelatedToMaxMoveSpeed_StatusType.ArrayMax) {
    RelatedToMaxMoveSpeed_StatusType.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&RelatedToMaxMoveSpeed_StatusType.AllocatorInstance,
                    &RelatedToMaxMoveSpeed_StatusType.ArrayMax);
  }
  lVar1 = (longlong)RelatedToMaxMoveSpeed_StatusType.ArrayNum;
  RelatedToMaxMoveSpeed_StatusType.ArrayNum = RelatedToMaxMoveSpeed_StatusType.ArrayNum + 1;
  *(undefined4 *)(RelatedToMaxMoveSpeed_StatusType.AllocatorInstance.Data + lVar1 * 4) = 0x13f;
  return;
}

// OnChangeMoveMode @ 14ba5ff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CharStatusData::OnChangeMoveMode(UDS_CharStatusData *this,EDS_MoveMode param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  char cVar4;
  ulong64 uVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),(void *)0x0
                    );
  if (bVar1) {
    cVar4 = '\0';
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
    cVar4 = pUVar2[1].field_0x8;
  }
  if (cVar4 != '\x05') {
    return;
  }
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      uVar5 = *(ulong64 *)(pUVar2 + 1);
      goto LAB_14ba60039;
    }
  }
  uVar5 = 0;
LAB_14ba60039:
  UDS_EntityData::GetData((ulong64)local_148,uVar5);
  bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)local_148,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharStatusData::OnChangeMoveMode",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x3b9,L"entityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar2 = FWeakObjectPtr::Get(local_148);
    UpdateMaxMoveSpeedByMoveMode(this,pUVar2[3].field_0x1);
  }
  return;
}

// OnChangedCharState @ 14ba602d0

void __thiscall
UDS_CharStatusData::OnChangedCharState
          (UDS_CharStatusData *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  char cVar4;
  ForAnyElementType FVar5;
  uint7 uStack_5f;
  FDS_ChangedCharStateInfo local_38;
  
  bVar2 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                       (void *)0x0);
    if (bVar2) {
      cVar4 = '\0';
    }
    else {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
      cVar4 = pUVar3[1].field_0x8;
    }
    if ((byte)(cVar4 - 2U) < 3) {
      if (((param_2->AddedCharState & RelatedToMaxMoveSpeed_CharState) == None) &&
         ((param_2->RemovedCharState & RelatedToMaxMoveSpeed_CharState) == None)) {
        pFVar1 = RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data +
                 (longlong)RelatedToMaxMoveSpeed_CharDetailState.ArrayNum * 4;
        if (RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data != pFVar1) {
          FVar5.Data = RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data;
          do {
            if (*(EDS_CharDetailState *)FVar5.Data == param_2->AddedCharDetailState)
            goto LAB_14ba6038f;
            FVar5.Data = FVar5.Data + 4;
          } while (FVar5.Data != pFVar1);
          FVar5.Data = RelatedToMaxMoveSpeed_CharDetailState.AllocatorInstance.Data;
          do {
            if (*(EDS_CharDetailState *)FVar5.Data == param_2->RemovedCharDetailState)
            goto LAB_14ba6038f;
            FVar5.Data = FVar5.Data + 4;
          } while (FVar5.Data != pFVar1);
        }
      }
      else {
LAB_14ba6038f:
        local_38._8_8_ = (ulonglong)uStack_5f << 8;
        local_38.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
        local_38.AddedCharState = None;
        local_38.RemovedCharState = None;
        local_38.AddedCharDetailState = None;
        local_38.RemovedCharDetailState = None;
        UpdateMaxMoveSpeedByCharState(this,param_1,&local_38);
      }
    }
  }
  return;
}

// OnChangedMaxValue_MoveSpeed @ 14ba605e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharStatusData::OnChangedMaxValue_MoveSpeed(UDS_CharStatusData *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  char cVar5;
  undefined1 auStackY_1c8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr FStack_198;
  FName FStack_190;
  undefined1 uStack_188;
  uint7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  FDS_ChangedCharStateInfo FStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),(void *)0x0
                    );
  if (bVar1) {
    cVar5 = '\0';
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
    cVar5 = pUVar2[1].field_0x8;
  }
  if ((byte)(cVar5 - 2U) < 3) {
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                         (void *)0x0);
      if (!bVar1) {
        FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      }
    }
    UDS_CharStateData::GetData((ulong64)&FStack_198);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&FStack_198,(void *)0x0);
    if (!bVar1) {
      FStack_190 = FGameplayTag::EmptyTag.TagName;
      uStack_188 = 0;
      FStack_168._8_8_ = (ulonglong)uStack_187 << 8;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      FStack_168.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
      FStack_168.AddedCharDetailState = None;
      FStack_168.RemovedCharDetailState = None;
      FStack_168.AddedCharState = None;
      FStack_168.RemovedCharState = None;
      UpdateMaxMoveSpeedByCharState
                (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)FStack_198,&FStack_168);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_CharStatusData::UpdateMaxMoveSpeed",0x26,Yes);
    pwVar7 = L"charStateData is nullptr.";
    uVar6 = 0x432;
  }
  else {
    if (cVar5 != '\x05') {
      return;
    }
    uVar3 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    UDS_EntityData::GetData((ulong64)&FStack_198,uVar3);
    bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&FStack_198,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&FStack_198);
      UpdateMaxMoveSpeedByMoveMode(this,pUVar2[3].field_0x1);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_CharStatusData::UpdateMaxMoveSpeed",0x26,Yes);
    pwVar7 = L"entityData is nullptr.";
    uVar6 = 0x43e;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_138.Ptr,uVar6,pwVar7);
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  return;
}

// OnChangedSpecialBuff @ 14ba605f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharStatusData::OnChangedSpecialBuff
          (UDS_CharStatusData *this,ulong64 *param_1,EDS_SpecialBuffType *param_2,bool *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  char cVar5;
  undefined1 auStackY_1c8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_198;
  FName local_190;
  undefined1 uStack_188;
  uint7 uStack_187;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*param_2 != SetMoveSpeed) {
    return;
  }
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),(void *)0x0
                    );
  if (bVar1) {
    cVar5 = '\0';
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
    cVar5 = pUVar2[1].field_0x8;
  }
  if ((byte)(cVar5 - 2U) < 3) {
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                         (void *)0x0);
      if (!bVar1) {
        FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      }
    }
    UDS_CharStateData::GetData((ulong64)&local_198);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_198,(void *)0x0);
    if (!bVar1) {
      local_190 = FGameplayTag::EmptyTag.TagName;
      uStack_188 = 0;
      local_168._8_8_ = (ulonglong)uStack_187 << 8;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      local_168.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
      local_168.AddedCharDetailState = None;
      local_168.RemovedCharDetailState = None;
      local_168.AddedCharState = None;
      local_168.RemovedCharState = None;
      UpdateMaxMoveSpeedByCharState
                (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_198,&local_168);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CharStatusData::OnChangedSpecialBuff",0x28,Yes);
    pwVar7 = L"charStateData is nullptr.";
    uVar6 = 0x398;
  }
  else {
    if (cVar5 != '\x05') {
      return;
    }
    uVar3 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    UDS_EntityData::GetData((ulong64)&local_198,uVar3);
    bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_198,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_198);
      UpdateMaxMoveSpeedByMoveMode(this,pUVar2[3].field_0x1);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CharStatusData::OnChangedSpecialBuff",0x28,Yes);
    pwVar7 = L"entityData is nullptr.";
    uVar6 = 0x3a4;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ResetData @ 14ba68b00

void __thiscall UDS_CharStatusData::ResetData(UDS_CharStatusData *this)

{
  return;
}

// SetContentsStatusMapByStatusDetailViewResponse @ 14ba6b570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CharStatusData::SetContentsStatusMapByStatusDetailViewResponse
          (UDS_CharStatusData *this,StatusDetailViewResponse *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  UDS_CharStatusData *pUVar4;
  UDS_CharStatusData *pUVar5;
  StatusDetailViewResponse *pSVar6;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  FDS_StatusInfo *pFVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  Impl_ *pIVar14;
  undefined1 *puVar15;
  Impl_ *pIVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint *puVar24;
  longlong *plVar25;
  StatusDetailViewResponse *this_00;
  longlong *plVar26;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *pTVar27;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_237 [3];
  EDS_StatusType local_234;
  uint local_230;
  int local_22c;
  EDS_StatusContentsInfo local_228 [2];
  UDS_CharStatusData *local_220;
  StatusDetailViewResponse *local_218;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *local_210;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *local_208;
  int iStack_200;
  uint uStack_1fc;
  undefined1 *local_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  int local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  undefined1 local_1cc [12];
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  EDS_StatusContentsInfo *local_1b8;
  longlong *local_1b0;
  int iStack_1a8;
  uint uStack_1a4;
  TBitArray<FDefaultBitArrayAllocator> *local_1a0;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  int iStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  EDS_StatusType *local_120;
  int *local_118;
  ContentsStatusInteger local_110;
  ulonglong local_f0;
  ContentsStatusIntegers local_e8;
  undefined4 local_9c;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  pTVar27 = &this->StatusInfoMap;
  iVar9 = *(int *)&(this->StatusInfoMap).field_0x28;
  local_1f8 = &(this->StatusInfoMap).field_0x10;
  iStack_200 = 0;
  local_1e8 = 0;
  uStack_1fc = 1;
  iStack_1ec = 0;
  if (iVar9 != 0) {
    puVar24 = *(uint **)&(this->StatusInfoMap).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_1f8;
    }
    uVar21 = *puVar24;
    while (uVar21 == 0) {
      lVar12 = (longlong)iStack_200;
      local_1e8 = local_1e8 + 0x20;
      iStack_200 = iStack_200 + 1;
      iStack_1ec = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_200) goto LAB_14ba6b63f;
      uVar21 = puVar24[lVar12 + 1];
    }
    uStack_1fc = -uVar21 & uVar21;
    uVar1 = (ulonglong)uStack_1fc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_230 = (uint)lVar12;
    iStack_1ec = local_1e8 + -1 + local_230;
    if (iVar9 < iStack_1ec) {
      iStack_1ec = iVar9;
    }
  }
LAB_14ba6b63f:
  uVar21 = *(uint *)&(this->StatusInfoMap).field_0x28;
  iStack_1e0 = *(int *)&(this->StatusInfoMap).field_0x8 - *(int *)&(this->StatusInfoMap).field_0x34;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->StatusInfoMap).field_0x10;
  uVar19 = uVar21 & 0xffffffe0;
  TStack_148._padding_ = CONCAT44(uStack_1fc,iStack_200);
  uStack_1f0 = 0xffffffff;
  TStack_148.CurrentBitIndex = iStack_1ec;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar21 >> 5;
  TStack_148._28_4_ = local_9c;
  TStack_148.BaseBitIndex = local_1e8;
  uStack_128 = CONCAT44(uStack_1dc,iStack_1e0);
  local_220 = this;
  local_218 = param_1;
  local_210 = pTVar27;
  local_208 = pTVar27;
  local_1c0 = pTVar23;
  local_150 = pTVar27;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1f8;
  if ((((int)uVar21 < 0) || (iVar9 < (int)uVar21)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar20 = *(uint *)&(this->StatusInfoMap).field_0x28;
  if (uVar21 != uVar20) {
    puVar22 = *(undefined1 **)&(this->StatusInfoMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = (undefined1 *)pTVar23;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar21 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14ba6b760;
      uVar21 = *(uint *)(puVar22 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_1d8 = (int)lVar12;
    uVar21 = (uVar19 - 1) + local_1d8;
    if ((int)uVar20 < (int)uVar21) {
      uVar21 = uVar20;
    }
  }
LAB_14ba6b760:
  while( true ) {
    pTVar7 = local_150;
    if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
      local_238 = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_StatusInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_238);
    }
    pSVar6 = local_218;
    if (((TStack_148.CurrentBitIndex == uVar21) && (TStack_148.Array == pTVar23)) &&
       (pTVar7 == pTVar27)) break;
    lVar12 = (longlong)TStack_148.CurrentBitIndex * 0x100 + *(longlong *)pTVar7;
    if (*(char *)(lVar12 + 0x70) != '\0') {
      iVar9 = *(int *)(lVar12 + 0x48);
      local_1a0 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x30);
      iStack_1a8 = 0;
      plVar25 = (longlong *)(lVar12 + 0x20);
      local_190 = 0;
      uStack_1a4 = 1;
      iStack_194 = 0;
      if (iVar9 != 0) {
        pTVar23 = local_1a0;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x40) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x40);
        }
        uVar19 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
        while (uVar19 == 0) {
          lVar13 = (longlong)iStack_1a8;
          local_190 = local_190 + 0x20;
          iStack_1a8 = iStack_1a8 + 1;
          iStack_194 = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1a8)
          goto LAB_14ba6b82e;
          uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_1a4 = -uVar19 & uVar19;
        uVar1 = (ulonglong)uStack_1a4 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1d4 = (int)lVar13;
        iStack_194 = local_190 + -1 + local_1d4;
        if (iVar9 < iStack_194) {
          iStack_194 = iVar9;
        }
      }
LAB_14ba6b82e:
      uVar19 = *(uint *)(lVar12 + 0x48);
      iStack_18c = iStack_1ec;
      iStack_188 = *(int *)(lVar12 + 0x28) - *(int *)(lVar12 + 0x54);
      uVar20 = uVar19 & 0xffffffe0;
      TStack_178._padding_ = CONCAT44(uStack_1a4,iStack_1a8);
      uStack_198 = 0xffffffff;
      TStack_178.CurrentBitIndex = iStack_194;
      TStack_178.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar19 >> 5;
      TStack_178._28_4_ = iStack_1ec;
      TStack_178.BaseBitIndex = local_190;
      uStack_158 = CONCAT44(uStack_184,iStack_188);
      local_1b0 = plVar25;
      local_180 = plVar25;
      TStack_178.Array = local_1a0;
      if ((((int)uVar19 < 0) || (iVar9 < (int)uVar19)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(uint *)(lVar12 + 0x48);
      if (uVar19 != uVar2) {
        pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x30);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x40) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x40);
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) &
                 *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
        while (uVar19 == 0) {
          lVar13 = (longlong)iVar18;
          uVar20 = uVar20 + 0x20;
          iVar18 = iVar18 + 1;
          uVar19 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14ba6b940;
          uVar19 = *(uint *)((pTVar23->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_1d0 = (int)lVar13;
        uVar19 = (uVar20 - 1) + local_1d0;
        if ((int)uVar2 < (int)uVar19) {
          uVar19 = uVar2;
        }
      }
LAB_14ba6b940:
      while( true ) {
        plVar26 = local_180;
        if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
          local_237[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusContentsInfo,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_237);
        }
        if (((TStack_178.CurrentBitIndex == uVar19) &&
            (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x30))) &&
           (pTVar23 = local_1c0, plVar26 == plVar25)) break;
        *(undefined4 *)(*plVar26 + 4 + (longlong)TStack_178.CurrentBitIndex * 0x10) = 0;
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
    pTVar27 = local_210;
  }
  plVar25 = (longlong *)0x0;
  this_00 = (StatusDetailViewResponse *)&(local_218->_impl_).contents_status_;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_218 = this_00;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField((MapFieldBase *)this_00);
  pUVar4 = local_220;
  local_230 = *(uint *)&(pSVar6->_impl_).contents_status_.field_0x18;
  plVar26 = (longlong *)(ulonglong)local_230;
  if (local_230 == *(uint *)&(pSVar6->_impl_).contents_status_.field_0x14) {
    local_230 = 0;
    plVar26 = plVar25;
  }
  else {
    plVar25 = *(longlong **)
               (*(longlong *)&(pSVar6->_impl_).contents_status_.field_0x20 + (longlong)plVar26 * 8);
  }
  if (plVar25 == (longlong *)0x0) {
LAB_14ba6bc86:
    SetOriginStatusMap(local_220,
                       (TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
                        *)local_98,true);
  }
  else {
    pTVar27 = &local_220->StatusInfoMap;
    while( true ) {
      pUVar5 = local_220;
      local_f0 = plVar25[1];
      server_msg_twoway::ContentsStatusIntegers::ContentsStatusIntegers
                (&local_e8,(Arena *)0x0,(ContentsStatusIntegers *)(plVar25 + 2));
      pTVar7 = local_210;
      local_234 = (EDS_StatusType)local_f0;
      local_e8._padding_ = (longlong)&___7ContentsStatusIntegers_server_msg_twoway__6B_;
      local_22c = 0;
      if (*(int *)&(pUVar5->StatusInfoMap).field_0x8 == *(int *)&(pUVar5->StatusInfoMap).field_0x34)
      break;
      puVar22 = *(undefined1 **)&(pUVar4->StatusInfoMap).field_0x40;
      puVar15 = &(pUVar4->StatusInfoMap).field_0x38;
      if (puVar22 != (undefined1 *)0x0) {
        puVar15 = puVar22;
      }
      iVar9 = *(int *)(puVar15 +
                      ((ulonglong)(*(int *)&(pUVar4->StatusInfoMap).field_0x48 - 1) &
                      local_f0 & 0xffffffff) * 4);
      if (iVar9 == -1) break;
      while (*(EDS_StatusType *)((longlong)iVar9 * 0x100 + *(longlong *)pTVar27) != local_234) {
        iVar9 = *(int *)((longlong)iVar9 * 0x100 + 0xf8 + *(longlong *)pTVar27);
        if (iVar9 == -1) goto LAB_14ba6bac8;
      }
      if ((local_e8._impl_.contents_list_._0_8_ & 1) == 0) {
        pIVar14 = &local_e8._impl_;
        pIVar16 = &local_e8._impl_;
      }
      else {
        pIVar14 = (Impl_ *)(local_e8._impl_.contents_list_._0_8_ + 7);
        pIVar16 = (Impl_ *)(local_e8._impl_.contents_list_._0_8_ + 7);
      }
      puVar22 = &(pIVar16->contents_list_).field_0x0 +
                (longlong)(int)local_e8._impl_.contents_list_._8_4_ * 8;
      if (pIVar14 != (Impl_ *)puVar22) {
        do {
          server_msg_twoway::ContentsStatusInteger::ContentsStatusInteger
                    (&local_110,(Arena *)0x0,*(ContentsStatusInteger **)&pIVar14->contents_list_);
          local_228[0] = local_110._impl_.contents_;
          local_110._padding_ = (longlong)&___7ContentsStatusInteger_server_msg_twoway__6B_;
          pFVar10 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                    ::FindChecked(pTVar27,local_234);
          if (*(int *)&(pFVar10->ContentsStatusMap).field_0x8 !=
              *(int *)&(pFVar10->ContentsStatusMap).field_0x34) {
            puVar15 = *(undefined1 **)&(pFVar10->ContentsStatusMap).field_0x40;
            puVar17 = &(pFVar10->ContentsStatusMap).field_0x38;
            if (puVar15 != (undefined1 *)0x0) {
              puVar17 = puVar15;
            }
            iVar9 = *(int *)(puVar17 +
                            (ulonglong)
                            (*(int *)&(pFVar10->ContentsStatusMap).field_0x48 + ~None & local_228[0]
                            ) * 4);
            if (iVar9 != -1) {
              do {
                if (*(EDS_StatusContentsInfo *)
                     (*(longlong *)&pFVar10->ContentsStatusMap + (longlong)iVar9 * 0x10) ==
                    local_228[0]) goto LAB_14ba6bbbe;
                iVar9 = *(int *)(*(longlong *)&pFVar10->ContentsStatusMap + 8 +
                                (longlong)iVar9 * 0x10);
              } while (iVar9 != -1);
            }
          }
          local_1b8 = local_228;
          pFVar10 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                    ::FindChecked(pTVar7,local_234);
          TSet<TTuple<enum_EDS_StatusContentsInfo,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusContentsInfo,int,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<enum_EDS_StatusContentsInfo_&>_>
                    (&pFVar10->ContentsStatusMap,
                     (TKeyInitializer<EDS_StatusContentsInfo_&> *)local_1cc,(bool *)&local_1b8);
LAB_14ba6bbbe:
          iVar9 = local_110._impl_.status_value_;
          pFVar10 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                    ::FindChecked(pTVar27,local_234);
          piVar11 = TMapBase<enum_EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusContentsInfo,int,0>_>
                    ::FindChecked(&pFVar10->ContentsStatusMap,local_228[0]);
          *piVar11 = iVar9;
          local_22c = local_22c + local_110._impl_.status_value_;
          server_msg_twoway::ContentsStatusInteger::~ContentsStatusInteger(&local_110);
          pIVar14 = (Impl_ *)&(pIVar14->contents_list_).field_0x8;
        } while (pIVar14 != (Impl_ *)puVar22);
        plVar26 = (longlong *)(ulonglong)local_230;
        this_00 = local_218;
      }
      local_120 = &local_234;
      local_118 = &local_22c;
      TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&,int_&>_>
                (local_98,(TPairInitializer<EDS_StatusType_&,int_&> *)(local_1cc + 4),
                 (bool *)&local_120);
      pFVar10 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                ::FindChecked(pTVar27,local_234);
      pFVar10->bIsUpdatedContentsStatus = true;
      server_msg_twoway::ContentsStatusIntegers::~ContentsStatusIntegers(&local_e8);
      plVar25 = (longlong *)*plVar25;
      if (plVar25 == (longlong *)0x0) {
        local_230 = (int)plVar26 + 1;
        if (*(uint *)&((MapField<server_msg_twoway::StatusDetailViewResponse_ContentsStatusEntry_DoNotUse,unsigned___int64,server_msg_twoway::ContentsStatusIntegers,4,11>
                        *)this_00)->field_0x14 <= local_230) goto LAB_14ba6bc86;
        while( true ) {
          plVar26 = (longlong *)(ulonglong)local_230;
          plVar25 = *(longlong **)
                     (*(longlong *)
                       &((MapField<server_msg_twoway::StatusDetailViewResponse_ContentsStatusEntry_DoNotUse,unsigned___int64,server_msg_twoway::ContentsStatusIntegers,4,11>
                          *)this_00)->field_0x20 + (longlong)plVar26 * 8);
          if (plVar25 != (longlong *)0x0) break;
          local_230 = local_230 + 1;
          if (*(uint *)&((MapField<server_msg_twoway::StatusDetailViewResponse_ContentsStatusEntry_DoNotUse,unsigned___int64,server_msg_twoway::ContentsStatusIntegers,4,11>
                          *)this_00)->field_0x14 <= local_230) goto LAB_14ba6bc86;
        }
      }
    }
LAB_14ba6bac8:
    server_msg_twoway::ContentsStatusIntegers::~ContentsStatusIntegers(&local_e8);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_98);
  return;
}

// SetCurrentStatus @ 14ba6bd70

void __thiscall
UDS_CharStatusData::SetCurrentStatus(UDS_CharStatusData *this,EDS_StatusType param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  FDS_StatusInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StatusInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->StatusInfoMap;
      while (*(EDS_StatusType *)((longlong)iVar2 * 0x100 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x100 + 0xf8 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      pFVar3 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
               ::FindChecked(&this->StatusInfoMap,param_1);
      pFVar3->CurrentValue = param_2;
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&pFVar3->ChangeCurrentValueDelegate,(float)param_2);
      TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy>::Broadcast
                (&pFVar3->ChangeStatusDelegate,(float)pFVar3->CurrentValue,pFVar3->MaxValue);
    }
  }
  return;
}

// SetCurrentStatusByStatusIntegers @ 14ba6be20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CharStatusData::SetCurrentStatusByStatusIntegers
          (UDS_CharStatusData *this,StatusIntegers *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  StatusInteger *pSVar10;
  ulonglong uVar11;
  uint *puVar12;
  ForElementType<unsigned_int> FVar13;
  undefined1 auStackY_118 [32];
  uint local_e8 [2];
  ForElementType<unsigned_int> local_e0;
  int *piStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  int local_c0 [2];
  undefined1 local_b8 [12];
  uint uStack_ac;
  int *piStack_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = *(uint *)&(param_1->_impl_).status_list_.field_0x8;
  uVar8 = (ulong64)(int)uVar4;
  uVar7 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar4 == 0) goto LAB_14ba6c094;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar8);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar4);
  uVar6 = 1;
  if (3 < uVar4) {
    uVar9 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar6 <= (int)local_40)) goto LAB_14ba6c094;
  local_40 = uVar6;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar6 != 0) {
    uVar4 = uVar6;
    if (uVar6 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ba6befe;
      }
    }
    else {
LAB_14ba6befe:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,4);
    }
    if (0 < (int)uVar6) {
      uVar11 = (ulonglong)uVar6;
      uVar9 = uVar7;
      do {
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar2 = uVar9 & (longlong)(int)uVar6 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar5.Data + uVar2 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (local_40 != 0) {
    piStack_d8 = (int *)(local_88 + 0x10);
    local_e0 = (ForElementType<unsigned_int>)0x100000000;
    uStack_cc = 0;
    uStack_c8 = 0;
    uVar9 = uVar7;
    if (local_60 != 0) {
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_68;
      }
      uVar4 = *(uint *)FVar13;
      uVar11 = uVar7;
      while (uVar4 == 0) {
        uStack_c8 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_c8;
        iVar3 = (int)uVar9;
        uVar4 = iVar3 + 1;
        uVar9 = (ulonglong)uVar4;
        local_e0._0_4_ = uVar4;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_14ba6c00a;
        uVar4 = ((uint *)((longlong)FVar13 + 4))[iVar3];
      }
      local_e0._4_4_ = -uVar4 & uVar4;
      uVar9 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uStack_cc = (int)lVar1 + -1 + uStack_c8;
      uVar9 = (ulonglong)uStack_cc;
      if ((int)local_60 < (int)uStack_cc) {
LAB_14ba6c00a:
        uVar9 = (ulonglong)local_60;
        uStack_cc = local_60;
      }
    }
    local_d0 = 0xffffffff;
    local_b8._0_8_ = local_88;
    uStack_9c = uStack_cc;
    local_a0 = -1;
    uStack_98 = CONCAT44(uStack_c4,uStack_c8);
    stack0xffffffffffffff50 = local_e0;
    piStack_a8 = piStack_d8;
    if ((int)uVar9 < (int)local_60) {
      do {
        puVar12 = (uint *)(*(undefined **)local_b8._0_8_ + (longlong)(int)uVar9 * 0x10);
        uVar4 = local_40 - 1 & *puVar12;
        puVar12[3] = uVar4;
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar4;
        puVar12[2] = *(uint *)(FVar5.Data + uVar11 * 4);
        *(int *)(FVar5.Data + uVar11 * 4) = (int)uVar9;
        local_a0 = local_a0 & ~uStack_ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b8 + 8));
        uVar9 = (ulonglong)uStack_9c;
      } while ((int)uStack_9c < piStack_a8[6]);
    }
  }
LAB_14ba6c094:
  if (0 < (longlong)uVar8) {
    local_e0 = (ForElementType<unsigned_int>)local_e8;
    piStack_d8 = local_c0;
    do {
      pSVar10 = *(StatusInteger **)&(param_1->_impl_).status_list_;
      if (((ulonglong)pSVar10 & 1) != 0) {
        pSVar10 = *(StatusInteger **)
                   ((longlong)(&(pSVar10->_impl_)._has_bits_)[uVar7 * 2 + -3].has_bits_ + 3);
      }
      server_msg::StatusInteger::StatusInteger((StatusInteger *)local_b8,(Arena *)0x0,pSVar10);
      local_c0[0] = uStack_9c;
      local_e8[0] = local_a0;
      local_b8._0_8_ = &___7StatusInteger_server_msg__6B_;
      TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&&,int_&&>_>
                (local_88,(TPairInitializer<EDS_StatusType_&&,int_&&> *)local_90,(bool *)&local_e0);
      server_msg::StatusInteger::~StatusInteger((StatusInteger *)local_b8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)uVar8);
  }
  SetCurrentStatusMap(this,(TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
                            *)local_88);
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// SetCurrentStatusMap @ 14ba6c1e0

void __thiscall
UDS_CharStatusData::SetCurrentStatusMap
          (UDS_CharStatusData *this,
          TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
          *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  EDS_StatusType EVar4;
  undefined1 *puVar5;
  int iVar6;
  FDS_StatusInfo *pFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iVar2 = *(int *)&param_1->field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iStack_38 = 0;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar10 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar10;
    while (uVar3 == 0) {
      lVar8 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14ba6c279;
      uVar3 = puVar10[lVar8 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_24 = (int)lVar8 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_14ba6c279:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60._padding_ = CONCAT44(uStack_34,iStack_38);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = param_1;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      iVar2 = *(int *)(*(longlong *)param_1 + 4 + (longlong)TStack_60.CurrentBitIndex * 0x10);
      EVar4 = *(EDS_StatusType *)(*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x10)
      ;
      if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
        puVar5 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
        puVar9 = &(this->StatusInfoMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar9 = puVar5;
        }
        iVar6 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->StatusInfoMap).field_0x48 - Hp & EVar4) * 4);
        if (iVar6 != -1) {
          do {
            if (*(EDS_StatusType *)((longlong)iVar6 * 0x100 + *(longlong *)&this->StatusInfoMap) ==
                EVar4) {
              pFVar7 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                       ::FindChecked(&this->StatusInfoMap,EVar4);
              pFVar7->CurrentValue = iVar2;
              TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                        (&pFVar7->ChangeCurrentValueDelegate,(float)iVar2);
              TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy>::Broadcast
                        (&pFVar7->ChangeStatusDelegate,(float)pFVar7->CurrentValue,pFVar7->MaxValue)
              ;
              break;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
          } while (iVar6 != -1);
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return;
}

// SetDataByMyCurrentStatusResponse @ 14ba6f7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CharStatusData::SetDataByMyCurrentStatusResponse
          (UDS_CharStatusData *this,MyCurrentStatusResponse *param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  StatusFloat *pSVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  undefined1 auStackY_118 [32];
  uint local_e8 [2];
  ForElementType<unsigned_int> local_e0;
  float *pfStack_d8;
  undefined4 local_d0;
  float fStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  float local_c0 [2];
  undefined1 local_b8 [12];
  uint uStack_ac;
  float *pfStack_a8;
  uint local_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  TBitArray<FDefaultBitArrayAllocator> local_78;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = *(uint *)&(param_1->_impl_).status_list_.field_0x8;
  uVar8 = (ulong64)(int)uVar4;
  uVar7 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar4 == 0) goto LAB_14ba6fa56;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar8);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar4);
  uVar6 = 1;
  if (3 < uVar4) {
    uVar9 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar6 <= (int)local_40)) goto LAB_14ba6fa56;
  local_40 = uVar6;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar6 != 0) {
    uVar4 = uVar6;
    if (uVar6 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ba6f8be;
      }
    }
    else {
LAB_14ba6f8be:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,4);
    }
    if (0 < (int)uVar6) {
      uVar11 = (ulonglong)uVar6;
      uVar9 = uVar7;
      do {
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar2 = uVar9 & (longlong)(int)uVar6 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar5.Data + uVar2 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (local_40 != 0) {
    pfStack_d8 = (float *)(local_88 + 0x10);
    local_e0 = (ForElementType<unsigned_int>)0x100000000;
    fStack_cc = 0.0;
    uStack_c8 = 0;
    uVar9 = uVar7;
    if ((float)local_78.NumBits != 0.0) {
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar4 = *(uint *)FVar12;
      uVar11 = uVar7;
      while (uVar4 == 0) {
        uStack_c8 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_c8;
        iVar3 = (int)uVar9;
        uVar4 = iVar3 + 1;
        uVar9 = (ulonglong)uVar4;
        local_e0._0_4_ = uVar4;
        if ((int)((local_78.NumBits - 1U) + ((int)(local_78.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)uVar4) goto LAB_14ba6f9ca;
        uVar4 = ((uint *)((longlong)FVar12 + 4))[iVar3];
      }
      local_e0._4_4_ = -uVar4 & uVar4;
      uVar9 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      fStack_cc = (float)((int)lVar13 + -1 + uStack_c8);
      uVar9 = (ulonglong)(uint)fStack_cc;
      if (local_78.NumBits < (int)fStack_cc) {
LAB_14ba6f9ca:
        uVar9 = (ulonglong)(uint)local_78.NumBits;
        fStack_cc = (float)local_78.NumBits;
      }
    }
    local_d0 = 0xffffffff;
    local_b8._0_8_ = local_88;
    fStack_9c = fStack_cc;
    local_a0 = -1;
    uStack_98 = CONCAT44(uStack_c4,uStack_c8);
    stack0xffffffffffffff50 = local_e0;
    pfStack_a8 = pfStack_d8;
    if ((int)uVar9 < local_78.NumBits) {
      do {
        puVar1 = *(undefined **)local_b8._0_8_;
        lVar13 = (longlong)(int)uVar9 * 0x10;
        uVar4 = local_40 - 1 & *(uint *)(puVar1 + lVar13);
        *(uint *)(puVar1 + lVar13 + 0xc) = uVar4;
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar1 + lVar13 + 8) = *(undefined4 *)(FVar5.Data + uVar11 * 4);
        *(int *)(FVar5.Data + uVar11 * 4) = (int)uVar9;
        local_a0 = local_a0 & ~uStack_ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b8 + 8));
        uVar9 = (ulonglong)(uint)fStack_9c;
      } while ((int)fStack_9c < (int)pfStack_a8[6]);
    }
  }
LAB_14ba6fa56:
  if (0 < (longlong)uVar8) {
    local_e0 = (ForElementType<unsigned_int>)local_e8;
    pfStack_d8 = local_c0;
    do {
      pSVar10 = *(StatusFloat **)&(param_1->_impl_).status_list_;
      if (((ulonglong)pSVar10 & 1) != 0) {
        pSVar10 = *(StatusFloat **)
                   ((longlong)(&(pSVar10->_impl_)._has_bits_)[uVar7 * 2 + -3].has_bits_ + 3);
      }
      server_msg::StatusFloat::StatusFloat((StatusFloat *)local_b8,(Arena *)0x0,pSVar10);
      local_c0[0] = fStack_9c;
      local_b8._0_8_ = &___7StatusFloat_server_msg__6B_;
      local_e8[0] = local_a0;
      TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&&,float_&&>_>
                (local_88,(TPairInitializer<EDS_StatusType_&&,float_&&> *)local_90,(bool *)&local_e0
                );
      server_msg::StatusFloat::~StatusFloat((StatusFloat *)local_b8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)uVar8);
  }
  SetCurrentStatusMap(this,(TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
                            *)local_88);
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// SetDataByMyStatusResponse @ 14ba6fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CharStatusData::SetDataByMyStatusResponse(UDS_CharStatusData *this,MyStatusResponse *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  StatusInteger *pSVar10;
  ulonglong uVar11;
  uint *puVar12;
  ForElementType<unsigned_int> FVar13;
  undefined1 auStackY_118 [32];
  uint local_e8 [2];
  ForElementType<unsigned_int> local_e0;
  int *piStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  int local_c0 [2];
  undefined1 local_b8 [12];
  uint uStack_ac;
  int *piStack_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = *(uint *)&(param_1->_impl_).status_list_.field_0x8;
  uVar8 = (ulong64)(int)uVar4;
  uVar7 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar4 == 0) goto LAB_14ba6fe24;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar8);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar4);
  uVar6 = 1;
  if (3 < uVar4) {
    uVar9 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar6 <= (int)local_40)) goto LAB_14ba6fe24;
  local_40 = uVar6;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar6 != 0) {
    uVar4 = uVar6;
    if (uVar6 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ba6fc8e;
      }
    }
    else {
LAB_14ba6fc8e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,4);
    }
    if (0 < (int)uVar6) {
      uVar11 = (ulonglong)uVar6;
      uVar9 = uVar7;
      do {
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar2 = uVar9 & (longlong)(int)uVar6 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar5.Data + uVar2 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (local_40 != 0) {
    piStack_d8 = (int *)(local_88 + 0x10);
    local_e0 = (ForElementType<unsigned_int>)0x100000000;
    uStack_cc = 0;
    uStack_c8 = 0;
    uVar9 = uVar7;
    if (local_60 != 0) {
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_68;
      }
      uVar4 = *(uint *)FVar13;
      uVar11 = uVar7;
      while (uVar4 == 0) {
        uStack_c8 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_c8;
        iVar3 = (int)uVar9;
        uVar4 = iVar3 + 1;
        uVar9 = (ulonglong)uVar4;
        local_e0._0_4_ = uVar4;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_14ba6fd9a;
        uVar4 = ((uint *)((longlong)FVar13 + 4))[iVar3];
      }
      local_e0._4_4_ = -uVar4 & uVar4;
      uVar9 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uStack_cc = (int)lVar1 + -1 + uStack_c8;
      uVar9 = (ulonglong)uStack_cc;
      if ((int)local_60 < (int)uStack_cc) {
LAB_14ba6fd9a:
        uVar9 = (ulonglong)local_60;
        uStack_cc = local_60;
      }
    }
    local_d0 = 0xffffffff;
    local_b8._0_8_ = local_88;
    uStack_9c = uStack_cc;
    local_a0 = -1;
    uStack_98 = CONCAT44(uStack_c4,uStack_c8);
    stack0xffffffffffffff50 = local_e0;
    piStack_a8 = piStack_d8;
    if ((int)uVar9 < (int)local_60) {
      do {
        puVar12 = (uint *)(*(undefined **)local_b8._0_8_ + (longlong)(int)uVar9 * 0x10);
        uVar4 = local_40 - 1 & *puVar12;
        puVar12[3] = uVar4;
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar4;
        puVar12[2] = *(uint *)(FVar5.Data + uVar11 * 4);
        *(int *)(FVar5.Data + uVar11 * 4) = (int)uVar9;
        local_a0 = local_a0 & ~uStack_ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b8 + 8));
        uVar9 = (ulonglong)uStack_9c;
      } while ((int)uStack_9c < piStack_a8[6]);
    }
  }
LAB_14ba6fe24:
  if (0 < (longlong)uVar8) {
    local_e0 = (ForElementType<unsigned_int>)local_e8;
    piStack_d8 = local_c0;
    do {
      pSVar10 = *(StatusInteger **)&(param_1->_impl_).status_list_;
      if (((ulonglong)pSVar10 & 1) != 0) {
        pSVar10 = *(StatusInteger **)
                   ((longlong)(&(pSVar10->_impl_)._has_bits_)[uVar7 * 2 + -3].has_bits_ + 3);
      }
      server_msg::StatusInteger::StatusInteger((StatusInteger *)local_b8,(Arena *)0x0,pSVar10);
      local_c0[0] = uStack_9c;
      local_e8[0] = local_a0;
      local_b8._0_8_ = &___7StatusInteger_server_msg__6B_;
      TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&&,int_&&>_>
                (local_88,(TPairInitializer<EDS_StatusType_&&,int_&&> *)local_90,(bool *)&local_e0);
      server_msg::StatusInteger::~StatusInteger((StatusInteger *)local_b8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)uVar8);
  }
  SetOriginStatusMap(this,(TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
                           *)local_88,true);
  this->IsInitOriginByServer = true;
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// SetMaxStatus @ 14ba725d0

void __thiscall
UDS_CharStatusData::SetMaxStatus(UDS_CharStatusData *this,EDS_StatusType param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  FDS_StatusInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StatusInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->StatusInfoMap;
      while (*(EDS_StatusType *)((longlong)iVar2 * 0x100 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x100 + 0xf8 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      pFVar3 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
               ::FindChecked(&this->StatusInfoMap,param_1);
      pFVar3->MaxValue = param_2;
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&pFVar3->ChangeMaxValueDelegate,param_2);
      TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy>::Broadcast
                (&pFVar3->ChangeStatusDelegate,(float)pFVar3->CurrentValue,pFVar3->MaxValue);
    }
  }
  return;
}

// SetMaxStatusByStatusFloats @ 14ba72690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CharStatusData::SetMaxStatusByStatusFloats(UDS_CharStatusData *this,StatusFloats *param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  StatusFloat *pSVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  longlong lVar13;
  undefined1 auStackY_118 [32];
  uint local_e8 [2];
  ForElementType<unsigned_int> local_e0;
  float *pfStack_d8;
  undefined4 local_d0;
  float fStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  float local_c0 [2];
  undefined1 local_b8 [12];
  uint uStack_ac;
  float *pfStack_a8;
  uint local_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  TBitArray<FDefaultBitArrayAllocator> local_78;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = *(uint *)&(param_1->_impl_).status_list_.field_0x8;
  uVar8 = (ulong64)(int)uVar4;
  uVar7 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar4 == 0) goto LAB_14ba72906;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar8);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar4);
  uVar6 = 1;
  if (3 < uVar4) {
    uVar9 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar13 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar6 <= (int)local_40)) goto LAB_14ba72906;
  local_40 = uVar6;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar6 != 0) {
    uVar4 = uVar6;
    if (uVar6 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ba7276e;
      }
    }
    else {
LAB_14ba7276e:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,4);
    }
    if (0 < (int)uVar6) {
      uVar11 = (ulonglong)uVar6;
      uVar9 = uVar7;
      do {
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar2 = uVar9 & (longlong)(int)uVar6 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar5.Data + uVar2 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (local_40 != 0) {
    pfStack_d8 = (float *)(local_88 + 0x10);
    local_e0 = (ForElementType<unsigned_int>)0x100000000;
    fStack_cc = 0.0;
    uStack_c8 = 0;
    uVar9 = uVar7;
    if ((float)local_78.NumBits != 0.0) {
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar4 = *(uint *)FVar12;
      uVar11 = uVar7;
      while (uVar4 == 0) {
        uStack_c8 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_c8;
        iVar3 = (int)uVar9;
        uVar4 = iVar3 + 1;
        uVar9 = (ulonglong)uVar4;
        local_e0._0_4_ = uVar4;
        if ((int)((local_78.NumBits - 1U) + ((int)(local_78.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)uVar4) goto LAB_14ba7287a;
        uVar4 = ((uint *)((longlong)FVar12 + 4))[iVar3];
      }
      local_e0._4_4_ = -uVar4 & uVar4;
      uVar9 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      fStack_cc = (float)((int)lVar13 + -1 + uStack_c8);
      uVar9 = (ulonglong)(uint)fStack_cc;
      if (local_78.NumBits < (int)fStack_cc) {
LAB_14ba7287a:
        uVar9 = (ulonglong)(uint)local_78.NumBits;
        fStack_cc = (float)local_78.NumBits;
      }
    }
    local_d0 = 0xffffffff;
    local_b8._0_8_ = local_88;
    fStack_9c = fStack_cc;
    local_a0 = -1;
    uStack_98 = CONCAT44(uStack_c4,uStack_c8);
    stack0xffffffffffffff50 = local_e0;
    pfStack_a8 = pfStack_d8;
    if ((int)uVar9 < local_78.NumBits) {
      do {
        puVar1 = *(undefined **)local_b8._0_8_;
        lVar13 = (longlong)(int)uVar9 * 0x10;
        uVar4 = local_40 - 1 & *(uint *)(puVar1 + lVar13);
        *(uint *)(puVar1 + lVar13 + 0xc) = uVar4;
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar1 + lVar13 + 8) = *(undefined4 *)(FVar5.Data + uVar11 * 4);
        *(int *)(FVar5.Data + uVar11 * 4) = (int)uVar9;
        local_a0 = local_a0 & ~uStack_ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b8 + 8));
        uVar9 = (ulonglong)(uint)fStack_9c;
      } while ((int)fStack_9c < (int)pfStack_a8[6]);
    }
  }
LAB_14ba72906:
  if (0 < (longlong)uVar8) {
    local_e0 = (ForElementType<unsigned_int>)local_e8;
    pfStack_d8 = local_c0;
    do {
      pSVar10 = *(StatusFloat **)&(param_1->_impl_).status_list_;
      if (((ulonglong)pSVar10 & 1) != 0) {
        pSVar10 = *(StatusFloat **)
                   ((longlong)(&(pSVar10->_impl_)._has_bits_)[uVar7 * 2 + -3].has_bits_ + 3);
      }
      server_msg::StatusFloat::StatusFloat((StatusFloat *)local_b8,(Arena *)0x0,pSVar10);
      local_c0[0] = fStack_9c;
      local_b8._0_8_ = &___7StatusFloat_server_msg__6B_;
      local_e8[0] = local_a0;
      TSet<TTuple<enum_EDS_StatusType,float>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&&,float_&&>_>
                (local_88,(TPairInitializer<EDS_StatusType_&&,float_&&> *)local_90,(bool *)&local_e0
                );
      server_msg::StatusFloat::~StatusFloat((StatusFloat *)local_b8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)uVar8);
  }
  SetMaxStatusMap(this,(TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
                        *)local_88);
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// SetMaxStatusMap @ 14ba72a60

void __thiscall
UDS_CharStatusData::SetMaxStatusMap
          (UDS_CharStatusData *this,
          TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
          *param_1)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  EDS_StatusType EVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  FDS_StatusInfo *pFVar10;
  longlong lVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 auStack_70 [16];
  uint uStack_60;
  int iStack_5c;
  undefined8 local_58;
  TMap<EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,float,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar9 = *(int *)&param_1->field_0x28;
  local_40 = &param_1->field_0x10;
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)local_40;
    }
    uVar3 = *puVar13;
    while (uVar3 == 0) {
      lVar11 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14ba72af9;
      uVar3 = puVar13[lVar11 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar8 = (int)lVar11 + -1 + local_30;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14ba72af9:
  uStack_38 = 0xffffffff;
  iStack_2c = iStack_5c;
  auStack_70._0_8_ = CONCAT44(uStack_44,iStack_48);
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = local_40;
  auVar7._12_4_ = iVar8;
  local_58._4_4_ = iStack_5c;
  local_58._0_4_ = local_30;
  unique0x100002dd = auVar7;
  local_50 = param_1;
  iStack_34 = iVar8;
  if (iVar8 < iVar9) {
    do {
      fVar2 = *(float *)(*(longlong *)param_1 + 4 + (longlong)iVar8 * 0x10);
      EVar4 = *(EDS_StatusType *)(*(longlong *)param_1 + (longlong)iVar8 * 0x10);
      if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34) {
        puVar5 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
        puVar12 = &(this->StatusInfoMap).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar12 = puVar5;
        }
        iVar9 = *(int *)(puVar12 +
                        (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & EVar4) * 4);
        if (iVar9 != -1) {
          do {
            if (*(EDS_StatusType *)((longlong)iVar9 * 0x100 + *(longlong *)&this->StatusInfoMap) ==
                EVar4) {
              pFVar10 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                        ::FindChecked(&this->StatusInfoMap,EVar4);
              pFVar10->MaxValue = fVar2;
              TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                        (&pFVar10->ChangeMaxValueDelegate,fVar2);
              TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy>::Broadcast
                        (&pFVar10->ChangeStatusDelegate,(float)pFVar10->CurrentValue,
                         pFVar10->MaxValue);
              break;
            }
            iVar9 = *(int *)((longlong)iVar9 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
          } while (iVar9 != -1);
        }
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      bVar6 = iStack_5c < *(int *)(auStack_70._8_8_ + 0x18);
      iVar8 = iStack_5c;
    } while (bVar6);
  }
  return;
}

// SetOriginStatus @ 14ba73140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharStatusData::SetOriginStatus
          (UDS_CharStatusData *this,EDS_StatusType param_1,int param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  EDS_StatusType EVar2;
  int iVar3;
  int iVar4;
  FDS_StatusInfo *pFVar5;
  UDS_LogManager *pUVar6;
  FDS_RelatedStatusInfo *pFVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_1c8 [32];
  undefined1 local_178 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (*(int *)&(this->StatusInfoMap).field_0x8 == *(int *)&(this->StatusInfoMap).field_0x34) {
    return;
  }
  puVar8 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &(this->StatusInfoMap).field_0x38;
  }
  iVar3 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & param_1) *
                            4);
  if (iVar3 == -1) {
    return;
  }
  while (*(EDS_StatusType *)((longlong)iVar3 * 0x100 + *(longlong *)&this->StatusInfoMap) != param_1
        ) {
    iVar3 = *(int *)((longlong)iVar3 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
    if (iVar3 == -1) {
      return;
    }
  }
  pFVar5 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
           ::FindChecked(&this->StatusInfoMap,param_1);
  if ((((this->IsInitOriginByServer == false) && (pFVar5->OriginValue != 0)) &&
      (pFVar5->OriginValue != param_2)) &&
     (pUVar6 = UDS_LogManager::GetInst(), pUVar6 != (UDS_LogManager *)0x0)) {
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_CharStatusData::SetOriginStatus",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Error,local_168.Ptr,0xe5,
               L"Calculated Status Value is different from server. StatusType : %d, Client Value : %d, Server Value : %d"
              );
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  pFVar5->OriginValue = param_2;
  pFVar5->MaxValue = (float)param_2;
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&pFVar5->ChangeOriginValueDelegate,param_2);
  if (!param_3) {
    return;
  }
  if (RelatedStatusInfoMap._8_4_ == RelatedStatusInfoMap._52_4_) {
    return;
  }
  lVar9 = 0x154cf7368;
  if (RelatedStatusInfoMap._64_8_ != 0) {
    lVar9 = RelatedStatusInfoMap._64_8_;
  }
  iVar3 = *(int *)(lVar9 + (ulonglong)(RelatedStatusInfoMap._72_4_ - Hp & param_1) * 4);
  while( true ) {
    if (iVar3 == -1) {
      return;
    }
    if (*(EDS_StatusType *)((longlong)iVar3 * 0x20 + RelatedStatusInfoMap._0_8_) == param_1) break;
    iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + RelatedStatusInfoMap._0_8_);
  }
  pFVar7 = TMapBase<enum_EDS_StatusType,FDS_RelatedStatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_RelatedStatusInfo,0>_>
           ::FindChecked(&RelatedStatusInfoMap,param_1);
  pFVar11 = (pFVar7->RelatedStatusList).AllocatorInstance.Data;
  iVar3 = (pFVar7->RelatedStatusList).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 4;
  do {
    while( true ) {
      if ((pFVar7->RelatedStatusList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_178);
      }
      if (pFVar11 == pFVar1) {
        UpdateMaxValue(this);
        return;
      }
      EVar2 = *(EDS_StatusType *)pFVar11;
      if (*(int *)&(this->StatusInfoMap).field_0x8 != *(int *)&(this->StatusInfoMap).field_0x34)
      break;
LAB_14ba733ce:
      pFVar11 = pFVar11 + 4;
    }
    puVar8 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
    puVar10 = &(this->StatusInfoMap).field_0x38;
    if (puVar8 != (undefined1 *)0x0) {
      puVar10 = puVar8;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & EVar2) * 4);
    if (iVar4 == -1) goto LAB_14ba733ce;
    do {
      if (*(EDS_StatusType *)((longlong)iVar4 * 0x100 + *(longlong *)&this->StatusInfoMap) == EVar2)
      {
        pFVar5 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                 ::FindChecked(&this->StatusInfoMap,EVar2);
        pFVar5->bIsDirty = true;
        goto LAB_14ba733ce;
      }
      iVar4 = *(int *)((longlong)iVar4 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
    } while (iVar4 != -1);
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// SetOriginStatusByStatusIntegers @ 14ba73420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_CharStatusData::SetOriginStatusByStatusIntegers
          (UDS_CharStatusData *this,StatusIntegers *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  StatusInteger *pSVar10;
  ulonglong uVar11;
  uint *puVar12;
  ForElementType<unsigned_int> FVar13;
  undefined1 auStackY_118 [32];
  uint local_e8 [2];
  ForElementType<unsigned_int> local_e0;
  int *piStack_d8;
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  int local_c0 [2];
  undefined1 local_b8 [12];
  uint uStack_ac;
  int *piStack_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar4 = *(uint *)&(param_1->_impl_).status_list_.field_0x8;
  uVar8 = (ulong64)(int)uVar4;
  uVar7 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar4 == 0) goto LAB_14ba73694;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar8);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar4);
  uVar6 = 1;
  if (3 < uVar4) {
    uVar9 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar6 <= (int)local_40)) goto LAB_14ba73694;
  local_40 = uVar6;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar6 != 0) {
    uVar4 = uVar6;
    if (uVar6 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar4 = 0;
        goto LAB_14ba734fe;
      }
    }
    else {
LAB_14ba734fe:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar4,4);
    }
    if (0 < (int)uVar6) {
      uVar11 = (ulonglong)uVar6;
      uVar9 = uVar7;
      do {
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar2 = uVar9 & (longlong)(int)uVar6 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar5.Data + uVar2 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (local_40 != 0) {
    piStack_d8 = (int *)(local_88 + 0x10);
    local_e0 = (ForElementType<unsigned_int>)0x100000000;
    uStack_cc = 0;
    uStack_c8 = 0;
    uVar9 = uVar7;
    if (local_60 != 0) {
      FVar13 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_68;
      }
      uVar4 = *(uint *)FVar13;
      uVar11 = uVar7;
      while (uVar4 == 0) {
        uStack_c8 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_c8;
        iVar3 = (int)uVar9;
        uVar4 = iVar3 + 1;
        uVar9 = (ulonglong)uVar4;
        local_e0._0_4_ = uVar4;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_14ba7360a;
        uVar4 = ((uint *)((longlong)FVar13 + 4))[iVar3];
      }
      local_e0._4_4_ = -uVar4 & uVar4;
      uVar9 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uStack_cc = (int)lVar1 + -1 + uStack_c8;
      uVar9 = (ulonglong)uStack_cc;
      if ((int)local_60 < (int)uStack_cc) {
LAB_14ba7360a:
        uVar9 = (ulonglong)local_60;
        uStack_cc = local_60;
      }
    }
    local_d0 = 0xffffffff;
    local_b8._0_8_ = local_88;
    uStack_9c = uStack_cc;
    local_a0 = -1;
    uStack_98 = CONCAT44(uStack_c4,uStack_c8);
    stack0xffffffffffffff50 = local_e0;
    piStack_a8 = piStack_d8;
    if ((int)uVar9 < (int)local_60) {
      do {
        puVar12 = (uint *)(*(undefined **)local_b8._0_8_ + (longlong)(int)uVar9 * 0x10);
        uVar4 = local_40 - 1 & *puVar12;
        puVar12[3] = uVar4;
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar11 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar4;
        puVar12[2] = *(uint *)(FVar5.Data + uVar11 * 4);
        *(int *)(FVar5.Data + uVar11 * 4) = (int)uVar9;
        local_a0 = local_a0 & ~uStack_ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b8 + 8));
        uVar9 = (ulonglong)uStack_9c;
      } while ((int)uStack_9c < piStack_a8[6]);
    }
  }
LAB_14ba73694:
  if (0 < (longlong)uVar8) {
    local_e0 = (ForElementType<unsigned_int>)local_e8;
    piStack_d8 = local_c0;
    do {
      pSVar10 = *(StatusInteger **)&(param_1->_impl_).status_list_;
      if (((ulonglong)pSVar10 & 1) != 0) {
        pSVar10 = *(StatusInteger **)
                   ((longlong)(&(pSVar10->_impl_)._has_bits_)[uVar7 * 2 + -3].has_bits_ + 3);
      }
      server_msg::StatusInteger::StatusInteger((StatusInteger *)local_b8,(Arena *)0x0,pSVar10);
      local_c0[0] = uStack_9c;
      local_e8[0] = local_a0;
      local_b8._0_8_ = &___7StatusInteger_server_msg__6B_;
      TSet<TTuple<enum_EDS_StatusType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StatusType_&&,int_&&>_>
                (local_88,(TPairInitializer<EDS_StatusType_&&,int_&&> *)local_90,(bool *)&local_e0);
      server_msg::StatusInteger::~StatusInteger((StatusInteger *)local_b8);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)uVar8);
  }
  SetOriginStatusMap(this,(TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
                           *)local_88,true);
  this->IsInitOriginByServer = true;
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar3 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = -1;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// SetOriginStatusMap @ 14ba737f0

void __thiscall
UDS_CharStatusData::SetOriginStatusMap
          (UDS_CharStatusData *this,
          TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
          *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  EDS_StatusType EVar5;
  undefined1 *puVar6;
  int iVar7;
  FDS_RelatedStatusInfo *pFVar8;
  FDS_StatusInfo *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  EDS_StatusType *pEVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  undefined1 local_res18 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,int,0>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  iStack_58 = 0;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10;
  iVar3 = *(int *)&param_1->field_0x28;
  uStack_54 = 1;
  local_40 = 0;
  iStack_44 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)TStack_80.Array;
    }
    uVar4 = *puVar14;
    while (uVar4 == 0) {
      lVar10 = (longlong)iStack_58;
      local_40 = local_40 + 0x20;
      iStack_58 = iStack_58 + 1;
      iStack_44 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_14ba7389a;
      uVar4 = puVar14[lVar10 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_54 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_44 = local_40 + -1 + (int)lVar10;
    if (iVar3 < iStack_44) {
      iStack_44 = iVar3;
    }
  }
LAB_14ba7389a:
  uStack_48 = 0xffffffff;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80._padding_ = CONCAT44(uStack_54,iStack_58);
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  local_60 = param_1;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80.CurrentBitIndex = iStack_44;
  if (iVar3 <= iStack_44) {
LAB_14ba739b8:
    if (param_2) {
      UpdateMaxValue(this);
    }
    return;
  }
LAB_14ba73902:
  pEVar12 = (EDS_StatusType *)((longlong)TStack_80.CurrentBitIndex * 0x10 + *(longlong *)param_1);
  SetOriginStatus(this,*pEVar12,
                  *(int *)(*(longlong *)param_1 + 4 + (longlong)TStack_80.CurrentBitIndex * 0x10),
                  false);
  if ((param_2) && (EVar5 = *pEVar12, RelatedStatusInfoMap._8_4_ != RelatedStatusInfoMap._52_4_)) {
    lVar10 = 0x154cf7368;
    if (RelatedStatusInfoMap._64_8_ != 0) {
      lVar10 = RelatedStatusInfoMap._64_8_;
    }
    for (iVar3 = *(int *)(lVar10 + (ulonglong)(RelatedStatusInfoMap._72_4_ - Hp & EVar5) * 4);
        iVar3 != -1; iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + RelatedStatusInfoMap._0_8_)) {
      if (*(EDS_StatusType *)((longlong)iVar3 * 0x20 + RelatedStatusInfoMap._0_8_) == EVar5) {
        pFVar8 = TMapBase<enum_EDS_StatusType,FDS_RelatedStatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_RelatedStatusInfo,0>_>
                 ::FindChecked(&RelatedStatusInfoMap,EVar5);
        pFVar13 = (pFVar8->RelatedStatusList).AllocatorInstance.Data;
        iVar3 = (pFVar8->RelatedStatusList).ArrayNum;
        pFVar1 = pFVar13 + (longlong)iVar3 * 4;
        goto LAB_14ba73a15;
      }
    }
  }
  goto LAB_14ba73985;
LAB_14ba73a15:
  if ((pFVar8->RelatedStatusList).ArrayNum != iVar3) {
    `TCheckedPointerIterator<enum_EDS_StatusType,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res18);
  }
  if (pFVar13 != pFVar1) {
    EVar5 = *(EDS_StatusType *)pFVar13;
    if (*(int *)&(this->StatusInfoMap).field_0x8 == *(int *)&(this->StatusInfoMap).field_0x34) {
LAB_14ba73a9f:
      pFVar13 = pFVar13 + 4;
    }
    else {
      puVar6 = *(undefined1 **)&(this->StatusInfoMap).field_0x40;
      puVar11 = &(this->StatusInfoMap).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar11 = puVar6;
      }
      iVar7 = *(int *)(puVar11 +
                      (ulonglong)(*(int *)&(this->StatusInfoMap).field_0x48 - Hp & EVar5) * 4);
      if (iVar7 == -1) goto LAB_14ba73a9f;
      do {
        if (*(EDS_StatusType *)((longlong)iVar7 * 0x100 + *(longlong *)&this->StatusInfoMap) ==
            EVar5) {
          pFVar9 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                   ::FindChecked(&this->StatusInfoMap,EVar5);
          pFVar9->bIsDirty = true;
          goto LAB_14ba73a9f;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x100 + 0xf8 + *(longlong *)&this->StatusInfoMap);
      } while (iVar7 != -1);
      pFVar13 = pFVar13 + 4;
    }
    goto LAB_14ba73a15;
  }
LAB_14ba73985:
  TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  if ((TStack_80.Array)->NumBits <= TStack_80.CurrentBitIndex) goto LAB_14ba739b8;
  goto LAB_14ba73902;
}

// UpdateMaxMoveSpeed @ 14ba7dd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CharStatusData::UpdateMaxMoveSpeed(UDS_CharStatusData *this)

{
  bool bVar1;
  UObject *pUVar2;
  ulong64 uVar3;
  UDS_LogManager *pUVar4;
  char cVar5;
  undefined1 auStackY_1c8 [32];
  uint uVar6;
  wchar_t *pwVar7;
  FWeakObjectPtr local_198;
  FName local_190;
  undefined1 uStack_188;
  uint7 uStack_187;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),(void *)0x0
                    );
  if (bVar1) {
    cVar5 = '\0';
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
    cVar5 = pUVar2[1].field_0x8;
  }
  if ((byte)(cVar5 - 2U) < 3) {
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                         (void *)0x0);
      if (!bVar1) {
        FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      }
    }
    UDS_CharStateData::GetData((ulong64)&local_198);
    bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_198,(void *)0x0);
    if (!bVar1) {
      local_190 = FGameplayTag::EmptyTag.TagName;
      uStack_188 = 0;
      local_168._8_8_ = (ulonglong)uStack_187 << 8;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      local_168.StateTag.TagName = FGameplayTag::EmptyTag.TagName;
      local_168.AddedCharDetailState = None;
      local_168.RemovedCharDetailState = None;
      local_168.AddedCharState = None;
      local_168.RemovedCharState = None;
      UpdateMaxMoveSpeedByCharState
                (this,(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>)local_198,&local_168);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CharStatusData::UpdateMaxMoveSpeed",0x26,Yes);
    pwVar7 = L"charStateData is nullptr.";
    uVar6 = 0x432;
  }
  else {
    if (cVar5 != '\x05') {
      return;
    }
    uVar3 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    UDS_EntityData::GetData((ulong64)&local_198,uVar3);
    bVar1 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_198,(void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_198);
      UpdateMaxMoveSpeedByMoveMode(this,pUVar2[3].field_0x1);
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CharStatusData::UpdateMaxMoveSpeed",0x26,Yes);
    pwVar7 = L"entityData is nullptr.";
    uVar6 = 0x43e;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// UpdateMaxMoveSpeedByCharState @ 14ba7dff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharStatusData::UpdateMaxMoveSpeedByCharState
          (UDS_CharStatusData *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  double dVar1;
  EDS_SwimStep EVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  FDS_CharacterBaseTableRow *pFVar8;
  UObject *pUVar9;
  UDS_SwimAbilityData *this_00;
  FDS_SwimStepInfo *pFVar10;
  UDS_CharStateData *pUVar11;
  FDS_MountBaseTableRow *pFVar12;
  FDS_StatusBattleCalculateTableRow *pFVar13;
  EDS_StatusType EVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_208 [32];
  uint uVar22;
  wchar_t *pwVar23;
  FWeakObjectPtr local_1c0;
  ulong64 local_1b8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_res10 = param_1.WeakPtr;
  bVar5 = UpdateMaxMoveSpeedBySpecialBuff(this);
  if (bVar5) {
    return;
  }
  bVar5 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar5) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_CharStatusData::UpdateMaxMoveSpeedByCharState",0x31,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_1a8.Ptr,0x450,L"InCharStateData is nullptr.");
    if ((void *)local_1a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1a8._padding_);
    return;
  }
  iVar6 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)iVar6,true);
  if (pFVar8 == (FDS_CharacterBaseTableRow *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_CharStatusData::UpdateMaxMoveSpeedByCharState",0x31,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_1a8.Ptr,0x457,L"characterBaseTable is nullptr. (%d)");
    if ((void *)local_1a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1a8._padding_);
    return;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  dVar3 = __real_3e45798ee2308c3a;
  if ((pUVar9[2].field_0x18 & 1) == 0) {
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if ((*(uint *)&pUVar9[2].field_0x18 >> 0x1c & 1) != 0) {
      pUVar11 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_1c0.ObjectIndex = 0x6d;
      bVar5 = UDS_CharStateData::HasCharDetailState(pUVar11,(EDS_CharDetailState *)&local_1c0);
      if (!bVar5) {
        iVar6 = UDS_MountManager::GetMountIdByMainPlayer();
        pFVar12 = FDS_MountBaseTableRow::Get((longlong)iVar6,true);
        if (pFVar12 == (FDS_MountBaseTableRow *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar7 = UDS_LogManager::GetInst();
          local_1a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1a8,"UDS_CharStatusData::UpdateMaxMoveSpeedByCharState",0x31,Yes);
          pwVar23 = L"mountBaseTable is nullptr.";
          uVar22 = 0x47e;
          goto LAB_14ba7e488;
        }
        fVar15 = pFVar12->StandardSpeed;
        pUVar11 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
        local_1c0.ObjectIndex = 0x67;
        bVar5 = UDS_CharStateData::HasCharDetailState(pUVar11,(EDS_CharDetailState *)&local_1c0);
        if (bVar5) {
          fVar15 = pFVar12->DashSpeed;
        }
        else {
          pUVar11 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
          local_1c0.ObjectIndex = 0x65;
          bVar5 = UDS_CharStateData::HasCharDetailState(pUVar11,(EDS_CharDetailState *)&local_1c0);
          if (bVar5) {
            fVar15 = pFVar12->StandardSprintSpeed;
          }
          else {
            pUVar11 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
            local_1c0.ObjectIndex = 99;
            bVar5 = UDS_CharStateData::HasCharDetailState(pUVar11,(EDS_CharDetailState *)&local_1c0)
            ;
            if (bVar5) {
              fVar15 = pFVar12->BackMoveSpeed;
            }
          }
        }
        dVar21 = (double)fVar15;
        fVar15 = GetMaxStatus(this,MountMoveSpeed);
        EVar14 = RateMountMoveSpeed;
        goto LAB_14ba7e59a;
      }
    }
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if ((pUVar9[2].field_0x18 & 0x20) == 0) {
      pUVar9 = FWeakObjectPtr::Get(&local_res10);
      if ((*(uint *)&pUVar9[2].field_0x18 >> 8 & 1) == 0) {
        fVar15 = GetMaxStatus(this,NonBattleBaseMoveSpeed);
        dVar21 = (double)fVar15;
        if ((double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            dVar3) {
          dVar21 = pFVar8->RunSpeed;
        }
        fVar15 = GetMaxStatus(this,NormalMoveSpeed);
        EVar14 = RateNormalMoveSpeed;
        goto LAB_14ba7e59a;
      }
      fVar15 = GetMaxStatus(this,BattleBaseMoveSpeed);
      dVar21 = (double)fVar15;
      dVar20 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    }
    else {
      local_1b8[0] = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      UDS_AbilityDataSet::GetAbilityData<UDS_ToggleSkillAbilityData>
                ((ulong64 *)&local_1c0,(EDS_AbilityTagType *)local_1b8);
      bVar5 = TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ToggleSkillAbilityData,FWeakObjectPtr> *)&local_1c0,
                         (void *)0x0);
      if (bVar5) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        local_1a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1a8,"UDS_CharStatusData::UpdateMaxMoveSpeedByCharState",0x31,Yes);
        pwVar23 = L"toggleSkillAbilityData is nullptr.";
        uVar22 = 0x49c;
        goto LAB_14ba7e488;
      }
      pUVar9 = FWeakObjectPtr::Get(&local_1c0);
      dVar21 = (double)*(float *)&pUVar9[3].field_0x10;
      uVar22 = SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar19 = (uint)((ulonglong)dVar21 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar19,uVar22) < dVar3 || (double)CONCAT44(uVar19,uVar22) == dVar3) {
        fVar15 = GetMaxStatus(this,BattleBaseMoveSpeed);
        dVar21 = (double)fVar15;
      }
      dVar20 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    }
    if (dVar20 <= dVar3) {
      dVar21 = pFVar8->BattleRunSpeed;
    }
    fVar15 = GetMaxStatus(this,BattleMoveSpeed);
    EVar14 = RateBattleMoveSpeed;
  }
  else {
    local_1b8[0] = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    UDS_AbilityDataSet::GetAbilityData<UDS_SwimAbilityData>
              ((ulong64 *)&local_1c0,(EDS_AbilityTagType *)local_1b8);
    bVar5 = TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_SwimAbilityData,FWeakObjectPtr> *)&local_1c0,(void *)0x0)
    ;
    if (bVar5) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_CharStatusData::UpdateMaxMoveSpeedByCharState",0x31,Yes);
      pwVar23 = L"swimAbilityData is nullptr.";
      uVar22 = 0x467;
LAB_14ba7e488:
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_1a8.Ptr,uVar22,pwVar23);
      if ((void *)local_1a8._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_1a8._padding_);
      return;
    }
    pUVar9 = FWeakObjectPtr::Get(&local_1c0);
    EVar2 = pUVar9[4].field_0x11;
    if (pUVar9[4].field_0x11 == Ready) {
      EVar2 = Swim;
    }
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get(&local_1c0);
    pFVar10 = UDS_SwimAbilityData::GetSwimStepInfo(this_00,EVar2);
    dVar21 = (double)pFVar10->SwimSpeed;
    fVar15 = GetMaxStatus(this,SwimMoveSpeed);
    EVar14 = RateSwimMoveSpeed;
  }
LAB_14ba7e59a:
  fVar16 = GetMaxStatus(this,EVar14);
  fVar17 = GetMaxStatus(this,RateAllMoveSpeed);
  dVar20 = this->MaxMoveSpeed;
  fVar18 = GetMaxStatus(this,AllMoveSpeed);
  dVar4 = __real_3eb0c6f7a0b5ed8d;
  dVar1 = (double)fVar18 + (double)fVar15 +
          ((double)(fVar16 + fVar17) * __real_3eb0c6f7a0b5ed8d + __real_3ff0000000000000) * dVar21;
  pFVar13 = FDS_StatusBattleCalculateTableRow::Get(0x69,true);
  if (pFVar13 == (FDS_StatusBattleCalculateTableRow *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_CharStatusData::UpdateMaxMoveSpeedByCharState",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_1a8.Ptr,0x4e6,L"statusBattleCalculateTable is nullptr.");
      if ((void *)local_1a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._padding_);
      }
    }
  }
  else {
    dVar21 = (double)pFVar13->CalculateLimitMax * dVar4 * dVar21;
    if (dVar1 <= dVar21) {
      dVar21 = dVar1;
    }
    if (dVar21 <= 0.0) {
      dVar21 = 0.0;
    }
    this->MaxMoveSpeed = dVar21;
    dVar21 = dVar21 - dVar20;
    if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      TMulticastDelegate<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>::Broadcast
                (&this->ChangedMaxMoveSpeedDelegate,&this->MaxMoveSpeed);
    }
  }
  return;
}

// UpdateMaxMoveSpeedByMoveMode @ 14ba7e750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharStatusData::UpdateMaxMoveSpeedByMoveMode(UDS_CharStatusData *this,EDS_MoveMode param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UObject *pUVar4;
  FDS_NpcBaseTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  FDS_StatusBattleCalculateTableRow *pFVar7;
  int iVar8;
  EDS_StatusType EVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_1c8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar3 = UpdateMaxMoveSpeedBySpecialBuff(this);
  if (bVar3) {
    return;
  }
  bVar3 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar3) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar3 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar4 + 4),
                       (void *)0x0);
    if (!bVar3) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 4));
      iVar8 = *(int *)&pUVar4[1].field_0xc;
      goto LAB_14ba7e7c6;
    }
  }
  iVar8 = 0;
LAB_14ba7e7c6:
  pFVar5 = FDS_NpcBaseTableRow::Get((longlong)iVar8,true);
  if (pFVar5 == (FDS_NpcBaseTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_CharStatusData::UpdateMaxMoveSpeedByMoveMode",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_188.Ptr,0x507,L"npcBaseTable is nullptr. (%d)");
      if ((void *)local_188._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_188._padding_);
      }
    }
  }
  else {
    if (param_1 == Walk) {
      uVar15 = SUB84(pFVar5->WalkSpeed,0);
      uVar16 = (undefined4)((ulonglong)pFVar5->WalkSpeed >> 0x20);
      fVar10 = GetMaxStatus(this,BattleMoveSpeed);
      EVar9 = RateBattleMoveSpeed;
    }
    else {
      uVar15 = SUB84(pFVar5->RunSpeed,0);
      uVar16 = (undefined4)((ulonglong)pFVar5->RunSpeed >> 0x20);
      fVar10 = GetMaxStatus(this,NormalMoveSpeed);
      EVar9 = RateNormalMoveSpeed;
    }
    fVar11 = GetMaxStatus(this,EVar9);
    fVar12 = GetMaxStatus(this,RateAllMoveSpeed);
    dVar1 = this->MaxMoveSpeed;
    fVar13 = GetMaxStatus(this,AllMoveSpeed);
    dVar14 = __real_3eb0c6f7a0b5ed8d;
    dVar2 = (double)fVar13 + (double)fVar10 +
            ((double)(fVar11 + fVar12) * __real_3eb0c6f7a0b5ed8d + __real_3ff0000000000000) *
            (double)CONCAT44(uVar16,uVar15);
    pFVar7 = FDS_StatusBattleCalculateTableRow::Get(0x69,true);
    if (pFVar7 == (FDS_StatusBattleCalculateTableRow *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_188._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_188,"UDS_CharStatusData::UpdateMaxMoveSpeedByMoveMode",0x30,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_188.Ptr,0x52a,L"statusBattleCalculateTable is nullptr.");
        if ((void *)local_188._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_188._padding_);
        }
      }
    }
    else {
      dVar14 = (double)pFVar7->CalculateLimitMax * dVar14 * (double)CONCAT44(uVar16,uVar15);
      if (dVar2 <= dVar14) {
        dVar14 = dVar2;
      }
      if (dVar14 <= 0.0) {
        dVar14 = 0.0;
      }
      this->MaxMoveSpeed = dVar14;
      dVar14 = dVar14 - dVar1;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        TMulticastDelegate<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->ChangedMaxMoveSpeedDelegate,&this->MaxMoveSpeed);
      }
    }
  }
  return;
}

// UpdateMaxMoveSpeedBySpecialBuff @ 14ba7ea80

bool __thiscall UDS_CharStatusData::UpdateMaxMoveSpeedBySpecialBuff(UDS_CharStatusData *this)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UObject *pUVar9;
  UClass *pUVar10;
  UDS_CharBuffData *this_02;
  FDS_BuffBaseTableRow *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  int local_res8 [2];
  EDS_SpecialBuffType local_res10 [2];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_48 [16];
  
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)local_48);
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = Z_Construct_UClass_UDS_CharBuffData_NoRegister();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar10->_padding_)) goto LAB_14ba7eadc;
  }
  pUVar9 = (UObject *)0x0;
LAB_14ba7eadc:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar6 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar6) {
    local_res8[0] = 0;
    this_02 = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_res18);
    local_res10[0] = SetMoveSpeed;
    bVar6 = UDS_CharBuffData::HasSpecialBuffInfo(this_02,local_res10,local_res8);
    if ((bVar6) &&
       (pFVar11 = FDS_BuffBaseTableRow::Get((longlong)local_res8[0],true),
       pFVar11 != (FDS_BuffBaseTableRow *)0x0)) {
      iVar3 = (pFVar11->BuffIndexType).ArrayNum;
      uVar12 = 0;
      if (0 < iVar3) {
        lVar14 = 0;
        do {
          uVar13 = ~uVar12 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar12 < (pFVar11->BuffIndexType).ArrayNum) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (((((pFVar11->BuffIndexType).AllocatorInstance.Data[lVar14] ==
                 (FScriptContainerElement)0x3) && (-1 < (int)uVar12)) &&
              ((int)uVar12 < (pFVar11->BuffIndex).ArrayNum)) &&
             ((int)uVar12 < (pFVar11->BuffValue).ArrayNum)) {
            uVar8 = 0;
            if ((int)uVar12 < (pFVar11->BuffIndex).ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            iVar4 = *(int *)((pFVar11->BuffIndex).AllocatorInstance.Data + lVar14 * 4);
            uVar8 = 0;
            if ((int)uVar12 < (pFVar11->BuffValue).ArrayNum) {
              uVar8 = uVar13;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            if (iVar4 == 0xfc2) {
              pdVar1 = &this->MaxMoveSpeed;
              dVar2 = *pdVar1;
              dVar15 = (double)*(int *)((pFVar11->BuffValue).AllocatorInstance.Data +
                                       (longlong)(int)uVar12 * 4);
              *pdVar1 = dVar15;
              dVar15 = dVar15 - dVar2;
              if (__real_3e45798ee2308c3a <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
              {
                TMulticastDelegate<void___cdecl(double_const_&),FDefaultDelegateUserPolicy>::
                Broadcast(&this->ChangedMaxMoveSpeedDelegate,pdVar1);
              }
              return true;
            }
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar3);
      }
    }
  }
  return false;
}

// UpdateMaxValue @ 14ba7ed90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_CharStatusData::UpdateMaxValue(UDS_CharStatusData *this)

{
  EDS_StatusType EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *this_00;
  UDS_CharStatusData *pUVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FDS_StatusTableRow *pFVar14;
  UDS_LogManager *pUVar15;
  FDS_StatusTableRow *pFVar16;
  FDS_StatusInfo *pFVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  uint uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *this_01;
  longlong lVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_508 [32];
  undefined1 local_4c8;
  undefined1 local_4c7 [3];
  uint local_4c4;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *local_4c0;
  longlong local_4b8;
  UDS_CharStatusData *local_4b0;
  FDS_StatusTableRow *local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  longlong *local_488;
  undefined1 auStack_480 [16];
  uint uStack_470;
  uint uStack_46c;
  int local_468;
  undefined4 uStack_464;
  undefined8 uStack_460;
  TMap<EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>_>
  *local_458;
  undefined2 local_450;
  FDestructionSentinel local_448;
  FDestructionSentinel local_430;
  longlong *local_418;
  longlong lStack_410;
  undefined1 local_408 [16];
  int local_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_508;
  this_01 = &this->StatusInfoMap;
  local_4c0 = this_01;
  local_4b0 = this;
  TSet<TTuple<enum_EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_418,
             (TSet<TTuple<EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
              *)this_01);
  fVar6 = __real_358637bd;
  local_450 = 0;
  stack0xfffffffffffffb88 = local_408;
  local_488 = local_418;
  auStack_480._0_8_ = lStack_410;
  local_468 = local_3f8;
  uStack_464 = uStack_3f4;
  uStack_460 = uStack_3f0;
  uVar18 = local_408._8_8_ >> 0x20;
  local_458 = this_01;
  if (local_408._12_4_ < *(int *)(local_408._0_8_ + 0x18)) {
    do {
      lVar21 = (longlong)(int)uVar18 * 0x100;
      lVar27 = *local_488;
      local_498 = lVar21;
      local_490 = lVar27;
      if (*(char *)(lVar21 + 0x18 + lVar27) != '\0') {
        pFVar14 = FDS_StatusTableRow::Get((longlong)*(int *)(lVar21 + 8 + lVar27),true);
        local_4a8 = pFVar14;
        if (pFVar14 == (FDS_StatusTableRow *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          if (pUVar15 != (UDS_LogManager *)0x0) {
            pUVar15 = UDS_LogManager::GetInst();
            local_3e8._padding_ = (longlong)pFVar14;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_3e8,"UDS_CharStatusData::UpdateMaxValue",0x22,Yes);
            UDS_LogManager::PrintLog
                      (pUVar15,1,Warning,local_3e8.Ptr,0x30b,L"Couldn\'t find StatusTableRow. (%d)")
            ;
            if ((FDS_StatusTableRow *)local_3e8._padding_ != (FDS_StatusTableRow *)0x0) {
              FMemory::Free((void *)local_3e8._padding_);
            }
          }
        }
        else if ((pFVar14->ID_RateStatusValue).ArrayNum == (pFVar14->ID_RateStatus).ArrayNum) {
          if (pFVar14->IsStatusType == false) {
            fVar28 = (float)*(int *)(lVar21 + 0xc + lVar27);
            *(float *)(lVar21 + 0x10 + lVar27) = fVar28;
            TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                      ((TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                       (lVar27 + 0x98 + lVar21),fVar28);
            TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy>::Broadcast
                      ((TMulticastDelegate<void___cdecl(float,float),FDefaultDelegateUserPolicy> *)
                       (lVar27 + 0xd8 + lVar21),(float)*(int *)(lVar21 + 0x14 + lVar27),
                       *(float *)(lVar21 + 0x10 + lVar27));
          }
          else {
            pFVar22 = (pFVar14->ID_AddStatus).AllocatorInstance.Data;
            fVar28 = 0.0;
            iVar26 = (pFVar14->ID_AddStatus).ArrayNum;
            pFVar3 = pFVar22 + (longlong)iVar26 * 4;
            while( true ) {
              if ((pFVar14->ID_AddStatus).ArrayNum != iVar26) {
                local_4c8 = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_4c8);
              }
              if ((pFVar22 == pFVar3) || (*(EDS_StatusType *)pFVar22 == None)) break;
              iVar11 = GetOriginStatus(this,*(EDS_StatusType *)pFVar22);
              pFVar22 = pFVar22 + 4;
              fVar28 = fVar28 + (float)iVar11;
            }
            local_4a0 = (longlong)(pFVar14->ID_RateStatusValue).ArrayNum;
            local_4c4 = 0;
            local_4b8 = 0;
            fVar29 = 0.0;
            if (0 < local_4a0) {
LAB_14ba7f0a0:
              lVar27 = local_4b8;
              uVar25 = local_4c4;
              uVar20 = ~local_4c4 >> 0x1f;
              uVar12 = 0;
              if ((int)local_4c4 < (pFVar14->ID_RateStatusValue).ArrayNum) {
                uVar12 = uVar20;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(int *)((pFVar14->ID_RateStatusValue).AllocatorInstance.Data + lVar27 * 4) != 0)
              {
                uVar12 = 0;
                if ((int)uVar25 < (pFVar14->ID_RateStatus).ArrayNum) {
                  uVar12 = uVar20;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(int *)((pFVar14->ID_RateStatus).AllocatorInstance.Data + lVar27 * 4) != 0) {
                  uVar12 = 0;
                  if ((int)uVar25 < (pFVar14->ID_RateStatusValue).ArrayNum) {
                    uVar12 = uVar20;
                  }
                  if ((uVar12 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  pUVar7 = local_4b0;
                  EVar1 = *(EDS_StatusType *)
                           ((pFVar14->ID_RateStatusValue).AllocatorInstance.Data + lVar27 * 4);
                  if (*(int *)&(local_4b0->StatusInfoMap).field_0x8 !=
                      *(int *)(&this_01->field_0x0 + 0x34)) {
                    puVar19 = &this_01->field_0x38;
                    if (*(undefined1 **)(&this_01->field_0x38 + 8) != (undefined1 *)0x0) {
                      puVar19 = *(undefined1 **)(&this_01->field_0x38 + 8);
                    }
                    iVar26 = *(int *)(puVar19 +
                                     (ulonglong)(*(int *)&this_01->field_0x48 - Hp & EVar1) * 4);
                    if (iVar26 != -1) {
                      do {
                        if (*(EDS_StatusType *)
                             ((longlong)iVar26 * 0x100 + *(longlong *)&this_01->field_0x0) == EVar1)
                        {
                          pFVar17 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                                    ::FindChecked(this_01,EVar1);
                          iVar26 = pFVar17->OriginValue;
                          goto LAB_14ba7f201;
                        }
                        iVar26 = *(int *)((longlong)iVar26 * 0x100 + 0xf8 +
                                         *(longlong *)&this_01->field_0x0);
                      } while (iVar26 != -1);
                    }
                  }
                  iVar26 = -1;
LAB_14ba7f201:
                  if ((float)iVar26 != 0.0) {
                    uVar12 = 0;
                    if ((int)uVar25 < (pFVar14->ID_RateStatus).ArrayNum) {
                      uVar12 = uVar20;
                    }
                    if ((uVar12 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    iVar11 = GetOriginStatus(pUVar7,*(EDS_StatusType *)
                                                     ((pFVar14->ID_RateStatus).AllocatorInstance.
                                                      Data + lVar27 * 4));
                    uVar12 = 0;
                    if ((int)uVar25 < (pFVar14->ID_RateStatus).ArrayNum) {
                      uVar12 = uVar20;
                    }
                    if ((uVar12 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pFVar16 = FDS_StatusTableRow::Get
                                        ((longlong)
                                         *(int *)((pFVar14->ID_RateStatus).AllocatorInstance.Data +
                                                 lVar27 * 4),true);
                    pUVar7 = local_4b0;
                    this_00 = local_4c0;
                    if (pFVar16 != (FDS_StatusTableRow *)0x0) {
                      pFVar22 = (pFVar16->ID_AddRateStatus).AllocatorInstance.Data;
                      iVar2 = (pFVar16->ID_AddRateStatus).ArrayNum;
                      pFVar3 = pFVar22 + (longlong)iVar2 * 4;
LAB_14ba7f3c1:
                      do {
                        if ((pFVar16->ID_AddRateStatus).ArrayNum != iVar2) {
                          local_4c7[0] = 0;
                          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>
                          ::operator()(local_4c7);
                        }
                        if ((pFVar22 == pFVar3) ||
                           (EVar1 = *(EDS_StatusType *)pFVar22, EVar1 == None)) goto LAB_14ba7f461;
                        if (*(int *)&(pUVar7->StatusInfoMap).field_0x8 !=
                            *(int *)(&this_00->field_0x0 + 0x34)) {
                          puVar19 = &this_00->field_0x38;
                          if (*(undefined1 **)(&this_00->field_0x38 + 8) != (undefined1 *)0x0) {
                            puVar19 = *(undefined1 **)(&this_00->field_0x38 + 8);
                          }
                          iVar13 = *(int *)(puVar19 +
                                           (ulonglong)(*(int *)&this_00->field_0x48 - Hp & EVar1) *
                                           4);
                          if (iVar13 != -1) {
                            do {
                              if (*(EDS_StatusType *)
                                   ((longlong)iVar13 * 0x100 + *(longlong *)&this_00->field_0x0) ==
                                  EVar1) {
                                pFVar17 = TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
                                          ::FindChecked(this_00,EVar1);
                                iVar11 = iVar11 + pFVar17->OriginValue;
                                pFVar22 = pFVar22 + 4;
                                goto LAB_14ba7f3c1;
                              }
                              iVar13 = *(int *)((longlong)iVar13 * 0x100 + 0xf8 +
                                               *(longlong *)&this_00->field_0x0);
                            } while (iVar13 != -1);
                          }
                        }
                        iVar11 = iVar11 + -1;
                        pFVar22 = pFVar22 + 4;
                      } while( true );
                    }
                    pUVar15 = UDS_LogManager::GetInst();
                    if (pUVar15 != (UDS_LogManager *)0x0) {
                      pUVar15 = UDS_LogManager::GetInst();
                      uVar12 = 0;
                      if ((int)uVar25 < (pFVar14->ID_RateStatus).ArrayNum) {
                        uVar12 = uVar20;
                      }
                      if ((uVar12 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      local_1a8._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_1a8,"UDS_CharStatusData::UpdateMaxValue",0x22,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar15,1,Warning,local_1a8.Ptr,0x344,
                                 L"Couldn\'t find StatusTableRow. (%d)");
                      if ((void *)local_1a8._padding_ != (void *)0x0) {
                        FMemory::Free((void *)local_1a8._padding_);
                      }
                    }
                  }
                  goto LAB_14ba7f48d;
                }
              }
            }
LAB_14ba7f4a8:
            lVar21 = local_490;
            lVar27 = local_498;
            pTVar23 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                      (local_490 + 0x98 + local_498);
            *(float *)(local_498 + 0x10 + local_490) =
                 (float)*(int *)(local_498 + 0xc + local_490) + fVar28 + fVar29;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,
                       (FWriteAccessScope *)&local_448);
            pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + 1;
            bVar8 = false;
            uVar25 = (pTVar23->InvocationList).ArrayNum - 1;
            if (-1 < (int)uVar25) {
              lVar24 = (longlong)(int)uVar25 << 4;
              bVar8 = false;
              do {
                uVar12 = 0;
                if ((int)uVar25 < (pTVar23->InvocationList).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar3 = (pTVar23->InvocationList).AllocatorInstance.Data;
                if (((*(int *)(pFVar3 + lVar24 + 8) == 0) ||
                    (plVar4 = *(longlong **)(pFVar3 + lVar24), plVar4 == (longlong *)0x0)) ||
                   (cVar10 = (**(code **)(*plVar4 + 0x68))(), cVar10 == '\0')) {
                  bVar8 = true;
                }
                lVar24 = lVar24 + -0x10;
                uVar25 = uVar25 - 1;
              } while (-1 < (int)uVar25);
            }
            pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + -1;
            if (bVar8) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        (pTVar23,false);
            }
            if (local_448.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
            }
            pTVar23 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar21 + 0xd8 + lVar27)
            ;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,
                       (FWriteAccessScope *)&local_430);
            pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + 1;
            bVar8 = false;
            uVar25 = (pTVar23->InvocationList).ArrayNum - 1;
            if (-1 < (int)uVar25) {
              lVar24 = (longlong)(int)uVar25 << 4;
              bVar8 = false;
              do {
                uVar12 = 0;
                if ((int)uVar25 < (pTVar23->InvocationList).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar3 = (pTVar23->InvocationList).AllocatorInstance.Data;
                if (((*(int *)(pFVar3 + lVar24 + 8) == 0) ||
                    (plVar4 = *(longlong **)(pFVar3 + lVar24), plVar4 == (longlong *)0x0)) ||
                   (cVar10 = (**(code **)(*plVar4 + 0x68))(), cVar10 == '\0')) {
                  bVar8 = true;
                }
                lVar24 = lVar24 + -0x10;
                uVar25 = uVar25 - 1;
              } while (-1 < (int)uVar25);
            }
            pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + -1;
            if (bVar8) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        (pTVar23,false);
            }
            if (local_430.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
            }
            *(undefined1 *)(lVar27 + 0x18 + lVar21) = 0;
            this_01 = local_4c0;
            this = local_4b0;
          }
        }
        else {
          pUVar15 = UDS_LogManager::GetInst();
          if (pUVar15 != (UDS_LogManager *)0x0) {
            pUVar15 = UDS_LogManager::GetInst();
            local_2c8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_2c8,"UDS_CharStatusData::UpdateMaxValue",0x22,Yes);
            UDS_LogManager::PrintLog
                      (pUVar15,1,Warning,local_2c8.Ptr,0x312,L"StatusTableRow is invalid. (%d)");
            if ((void *)local_2c8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_2c8._padding_);
            }
          }
        }
      }
      iVar26 = 1;
      uStack_470 = uStack_470 & ~auStack_480._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_480);
      uVar18 = (ulonglong)uStack_46c;
    } while ((int)uStack_46c < *(int *)(auStack_480._8_8_ + 0x18));
    if (((char)local_450 != '\0') && (local_450._1_1_ != '\0')) {
      uVar25 = *(int *)(&local_458->field_0x0 + 8) - *(int *)(&local_458->field_0x0 + 0x34);
      if (3 < uVar25) {
        uVar18 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
        lVar27 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar26 = 1 << ((byte)lVar27 & 0x1f);
      }
      if (((0 < (int)uVar25) && (*(int *)&local_458->field_0x48 < iVar26)) ||
         (iVar26 < *(int *)&local_458->field_0x48)) {
        *(int *)&local_458->field_0x48 = iVar26;
        TSet<TTuple<enum_EDS_StatusType,FDS_StatusInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_458);
      }
    }
  }
  return;
LAB_14ba7f461:
  pFVar14 = local_4a8;
  this_01 = local_4c0;
  lVar27 = local_4b8;
  uVar25 = local_4c4;
  if (0 < iVar11) {
    fVar29 = fVar29 + (float)iVar11 * fVar6 * (float)iVar26;
  }
LAB_14ba7f48d:
  local_4c4 = uVar25 + 1;
  local_4b8 = lVar27 + 1;
  if (local_4a0 <= local_4b8) goto LAB_14ba7f4a8;
  goto LAB_14ba7f0a0;
}

// UpdateSpawnCharacterResponse @ 14ba81270

void __thiscall
UDS_CharStatusData::UpdateSpawnCharacterResponse
          (UDS_CharStatusData *this,SpawnCharacterResponse *param_1)

{
  StatusIntegers *pSVar1;
  StatusFloats *pSVar2;
  StatusIntegers *pSVar3;
  StatusFloats *pSVar4;
  
  pSVar1 = (param_1->_impl_).current_status_;
  pSVar3 = &server_msg::_StatusIntegers_default_instance_._instance;
  if (pSVar1 != (StatusIntegers *)0x0) {
    pSVar3 = pSVar1;
  }
  SetCurrentStatusByStatusIntegers(this,pSVar3);
  pSVar2 = (param_1->_impl_).max_status_;
  pSVar4 = &server_msg::_StatusFloats_default_instance_._instance;
  if (pSVar2 != (StatusFloats *)0x0) {
    pSVar4 = pSVar2;
  }
  SetMaxStatusByStatusFloats(this,pSVar4);
  return;
}

// UpdateSpawnNpcResponse @ 14ba813b0

void __thiscall
UDS_CharStatusData::UpdateSpawnNpcResponse(UDS_CharStatusData *this,SpawnNpcResponse *param_1)

{
  NpcData *pNVar1;
  StatusIntegers *pSVar2;
  StatusFloats *pSVar3;
  NpcData *pNVar4;
  StatusIntegers *pSVar5;
  StatusFloats *pSVar6;
  
  pNVar1 = (param_1->_impl_).npc_data_;
  pNVar4 = &server_msg::_NpcData_default_instance_._instance;
  if (pNVar1 != (NpcData *)0x0) {
    pNVar4 = pNVar1;
  }
  pSVar2 = (pNVar4->_impl_).current_status_;
  pSVar5 = &server_msg::_StatusIntegers_default_instance_._instance;
  if (pSVar2 != (StatusIntegers *)0x0) {
    pSVar5 = pSVar2;
  }
  SetCurrentStatusByStatusIntegers(this,pSVar5);
  pNVar1 = (param_1->_impl_).npc_data_;
  pNVar4 = &server_msg::_NpcData_default_instance_._instance;
  if (pNVar1 != (NpcData *)0x0) {
    pNVar4 = pNVar1;
  }
  pSVar3 = (pNVar4->_impl_).max_status_;
  pSVar6 = &server_msg::_StatusFloats_default_instance_._instance;
  if (pSVar3 != (StatusFloats *)0x0) {
    pSVar6 = pSVar3;
  }
  SetMaxStatusByStatusFloats(this,pSVar6);
  return;
}

