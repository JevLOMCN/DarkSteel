// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b7232f0

UClass * __cdecl UDS_VM_W_Common_CompleteMessage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_CompleteMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_CompleteMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_CompleteMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_CompleteMessage,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_CompleteMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_CompleteMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_CompleteMessage.InnerSingleton;
}

// UDS_VM_W_Common_CompleteMessage @ 14b728870

UDS_VM_W_Common_CompleteMessage * __thiscall
UDS_VM_W_Common_CompleteMessage::UDS_VM_W_Common_CompleteMessage
          (UDS_VM_W_Common_CompleteMessage *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_CompleteMessage__6B_;
  (this->CompleteMsgInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteMsgInfoList).ArrayNum = 0;
  (this->CompleteMsgInfoList).ArrayMax = 0;
  (this->MsgVM_0).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgVM_1).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgVM_2).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgVM_3).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgTrans_0).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_0).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_0).Angle = 0.0;
  (this->MsgTrans_0).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MsgTrans_1).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_1).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_1).Angle = 0.0;
  (this->MsgTrans_1).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MsgTrans_2).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_2).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_2).Angle = 0.0;
  (this->MsgTrans_2).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MsgTrans_3).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_3).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_3).Angle = 0.0;
  (this->MsgTrans_3).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_W_Common_CompleteMessage @ 14b7289a0

UDS_VM_W_Common_CompleteMessage * __thiscall
UDS_VM_W_Common_CompleteMessage::UDS_VM_W_Common_CompleteMessage
          (UDS_VM_W_Common_CompleteMessage *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_CompleteMessage__6B_;
  (this->CompleteMsgInfoList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompleteMsgInfoList).ArrayNum = 0;
  (this->CompleteMsgInfoList).ArrayMax = 0;
  (this->MsgVM_0).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgVM_1).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgVM_2).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgVM_3).field0_0x0.DebugPtr = (UDS_VM_W_HUDMessage *)0x0;
  (this->MsgTrans_0).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_0).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_0).Angle = 0.0;
  (this->MsgTrans_0).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MsgTrans_1).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_1).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_1).Angle = 0.0;
  (this->MsgTrans_1).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MsgTrans_2).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_2).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_2).Angle = 0.0;
  (this->MsgTrans_2).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->MsgTrans_3).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MsgTrans_3).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->MsgTrans_3).Angle = 0.0;
  (this->MsgTrans_3).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_W_Common_CompleteMessage @ 14b729740

void __thiscall
UDS_VM_W_Common_CompleteMessage::~UDS_VM_W_Common_CompleteMessage
          (UDS_VM_W_Common_CompleteMessage *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_CompleteMessage__6B_;
  pFVar1 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_CommonMessage::~UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72b0d0

IClassDescriptor * __thiscall
UDS_VM_W_Common_CompleteMessage::GetFieldNotificationDescriptor
          (UDS_VM_W_Common_CompleteMessage *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_CompleteMessage::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72bb20

UClass * __cdecl UDS_VM_W_Common_CompleteMessage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_CompleteMessage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_CompleteMessage",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_CompleteMessage.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_CompleteMessage,0x298,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_CompleteMessage>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_CompleteMessage>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_CompleteMessage.InnerSingleton;
}

// GetTickableTickType @ 14b72bd70

ETickableTickType __thiscall
UDS_VM_W_Common_CompleteMessage::GetTickableTickType(UDS_VM_W_Common_CompleteMessage *this)

{
  return Conditional;
}

// IsUpdate @ 14b72bd80

bool __thiscall UDS_VM_W_Common_CompleteMessage::IsUpdate(UDS_VM_W_Common_CompleteMessage *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_W_Common_CompleteMessage @ 14b72bf20

void __cdecl
UDS_VM_W_Common_CompleteMessage::StaticRegisterNativesUDS_VM_W_Common_CompleteMessage(void)

{
  return;
}

// CheckNextMessage @ 14bf9d7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_CompleteMessage::CheckNextMessage(UDS_VM_W_Common_CompleteMessage *this)

{
  TArray<FDS_CompleteMsgInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar9;
  UDS_VM_W_Common_CompleteMessage *pUVar10;
  UDS_ViewModelBase *this_01;
  FName *pFVar11;
  UDS_VM_W_HUDMessage *this_02;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  FWeakObjectPtr *this_03;
  longlong lVar16;
  undefined1 auStackY_298 [32];
  FName local_268;
  int local_260;
  FName local_258;
  int local_250;
  FName local_248;
  FDS_UIMessageInfo local_240;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar2 = (this->CompleteMsgInfoList).ArrayNum;
  pTVar1 = &this->CompleteMsgInfoList;
  uVar15 = 0;
  uVar12 = uVar15;
  if (0 < iVar2) {
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->CompleteMsgInfoList).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      bVar6 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                         (pFVar3 + (longlong)(int)uVar12 * 0x20 + 0xc),(void *)0x0);
      if (!bVar6) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar3 + (longlong)(int)uVar12 * 0x20 + 0xc)
                                    );
        bVar6 = FDS_Text::IsEmpty((FDS_Text *)&pUVar8[4].field_0x8);
        if (bVar6) goto LAB_14bf9d87b;
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar2);
  }
  uVar12 = 0xffffffff;
