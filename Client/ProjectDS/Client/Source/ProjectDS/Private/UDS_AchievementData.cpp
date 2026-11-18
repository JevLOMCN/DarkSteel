// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b403030

UClass * __cdecl UDS_AchievementData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AchievementData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AchievementData",
               &Z_Registration_Info_UClass_UDS_AchievementData.InnerSingleton,
               StaticRegisterNativesUDS_AchievementData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AchievementData>,
               InternalVTableHelperCtorCaller<UDS_AchievementData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AchievementData.InnerSingleton;
}

// UDS_AchievementData @ 14b406bb0

UDS_AchievementData * __thiscall
UDS_AchievementData::UDS_AchievementData(UDS_AchievementData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AchievementData__6B_;
  this->GroupID = 0;
  this->TotalCount = 0;
  this->GroupStep = 0;
  this->State = None;
  (this->AchievementSymbolData).Object = (FDS_AchievementCategorySymbol *)0x0;
  (this->AchievementSymbolData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_AchievementData @ 14b407dc0

void __thiscall UDS_AchievementData::~UDS_AchievementData(UDS_AchievementData *this)

{
  this->_padding_ = (longlong)&___7UDS_AchievementData__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AchievementSymbolData).SharedReferenceCount.ReferenceController);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b409cc0

UClass * __cdecl UDS_AchievementData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AchievementData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AchievementData",
               &Z_Registration_Info_UClass_UDS_AchievementData.InnerSingleton,
               StaticRegisterNativesUDS_AchievementData,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AchievementData>,
               InternalVTableHelperCtorCaller<UDS_AchievementData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AchievementData.InnerSingleton;
}

// StaticRegisterNativesUDS_AchievementData @ 14b40ae10

void __cdecl UDS_AchievementData::StaticRegisterNativesUDS_AchievementData(void)

{
  return;
}

// UDS_AchievementData @ 14ba32400

UDS_AchievementData * __thiscall
UDS_AchievementData::UDS_AchievementData(UDS_AchievementData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_AchievementData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->GroupID = 0;
  this->TotalCount = 0;
  this->GroupStep = 0;
  this->State = None;
  (this->AchievementSymbolData).Object = (FDS_AchievementCategorySymbol *)0x0;
  (this->AchievementSymbolData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// Created @ 14ba3bef0

void __thiscall UDS_AchievementData::Created(UDS_AchievementData *this)

{
  this->GroupID = (int)this->_padding_;
  this->GroupStep = 1;
  this->State = Progress;
  return;
}

// FindOrAddData @ 14ba40ad0

TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> __cdecl
UDS_AchievementData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAchievementBaseTableRow @ 14ba432b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_AchievementBaseTableRow * __thiscall
UDS_AchievementData::GetAchievementBaseTableRow(UDS_AchievementData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FDS_AchievementBaseTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar5 = FDS_AchievementService::GetAchievementGroupList(this->GroupID);
  if (pTVar5 == (TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5417207873526562932>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_AchievementData.cpp"
                       ,0x74,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDS_AchievementBaseTableRow *)(*pcVar3)();
      return pFVar6;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_AchievementData::GetAchievementBaseTableRow",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,0x75,L"tableRowList is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14ba43397:
    pFVar6 = (FDS_AchievementBaseTableRow *)0x0;
  }
  else {
    pFVar8 = (pTVar5->AllocatorInstance).Data;
    iVar2 = pTVar5->ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar5->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_AchievementBaseTableRow_const_*_const,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_158);
      }
      if (pFVar8 == pFVar1) goto LAB_14ba43397;
      pFVar6 = *(FDS_AchievementBaseTableRow **)pFVar8;
      if ((pFVar6 != (FDS_AchievementBaseTableRow *)0x0) &&
         (pFVar6->AchievementGroupStep == this->GroupStep)) break;
      pFVar8 = pFVar8 + 8;
    }
  }
  return pFVar6;
}

