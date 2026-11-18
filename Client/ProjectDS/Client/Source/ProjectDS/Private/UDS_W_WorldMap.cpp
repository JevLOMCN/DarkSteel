// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b788210

UClass * __cdecl UDS_W_WorldMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_WorldMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_WorldMap",
               &Z_Registration_Info_UClass_UDS_W_WorldMap.InnerSingleton,
               StaticRegisterNativesUDS_W_WorldMap,0x8a0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_W_WorldMap>,InternalVTableHelperCtorCaller<UDS_W_WorldMap>,
               local_res8,UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_WorldMap.InnerSingleton;
}

// UDS_W_WorldMap @ 14b78dcb0

UDS_W_WorldMap * __thiscall
UDS_W_WorldMap::UDS_W_WorldMap(UDS_W_WorldMap *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->IslandCountArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandCountArray).ArrayNum = 0;
  (this->IslandCountArray).ArrayMax = 0;
  return this;
}

// UDS_W_WorldMap @ 14b78dd10

UDS_W_WorldMap * __thiscall
UDS_W_WorldMap::UDS_W_WorldMap(UDS_W_WorldMap *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->IslandCountArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandCountArray).ArrayNum = 0;
  (this->IslandCountArray).ArrayMax = 0;
  return this;
}

// ~UDS_W_WorldMap @ 14b78e580

void __thiscall UDS_W_WorldMap::~UDS_W_WorldMap(UDS_W_WorldMap *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pFVar1 = (this->IslandCountArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b790970

UClass * __cdecl UDS_W_WorldMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_WorldMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_WorldMap",
               &Z_Registration_Info_UClass_UDS_W_WorldMap.InnerSingleton,
               StaticRegisterNativesUDS_W_WorldMap,0x8a0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_W_WorldMap>,InternalVTableHelperCtorCaller<UDS_W_WorldMap>,
               local_res8,UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_WorldMap.InnerSingleton;
}

// StaticRegisterNativesUDS_W_WorldMap @ 14b790c90

void __cdecl UDS_W_WorldMap::StaticRegisterNativesUDS_W_WorldMap(void)

{
  return;
}

// BindButtonWidget @ 14bce8cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_WorldMap::BindButtonWidget(UDS_W_WorldMap *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  UWidget *pUVar7;
  UDS_LogManager *pUVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  undefined1 auStackY_1f8 [32];
  FString local_1b8;
  code *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  FDestructionSentinel local_198;
  FName local_180;
  undefined1 local_178 [288];
  void *local_58;
  wchar_t *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar11 = 0;
  if (0 < (this->IslandCountArray).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar11 < (this->IslandCountArray).ArrayNum) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::PrintfImpl(&local_1b8,L"Island_Btn_%d");
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_1b8.Data.ArrayNum != 0) {
        FVar10.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_180,(wchar_t *)FVar10.Data);
      pUVar7 = UUserWidget::GetWidgetFromName((UUserWidget *)this,pFVar6);
      if (pUVar7 == (UWidget *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_58 = (void *)0x0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x20),
                     "UDS_W_WorldMap::BindButtonWidget",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_50,0x46,L"not found island widget. WidgetName - %s");
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
        }
      }
      else {
        pUVar9 = Z_Construct_UClass_UDS_W_CommonIconTextButton_NoRegister();
        iVar1 = (int)pUVar9->_padding_;
        if (((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar9->_padding_)) && (lVar2 = pUVar7[5]._padding_, lVar2 != 0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x1570),
                     (FWriteAccessScope *)&local_198);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar2 + 0x1570));
          if (local_198.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
          }
          lVar2 = pUVar7[5]._padding_;
          uVar5 = 0;
          if ((int)uVar11 < (this->IslandCountArray).ArrayNum) {
            uVar5 = ~uVar11 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_1a8 = OnIslandClickEvent;
          uStack_1a0 = 0;
          local_178._24_8_ = (ulonglong)uStack_19c << 0x20;
          local_178._16_8_ = OnIslandClickEvent;
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddUObject<UDS_W_WorldMap,int_&>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)(lVar2 + 0x1570),(UDS_W_WorldMap *)local_178,(pmf_a04ca571 *)this,
                     (int *)(local_178 + 0x10));
        }
      }
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (this->IslandCountArray).ArrayNum);
  }
  return;
}