LAB_14bf9d87b:
  if (-1 < (int)uVar12) {
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_W_Common_CompleteMessage::CheckNextMessage",0x31,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,0xff,L"msgMng is nullptr.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo
                (&local_240,*(EDS_MessageType *)((longlong)&this->_padding_ + 1));
      bVar6 = UDS_UIMessageManager::DequeueMsg(this_00,&local_240);
      iVar2 = (this->CompleteMsgInfoList).ArrayNum;
      if (bVar6) {
        uVar7 = 0;
        if ((int)uVar12 < iVar2) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar16 = (longlong)(int)uVar12 * 0x20;
        this_03 = (FWeakObjectPtr *)((pTVar1->AllocatorInstance).Data + lVar16);
        *(undefined8 *)&this_03[2].ObjectSerialNumber = 0;
        this_03[3].ObjectSerialNumber = 0;
        bVar6 = TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr> *)this_03
                           ,(void *)0x0);
        if (!bVar6) {
          iVar2 = this_03[1].ObjectIndex;
          if (iVar2 == 0) {
            pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_03);
            SetMsgTransY_0(pUVar10,(float)this_03[3].ObjectIndex);
          }
          else if (iVar2 == 1) {
            pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_03);
            SetMsgTransY_1(pUVar10,(float)this_03[3].ObjectIndex);
          }
          else if (iVar2 == 2) {
            pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_03);
            SetMsgTransY_2(pUVar10,(float)this_03[3].ObjectIndex);
          }
          else if (iVar2 == 3) {
            pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_03);
            SetMsgTransY_3(pUVar10,(float)this_03[3].ObjectIndex);
          }
        }
        uVar7 = 0;
        if ((int)uVar12 < (this->CompleteMsgInfoList).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
        bVar6 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                           (pFVar3 + lVar16 + 0xc),(void *)0x0);
        if (!bVar6) {
          this_01 = (UDS_ViewModelBase *)
                    FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar3 + lVar16 + 0xc));
          FDS_Text::operator=((FDS_Text *)&this_01[1]._padding_,&local_240.MsgText);
          local_260 = UDS_VM_W_HUDMessage::FFieldNotificationClassDescriptor::MsgText.BitNumber;
          local_268 = UDS_VM_W_HUDMessage::FFieldNotificationClassDescriptor::MsgText.FieldName;
          (**(code **)(this_01->_padding_ + 0x38))(&this_01->_padding_,&local_268);
          pFVar11 = ::FName::FName(&local_248,"OpenAni");
          this_01[1]._padding_ = (longlong)*pFVar11;
          *(undefined1 *)((longlong)&this_01[1]._padding_ + 4) = 2;
          local_250 = UDS_VM_W_HUDMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                      BitNumber;
          local_258 = UDS_VM_W_HUDMessage::FFieldNotificationClassDescriptor::PlayOpenAniEvent.
                      FieldName;
          (**(code **)(this_01->_padding_ + 0x38))(&this_01->_padding_,&local_258);
          UDS_ViewModelBase::SetVisibility(this_01,SelfHitTestInvisible);
          fVar5 = __real_42700000;
          lVar16 = (longlong)(this->CompleteMsgInfoList).ArrayNum;
          if (0 < lVar16) {
            lVar14 = 0;
            lVar13 = 0;
            do {
              if (lVar14 != (int)uVar12) {
                uVar7 = 0;
                if ((int)uVar15 < (this->CompleteMsgInfoList).ArrayNum) {
                  uVar7 = ~uVar15 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar3 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
                bVar6 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                                   (pFVar3 + lVar13 + 0xc),(void *)0x0);
                if (!bVar6) {
                  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar3 + lVar13 + 0xc));
                  bVar6 = FDS_Text::IsEmpty((FDS_Text *)&pUVar8[4].field_0x8);
                  if (!bVar6) {
                    uVar7 = 0;
                    if ((int)uVar15 < (this->CompleteMsgInfoList).ArrayNum) {
                      uVar7 = ~uVar15 >> 0x1f;
                    }
                    if ((uVar7 == 0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pFVar3 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
                    *(int *)(pFVar3 + lVar13 + 0x14) = *(int *)(pFVar3 + lVar13 + 0x14) + 1;
                    *(float *)(pFVar3 + lVar13 + 0x1c) =
                         (float)*(int *)(pFVar3 + lVar13 + 0x14) * fVar5;
                    if (2 < *(int *)(pFVar3 + lVar13 + 0x14)) {
                      bVar6 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                                        ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                                         (pFVar3 + lVar13 + 0xc),(void *)0x0);
                      if (!bVar6) {
                        this_02 = (UDS_VM_W_HUDMessage *)
                                  FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar3 + lVar13 + 0xc));
                        UDS_VM_W_HUDMessage::ClearMsg(this_02);
                      }
                    }
                  }
                }
              }
              uVar15 = uVar15 + 1;
              lVar14 = lVar14 + 1;
              lVar13 = lVar13 + 0x20;
            } while (lVar14 < lVar16);
          }
        }
      }
      else {
        uVar12 = uVar15;
        if (0 < iVar2) {
          do {
            uVar7 = uVar15;
            if ((int)uVar12 < (this->CompleteMsgInfoList).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (pTVar1->AllocatorInstance).Data;
            bVar6 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                               (pFVar3 + (longlong)(int)uVar12 * 0x20 + 0xc),(void *)0x0);
            if (!bVar6) {
              pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                           (pFVar3 + (longlong)(int)uVar12 * 0x20 + 0xc));
              bVar6 = FDS_Text::IsEmpty((FDS_Text *)&pUVar8[4].field_0x8);
              if (!bVar6) goto LAB_14bf9dd4c;
            }
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < iVar2);
        }
        UDS_UIMessageManager::EndMsgQueueing
                  (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,true);
      }