// GetAchievementCategory @ 14ba43410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_AchievementCategory __thiscall
UDS_AchievementData::GetAchievementCategory(UDS_AchievementData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  EDS_AchievementCategory EVar6;
  TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  UDS_LogManager *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar7 = FDS_AchievementService::GetAchievementGroupList(this->GroupID);
  if (pTVar7 == (TArray<FDS_AchievementBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5417207873526562932>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_AchievementData.cpp"
                       ,0x74,"false");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      EVar6 = (*pcVar4)();
      return EVar6;
    }
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_AchievementData::GetAchievementBaseTableRow",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar8,1,Warning,local_148.Ptr,0x75,L"tableRowList is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14ba434f7:
    EVar6 = None;
  }
  else {
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    iVar2 = pTVar7->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar7->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_AchievementBaseTableRow_const_*_const,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_158);
      }
      if (pFVar9 == pFVar1) goto LAB_14ba434f7;
      lVar3 = *(longlong *)pFVar9;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x28) == this->GroupStep)) break;
      pFVar9 = pFVar9 + 8;
    }
    EVar6 = *(EDS_AchievementCategory *)(lVar3 + 0x20);
  }
  return EVar6;
}

// GetData @ 14ba474b0

TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> __cdecl UDS_AchievementData::GetData(int param_1)

{
  FWeakObjectPtr FVar1;
  int in_register_0000000c;
  bool in_DL;
  
  FVar1.ObjectSerialNumber = in_register_0000000c;
  FVar1.ObjectIndex = param_1;
  GetData(CONCAT44(in_register_0000000c,param_1),UDS_PlayerData::MainPlayerEntityID,in_DL);
  return (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>)FVar1;
}

// GetData @ 14ba474e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> __cdecl
UDS_AchievementData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (bVar2) goto LAB_14ba4776f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba4757b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_AchievementData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba4757b;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba47645:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_AchievementData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba47645;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&local_d8,(void *)0x0
                        );
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_AchievementData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14ba47776;
        }
      }
    }
  }
LAB_14ba4776f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba47776:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDataByTableID @ 14ba4a240

TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> __cdecl
UDS_AchievementData::GetDataByTableID(int param_1)

{
  FDS_AchievementBaseTableRow *pFVar1;
  int in_register_0000000c;
  FWeakObjectPtr this;
  int in_EDX;
  undefined8 local_res18;
  undefined8 local_res20;
  
  this.ObjectSerialNumber = in_register_0000000c;
  this.ObjectIndex = param_1;
  if (in_EDX == 0) {
    *(undefined8 *)this = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res18);
    return (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>)this;
  }
  pFVar1 = FDS_AchievementBaseTableRow::GetRef((longlong)in_EDX,true);
  GetData((ulong64)&local_res20,UDS_PlayerData::MainPlayerEntityID,
          SUB41(pFVar1->AchievementGroupId,0));
  *(undefined8 *)this = local_res20;
  return (TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>)this;
}

// IsClaimAble @ 14ba5a410

bool __thiscall UDS_AchievementData::IsClaimAble(UDS_AchievementData *this)

{
  return this->State == Completable;
}

// IsCompleted @ 14ba5a8f0

bool __thiscall UDS_AchievementData::IsCompleted(UDS_AchievementData *this)

{
  return this->State == Complete;
}

// IsCompletedAchievement @ 14ba5a900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_AchievementData::IsCompletedAchievement(int param_1)

{
  bool bVar1;
  FDS_AchievementBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 != 0) {
    pFVar2 = FDS_AchievementBaseTableRow::GetRef((longlong)param_1,true);
    GetData((ulong64)&local_140,UDS_PlayerData::MainPlayerEntityID,
            SUB41(pFVar2->AchievementGroupId,0));
    local_148 = local_140;
    bVar1 = TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AchievementData,FWeakObjectPtr> *)&local_148,(void *)0x0)
    ;
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_AchievementData::IsCompletedAchievement",0x2b,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x32,L"achievementData is nullptr.")
        ;
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pFVar2 = FDS_AchievementBaseTableRow::GetRef((longlong)param_1,true);
      pUVar4 = FWeakObjectPtr::Get(&local_148);
      if ((pFVar2->AchievementGroupStep <= *(int *)&pUVar4[2].field_0x10) &&
         ((pUVar4 = FWeakObjectPtr::Get(&local_148),
          *(int *)&pUVar4[2].field_0x10 != pFVar2->AchievementGroupStep ||
          (pUVar4 = FWeakObjectPtr::Get(&local_148), pUVar4[2].field_0x14 == '\x03')))) {
        return true;
      }
    }
  }
  return false;
}

