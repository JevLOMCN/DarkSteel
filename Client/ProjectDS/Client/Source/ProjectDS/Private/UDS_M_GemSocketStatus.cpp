// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b50a410

UClass * __cdecl UDS_M_GemSocketStatus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GemSocketStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GemSocketStatus",
               &Z_Registration_Info_UClass_UDS_M_GemSocketStatus.InnerSingleton,
               StaticRegisterNativesUDS_M_GemSocketStatus,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GemSocketStatus>,
               InternalVTableHelperCtorCaller<UDS_M_GemSocketStatus>,local_res8,
               UDS_M_StatusBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GemSocketStatus.InnerSingleton;
}

// UDS_M_GemSocketStatus @ 14b511280

UDS_M_GemSocketStatus * __thiscall
UDS_M_GemSocketStatus::UDS_M_GemSocketStatus(UDS_M_GemSocketStatus *this,FVTableHelper *param_1)

{
  UDS_M_StatusBase::UDS_M_StatusBase((UDS_M_StatusBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_GemSocketStatus__6B_;
  this->GemSocketTID = 0;
  this->GemTID = 0;
  return this;
}

// UDS_M_GemSocketStatus @ 14b5112b0

UDS_M_GemSocketStatus * __thiscall
UDS_M_GemSocketStatus::UDS_M_GemSocketStatus
          (UDS_M_GemSocketStatus *this,FObjectInitializer *param_1)

{
  UDS_M_StatusBase::UDS_M_StatusBase((UDS_M_StatusBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_GemSocketStatus__6B_;
  this->GemSocketTID = 0;
  this->GemTID = 0;
  return this;
}

// ~UDS_M_GemSocketStatus @ 14b512f60

void __thiscall UDS_M_GemSocketStatus::~UDS_M_GemSocketStatus(UDS_M_GemSocketStatus *this)

{
  this->_padding_ = (longlong)&___7UDS_M_GemSocketStatus__6B_;
  UDS_M_StatusBase::~UDS_M_StatusBase((UDS_M_StatusBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515f00

UClass * __cdecl UDS_M_GemSocketStatus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_GemSocketStatus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_GemSocketStatus",
               &Z_Registration_Info_UClass_UDS_M_GemSocketStatus.InnerSingleton,
               StaticRegisterNativesUDS_M_GemSocketStatus,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_GemSocketStatus>,
               InternalVTableHelperCtorCaller<UDS_M_GemSocketStatus>,local_res8,
               UDS_M_StatusBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_GemSocketStatus.InnerSingleton;
}

// StaticRegisterNativesUDS_M_GemSocketStatus @ 14b516cd0

void __cdecl UDS_M_GemSocketStatus::StaticRegisterNativesUDS_M_GemSocketStatus(void)

{
  return;
}

// GetSocketName @ 14bcfbe30

FDS_Text * __thiscall
UDS_M_GemSocketStatus::GetSocketName(UDS_M_GemSocketStatus *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  EDS_GradeType EVar3;
  FDS_ItemBaseTableRow *pFVar4;
  FDS_ItemGemSocketTableRow *pFVar5;
  FDS_Text *pFVar6;
  FDS_CommonGradeTableRow *pFVar7;
  FDS_Text local_58;
  
  pFVar4 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,false);
  if (pFVar4 == (FDS_ItemBaseTableRow *)0x0) {
    pFVar5 = FDS_ItemGemSocketTableRow::Get((longlong)this->GemSocketTID,true);
    if (pFVar5 == (FDS_ItemGemSocketTableRow *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8950426817949335577>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                         ,0x19,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FDS_Text *)(*pcVar1)();
        return pFVar6;
      }
      __return_storage_ptr__->StringTableType = None;
      __return_storage_ptr__->StringTableID = 0;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
      (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    }
    else {
      __return_storage_ptr__->StringTableType = None;
      __return_storage_ptr__->StringTableID = 0;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
      (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
      __return_storage_ptr__->StringTableID = (pFVar5->ID_SocketName).ID;
      __return_storage_ptr__->StringTableType = StringUi;
    }
  }
  else {
    EVar3 = DS_ItemDataUtil::GetItemGradeByTID(this->GemTID);
    pFVar7 = FDS_CommonGradeTableRow::Get((ulonglong)EVar3,true);
    if (pFVar7 == (FDS_CommonGradeTableRow *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8950426817949335584>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                         ,0x20,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FDS_Text *)(*pcVar1)();
        return pFVar6;
      }
      __return_storage_ptr__->StringTableType = None;
      __return_storage_ptr__->StringTableID = 0;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
      (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    }
    else {
      pFVar6 = DS_ItemDataUtil::GetItemNameTextByTID(&local_58,this->GemTID);
      DS_Util::GetTextTagStyle(__return_storage_ptr__,&pFVar7->ID_TagStyleM,pFVar6);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
                 local_58.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
      }
      if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetStatusName01 @ 14bcfca60

FDS_Text * __thiscall
UDS_M_GemSocketStatus::GetStatusName01(UDS_M_GemSocketStatus *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_ItemBaseTableRow *pFVar3;
  FDS_Text *pFVar4;
  FDS_ItemAbilityTableRow *pFVar5;
  FDS_StatusTableRow *pFVar6;
  atomic<unsigned_char> *paVar7;
  int iVar8;
  FWeakObjectPtr local_res8;
  UEnum *local_res18 [2];
  
  pFVar3 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,false);
  if (pFVar3 == (FDS_ItemBaseTableRow *)0x0) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_res18[0] = StaticEnum<enum_EDS_StatusType>();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pFVar3 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,true);
    if (pFVar3 == (FDS_ItemBaseTableRow *)0x0) {
      iVar8 = 0x32;
      paVar7 = &bGEnsureHasExecuted<8950426817949335602>;
    }
    else {
      pFVar5 = FDS_ItemBaseTableRow::ID_AbilityTable(pFVar3);
      if ((pFVar5->StatusType).ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FDS_Text *)(*pcVar1)();
          return pFVar4;
        }
      }
      pFVar6 = FDS_StatusTableRow::Get
                         ((longlong)*(int *)(pFVar5->StatusType).AllocatorInstance.Data,true);
      if (pFVar6 != (FDS_StatusTableRow *)0x0) {
        __return_storage_ptr__->StringTableType = None;
        __return_storage_ptr__->StringTableID = 0;
        (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
        (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
        (__return_storage_ptr__->DateTime).Ticks = 0;
        (__return_storage_ptr__->TimeSpan).Ticks = 0;
        __return_storage_ptr__->TimeExpressionType = None;
        __return_storage_ptr__->IsExpression = false;
        (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
        (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
        (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
        (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
        __return_storage_ptr__->StringTableID = (pFVar6->ID_StatusName).ID;
        __return_storage_ptr__->StringTableType = StringBase;
        return __return_storage_ptr__;
      }
      iVar8 = 0x35;
      paVar7 = &bGEnsureHasExecuted<8950426817949335605>;
    }
  }
  else {
    iVar8 = 0x2f;
    paVar7 = &bGEnsureHasExecuted<8950426817949335599>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                     ,iVar8,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FDS_Text *)(*pcVar1)();
    return pFVar4;
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStatusName02 @ 14bcfcc60

FDS_Text * __thiscall
UDS_M_GemSocketStatus::GetStatusName02(UDS_M_GemSocketStatus *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_Text *pFVar3;
  FDS_ItemGemSocketTableRow *pFVar4;
  FDS_StatusTableRow *pFVar5;
  atomic<unsigned_char> *paVar6;
  int iVar7;
  FWeakObjectPtr local_res18;
  UEnum *local_res20;
  
  local_res20 = StaticEnum<enum_EDS_StatusType>();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pFVar4 = FDS_ItemGemSocketTableRow::Get((longlong)this->GemSocketTID,true);
    if (pFVar4 == (FDS_ItemGemSocketTableRow *)0x0) {
      iVar7 = 0x41;
      paVar6 = &bGEnsureHasExecuted<8950426817949335617>;
    }
    else {
      pFVar5 = FDS_StatusTableRow::Get((longlong)(int)pFVar4->BonusStatusType,true);
      if (pFVar5 != (FDS_StatusTableRow *)0x0) {
        __return_storage_ptr__->StringTableType = None;
        __return_storage_ptr__->StringTableID = 0;
        (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
        (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
        (__return_storage_ptr__->DateTime).Ticks = 0;
        (__return_storage_ptr__->TimeSpan).Ticks = 0;
        __return_storage_ptr__->TimeExpressionType = None;
        __return_storage_ptr__->IsExpression = false;
        (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
        (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
        (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0
        ;
        (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
        (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
        __return_storage_ptr__->StringTableID = (pFVar5->ID_StatusName).ID;
        __return_storage_ptr__->StringTableType = StringBase;
        return __return_storage_ptr__;
      }
      iVar7 = 0x44;
      paVar6 = &bGEnsureHasExecuted<8950426817949335620>;
    }
  }
  else {
    iVar7 = 0x3e;
    paVar6 = &bGEnsureHasExecuted<8950426817949335614>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar6,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                     ,iVar7,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDS_Text *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStatusValue01 @ 14bcfcdd0

FText * __thiscall
UDS_M_GemSocketStatus::GetStatusValue01(UDS_M_GemSocketStatus *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FDS_ItemBaseTableRow *pFVar4;
  FText *pFVar5;
  FDS_ItemGemSocketTableRow *pFVar6;
  FDS_ItemAbilityTableRow *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FString local_18;
  
  pFVar4 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,false);
  if (pFVar4 == (FDS_ItemBaseTableRow *)0x0) {
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
  }
  else {
    pFVar6 = FDS_ItemGemSocketTableRow::Get((longlong)this->GemSocketTID,true);
    if (pFVar6 != (FDS_ItemGemSocketTableRow *)0x0) {
      pFVar4 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,true);
      if (pFVar4 != (FDS_ItemBaseTableRow *)0x0) {
        pFVar7 = FDS_ItemBaseTableRow::ID_AbilityTable(pFVar4);
        if ((pFVar7->StatusValue).ArrayNum < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FText *)(*pcVar2)();
            return pFVar5;
          }
        }
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_18,*(int *)(pFVar7->StatusValue).AllocatorInstance.Data);
        FText::FromString(__return_storage_ptr__,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8950426817949335637>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                         ,0x55,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FText *)(*pcVar2)();
        return pFVar5;
      }
      pFVar5 = FText::GetEmpty();
      FText::FText(__return_storage_ptr__,pFVar5);
      return __return_storage_ptr__;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8950426817949335634>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                       ,0x52,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
    pFVar5 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
      __return_storage_ptr__->Flags = pFVar5->Flags;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetStatusValue02 @ 14bcfcfb0

FText * __thiscall
UDS_M_GemSocketStatus::GetStatusValue02(UDS_M_GemSocketStatus *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FDS_ItemGemSocketTableRow *pFVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  pFVar4 = FDS_ItemGemSocketTableRow::Get((longlong)this->GemSocketTID,true);
  if (pFVar4 != (FDS_ItemGemSocketTableRow *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_18,pFVar4->BonusStatusValue);
    FText::FromString(__return_storage_ptr__,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8950426817949335646>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                     ,0x5e,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar2)();
    return pFVar5;
  }
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetStatusValue03 @ 14bcfd080

FText * __thiscall
UDS_M_GemSocketStatus::GetStatusValue03(UDS_M_GemSocketStatus *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetStyleIDStatusName02 @ 14bcfd0d0

int __thiscall UDS_M_GemSocketStatus::GetStyleIDStatusName02(UDS_M_GemSocketStatus *this)

{
  bool bVar1;
  FDS_ItemBaseTableRow *pFVar2;
  
  pFVar2 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,false);
  if ((pFVar2 != (FDS_ItemBaseTableRow *)0x0) && (bVar1 = IsBonus(this), bVar1)) {
    return 0x1519;
  }
  return 0x151a;
}

// GetStyleIDStatusValue02 @ 14bcfd110

int __thiscall UDS_M_GemSocketStatus::GetStyleIDStatusValue02(UDS_M_GemSocketStatus *this)

{
  bool bVar1;
  FDS_ItemBaseTableRow *pFVar2;
  
  pFVar2 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,false);
  if ((pFVar2 != (FDS_ItemBaseTableRow *)0x0) && (bVar1 = IsBonus(this), bVar1)) {
    return 0x1519;
  }
  return 0x151a;
}

// InitModel @ 14bd01e20

void __thiscall
UDS_M_GemSocketStatus::InitModel(UDS_M_GemSocketStatus *this,int param_1,int param_2)

{
  this->GemSocketTID = param_1;
  this->GemTID = param_2;
  return;
}

// IsBonus @ 14bd051b0

bool __thiscall UDS_M_GemSocketStatus::IsBonus(UDS_M_GemSocketStatus *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FDS_ItemGemSocketTableRow *pFVar5;
  FDS_ItemBaseTableRow *pFVar6;
  atomic<unsigned_char> *paVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  
  pFVar5 = FDS_ItemGemSocketTableRow::Get((longlong)this->GemSocketTID,true);
  if (pFVar5 == (FDS_ItemGemSocketTableRow *)0x0) {
    iVar9 = 0x7a;
    paVar7 = &bGEnsureHasExecuted<8950426817949335674>;
  }
  else {
    pFVar6 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,true);
    if (pFVar6 != (FDS_ItemBaseTableRow *)0x0) {
      pFVar8 = (pFVar5->BonusItemType).AllocatorInstance.Data;
      pFVar1 = pFVar8 + (longlong)(pFVar5->BonusItemType).ArrayNum * 4;
      if (pFVar8 == pFVar1) {
        return false;
      }
      do {
        if (*(EDS_ItemType *)pFVar8 == pFVar6->ItemType) {
          return true;
        }
        pFVar8 = pFVar8 + 4;
      } while (pFVar8 != pFVar1);
      return false;
    }
    iVar9 = 0x7d;
    paVar7 = &bGEnsureHasExecuted<8950426817949335677>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_GemSocketStatus.cpp"
                     ,iVar9,"false");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// IsEmpty @ 14bd05720

bool __thiscall UDS_M_GemSocketStatus::IsEmpty(UDS_M_GemSocketStatus *this)

{
  FDS_ItemBaseTableRow *pFVar1;
  
  pFVar1 = FDS_ItemBaseTableRow::Get((longlong)this->GemTID,false);
  return pFVar1 == (FDS_ItemBaseTableRow *)0x0;
}