// GetMousePositionPanel @ 14bcf92d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_W_WorldMap::GetMousePositionPanel(UDS_W_WorldMap *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  FDeprecateSlateVector2D FVar3;
  float fVar4;
  UDS_GameInstance *pUVar5;
  FSlateApplication *pFVar6;
  float *pfVar7;
  FGeometry *pFVar8;
  TTransform2<float> *pTVar9;
  double dVar10;
  double dVar11;
  float local_58;
  undefined1 local_50 [4];
  float fStack_4c;
  TTransform2<float> local_48 [2];
  
  pUVar5 = UDS_GameInstance::GetInst();
  if ((pUVar5 != (UDS_GameInstance *)0x0) && (this->PanelWorldMap != (UDS_CanvasPanel *)0x0)) {
    pFVar6 = FSlateApplication::Get();
    pfVar7 = (float *)(**(code **)(*(longlong *)pFVar6 + 0x68))(pFVar6,local_50);
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    pFVar8 = UWidget::GetCachedGeometry((UWidget *)this->PanelWorldMap);
    pTVar9 = Inverse<TTransform2<float>_>(local_48,&pFVar8->AccumulatedRenderTransform);
    fVar4 = __real_3f000000;
    dVar10 = (double)(fVar2 * (pTVar9->M).M[1][0] + fVar1 * (pTVar9->M).M[0][0] +
                     (pTVar9->Trans).field0_0x0._s_0.X);
    dVar11 = (double)(fVar1 * (pTVar9->M).M[0][1] + fVar2 * (pTVar9->M).M[1][1] +
                     (pTVar9->Trans).field0_0x0._s_0.Y);
    if ((0.0 < dVar10) && (0.0 < dVar11)) {
      FVar3 = pFVar8->Size;
      local_58 = FVar3._0_4_;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar10 - (double)(local_58 * __real_3f000000);
      fStack_4c = FVar3._4_4_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11 - (double)(fStack_4c * fVar4);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// MarkerCreateButtonClickEvent @ 14bd06ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_WorldMap::MarkerCreateButtonClickEvent(UDS_W_WorldMap *this)

{
  UDS_WorldMapEvent *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  int local_158 [4];
  TVector2<double>_u_0 local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    local_148._s_0.X = (this->CurMousePos).field0_0x0._s_0.X;
    local_148._s_0.Y = (this->CurMousePos).field0_0x0._s_0.Y;
    local_158[0] = 1;
    FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>::Broadcast
              (&pUVar1->MousePosByMakerCreateDelegate,local_158,(TVector2<double> *)&local_148._s_0)
    ;
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    ::FString::PrintfImpl((FString *)&local_148._s_0,L"X=%3.3f Y=%3.3f");
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_W_WorldMap::MarkerCreateButtonClickEvent",0x2c,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x3a,
               L"Mouse Position in Panel when \'X\' Key Pressed: %s");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if ((void *)local_148._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_148._s_0.X);
    }
  }
  return;
}

// NativeConstruct @ 14bd07520

void __thiscall UDS_W_WorldMap::NativeConstruct(UDS_W_WorldMap *this)

{
  ulonglong uVar1;
  FName *pFVar2;
  UDS_WorldMapEvent *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FName local_res8;
  ulonglong uStack_50;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  uVar1 = uStack_50;
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar2 = ::FName::FName(&local_res8,"PanelCenter");
  UDS_UserWidget::BindWidget<UDS_CanvasPanel>((UDS_UserWidget *)this,&this->PanelWorldMap,*pFVar2);
  BindButtonWidget(this);
  pUVar3 = UDS_WorldMapEvent::GetEvent();
  if (pUVar3 != (UDS_WorldMapEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar3->MousePositionQueryDelegate);
    uStack_50 = uStack_50 & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->MousePositionQueryDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(pUVar3->MousePositionQueryDelegate).Delegate.field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_WorldMap____A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_WorldMap *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res8 = (FName)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_WorldMap *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
      puVar4[4] = OnUpdateMousePosition;
      puVar4[5] = uStack_50;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar3->WorldMapPanelSizeQueryDelegate)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->WorldMapPanelSizeQueryDelegate,(FWriteAccessScope *)&local_48);
    local_30 = &(pUVar3->WorldMapPanelSizeQueryDelegate).Delegate.field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_WorldMap____A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_WorldMap *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res8 = (FName)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_WorldMap *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
      puVar4[4] = OnUpdateWorldMapPanelSize;
      puVar4[5] = uVar1 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->RequestMarkerAddDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_W_WorldMap>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->RequestMarkerAddDelegate,(UDS_W_WorldMap *)&local_res8,(pmf_5749886f *)this)
    ;
  }
  return;
}