// SetData @ 14ba6d540

void __thiscall
UDS_AchievementData::SetData(UDS_AchievementData *this,int param_1,int param_2,int param_3)

{
  undefined1 *this_00;
  EDS_AchievementState EVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  UObject *pUVar8;
  uint uVar9;
  longlong lVar10;
  FWeakObjectPtr local_res8;
  FDestructionSentinel local_48;
  
  EVar1 = this->State;
  this->GroupStep = param_1;
  this->State = (EDS_AchievementState)param_2;
  this->TotalCount = param_3;
  UpdateCategorySymbolData(this,(EDS_AchievementState)param_2 == Completable);
  if ((EVar1 != this->State) && (this->State == Completable)) {
    TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)&local_res8);
    bVar4 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar4) {
      pUVar8 = FWeakObjectPtr::Get(&local_res8);
      this_00 = &pUVar8[4].field_0x10;
      GetAchievementCategory(this);
      bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar4) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_48);
        *(int *)&pUVar8[5].field_0x4 = *(int *)&pUVar8[5].field_0x4 + 1;
        bVar4 = false;
        uVar9 = *(int *)&pUVar8[4].field_0x20 - 1;
        if (-1 < (int)uVar9) {
          lVar10 = (longlong)(int)uVar9 << 4;
          bVar4 = false;
          do {
            uVar7 = 0;
            if ((int)uVar9 < *(int *)&pUVar8[4].field_0x20) {
              uVar7 = ~uVar9 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((*(int *)(*(longlong *)&pUVar8[4].field_0x18 + 8 + lVar10) == 0) ||
                (plVar2 = *(longlong **)(*(longlong *)&pUVar8[4].field_0x18 + lVar10),
                plVar2 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
              bVar4 = true;
            }
            lVar10 = lVar10 + -0x10;
            uVar9 = uVar9 - 1;
          } while (-1 < (int)uVar9);
        }
        *(int *)&pUVar8[5].field_0x4 = *(int *)&pUVar8[5].field_0x4 + -1;
        if (bVar4) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
      }
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar4) {
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar8[4].field_0x8 = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar8 + 4),
                       (void *)0x0);
    if (!bVar4) {
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar8 + 4));
      pUVar8[3].field_0x20 = 1;
    }
  }
  return;
}

// UpdateCategorySymbolData @ 14ba7bc10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_AchievementData::UpdateCategorySymbolData(UDS_AchievementData *this,bool param_1)

