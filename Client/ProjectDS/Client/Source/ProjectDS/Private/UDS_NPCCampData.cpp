// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b535220

UClass * __cdecl UDS_NPCCampData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCCampData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCCampData",
               &Z_Registration_Info_UClass_UDS_NPCCampData.InnerSingleton,
               StaticRegisterNativesUDS_NPCCampData,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCCampData>,InternalVTableHelperCtorCaller<UDS_NPCCampData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCCampData.InnerSingleton;
}

// UDS_NPCCampData @ 14b538230

UDS_NPCCampData * __thiscall
UDS_NPCCampData::UDS_NPCCampData(UDS_NPCCampData *this,FVTableHelper *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCCampData__6B_;
  *(undefined8 *)&this->CampSeatInfoMap = 0;
  *(undefined8 *)&(this->CampSeatInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CampSeatInfoMap).field_0x20 = 0;
  this->OwnerPlayerUID = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CampSeatInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x48 = 0;
  this->CampEndTime = 0.0;
  this->OwnerCampPower = 0;
  this->CampTID = 0;
  return this;
}

// UDS_NPCCampData @ 14b5382b0

UDS_NPCCampData * __thiscall
UDS_NPCCampData::UDS_NPCCampData(UDS_NPCCampData *this,FObjectInitializer *param_1)

{
  UDS_NPCDataBase::UDS_NPCDataBase((UDS_NPCDataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NPCCampData__6B_;
  *(undefined8 *)&this->CampSeatInfoMap = 0;
  *(undefined8 *)&(this->CampSeatInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CampSeatInfoMap).field_0x20 = 0;
  this->OwnerPlayerUID = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CampSeatInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x48 = 0;
  this->CampEndTime = 0.0;
  this->OwnerCampPower = 0;
  this->CampTID = 0;
  return this;
}

// ~UDS_NPCCampData @ 14b538ec0

void __thiscall UDS_NPCCampData::~UDS_NPCCampData(UDS_NPCCampData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NPCCampData__6B_;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CampSeatInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CampSeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CampSeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CampSeatInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CampSeatInfoMap);
  UDS_NPCDataBase::~UDS_NPCDataBase((UDS_NPCDataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b53a150

UClass * __cdecl UDS_NPCCampData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NPCCampData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NPCCampData",
               &Z_Registration_Info_UClass_UDS_NPCCampData.InnerSingleton,
               StaticRegisterNativesUDS_NPCCampData,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NPCCampData>,InternalVTableHelperCtorCaller<UDS_NPCCampData>,
               local_res8,UDS_NPCDataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NPCCampData.InnerSingleton;
}

// StaticRegisterNativesUDS_NPCCampData @ 14b53a950

void __cdecl UDS_NPCCampData::StaticRegisterNativesUDS_NPCCampData(void)

{
  return;
}

// Created @ 14ba9d6d0

void __thiscall UDS_NPCCampData::Created(UDS_NPCCampData *this)

{
  return;
}

// Deleted @ 14ba9dca0

void __thiscall UDS_NPCCampData::Deleted(UDS_NPCCampData *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014ba9dca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2c8))();
  return;
}

// GetAbleCampSeatInfoArray @ 14baa3550

TArray<FDS_CampSeatInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NPCCampData::GetAbleCampSeatInfoArray
          (UDS_NPCCampData *this,
          TArray<FDS_CampSeatInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CampSeatInfoMap).field_0x10;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar5 = *(int *)&(this->CampSeatInfoMap).field_0x28;
  uStack_44 = 1;
  iStack_48 = 0;
  local_30 = iStack_48;
  iStack_34 = 0;
  if (iVar5 != 0) {
    puVar8 = *(uint **)&(this->CampSeatInfoMap).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)TStack_70.Array;
    }
    uVar2 = *puVar8;
    local_30 = 0;
    iStack_48 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14baa35fb;
      uVar2 = puVar8[lVar7 + 1];
    }
    uStack_44 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar7;
    if (iVar5 < iStack_34) {
      iStack_34 = iVar5;
    }
  }