LAB_14bf9dd4c:
      FDS_UIMessageInfo::~FDS_UIMessageInfo(&local_240);
    }
  }
  return;
}

// GetSlotIndexEmptyMsgVM @ 14bfac8e0

int __thiscall
UDS_VM_W_Common_CompleteMessage::GetSlotIndexEmptyMsgVM(UDS_VM_W_Common_CompleteMessage *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  uint uVar7;
  
  iVar5 = (this->CompleteMsgInfoList).ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->CompleteMsgInfoList).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
      bVar3 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                         (pFVar1 + (longlong)(int)uVar7 * 0x20 + 0xc),(void *)0x0);
      if (!bVar3) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar1 + (longlong)(int)uVar7 * 0x20 + 0xc))
        ;
        bVar3 = FDS_Text::IsEmpty((FDS_Text *)&pUVar6[4].field_0x8);
        if (bVar3) {
          return uVar7;
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar5);
  }
  return -1;
}

// IncreasePosIndex @ 14bfadb50

void __thiscall
UDS_VM_W_Common_CompleteMessage::IncreasePosIndex(UDS_VM_W_Common_CompleteMessage *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  UDS_VM_W_HUDMessage *this_00;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  fVar3 = __real_42700000;
  lVar10 = (longlong)(this->CompleteMsgInfoList).ArrayNum;
  uVar9 = 0;
  if (0 < lVar10) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      if (uVar9 != param_1) {
        uVar5 = 0;
        if ((int)uVar9 < (this->CompleteMsgInfoList).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
        bVar4 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                           (pFVar1 + lVar7 + 0xc),(void *)0x0);
        if (!bVar4) {
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar1 + lVar7 + 0xc));
          bVar4 = FDS_Text::IsEmpty((FDS_Text *)&pUVar6[4].field_0x8);
          if (!bVar4) {
            uVar5 = 0;
            if ((int)uVar9 < (this->CompleteMsgInfoList).ArrayNum) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
            *(int *)(pFVar1 + lVar7 + 0x14) = *(int *)(pFVar1 + lVar7 + 0x14) + 1;
            *(float *)(pFVar1 + lVar7 + 0x1c) = (float)*(int *)(pFVar1 + lVar7 + 0x14) * fVar3;
            if (2 < *(int *)(pFVar1 + lVar7 + 0x14)) {
              bVar4 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                                 (pFVar1 + lVar7 + 0xc),(void *)0x0);
              if (!bVar4) {
                this_00 = (UDS_VM_W_HUDMessage *)
                          FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar1 + lVar7 + 0xc));
                UDS_VM_W_HUDMessage::ClearMsg(this_00);
              }
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar8 < lVar10);
  }
  return;
}