// NativeDestruct @ 14bd07910

void __thiscall UDS_W_WorldMap::NativeDestruct(UDS_W_WorldMap *this)

{
  UDS_WorldMapEvent *pUVar1;
  
  pUVar1 = UDS_WorldMapEvent::GetEvent();
  if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->MousePositionQueryDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->WorldMapPanelSizeQueryDelegate)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->RequestMarkerAddDelegate,this);
  }
  return;
}

// NativeTick @ 14bd09b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_WorldMap::NativeTick(UDS_W_WorldMap *this,FGeometry *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  TVector2<double>_u_0 TVar3;
  UDS_GameInstance *pUVar4;
  FSlateApplication *pFVar5;
  float *pfVar6;
  FGeometry *pFVar7;
  TTransform2<float> *pTVar8;
  double dVar9;
  double dVar10;
  float local_58;
  undefined1 local_50 [4];
  float fStack_4c;
  TTransform2<float> local_48 [2];
  
  UDS_UserWidget::NativeTick((UDS_UserWidget *)this,param_1,param_2);
  pUVar4 = UDS_GameInstance::GetInst();
  if ((pUVar4 != (UDS_GameInstance *)0x0) && (this->PanelWorldMap != (UDS_CanvasPanel *)0x0)) {
    pFVar5 = FSlateApplication::Get();
    pfVar6 = (float *)(**(code **)(*(longlong *)pFVar5 + 0x68))(pFVar5,local_50);
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    pFVar7 = UWidget::GetCachedGeometry((UWidget *)this->PanelWorldMap);
    pTVar8 = Inverse<TTransform2<float>_>(local_48,&pFVar7->AccumulatedRenderTransform);
    dVar10 = (double)(fVar2 * (pTVar8->M).M[1][0] + fVar1 * (pTVar8->M).M[0][0] +
                     (pTVar8->Trans).field0_0x0._s_0.X);
    dVar9 = (double)(fVar1 * (pTVar8->M).M[0][1] + fVar2 * (pTVar8->M).M[1][1] +
                    (pTVar8->Trans).field0_0x0._s_0.Y);
    if ((dVar10 <= 0.0) || (dVar9 <= 0.0)) {
      dVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
      dVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
    }
    else {
      local_58 = SUB84(pFVar7->Size,0);
      fStack_4c = SUB84(pFVar7->Size,4);
      dVar10 = dVar10 - (double)(local_58 * __real_3f000000);
      dVar9 = dVar9 - (double)(fStack_4c * __real_3f000000);
    }
    TVar3._8_4_ = SUB84(dVar9,0);
    TVar3._s_0.X = dVar10;
    TVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    (this->CurMousePos).field0_0x0 = TVar3;
    return;
  }
  (this->CurMousePos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// OnIslandClickEvent @ 14bd0e9b0

void __thiscall UDS_W_WorldMap::OnIslandClickEvent(UDS_W_WorldMap *this,int param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<int_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_WorldMapEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pUVar9 = UDS_WorldMapEvent::GetEvent();
  if (pUVar9 != (UDS_WorldMapEvent *)0x0) {
    this_00 = &pUVar9->IsladnChangeFromWorldMapViewDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 <
              *(int *)&(pUVar9->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          lVar2 = *(longlong *)&(pUVar9->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->IsladnChangeFromWorldMapViewDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// OnUpdateMousePosition @ 14bd14660

TVector2<double> * __thiscall
UDS_W_WorldMap::OnUpdateMousePosition(UDS_W_WorldMap *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->CurMousePos).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CurMousePos).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// OnUpdateWorldMapPanelSize @ 14bd14ac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
UDS_W_WorldMap::OnUpdateWorldMapPanelSize
          (UDS_W_WorldMap *this,TVector2<double> *__return_storage_ptr__)

{
  TVector2<double>_u_0 TVar1;
  double dVar2;
  FGeometry *pFVar3;
  
  if (this->PanelWorldMap != (UDS_CanvasPanel *)0x0) {
    pFVar3 = UWidget::GetCachedGeometry((UWidget *)this->PanelWorldMap);
    dVar2 = (double)SUB84(pFVar3->Size,4);
    TVar1._8_4_ = SUB84(dVar2,0);
    TVar1._s_0.X = (double)SUB84(pFVar3->Size,0);
    TVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    __return_storage_ptr__->field0_0x0 = TVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

