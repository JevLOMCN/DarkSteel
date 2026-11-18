// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b46b320

UClass * __cdecl UDS_ConditionHelper_BubbleTalk::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper_BubbleTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper_BubbleTalk",
               &Z_Registration_Info_UClass_UDS_ConditionHelper_BubbleTalk.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper_BubbleTalk,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionHelper_BubbleTalk>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper_BubbleTalk>,local_res8,
               UDS_ConditionHelper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper_BubbleTalk.InnerSingleton;
}

// UDS_ConditionHelper_BubbleTalk @ 14b471090

UDS_ConditionHelper_BubbleTalk * __thiscall
UDS_ConditionHelper_BubbleTalk::UDS_ConditionHelper_BubbleTalk
          (UDS_ConditionHelper_BubbleTalk *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionHelper_BubbleTalk__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->TargetID = 0;
  return this;
}

// UDS_ConditionHelper_BubbleTalk @ 14b4710f0

UDS_ConditionHelper_BubbleTalk * __thiscall
UDS_ConditionHelper_BubbleTalk::UDS_ConditionHelper_BubbleTalk
          (UDS_ConditionHelper_BubbleTalk *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ConditionHelper_BubbleTalk__6B_;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->TargetID = 0;
  return this;
}

// ~UDS_ConditionHelper_BubbleTalk @ 14b472960

void __thiscall
UDS_ConditionHelper_BubbleTalk::~UDS_ConditionHelper_BubbleTalk
          (UDS_ConditionHelper_BubbleTalk *this)

{
  this->_padding_ = (longlong)&___7UDS_ConditionHelper__6B_;
  UDS_ConditionHelper::UnInit((UDS_ConditionHelper *)this);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4760c0

UClass * __cdecl UDS_ConditionHelper_BubbleTalk::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ConditionHelper_BubbleTalk.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ConditionHelper_BubbleTalk",
               &Z_Registration_Info_UClass_UDS_ConditionHelper_BubbleTalk.InnerSingleton,
               StaticRegisterNativesUDS_ConditionHelper_BubbleTalk,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ConditionHelper_BubbleTalk>,
               InternalVTableHelperCtorCaller<UDS_ConditionHelper_BubbleTalk>,local_res8,
               UDS_ConditionHelper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ConditionHelper_BubbleTalk.InnerSingleton;
}

// StaticRegisterNativesUDS_ConditionHelper_BubbleTalk @ 14b476e90

void __cdecl
UDS_ConditionHelper_BubbleTalk::StaticRegisterNativesUDS_ConditionHelper_BubbleTalk(void)

{
  return;
}

// CreateBubbleTalkChecker @ 14c0705c0

void __thiscall
UDS_ConditionHelper_BubbleTalk::CreateBubbleTalkChecker
          (UDS_ConditionHelper_BubbleTalk *this,EDS_BubbleTalkConditionType param_1,int param_2,
          long64 param_3)

{
  TObjectPtr<UDS_ConditionChecker> TVar1;
  
  TVar1 = UDS_ConditionChecker::CreateConditionChecker
                    ((UObject *)&stack0xffffffffffffffe8,(EDS_BubbleTalkConditionType)this);
  if (*(UDS_ConditionChecker **)TVar1.field0_0x0 == (UDS_ConditionChecker *)0x0) {
    return;
  }
  if ((int)param_1 < 0xbba) {
    if ((param_1 == Moonshape_1) || (param_1 == Timeband_Sunrise)) {
      param_2 = 1;
      goto switchD_14c070673_default;
    }
    if (param_1 == Timeband_Daytime) goto switchD_14c070673_caseD_bba;
    if (param_1 == Timeband_Sunset) goto switchD_14c070673_caseD_bbb;
    if (param_1 != Timeband_Night) goto switchD_14c070673_default;
switchD_14c070673_caseD_bbc:
    param_2 = 4;
  }
  else {
    switch(param_1) {
    case Moonshape_2:
switchD_14c070673_caseD_bba:
      param_2 = 2;
      break;
    case Moonshape_3:
switchD_14c070673_caseD_bbb:
      param_2 = 3;
      break;
    case Moonshape_4:
      goto switchD_14c070673_caseD_bbc;
    case Moonshape_5:
      param_2 = 5;
      break;
    case Moonshape_6:
      param_2 = 6;
      break;
    case Moonshape_7:
      param_2 = 7;
    }
  }
switchD_14c070673_default:
  UDS_ConditionHelper::AddConditionChecker
            ((UDS_ConditionHelper *)this,*(UDS_ConditionChecker **)TVar1.field0_0x0,None,None,
             param_2,param_3);
  return;
}