// InitMsgVM @ 14bfae5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UDS_VM_W_Common_CompleteMessage::InitMsgVM
          (UDS_VM_W_Common_CompleteMessage *this,TObjectPtr<UDS_VM_W_HUDMessage> *param_1,
          int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  FWeakObjectPtr FVar5;
  int iVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UDS_VM_W_HUDMessage *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_128 [32];
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  UDS_VM_W_Common_CompleteMessage *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FDestructionSentinel local_e8;
  undefined1 *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((param_1->field0_0x0).DebugPtr == (UDS_VM_W_HUDMessage *)0x0) {
    local_108.ObjectIndex = 0;
    local_108.ObjectSerialNumber = 0;
    pUVar7 = Z_Construct_UClass_UDS_VM_W_HUDMessage_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_W_HUDMessage_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar7);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar7);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_Transient;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = this;
    pUVar9 = (UDS_VM_W_HUDMessage *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar13 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    if (pUVar9 != (UDS_VM_W_HUDMessage *)0x0) {
      *(undefined1 *)((longlong)&pUVar9->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_W_HUDMessage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (param_1->field0_0x0).DebugPtr = pUVar9;
    if ((this->MsgVM_0).field0_0x0.DebugPtr == (UDS_VM_W_HUDMessage *)0x0) {
      return false;
    }
    pUVar9->SlotIndex = param_2;
    pUVar9 = (param_1->field0_0x0).DebugPtr;
    local_f8 = (UDS_VM_W_Common_CompleteMessage *)OnMsgVM_EndAni;
    uStack_f0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar9->EndAniDelegate,
               (FWriteAccessScope *)&local_e8);
    local_d0 = &(pUVar9->EndAniDelegate).field_0x8;
    puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_d0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Common_CompleteMessage____A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_108 = (FWeakObjectPtr)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_108);
      puVar10[4] = local_f8;
      puVar10[5] = CONCAT44(uStack_ec,uStack_f0);
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    UDS_VM_W_HUDMessage::ClearMsg((param_1->field0_0x0).DebugPtr);
    pUVar9 = (param_1->field0_0x0).DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UDS_VM_W_HUDMessage *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_VM_W_HUDMessage *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
    }
    local_108.ObjectIndex = 0;
    local_108.ObjectSerialNumber = 0;
    local_f8 = (UDS_VM_W_Common_CompleteMessage *)pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_W_HUDMessage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_f8);
    FVar3 = local_108;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    local_f8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_f8);
    FVar5 = local_100;
    piVar1 = &(this->CompleteMsgInfoList).ArrayMax;
    iVar6 = (this->CompleteMsgInfoList).ArrayNum;
    iVar4 = local_100.ObjectIndex;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x420,&(this->CompleteMsgInfoList).AllocatorInstance,piVar1);
    }
    (this->CompleteMsgInfoList).ArrayNum = iVar6 + 1;
    pFVar2 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
    lVar12 = (longlong)iVar6 * 0x20;
    *(int *)(pFVar2 + lVar12) = iVar4;
    *(int *)(pFVar2 + lVar12 + 4) = FVar5.ObjectSerialNumber;
    *(int *)(pFVar2 + lVar12 + 8) = param_2;
    *(int *)(pFVar2 + lVar12 + 0xc) = FVar3.ObjectIndex;
    *(int *)(pFVar2 + lVar12 + 0x10) = FVar3.ObjectSerialNumber;
    *(undefined8 *)(pFVar2 + lVar12 + 0x14) = 0;
    *(undefined4 *)(pFVar2 + lVar12 + 0x1c) = 0;
  }
  return true;
}