{
  TSharedPtr<FDS_AchievementCategorySymbol,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  EDS_AchievementCategory EVar7;
  int iVar8;
  atomic<int> aVar9;
  UObject *pUVar10;
  TWeakPtr<FDS_AchievementCategorySymbol,1> *pTVar11;
  UDS_AchievementDataSet *this_00;
  TReferenceControllerBase<1> **ppTVar12;
  undefined1 *puVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  int iVar17;
  FWeakObjectPtr local_res18 [2];
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> FStack_60;
  TReferenceControllerBase<1> *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedPtr<FDS_AchievementCategorySymbol,1> local_48;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  TDS_DataSetGetter<UDS_AchievementDataSet>::Get((ulong64)local_res18);
  bVar6 = TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AchievementDataSet,FWeakObjectPtr> *)local_res18,
                     (void *)0x0);
  if (bVar6) {
    return;
  }
  pUVar10 = FWeakObjectPtr::Get(local_res18);
  EVar7 = GetAchievementCategory(this);
  iVar17 = 0;
  pTVar14 = pTVar16;
  pTVar15 = pTVar16;
  if (*(int *)&pUVar10[5].field_0x10 != *(int *)&pUVar10[6].field_0x14) {
    puVar13 = *(undefined1 **)&pUVar10[6].field_0x20;
    if (*(undefined1 **)&pUVar10[6].field_0x20 == (undefined1 *)0x0) {
      puVar13 = &pUVar10[6].field_0x18;
    }
    iVar8 = *(int *)(puVar13 + ((ulonglong)(*(int *)(pUVar10 + 7) - 1) & (ulonglong)EVar7) * 4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&pUVar10[5].field_0x8;
      do {
        if (*(EDS_AchievementCategory *)((longlong)iVar8 * 0x20 + lVar4) == EVar7) {
          pTVar11 = TMapBase<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,0>_>
                    ::FindChecked(&pUVar10[5].field_0x8,EVar7);
          pTVar14 = (pTVar11->WeakReferenceCount).ReferenceController;
          pTVar15 = (TReferenceControllerBase<1> *)pTVar11->Object;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
            UNLOCK();
          }
          if (((pTVar15 != (TReferenceControllerBase<1> *)0x0) &&
              (pTVar14 != (TReferenceControllerBase<1> *)0x0)) &&
             (0 < (int)pTVar14->SharedReferenceCount)) goto LAB_14ba7bd9e;
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar4);
      } while (iVar8 != -1);
    }
  }
  pTVar1 = &this->AchievementSymbolData;
  if ((this->AchievementSymbolData).Object == (FDS_AchievementCategorySymbol *)0x0) {
    if (param_1) {
      FStack_60.ReferenceController = ::operator_new(0x18);
      if (FStack_60.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        local_68 = ___xmm_00000000000000000000000000000010;
        pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
        FStack_60.ReferenceController = _UNK_150651568;
      }
      else {
        (FStack_60.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        pTVar15 = FStack_60.ReferenceController + 1;
        (FStack_60.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        (FStack_60.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_AchievementCategorySymbol___00_SharedPointerInternals__6B_
        ;
        if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        (FStack_60.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_60.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar16 = FStack_60.ReferenceController;
        local_68 = pTVar15;
      }
      if (pTVar1 != (TSharedPtr<FDS_AchievementCategorySymbol,1> *)&local_68) {
        pTVar1->Object = (FDS_AchievementCategorySymbol *)pTVar15;
        local_68 = (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AchievementSymbolData).SharedReferenceCount,&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      this_00 = (UDS_AchievementDataSet *)FWeakObjectPtr::Get(local_res18);
      local_48.Object = pTVar1->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (this->AchievementSymbolData).SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      EVar7 = GetAchievementCategory(this);
      UDS_AchievementDataSet::SetAchievementCategorySymbolMap(this_00,EVar7,&local_48);
      goto LAB_14ba7bef0;
    }
LAB_14ba7be9f:
    ppTVar12 = &local_38;
    local_38 = (TReferenceControllerBase<1> *)0x0;
    pTStack_30 = (TReferenceControllerBase<1> *)0x0;
    pTVar15 = pTVar16;
    iVar8 = 2;
  }
  else {
LAB_14ba7bd9e:
    if (!param_1) goto LAB_14ba7be9f;
    local_58 = (TReferenceControllerBase<1> *)0x0;
    local_50 = pTVar14;
    iVar8 = iVar17;
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ba7bdd8:
      ppTVar12 = &local_58;
      iVar17 = 1;
      pTVar15 = pTVar16;
    }
    else {
      aVar3 = pTVar14->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_50 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ba7bdd8;
        }
        LOCK();
        aVar9 = pTVar14->SharedReferenceCount;
        bVar6 = aVar3 == aVar9;
        if (bVar6) {
          pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar9 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar9;
      } while (!bVar6);
      ppTVar12 = &local_58;
      iVar17 = 1;
      local_58 = pTVar15;
    }
  }
  if (&this->AchievementSymbolData != (TSharedPtr<FDS_AchievementCategorySymbol,1> *)ppTVar12) {
    (this->AchievementSymbolData).Object = (FDS_AchievementCategorySymbol *)pTVar15;
    *ppTVar12 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AchievementSymbolData).SharedReferenceCount,
               (FSharedReferencer<1> *)(ppTVar12 + 1));
  }
  if (iVar8 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  }
  if (iVar17 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
LAB_14ba7bef0:
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar14->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar14->_padding_ + 8))(pTVar14,1);
    }
  }
  return;
}