// GetConditionTypeToValue @ 14c085600

int __thiscall
UDS_ConditionHelper_BubbleTalk::GetConditionTypeToValue
          (UDS_ConditionHelper_BubbleTalk *this,EDS_BubbleTalkConditionType param_1)

{
  if ((int)param_1 < 0xbba) {
    if ((param_1 == Moonshape_1) || (param_1 == Timeband_Sunrise)) {
      return 1;
    }
    if (param_1 == Timeband_Daytime) {
switchD_14c085649_caseD_bba:
      return 2;
    }
    if (param_1 == Timeband_Sunset) {
      return 3;
    }
    if (param_1 == Timeband_Night) {
      return 4;
    }
  }
  else {
    switch(param_1) {
    case Moonshape_2:
      goto switchD_14c085649_caseD_bba;
    case Moonshape_3:
      return 3;
    case Moonshape_4:
      return 4;
    case Moonshape_5:
      return 5;
    case Moonshape_6:
      return 6;
    case Moonshape_7:
      return 7;
    }
  }
  return 0;
}

// InitBubbleTalkHelper @ 14c08b3c0

void __thiscall
UDS_ConditionHelper_BubbleTalk::InitBubbleTalkHelper
          (UDS_ConditionHelper_BubbleTalk *this,ulong64 param_1)

{
  this->TargetID = param_1;
  return;
}