// InitMsgVMs @ 14bfae8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UDS_VM_W_Common_CompleteMessage::InitMsgVMs(UDS_VM_W_Common_CompleteMessage *this)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong *plVar9;
  FName local_98;
  int local_90;
  undefined4 local_58;
  uint uStack_54;
  
  bVar8 = InitMsgVM(this,&this->MsgVM_0,0);
  if (bVar8) {
    bVar8 = InitMsgVM(this,&this->MsgVM_1,1);
    if (bVar8) {
      bVar8 = InitMsgVM(this,&this->MsgVM_2,2);
      if (bVar8) {
        bVar8 = InitMsgVM(this,&this->MsgVM_3,3);
        uVar7 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
        uVar6 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
        uVar5 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
        uVar4 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
        dVar3 = _UNK_150689688;
        dVar2 = ___xmm_3ff00000000000003ff0000000000000;
        if (bVar8) {
          local_58 = 0;
          lVar1 = (ulonglong)uStack_54 << 0x20;
          *(undefined4 *)&(this->MsgTrans_0).Translation.field0_0x0 =
               UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
          *(undefined4 *)((longlong)&(this->MsgTrans_0).Translation.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_0).Translation.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_0).Translation.field0_0x0 + 0xc) = uVar7;
          *(undefined4 *)&(this->MsgTrans_1).Translation.field0_0x0 = uVar4;
          *(undefined4 *)((longlong)&(this->MsgTrans_1).Translation.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_1).Translation.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_1).Translation.field0_0x0 + 0xc) = uVar7;
          *(undefined4 *)&(this->MsgTrans_2).Translation.field0_0x0 = uVar4;
          *(undefined4 *)((longlong)&(this->MsgTrans_2).Translation.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_2).Translation.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_2).Translation.field0_0x0 + 0xc) = uVar7;
          *(undefined4 *)&(this->MsgTrans_3).Translation.field0_0x0 = uVar4;
          *(undefined4 *)((longlong)&(this->MsgTrans_3).Translation.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_3).Translation.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_3).Translation.field0_0x0 + 0xc) = uVar7;
          (this->MsgTrans_0).Scale.field0_0x0._s_0.X = dVar2;
          (this->MsgTrans_0).Scale.field0_0x0._s_0.Y = dVar3;
          (this->MsgTrans_1).Scale.field0_0x0._s_0.X = dVar2;
          (this->MsgTrans_1).Scale.field0_0x0._s_0.Y = dVar3;
          (this->MsgTrans_2).Scale.field0_0x0._s_0.X = dVar2;
          (this->MsgTrans_2).Scale.field0_0x0._s_0.Y = dVar3;
          (this->MsgTrans_3).Scale.field0_0x0._s_0.X = dVar2;
          (this->MsgTrans_3).Scale.field0_0x0._s_0.Y = dVar3;
          *(undefined4 *)&(this->MsgTrans_0).Shear.field0_0x0 = uVar4;
          *(undefined4 *)((longlong)&(this->MsgTrans_0).Shear.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_0).Shear.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_0).Shear.field0_0x0 + 0xc) = uVar7;
          *(undefined4 *)&(this->MsgTrans_1).Shear.field0_0x0 = uVar4;
          *(undefined4 *)((longlong)&(this->MsgTrans_1).Shear.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_1).Shear.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_1).Shear.field0_0x0 + 0xc) = uVar7;
          *(undefined4 *)&(this->MsgTrans_2).Shear.field0_0x0 = uVar4;
          *(undefined4 *)((longlong)&(this->MsgTrans_2).Shear.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_2).Shear.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_2).Shear.field0_0x0 + 0xc) = uVar7;
          *(undefined4 *)&(this->MsgTrans_3).Shear.field0_0x0 = uVar4;
          *(undefined4 *)((longlong)&(this->MsgTrans_3).Shear.field0_0x0 + 4) = uVar5;
          *(undefined4 *)((longlong)&(this->MsgTrans_3).Shear.field0_0x0 + 8) = uVar6;
          *(undefined4 *)((longlong)&(this->MsgTrans_3).Shear.field0_0x0 + 0xc) = uVar7;
          *(longlong *)&(this->MsgTrans_0).Angle = lVar1;
          *(longlong *)&(this->MsgTrans_1).Angle = lVar1;
          *(longlong *)&(this->MsgTrans_2).Angle = lVar1;
          *(longlong *)&(this->MsgTrans_3).Angle = lVar1;
          plVar9 = &this->_padding_;
          local_90 = FFieldNotificationClassDescriptor::MsgTrans_0.BitNumber;
          local_98 = FFieldNotificationClassDescriptor::MsgTrans_0.FieldName;
          (**(code **)(*plVar9 + 0x38))(plVar9,&local_98);
          local_90 = FFieldNotificationClassDescriptor::MsgTrans_1.BitNumber;
          local_98 = FFieldNotificationClassDescriptor::MsgTrans_1.FieldName;
          (**(code **)(*plVar9 + 0x38))(plVar9,&local_98);
          local_90 = FFieldNotificationClassDescriptor::MsgTrans_2.BitNumber;
          local_98 = FFieldNotificationClassDescriptor::MsgTrans_2.FieldName;
          (**(code **)(*plVar9 + 0x38))(plVar9,&local_98);
          local_90 = FFieldNotificationClassDescriptor::MsgTrans_3.BitNumber;
          local_98 = FFieldNotificationClassDescriptor::MsgTrans_3.FieldName;
          (**(code **)(*plVar9 + 0x38))(plVar9,&local_98);
          return true;
        }
      }
    }
  }
  return false;
}

// InitViewModel @ 14bfb0d90

void __thiscall
UDS_VM_W_Common_CompleteMessage::InitViewModel(UDS_VM_W_Common_CompleteMessage *this)

{
  (this->CompleteMsgInfoList).ArrayNum = 0;
  if ((this->CompleteMsgInfoList).ArrayMax < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,4,&(this->CompleteMsgInfoList).AllocatorInstance,0,
               &(this->CompleteMsgInfoList).ArrayMax);
  }
  return;
}

// IsAllMsgVMEmpty @ 14bfb23c0

bool __thiscall
UDS_VM_W_Common_CompleteMessage::IsAllMsgVMEmpty(UDS_VM_W_Common_CompleteMessage *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UObject *pUVar7;
  uint uVar8;
  
  iVar1 = (this->CompleteMsgInfoList).ArrayNum;
  uVar8 = 0;
  if (0 < iVar1) {
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->CompleteMsgInfoList).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
      bVar4 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                         (pFVar2 + (longlong)(int)uVar8 * 0x20 + 0xc),(void *)0x0);
      if (!bVar4) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar2 + (longlong)(int)uVar8 * 0x20 + 0xc))
        ;
        bVar4 = FDS_Text::IsEmpty((FDS_Text *)&pUVar7[4].field_0x8);
        if (!bVar4) {
          return false;
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar1);
  }
  return true;
}

// OnCloseInit @ 14bfbbf30