LAB_14baa35fb:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70._padding_ = CONCAT44(uStack_44,iStack_48);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = &this->CampSeatInfoMap;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar5) {
    do {
      lVar7 = (longlong)TStack_70.CurrentBitIndex * 0x38 + *(longlong *)&this->CampSeatInfoMap;
      if (*(longlong *)(lVar7 + 0x28) == 0) {
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        lVar6 = (longlong)iVar5;
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        uVar4 = *(undefined8 *)(lVar7 + 0x10);
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + lVar6 * 0x28) = *(undefined8 *)(lVar7 + 8);
        *(undefined8 *)(pFVar3 + lVar6 * 0x28 + 8) = uVar4;
        uVar4 = *(undefined8 *)(lVar7 + 0x20);
        *(undefined8 *)(pFVar3 + lVar6 * 0x28 + 0x10) = *(undefined8 *)(lVar7 + 0x18);
        *(undefined8 *)(pFVar3 + lVar6 * 0x28 + 0x10 + 8) = uVar4;
        *(undefined8 *)(pFVar3 + lVar6 * 0x28 + 0x20) = *(undefined8 *)(lVar7 + 0x28);
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetCampRemainTime @ 14baa5050

double __thiscall UDS_NPCCampData::GetCampRemainTime(UDS_NPCCampData *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->CampEndTime;
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  return dVar1 - dVar2;
}

// GetCampSeatInfoByIndex @ 14baa5080

bool __thiscall
UDS_NPCCampData::GetCampSeatInfoByIndex
          (UDS_NPCCampData *this,int *param_1,FDS_CampSeatInfo *param_2)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  FDS_CampSeatInfo *pFVar6;
  undefined1 *puVar7;
  
  uVar1 = *param_1;
  if (*(int *)&(this->CampSeatInfoMap).field_0x8 != *(int *)&(this->CampSeatInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->CampSeatInfoMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CampSeatInfoMap).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->CampSeatInfoMap).field_0x48 - 1U & uVar1)
                              * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->CampSeatInfoMap;
      do {
        if (*(uint *)((longlong)iVar5 * 0x38 + lVar2) == uVar1) {
          pFVar6 = TMapBase<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
                                  *)&this->CampSeatInfoMap,uVar1);
          uVar4 = *(undefined4 *)&pFVar6->field_0x4;
          dVar3 = (pFVar6->Position).field0_0x0._s_0.X;
          param_2->Index = pFVar6->Index;
          *(undefined4 *)&param_2->field_0x4 = uVar4;
          (param_2->Position).field0_0x0._s_0.X = dVar3;
          dVar3 = (pFVar6->Position).field0_0x0._s_0.Z;
          (param_2->Position).field0_0x0._s_0.Y = (pFVar6->Position).field0_0x0._s_0.Y;
          (param_2->Position).field0_0x0._s_0.Z = dVar3;
          param_2->OccupantEntityID = pFVar6->OccupantEntityID;
          return true;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x38 + 0x30 + lVar2);
      } while (iVar5 != -1);
    }
  }
  return false;
}

// GetData @ 14baa7300

TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr> __cdecl UDS_NPCCampData::GetData(ulong64 param_1)

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
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_NPCCampData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa73a6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa73a6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_NPCCampData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetOccupantCount @ 14baae930