// InitConditionHelper @ 14c08b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ConditionHelper_BubbleTalk::InitConditionHelper
          (UDS_ConditionHelper_BubbleTalk *this,FDS_BubbleTalkBaseTableRow *param_1)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  longlong lVar9;
  TObjectPtr<UDS_ConditionChecker> TVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStackY_2d8 [32];
  undefined1 local_290 [264];
  void *local_188;
  wchar_t *local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if (param_1 == (FDS_BubbleTalkBaseTableRow *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_188 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_290 + 8),
                 "UDS_ConditionHelper_BubbleTalk::InitConditionHelper",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_180,0x195,L"InBubbleTalkConditionTableRow is nullptr.");
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
    }
  }
  else {
    lVar9 = (longlong)(param_1->BubbleTalkConditionType).ArrayNum;
    uVar12 = 0;
    uVar13 = uVar12;
    if (0 < lVar9) {
      do {
        uVar11 = (uint)uVar12;
        if (((int)uVar11 < 0) || ((param_1->BubbleTalkConditionValue).ArrayNum <= (int)uVar11)) {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_ConditionHelper_BubbleTalk::InitConditionHelper",0x33,Yes);
            UDS_LogManager::PrintLog
                      (pUVar8,1,Warning,local_168.Ptr,0x19f,
                       L"BubbleTalkConditionValue is invali.(%d)");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
        }
        else {
          uVar2 = this->TargetID;
          uVar6 = 0;
          if ((int)uVar11 < (param_1->BubbleTalkConditionValue).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (param_1->BubbleTalkConditionValue).AllocatorInstance.Data;
          uVar6 = 0;
          if ((int)uVar11 < (param_1->BubbleTalkConditionType).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar1 = *(int *)((param_1->BubbleTalkConditionType).AllocatorInstance.Data + uVar13 * 4);
          *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
          iVar7 = *(int *)(pFVar3 + uVar13 * 4);
          TVar10 = UDS_ConditionChecker::CreateConditionChecker
                             ((UObject *)local_290,(EDS_BubbleTalkConditionType)this);
          if (*(UDS_ConditionChecker **)TVar10.field0_0x0 != (UDS_ConditionChecker *)0x0) {
            if (iVar1 < 0xbba) {
              if ((iVar1 == 0xbb9) || (iVar1 == 0x7d1)) {
                iVar7 = 1;
              }
              else {
                if (iVar1 == 0x7d2) goto switchD_14c08bb92_caseD_bba;
                if (iVar1 == 0x7d3) goto switchD_14c08bb92_caseD_bbb;
                if (iVar1 == 0x7d4) goto switchD_14c08bb92_caseD_bbc;
              }
            }
            else {
              switch(iVar1) {
              case 0xbba:
switchD_14c08bb92_caseD_bba:
                iVar7 = 2;
                break;
              case 0xbbb:
switchD_14c08bb92_caseD_bbb:
                iVar7 = 3;
                break;
              case 0xbbc:
switchD_14c08bb92_caseD_bbc:
                iVar7 = 4;
                break;
              case 0xbbd:
                iVar7 = 5;
                break;
              case 0xbbe:
                iVar7 = 6;
                break;
              case 0xbbf:
                iVar7 = 7;
              }
            }
            UDS_ConditionHelper::AddConditionChecker
                      ((UDS_ConditionHelper *)this,*(UDS_ConditionChecker **)TVar10.field0_0x0,None,
                       None,iVar7,uVar2);
          }
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar13 = uVar13 + 1;
      } while ((longlong)uVar13 < lVar9);
    }
    if ((char)this->_padding_ != '\x01') {
      *(undefined1 *)&this->_padding_ = 1;
      UDS_ConditionHelper::UpdateConditionValue((UDS_ConditionHelper *)this);
    }
  }
  return;
}

// OnInitBubbleTalkTable @ 14c0960e0

void __thiscall
UDS_ConditionHelper_BubbleTalk::OnInitBubbleTalkTable
          (UDS_ConditionHelper_BubbleTalk *this,EDS_BubbleTalkConditionType param_1,int *param_2,
          long64 param_3)

{
  TObjectPtr<UDS_ConditionChecker> TVar1;
  int iVar2;
  
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  iVar2 = *param_2;
  TVar1 = UDS_ConditionChecker::CreateConditionChecker
                    ((UObject *)&stack0x00000008,(EDS_BubbleTalkConditionType)this);
  if (*(UDS_ConditionChecker **)TVar1.field0_0x0 == (UDS_ConditionChecker *)0x0) {
    return;
  }
  if ((int)param_1 < 0xbba) {
    if ((param_1 == Moonshape_1) || (param_1 == Timeband_Sunrise)) {
      iVar2 = 1;
      goto switchD_14c096197_default;
    }
    if (param_1 == Timeband_Daytime) goto switchD_14c096197_caseD_bba;
    if (param_1 == Timeband_Sunset) goto switchD_14c096197_caseD_bbb;
    if (param_1 != Timeband_Night) goto switchD_14c096197_default;
switchD_14c096197_caseD_bbc:
    iVar2 = 4;
  }
  else {
    switch(param_1) {
    case Moonshape_2:
switchD_14c096197_caseD_bba:
      iVar2 = 2;
      break;
    case Moonshape_3:
switchD_14c096197_caseD_bbb:
      iVar2 = 3;
      break;
    case Moonshape_4:
      goto switchD_14c096197_caseD_bbc;
    case Moonshape_5:
      iVar2 = 5;
      break;
    case Moonshape_6:
      iVar2 = 6;
      break;
    case Moonshape_7:
      iVar2 = 7;
    }
  }
switchD_14c096197_default:
  UDS_ConditionHelper::AddConditionChecker
            ((UDS_ConditionHelper *)this,*(UDS_ConditionChecker **)TVar1.field0_0x0,None,None,iVar2,
             param_3);
  return;
}