void __thiscall UDS_VM_W_Common_CompleteMessage::OnCloseInit(UDS_VM_W_Common_CompleteMessage *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnMsgVM_EndAni @ 14bfbf6d0

void __thiscall
UDS_VM_W_Common_CompleteMessage::OnMsgVM_EndAni(UDS_VM_W_Common_CompleteMessage *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_VM_W_HUDMessage *this_00;
  
  if ((-1 < param_1) && (param_1 < (this->CompleteMsgInfoList).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->CompleteMsgInfoList).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
    bVar3 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                       (pFVar1 + (longlong)param_1 * 0x20 + 0xc),(void *)0x0);
    if (!bVar3) {
      this_00 = (UDS_VM_W_HUDMessage *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar1 + (longlong)param_1 * 0x20 + 0xc));
      UDS_VM_W_HUDMessage::ClearMsg(this_00);
    }
  }
  return;
}

// OnSetViewModel @ 14bfc9fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_CompleteMessage::OnSetViewModel
          (UDS_VM_W_Common_CompleteMessage *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_MessageType EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  UDS_LogManager *pUVar13;
  UDS_UIMessageManager *this_00;
  UDS_VM_W_HUDMessage *this_01;
  FDS_ViewModelContext_CommonMessage *pFVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_4c8 [32];
  TSharedPtr<FDS_ViewModelContext_CommonMessage,1> local_498;
  FName local_488;
  int local_480;
  FName local_478;
  int local_470;
  FName local_468;
  int local_460;
  FName local_458;
  int local_450;
  TSharedPtr<FDS_ViewModelContext,1> local_448;
  TSharedPtr<FDS_ViewModelContext,1> local_438;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  uint uStack_3f4;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_448.Object = param_1->Object;
  local_448.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_CommonMessage::OnSetViewModel((UDS_VM_CommonMessage *)this,&local_448);
  local_438.Object = param_1->Object;
  local_438.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_438.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_438.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_438.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonMessage>(&local_498,&local_438);
  if (local_498.Object == (FDS_ViewModelContext_CommonMessage *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bfca525;
    pUVar13 = UDS_LogManager::GetInst();
    local_3e8._padding_ = (longlong)local_498.Object;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3e8,"UDS_VM_W_Common_CompleteMessage::OnSetViewModel",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar13,1,Warning,local_3e8.Ptr,0x57,L"context.IsValid() == false");
    pFVar14 = (FDS_ViewModelContext_CommonMessage *)local_3e8._padding_;
  }
  else {
    bVar11 = InitMsgVM(this,&this->MsgVM_0,0);
    if ((((bVar11) && (bVar11 = InitMsgVM(this,&this->MsgVM_1,1), bVar11)) &&
        (bVar11 = InitMsgVM(this,&this->MsgVM_2,2), bVar11)) &&
       (bVar11 = InitMsgVM(this,&this->MsgVM_3,3),
       uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_,
       uVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_,
       uVar8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_,
       uVar7 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_, dVar6 = _UNK_150689688,
       dVar5 = ___xmm_3ff00000000000003ff0000000000000, bVar11)) {
      local_3f8 = 0;
      lVar16 = (ulonglong)uStack_3f4 << 0x20;
      *(undefined4 *)&(this->MsgTrans_0).Translation.field0_0x0 =
           UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
      *(undefined4 *)((longlong)&(this->MsgTrans_0).Translation.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_0).Translation.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_0).Translation.field0_0x0 + 0xc) = uVar10;
      *(undefined4 *)&(this->MsgTrans_1).Translation.field0_0x0 = uVar7;
      *(undefined4 *)((longlong)&(this->MsgTrans_1).Translation.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_1).Translation.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_1).Translation.field0_0x0 + 0xc) = uVar10;
      *(undefined4 *)&(this->MsgTrans_2).Translation.field0_0x0 = uVar7;
      *(undefined4 *)((longlong)&(this->MsgTrans_2).Translation.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_2).Translation.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_2).Translation.field0_0x0 + 0xc) = uVar10;
      *(undefined4 *)&(this->MsgTrans_3).Translation.field0_0x0 = uVar7;
      *(undefined4 *)((longlong)&(this->MsgTrans_3).Translation.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_3).Translation.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_3).Translation.field0_0x0 + 0xc) = uVar10;
      (this->MsgTrans_0).Scale.field0_0x0._s_0.X = dVar5;
      (this->MsgTrans_0).Scale.field0_0x0._s_0.Y = dVar6;
      (this->MsgTrans_1).Scale.field0_0x0._s_0.X = dVar5;
      (this->MsgTrans_1).Scale.field0_0x0._s_0.Y = dVar6;
      (this->MsgTrans_2).Scale.field0_0x0._s_0.X = dVar5;
      (this->MsgTrans_2).Scale.field0_0x0._s_0.Y = dVar6;
      (this->MsgTrans_3).Scale.field0_0x0._s_0.X = dVar5;
      (this->MsgTrans_3).Scale.field0_0x0._s_0.Y = dVar6;
      *(undefined4 *)&(this->MsgTrans_0).Shear.field0_0x0 = uVar7;
      *(undefined4 *)((longlong)&(this->MsgTrans_0).Shear.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_0).Shear.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_0).Shear.field0_0x0 + 0xc) = uVar10;
      *(undefined4 *)&(this->MsgTrans_1).Shear.field0_0x0 = uVar7;
      *(undefined4 *)((longlong)&(this->MsgTrans_1).Shear.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_1).Shear.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_1).Shear.field0_0x0 + 0xc) = uVar10;
      *(undefined4 *)&(this->MsgTrans_2).Shear.field0_0x0 = uVar7;
      *(undefined4 *)((longlong)&(this->MsgTrans_2).Shear.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_2).Shear.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_2).Shear.field0_0x0 + 0xc) = uVar10;
      *(undefined4 *)&(this->MsgTrans_3).Shear.field0_0x0 = uVar7;
      *(undefined4 *)((longlong)&(this->MsgTrans_3).Shear.field0_0x0 + 4) = uVar8;
      *(undefined4 *)((longlong)&(this->MsgTrans_3).Shear.field0_0x0 + 8) = uVar9;
      *(undefined4 *)((longlong)&(this->MsgTrans_3).Shear.field0_0x0 + 0xc) = uVar10;
      *(longlong *)&(this->MsgTrans_0).Angle = lVar16;
      *(longlong *)&(this->MsgTrans_1).Angle = lVar16;
      *(longlong *)&(this->MsgTrans_2).Angle = lVar16;
      *(longlong *)&(this->MsgTrans_3).Angle = lVar16;
      local_480 = FFieldNotificationClassDescriptor::MsgTrans_0.BitNumber;
      local_428 = uVar7;
      uStack_424 = uVar8;
      uStack_420 = uVar9;
      uStack_41c = uVar10;
      local_408 = uVar7;
      uStack_404 = uVar8;
      uStack_400 = uVar9;
      uStack_3fc = uVar10;
      local_488 = FFieldNotificationClassDescriptor::MsgTrans_0.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_488);
      local_470 = FFieldNotificationClassDescriptor::MsgTrans_1.BitNumber;
      local_478 = FFieldNotificationClassDescriptor::MsgTrans_1.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_478);
      local_460 = FFieldNotificationClassDescriptor::MsgTrans_2.BitNumber;
      local_468 = FFieldNotificationClassDescriptor::MsgTrans_2.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_468);
      local_450 = FFieldNotificationClassDescriptor::MsgTrans_3.BitNumber;
      local_458 = FFieldNotificationClassDescriptor::MsgTrans_3.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_458);
      this_00 = UDS_UIMessageManager::GetInst();
      if (this_00 != (UDS_UIMessageManager *)0x0) {
        if ((local_498.Object == (FDS_ViewModelContext_CommonMessage *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EVar1 = (local_498.Object)->MsgType;
        *(EDS_MessageType *)((longlong)&this->_padding_ + 1) = EVar1;
        bVar11 = UDS_UIMessageManager::IsQueueingMsg(this_00,EVar1);
        if (!bVar11) {
          uVar15 = 0;
          iVar2 = (this->CompleteMsgInfoList).ArrayNum;
          if (0 < iVar2) {
            lVar16 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar15 < (this->CompleteMsgInfoList).ArrayNum) {
                uVar12 = ~uVar15 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar3 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
              bVar11 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                                 ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                                  (pFVar3 + lVar16 + 0xc),(void *)0x0);
              if (!bVar11) {
                this_01 = (UDS_VM_W_HUDMessage *)
                          FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar3 + lVar16 + 0xc));
                UDS_VM_W_HUDMessage::ClearMsg(this_01);
              }
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 0x20;
            } while ((int)uVar15 < iVar2);
          }
        }
        goto LAB_14bfca525;
      }
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bfca525;
      pUVar13 = UDS_LogManager::GetInst();
      local_2c8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_2c8,"UDS_VM_W_Common_CompleteMessage::OnSetViewModel",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar13,1,Warning,local_2c8.Ptr,0x65,L"msgMng is nullptr.");
      pFVar14 = (FDS_ViewModelContext_CommonMessage *)local_2c8._padding_;
    }
    else {
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 == (UDS_LogManager *)0x0) goto LAB_14bfca525;
      pUVar13 = UDS_LogManager::GetInst();
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_VM_W_Common_CompleteMessage::OnSetViewModel",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar13,1,Warning,local_1a8.Ptr,0x5e,L"Failed to InitMsgVM().");
      pFVar14 = (FDS_ViewModelContext_CommonMessage *)local_1a8._padding_;
    }
  }
  if (pFVar14 != (FDS_ViewModelContext_CommonMessage *)0x0) {
    FMemory::Free(pFVar14);
  }
