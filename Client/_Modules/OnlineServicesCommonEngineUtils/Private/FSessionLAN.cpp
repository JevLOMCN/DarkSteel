// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 5

// FSessionLAN @ 14f004a10

FSessionLAN * __thiscall UE::Online::FSessionLAN::FSessionLAN(FSessionLAN *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0x10000;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0x100;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSessionLAN_Online_UE__6B_;
  (this->OwnerInternetAddr).Object = (FInternetAddr *)0x0;
  (this->OwnerInternetAddr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  Initialize(this);
  return this;
}

// Cast @ 14f005840

FSessionLAN * __cdecl UE::Online::FSessionLAN::Cast(FSessionCommon *param_1)

{
  return (FSessionLAN *)param_1;
}

// Cast @ 14f005850

FSessionLAN * __cdecl UE::Online::FSessionLAN::Cast(ISession *param_1)

{
  return (FSessionLAN *)param_1;
}

// DumpState @ 14f006330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::Online::FSessionLAN::DumpState(FSessionLAN *this)

{
  FInternetAddr *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *local_18 [2];
  
  FSessionCommon::DumpState((FSessionCommon *)this);
  if (4 < (byte)LogOnlineServices._0_1_) {
    if (((this->OwnerInternetAddr).Object == (FInternetAddr *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->OwnerInternetAddr).Object;
    (**(code **)((longlong)*pFVar1 + 0x80))(pFVar1,local_18,1);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// Initialize @ 14f0080f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UE::Online::FSessionLAN::Initialize(FSessionLAN *this)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  FInternetAddr *pFVar4;
  longlong lVar5;
  FName FVar6;
  UEngine *this_00;
  bool bVar7;
  FNameEntryId FVar8;
  ENetMode EVar9;
  int iVar10;
  int iVar11;
  FName *pFVar12;
  ISocketSubsystem *pIVar13;
  FOutputDeviceRedirector *pFVar14;
  undefined8 *puVar15;
  UClass *pUVar16;
  UWorld *pUVar17;
  undefined4 extraout_var;
  UNetDriver *this_01;
  FString *pFVar18;
  ForAnyElementType _Str;
  wchar_t *pwVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [4];
  uint local_e4;
  uint local_e0;
  undefined4 uStack_dc;
  FInternetAddr *local_d8;
  FSharedReferencer<1> local_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [12];
  int local_b8;
  FString local_b0;
  FString local_a0;
  FName *local_90;
  FSchemaVariant *local_88;
  FName local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  void *local_68 [2];
  FSchemaVariant local_58;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar12 = ::FName::FName(&local_80,L"WINDOWS");
  pIVar13 = ISocketSubsystem::Get(pFVar12);
  pcVar3 = *(code **)(pIVar13->_padding_ + 0xe0);
  pFVar14 = GetGlobalLogSingleton();
  puVar15 = (undefined8 *)(*pcVar3)(pIVar13,local_78,pFVar14,local_e8);
  local_d0.ReferenceController = (TReferenceControllerBase<1> *)puVar15[1];
  local_d8 = (FInternetAddr *)*puVar15;
  if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->OwnerInternetAddr;
  iVar11 = 0;
  if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_d8) {
    pTVar1->Object = local_d8;
    local_d8 = (FInternetAddr *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerInternetAddr).SharedReferenceCount,&local_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  local_e4 = 0;
  if (pTVar1->Object == (FInternetAddr *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)((longlong)*pTVar1->Object + 0x20))(pTVar1->Object,&local_e4);
  if ((local_e4 & 0xff000000) == 0x7f000000) {
    if (pTVar1->Object == (FInternetAddr *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)((longlong)*pTVar1->Object + 0x18))(pTVar1->Object,0x7f000001);
  }
  if (pTVar1->Object == (FInternetAddr *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = GEngine;
  pFVar4 = pTVar1->Object;
  iVar21 = 0;
  pcVar3 = *(code **)((longlong)*pFVar4 + 0x28);
  iVar10 = iVar11;
  if (GEngine != (UEngine *)0x0) {
    pUVar16 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar5 = this_00->_padding_;
    iVar2 = (int)pUVar16->_padding_;
    iVar10 = iVar21;
    if ((iVar2 <= *(int *)(lVar5 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar16->_padding_)) {
      pUVar17 = UGameEngine::GetGameWorld((UGameEngine *)this_00);
      if (pUVar17 != (UWorld *)0x0) {
        FVar8 = FNameEntryId::FromValidEName((EName)local_c8);
        uStack_dc = 0;
        local_e0 = *(uint *)CONCAT44(extraout_var,FVar8.Value);
        FVar6.Number = 0;
        FVar6.ComparisonIndex.Value = local_e0;
        this_01 = UEngine::FindNamedNetDriver(GEngine,pUVar17,FVar6);
        if (this_01 != (UNetDriver *)0x0) {
          EVar9 = UNetDriver::GetNetMode(this_01);
          if ((int)EVar9 < 3) {
            (**(code **)(this_01->_padding_ + 0x330))(this_01,&local_a0);
            ::FString::FString((FString *)(local_c4 + 4),":");
            iVar10 = local_b8 + -1;
            if (local_b8 == 0) {
              iVar10 = iVar11;
            }
            pwVar19 = L"";
            if (local_b8 != 0) {
              pwVar19 = (wchar_t *)local_c4._4_8_;
            }
            iVar10 = ::FString::Find(&local_a0,pwVar19,iVar10,IgnoreCase,FromEnd,-1);
            if ((wchar_t *)local_c4._4_8_ != (wchar_t *)0x0) {
              FMemory::Free((void *)local_c4._4_8_);
            }
            if (iVar10 != -1) {
              ::FString::RightChop(&local_a0,&local_b0,iVar10 + 1);
              if (1 < local_b0.Data.ArrayNum) {
                _Str.Data = (FScriptContainerElement *)L"";
                if (local_b0.Data.ArrayNum != 0) {
                  _Str.Data = local_b0.Data.AllocatorInstance.Data;
                }
                iVar11 = _wtoi((wchar_t *)_Str.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
            }
            iVar10 = iVar11;
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  (*pcVar3)(pFVar4,iVar10);
  if (pTVar1->Object == (FInternetAddr *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar11 = (**(code **)((longlong)*pTVar1->Object + 0x38))();
  if (iVar11 == 0) {
    if ((this->OwnerInternetAddr).Object == (FInternetAddr *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar4 = (this->OwnerInternetAddr).Object;
    (**(code **)((longlong)*pFVar4 + 0x28))(pFVar4,0x1e61);
  }
  local_58.VariantData._padding_ = 0;
  local_58.VariantData._padding_ = 0;
  local_58.VariantData.TypeIndex = 0;
  local_58.VariantType = None;
  if ((this->OwnerInternetAddr).Object == (FInternetAddr *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar4 = (this->OwnerInternetAddr).Object;
  pFVar18 = (FString *)(**(code **)((longlong)*pFVar4 + 0x80))(pFVar4,local_68,1);
  FSchemaVariant::Set(&local_58,pFVar18);
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  local_38 = 0;
  local_90 = &CONNECT_STRING_TAG;
  local_88 = &local_58;
  TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,UE::Online::FCustomSessionSetting_const_&>_>
            ((TSet<TTuple<FName,UE::Online::FCustomSessionSetting>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FCustomSessionSetting,0>,FDefaultSetAllocator>
              *)&this->_padding_,
             (TPairInitializer<FName_const_&,UE::Online::FCustomSessionSetting_const_&> *)local_c4,
             (bool *)&local_90);
  uVar20 = (ulonglong)local_58.VariantData.TypeIndex;
  if (3 < uVar20) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar20] == Core::Private::TDestructorCaller<FString>::Destruct)
  {
    if ((void *)local_58.VariantData._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_58.VariantData._padding_);
    }
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar20])(&local_58);
  }
  return;
}