int __thiscall UDS_NPCCampData::GetOccupantCount(UDS_NPCCampData *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMap<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iVar5 = 0;
  iVar2 = *(int *)&(this->CampSeatInfoMap).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CampSeatInfoMap).field_0x10;
  iStack_38 = 0;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->CampSeatInfoMap).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_60.Array;
    }
    uVar3 = *puVar6;
    local_20 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_14baae9ca;
      uVar3 = puVar6[lVar4 + 1];
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_24 = local_20 + -1 + (int)lVar4;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_14baae9ca:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = &this->CampSeatInfoMap;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < iVar2) {
    do {
      iVar2 = iVar5 + 1;
      if (*(longlong *)
           ((longlong)TStack_60.CurrentBitIndex * 0x38 + 0x28 + *(longlong *)&this->CampSeatInfoMap)
          == 0) {
        iVar2 = iVar5;
      }
      iVar5 = iVar2;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return iVar5;
}

// InitByEntityInfo @ 14bab4140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NPCCampData::InitByEntityInfo(UDS_NPCCampData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [8];
  TArray<FDS_CampBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this->CampTID = 0;
  iVar4 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  FDS_CampBaseTableRow::GetAll(&local_160);
  iVar6 = local_160.ArrayNum;
  pFVar1 = local_160.AllocatorInstance.Data + (longlong)iVar6 * 8;
  uVar7 = local_160._8_8_;
  FVar8.Data = local_160.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar6) {
      local_168[0] = 0;
      `TCheckedPointerIterator<FDS_CampBaseTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_168);
      uVar7 = local_160._8_8_;
    }
    if (FVar8.Data == pFVar1) goto LAB_14bab41cb;
    if (*(int *)(*(longlong *)FVar8.Data + 0x14) == iVar4) break;
    FVar8.Data = FVar8.Data + 8;
  }
  this->CampTID = *(int *)(*(longlong *)FVar8.Data + 8);
LAB_14bab41cb:
  if (this->CampTID == 0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NPCCampData::InitByEntityInfo",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x49,L"Couldn\'t find CampBaseTable.")
      ;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3030594267690041270>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\NPC\\DS_NPCCampData.cpp"
                       ,0x4a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  return;
}

// IsInteractionAvailable @ 14bab8ae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_NPCCampData::IsInteractionAvailable(UDS_NPCCampData *this,ulong64 *param_1)

{
  int *piVar1;
  TMap<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  FDS_EntityBase *pFVar12;
  UObject *pUVar13;
  FDS_PartyRepo *pFVar14;
  FDS_PartyRepo *pFVar15;
  UDS_DataManager *pUVar16;
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar17;
  uint uVar18;
  FDS_PartyRepo *pFVar19;
  uint *puVar20;
  FWeakObjectPtr local_res18;
  undefined4 local_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
  *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint local_30;
  
  pFVar12 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar12 == (FDS_EntityBase *)0x0) {
LAB_14bab8d9c:
    bVar8 = false;
  }
  else {
    if (pFVar12->EntityType == MainCharacter) {
      UDS_PlayerData::GetData((ulong64)&local_res18,*param_1,false);
      bVar8 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res18,(void *)0x0);
      if (bVar8) goto LAB_14bab8d9c;
      pUVar13 = FWeakObjectPtr::Get(&local_res18);
      if (*(ulong64 *)&pUVar13[6].field_0x8 != this->OwnerPlayerUID) {
        pFVar19 = (FDS_PartyRepo *)0x0;
        uVar18 = 0;
        pFVar15 = TDS_Singleton<FDS_PartyRepo>::Inst;
        if (TDS_Singleton<FDS_PartyRepo>::Inst == (FDS_PartyRepo *)0x0) {
          pFVar14 = ::operator_new(0xe0);
          pFVar15 = pFVar19;
          if (pFVar14 != (FDS_PartyRepo *)0x0) {
            memset(pFVar14,0,0xe0);
            pFVar15 = FDS_PartyRepo::FDS_PartyRepo(pFVar14);
          }
          TDS_Singleton<FDS_PartyRepo>::Inst = pFVar15;
          pUVar16 = UDS_DataManager::GetInst();
          pFVar14 = TDS_Singleton<FDS_PartyRepo>::Inst;
          if (pUVar16 == (UDS_DataManager *)0x0) {
            if (TDS_Singleton<FDS_PartyRepo>::Inst != (FDS_PartyRepo *)0x0) {
              FDS_PartyInfo::~FDS_PartyInfo(&TDS_Singleton<FDS_PartyRepo>::Inst->PartyInfo);
              ::operator_delete(pFVar14,0xe0);
            }
            TDS_Singleton<FDS_PartyRepo>::Inst = (FDS_PartyRepo *)0x0;
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4219184397653377064>,true,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_Singleton.h"
                               ,0x28,"false");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            pFVar15 = &TDS_Singleton<FDS_PartyRepo>::Empty;
          }
          else {
            iVar10 = (pUVar16->RepoArray).ArrayNum;
            piVar1 = &(pUVar16->RepoArray).ArrayMax;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&(pUVar16->RepoArray).AllocatorInstance,piVar1);
            }
            (pUVar16->RepoArray).ArrayNum = iVar10 + 1;
            *(FDS_PartyRepo **)((pUVar16->RepoArray).AllocatorInstance.Data + (longlong)iVar10 * 8)
                 = pFVar15;
            pFVar15 = TDS_Singleton<FDS_PartyRepo>::Inst;
          }
        }
        bVar8 = FDS_PartyInfo::IsPartyMemeber(&pFVar15->PartyInfo,this->OwnerPlayerUID);
        if (!bVar8) {
          this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
          pFVar17 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID
                              (this_00,this->OwnerPlayerUID);
          if (pFVar17->PlayerUID < 1) {
            pTVar2 = &this->CampSeatInfoMap;
            uVar4 = *(uint *)&(this->CampSeatInfoMap).field_0x28;
            TStack_70.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)&(this->CampSeatInfoMap).field_0x10;
            uStack_44 = 1;
            pFVar15 = pFVar19;
            local_30 = uVar18;
            if (uVar4 != 0) {
              puVar20 = *(uint **)&(this->CampSeatInfoMap).field_0x20;
              pFVar15 = (FDS_PartyRepo *)(ulonglong)uVar4;
              if (puVar20 == (uint *)0x0) {
                puVar20 = (uint *)TStack_70.Array;
              }
              uVar11 = *puVar20;
              pFVar14 = pFVar19;
              local_30 = 0;
              uVar18 = 0;
              while (uVar11 == 0) {
                iVar10 = (int)pFVar19;
                local_30 = (int)pFVar14 + 0x20;
                pFVar14 = (FDS_PartyRepo *)(ulonglong)local_30;
                uVar18 = iVar10 + 1;
                pFVar19 = (FDS_PartyRepo *)(ulonglong)uVar18;
                if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
                goto LAB_14bab8cf9;
                uVar11 = puVar20[(longlong)iVar10 + 1];
              }
              uStack_44 = -uVar11 & uVar11;
              uVar3 = (ulonglong)uStack_44 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              uVar11 = (local_30 - 1) + (int)lVar5;
              if ((int)uVar4 < (int)uVar11) {
                uVar11 = uVar4;
              }
              pFVar15 = (FDS_PartyRepo *)(ulonglong)uVar11;
            }
LAB_14bab8cf9:
            uStack_38 = 0xffffffff;
            uStack_34 = (uint)pFVar15;
            TStack_70.UnvisitedBitMask = 0xffffffff;
            TStack_70._28_4_ = local_7c;
            TStack_70.BaseBitIndex = local_30;
            local_50 = pTVar2;
            uStack_48 = uVar18;
            local_40 = (undefined1 *)TStack_70.Array;
            TStack_70._padding_._0_4_ = uVar18;
            TStack_70._padding_._4_4_ = uStack_44;
            TStack_70.CurrentBitIndex = uStack_34;
            if ((int)uStack_34 < (int)uVar4) {
              do {
                if (*(longlong *)((longlong)(int)pFVar15 * 0x38 + 0x28 + *(longlong *)pTVar2) == 0)
                goto LAB_14bab8d98;
                TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
                pFVar15 = (FDS_PartyRepo *)(ulonglong)(uint)TStack_70.CurrentBitIndex;
              } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
            }
            dVar7 = UDS_TimeUtilManager::GetCurrentServerTime();
            return dVar7 < this->CampEndTime;
          }
        }
      }
    }
LAB_14bab8d98:
    bVar8 = true;
  }
  return bVar8;
}

// IsMyCamp @ 14baba360

bool __thiscall UDS_NPCCampData::IsMyCamp(UDS_NPCCampData *this,ulong64 *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)local_res18,*param_1,false);
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    return *(ulong64 *)&pUVar2[6].field_0x8 == this->OwnerPlayerUID;
  }
  return false;
}

// ResetData @ 14bac9a80

void __thiscall UDS_NPCCampData::ResetData(UDS_NPCCampData *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this->OwnerPlayerUID = 0;
  bVar3 = 1 < *(int *)&(this->CampSeatInfoMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
                      *)&this->CampSeatInfoMap);
  }
  puVar1 = &(this->CampSeatInfoMap).field_0xc;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->CampSeatInfoMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->CampSeatInfoMap).field_0x2c;
  *(undefined4 *)&(this->CampSeatInfoMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CampSeatInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CampSeatInfoMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->CampSeatInfoMap).field_0x48 = 1;
    TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
              *)&this->CampSeatInfoMap);
  }
  this->CampEndTime = 0.0;
  this->OwnerCampPower = 0;
  this->CampTID = 0;
  return;
}

// SetOccupantEntityID @ 14bacdf10

bool __thiscall
UDS_NPCCampData::SetOccupantEntityID(UDS_NPCCampData *this,int *param_1,ulong64 *param_2)

{
  uint uVar1;
  ulong64 uVar2;
  int iVar3;
  FDS_CampSeatInfo *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = *param_1;
  if (*(int *)&(this->CampSeatInfoMap).field_0x8 != *(int *)&(this->CampSeatInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CampSeatInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CampSeatInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->CampSeatInfoMap).field_0x48 - 1U & uVar1)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x38 + *(longlong *)&this->CampSeatInfoMap) == uVar1) {
          uVar2 = *param_2;
          pFVar4 = TMapBase<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
                                  *)&this->CampSeatInfoMap,uVar1);
          pFVar4->OccupantEntityID = uVar2;
          UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
          return true;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x38 + 0x30 + *(longlong *)&this->CampSeatInfoMap);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// UpdateByCampInfo @ 14bad60e0

void __thiscall UDS_NPCCampData::UpdateByCampInfo(UDS_NPCCampData *this,CampInfo *param_1)

{
  int iVar1;
  Vector *pVVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 local_58 [2];
  TVector<double>_u_0 local_50;
  undefined8 local_38;
  
  this->OwnerPlayerUID = (param_1->_impl_).player_uid_;
  iVar1 = *(int *)&(param_1->_impl_).seats_.field_0x8;
  lVar4 = 0;
  TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
           *)&this->CampSeatInfoMap);
  TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
             *)&this->CampSeatInfoMap,iVar1);
  if (0 < iVar1) {
    local_68 = local_58;
    local_60 = local_58;
    do {
      uVar3 = *(ulonglong *)&(param_1->_impl_).seats_;
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulonglong *)(uVar3 + 7 + lVar4 * 8);
      }
      local_38 = 0;
      local_50._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_50._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_50._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_58[0] = *(undefined4 *)(uVar3 + 0x28);
      if ((*(byte *)(uVar3 + 0x10) & 1) != 0) {
        pVVar2 = &_Vector_default_instance_._instance;
        if (*(Vector **)(uVar3 + 0x18) != (Vector *)0x0) {
          pVVar2 = *(Vector **)(uVar3 + 0x18);
        }
        DS_Util::SetFVector((TVector<double> *)&local_50._s_0,pVVar2);
      }
      local_38 = *(undefined8 *)(uVar3 + 0x20);
      TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&,FDS_CampSeatInfo_&>_>
                ((TSet<TTuple<int,FDS_CampSeatInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>,FDefaultSetAllocator>
                  *)&this->CampSeatInfoMap,
                 (TPairInitializer<int_&,FDS_CampSeatInfo_&> *)&stack0x00000008,(bool *)&local_68);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
  }
  this->CampEndTime = (param_1->_impl_).camp_end_time_;
  this->OwnerCampPower = (param_1->_impl_).camp_owner_power_;
  return;
}