LAB_14bfca525:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_498.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bfd0c20

void __thiscall
UDS_VM_W_Common_CompleteMessage::OnUpdate(UDS_VM_W_Common_CompleteMessage *this,float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  UDS_VM_W_Common_CompleteMessage *pUVar10;
  uint uVar11;
  FWeakObjectPtr *this_00;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  
  iVar2 = (this->CompleteMsgInfoList).ArrayNum;
  uVar11 = 0;
  if (0 < iVar2) {
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->CompleteMsgInfoList).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
      bVar7 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                         (pFVar4 + (longlong)(int)uVar11 * 0x20 + 0xc),(void *)0x0);
      if (!bVar7) {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar4 + (longlong)(int)uVar11 * 0x20 + 0xc)
                                    );
        bVar7 = FDS_Text::IsEmpty((FDS_Text *)&pUVar9[4].field_0x8);
        if (bVar7) {
          (**(code **)(this->_padding_ + 0x330))(this);
          break;
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < iVar2);
  }
  fVar6 = __real_43480000;
  uVar11 = 0;
  if (0 < iVar2) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->CompleteMsgInfoList).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->CompleteMsgInfoList).AllocatorInstance.Data;
      bVar7 = TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_VM_W_HUDMessage,FWeakObjectPtr> *)
                         (pFVar4 + lVar13 + 0xc),(void *)0x0);
      if (!bVar7) {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar4 + lVar13 + 0xc));
        bVar7 = FDS_Text::IsEmpty((FDS_Text *)&pUVar9[4].field_0x8);
        if (!bVar7) {
          uVar8 = 0;
          if ((int)uVar11 < (this->CompleteMsgInfoList).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = (FWeakObjectPtr *)((this->CompleteMsgInfoList).AllocatorInstance.Data + lVar13);
          fVar1 = (float)this_00[3].ObjectSerialNumber;
          if ((float)this_00[3].ObjectIndex < fVar1) {
            fVar14 = param_1 * fVar6 + (float)this_00[3].ObjectIndex;
            this_00[3].ObjectIndex = (int)fVar14;
            if (fVar1 < fVar14) {
              this_00[3].ObjectIndex = (int)fVar1;
            }
            bVar7 = TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_VM_W_Common_CompleteMessage,FWeakObjectPtr> *)
                               this_00,(void *)0x0);
            if (!bVar7) {
              iVar3 = this_00[1].ObjectIndex;
              if (iVar3 == 0) {
                pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_00);
                SetMsgTransY_0(pUVar10,(float)this_00[3].ObjectIndex);
              }
              else if (iVar3 == 1) {
                pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_00);
                SetMsgTransY_1(pUVar10,(float)this_00[3].ObjectIndex);
              }
              else if (iVar3 == 2) {
                pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_00);
                SetMsgTransY_2(pUVar10,(float)this_00[3].ObjectIndex);
              }
              else if (iVar3 == 3) {
                pUVar10 = (UDS_VM_W_Common_CompleteMessage *)FWeakObjectPtr::Get(this_00);
                SetMsgTransY_3(pUVar10,(float)this_00[3].ObjectIndex);
              }
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x20;
    } while (lVar12 < iVar2);
  }
  return;
}

// SetMsgTransY_0 @ 14bfdc420

void __thiscall
UDS_VM_W_Common_CompleteMessage::SetMsgTransY_0(UDS_VM_W_Common_CompleteMessage *this,float param_1)

{
  FName local_18;
  int local_10;
  
  (this->MsgTrans_0).Translation.field0_0x0._s_0.Y =
       (double)(float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  local_10 = FFieldNotificationClassDescriptor::MsgTrans_0.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgTrans_0.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMsgTransY_1 @ 14bfdc470

void __thiscall
UDS_VM_W_Common_CompleteMessage::SetMsgTransY_1(UDS_VM_W_Common_CompleteMessage *this,float param_1)

{
  FName local_18;
  int local_10;
  
  (this->MsgTrans_1).Translation.field0_0x0._s_0.Y =
       (double)(float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  local_10 = FFieldNotificationClassDescriptor::MsgTrans_1.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgTrans_1.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMsgTransY_2 @ 14bfdc4c0

void __thiscall
UDS_VM_W_Common_CompleteMessage::SetMsgTransY_2(UDS_VM_W_Common_CompleteMessage *this,float param_1)

{
  FName local_18;
  int local_10;
  
  (this->MsgTrans_2).Translation.field0_0x0._s_0.Y =
       (double)(float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  local_10 = FFieldNotificationClassDescriptor::MsgTrans_2.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgTrans_2.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMsgTransY_3 @ 14bfdc510

void __thiscall
UDS_VM_W_Common_CompleteMessage::SetMsgTransY_3(UDS_VM_W_Common_CompleteMessage *this,float param_1)

{
  FName local_18;
  int local_10;
  
  (this->MsgTrans_3).Translation.field0_0x0._s_0.Y =
       (double)(float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
  local_10 = FFieldNotificationClassDescriptor::MsgTrans_3.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MsgTrans_3.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdfe60

void __thiscall UDS_VM_W_Common_CompleteMessage::UnbindModel(UDS_VM_W_Common_CompleteMessage *this)

{
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  return;
}

