// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b7624c0

UClass * __cdecl UDS_WindowInfoBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowInfoBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowInfoBase",
               &Z_Registration_Info_UClass_UDS_WindowInfoBase.InnerSingleton,
               StaticRegisterNativesUDS_WindowInfoBase,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WindowInfoBase>,
               InternalVTableHelperCtorCaller<UDS_WindowInfoBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowInfoBase.InnerSingleton;
}

// UDS_WindowInfoBase @ 14b764860

UDS_WindowInfoBase * __thiscall
UDS_WindowInfoBase::UDS_WindowInfoBase(UDS_WindowInfoBase *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WindowInfoBase__6B_;
  this->WindowID = None;
  FDS_WindowBaseTableRow::FDS_WindowBaseTableRow(&this->WindowBaseTableRow);
  local_res8 = 0;
  (this->WindowFrameWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WindowFrameWidget).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ContentsWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ContentsWidget).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->OnInputActionDelegate = 0;
  *(undefined8 *)&(this->OnInputActionDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputActionDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputActionDelegate).field_0x8 = 0;
  this->InputReceiveType = Self;
  (this->WindowPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bIsClosable = false;
  this->bIsShowing = false;
  this->bIsHudGroup = false;
  this->bInputEscapeLock = false;
  this->bIsAsyncLoading = false;
  this->bIsPendingKill = false;
  (this->WindowSize).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->WindowAnchor).Minimum.field0_0x0._s_0.X = 0.0;
  (this->WindowAnchor).Minimum.field0_0x0._s_0.Y = 0.0;
  (this->WindowAnchor).Maximum.field0_0x0._s_0.X = 0.0;
  (this->WindowAnchor).Maximum.field0_0x0._s_0.Y = 0.0;
  (this->OnOpenTimerHandle).Handle = 0;
  (this->OnCloseTimerHandle).Handle = 0;
  (this->OpenWindowCallback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenWindowCallback).ArrayNum = 0;
  (this->OpenWindowCallback).ArrayMax = 0;
  (this->AsyncLoadWindowCallback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncLoadWindowCallback).ArrayNum = 0;
  (this->AsyncLoadWindowCallback).ArrayMax = 0;
  this->bIsOpeningDelayed = false;
  return this;
}

// UDS_WindowInfoBase @ 14b764970

UDS_WindowInfoBase * __thiscall
UDS_WindowInfoBase::UDS_WindowInfoBase(UDS_WindowInfoBase *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WindowInfoBase__6B_;
  this->WindowID = None;
  FDS_WindowBaseTableRow::FDS_WindowBaseTableRow(&this->WindowBaseTableRow);
  local_res8 = 0;
  (this->WindowFrameWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->WindowFrameWidget).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->ContentsWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ContentsWidget).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->OnInputActionDelegate = 0;
  *(undefined8 *)&(this->OnInputActionDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnInputActionDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnInputActionDelegate).field_0x8 = 0;
  this->InputReceiveType = Self;
  (this->WindowPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->bIsClosable = false;
  this->bIsShowing = false;
  this->bIsHudGroup = false;
  this->bInputEscapeLock = false;
  this->bIsAsyncLoading = false;
  this->bIsPendingKill = false;
  (this->WindowSize).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->WindowAnchor).Minimum.field0_0x0._s_0.X = 0.0;
  (this->WindowAnchor).Minimum.field0_0x0._s_0.Y = 0.0;
  (this->WindowAnchor).Maximum.field0_0x0._s_0.X = 0.0;
  (this->WindowAnchor).Maximum.field0_0x0._s_0.Y = 0.0;
  (this->OnOpenTimerHandle).Handle = 0;
  (this->OnCloseTimerHandle).Handle = 0;
  (this->OpenWindowCallback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenWindowCallback).ArrayNum = 0;
  (this->OpenWindowCallback).ArrayMax = 0;
  (this->AsyncLoadWindowCallback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncLoadWindowCallback).ArrayNum = 0;
  (this->AsyncLoadWindowCallback).ArrayMax = 0;
  this->bIsOpeningDelayed = false;
  return this;
}

// ~UDS_WindowInfoBase @ 14b7653b0

void __thiscall UDS_WindowInfoBase::~UDS_WindowInfoBase(UDS_WindowInfoBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_WindowInfoBase__6B_;
  DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
             (this->AsyncLoadWindowCallback).AllocatorInstance.Data,
             (this->AsyncLoadWindowCallback).ArrayNum);
  pFVar1 = (this->AsyncLoadWindowCallback).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
             (this->OpenWindowCallback).AllocatorInstance.Data,(this->OpenWindowCallback).ArrayNum);
  pFVar1 = (this->OpenWindowCallback).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputActionDelegate).field_0x8,
             *(int *)&(this->OnInputActionDelegate).field_0x10);
  pvVar2 = *(void **)&(this->OnInputActionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputActionDelegate);
  pFVar1 = (this->WindowBaseTableRow).WindowHideDelay.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowBaseTableRow).WindowOverDelay.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowBaseTableRow).WidgetPath.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowBaseTableRow).Version.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WindowBaseTableRow)._padding_ = (longlong)&___7FTableRowBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b766b30

UClass * __cdecl UDS_WindowInfoBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WindowInfoBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WindowInfoBase",
               &Z_Registration_Info_UClass_UDS_WindowInfoBase.InnerSingleton,
               StaticRegisterNativesUDS_WindowInfoBase,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WindowInfoBase>,
               InternalVTableHelperCtorCaller<UDS_WindowInfoBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WindowInfoBase.InnerSingleton;
}

// OnOpenWindowDelayCallback @ 14b766ca0

void __thiscall UDS_WindowInfoBase::OnOpenWindowDelayCallback(UDS_WindowInfoBase *this)

{
  return;
}

// StaticRegisterNativesUDS_WindowInfoBase @ 14b766dd0

void __cdecl UDS_WindowInfoBase::StaticRegisterNativesUDS_WindowInfoBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_WindowInfoBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenDelayCallbackWrapper @ 14b767cb0

void __cdecl
UDS_WindowInfoBase::execOnOpenDelayCallbackWrapper(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenDelayCallbackWrapper((UDS_WindowInfoBase *)param_1);
  return;
}

// execRequestOpenWindowCallback @ 14b767d80

void __cdecl
UDS_WindowInfoBase::execRequestOpenWindowCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RequestOpenWindowCallback((UDS_WindowInfoBase *)param_1);
  return;
}

// Clear @ 14bb54d60

void __thiscall UDS_WindowInfoBase::Clear(UDS_WindowInfoBase *this)

{
  return;
}

// GetWindowAnchor @ 14bb68770

FAnchors * __thiscall
UDS_WindowInfoBase::GetWindowAnchor(UDS_WindowInfoBase *this,FAnchors *__return_storage_ptr__)

{
  double dVar1;
  
  if ((this->WindowBaseTableRow).WindowInstanceType == One) {
    dVar1 = (this->WindowAnchor).Minimum.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X =
         (this->WindowAnchor).Minimum.field0_0x0._s_0.X;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = dVar1;
    dVar1 = (this->WindowAnchor).Maximum.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X =
         (this->WindowAnchor).Maximum.field0_0x0._s_0.X;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  UDS_W_WindowFrame::GetAnchor(__return_storage_ptr__,(this->WindowBaseTableRow).WindowAnchorType);
  return __return_storage_ptr__;
}

// GetWindowDefaultSize @ 14bb687c0

TVector2<double> * __thiscall
UDS_WindowInfoBase::GetWindowDefaultSize
          (UDS_WindowInfoBase *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  bool bVar2;
  TVector2<double> *pTVar3;
  
  bVar2 = FDS_WindowBaseTableRow::IsValid(&this->WindowBaseTableRow);
  pTVar3 = &(this->WindowBaseTableRow).DefaultSize;
  if (!bVar2) {
    pTVar3 = &UE::Math::TVector2<double>::ZeroVector;
  }
  dVar1 = (pTVar3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetWindowPosition @ 14bb68db0

TVector2<double> * __thiscall
UDS_WindowInfoBase::GetWindowPosition
          (UDS_WindowInfoBase *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  if ((this->WindowBaseTableRow).WindowInstanceType == One) {
    dVar1 = (this->WindowPosition).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->WindowPosition).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  dVar1 = (this->WindowBaseTableRow).DefaultPosition.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->WindowBaseTableRow).DefaultPosition.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetWindowSize @ 14bb68de0

TVector2<double> * __thiscall
UDS_WindowInfoBase::GetWindowSize(UDS_WindowInfoBase *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  if ((this->WindowBaseTableRow).WindowInstanceType == One) {
    dVar1 = (this->WindowSize).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->WindowSize).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  dVar1 = (this->WindowBaseTableRow).DefaultSize.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->WindowBaseTableRow).DefaultSize.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// IsCreated @ 14bb6ec40

bool __thiscall UDS_WindowInfoBase::IsCreated(UDS_WindowInfoBase *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WindowFrameWidget).WeakPtr);
  return bVar1;
}

// IsOpen @ 14bb6f000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WindowInfoBase::IsOpen(UDS_WindowInfoBase *this)

{
  bool bVar1;
  ESlateVisibility EVar2;
  UWidget *this_00;
  
  bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowFrameWidget,(void *)0x0);
  if (bVar1) {
    return false;
  }
  this_00 = (UWidget *)FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
  EVar2 = UWidget::GetVisibility(this_00);
  return EVar2 == SelfHitTestInvisible;
}

// OnOpenDelayCallbackWrapper @ 14bb749a0

void __thiscall UDS_WindowInfoBase::OnOpenDelayCallbackWrapper(UDS_WindowInfoBase *this)

{
  this->bIsOpeningDelayed = false;
                    /* WARNING: Could not recover jumptable at 0x00014bb749aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))();
  return;
}

// OnOpenWindowDelay @ 14bb74ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowInfoBase::OnOpenWindowDelay(UDS_WindowInfoBase *this,float *param_1)

{
  FTimerManager *this_00;
  
  this->bIsOpeningDelayed = true;
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<UDS_WindowInfoBase>
            (this_00,&this->OnOpenTimerHandle,this,(pmf_6e18e858)0x14bb749a0,*param_1,false,
             __real_bf800000);
  return;
}

// RequestOpenWindowCallback @ 14bb851b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_WindowInfoBase::RequestOpenWindowCallback(UDS_WindowInfoBase *this)

{
  double dVar1;
  FTimerManager *this_00;
  wchar_t *_Str;
  double dVar2;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000) - this->OpenStartTime;
  if ((this->WindowBaseTableRow).WindowOverDelay.Data.ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(this->WindowBaseTableRow).WindowOverDelay.Data.AllocatorInstance.Data;
  }
  dVar2 = _wtof(_Str);
  if ((0.0 < (float)dVar2) && (dVar2 = (double)(float)dVar2, dVar1 < dVar2)) {
    this->bIsOpeningDelayed = true;
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer<UDS_WindowInfoBase>
              (this_00,&this->OnOpenTimerHandle,this,(pmf_6e18e858)0x14bb749a0,
               (float)(dVar2 - dVar1),false,__real_bf800000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014bb85294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))(this);
  return;
}

// SetEscapeLock @ 14bb8abb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_WindowInfoBase::SetEscapeLock(EDS_WindowWidget param_1,bool param_2)

{
  bool bVar1;
  UDS_WindowManager *this;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this,(int)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      pUVar2[8].field_0x23 = param_2;
    }
  }
  return;
}

// SetInputReceiveType @ 14bb8aca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_WindowInfoBase::SetInputReceiveType(EDS_WindowWidget param_1,EDS_WindowInputReceiveType param_2)

{
  bool bVar1;
  UDS_WindowManager *this;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this,(int)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res18);
      pUVar2[6].field_0x10 = param_2;
    }
  }
  return;
}

// SetWindowAnchor @ 14bb8e140

void __thiscall UDS_WindowInfoBase::SetWindowAnchor(UDS_WindowInfoBase *this,FAnchors *param_1)

{
  double dVar1;
  
  if ((this->WindowBaseTableRow).WindowInstanceType == One) {
    dVar1 = (param_1->Minimum).field0_0x0._s_0.Y;
    (this->WindowAnchor).Minimum.field0_0x0._s_0.X = (param_1->Minimum).field0_0x0._s_0.X;
    (this->WindowAnchor).Minimum.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->Maximum).field0_0x0._s_0.Y;
    (this->WindowAnchor).Maximum.field0_0x0._s_0.X = (param_1->Maximum).field0_0x0._s_0.X;
    (this->WindowAnchor).Maximum.field0_0x0._s_0.Y = dVar1;
  }
  return;
}

// SetWindowPosition @ 14bb8e170

void __thiscall
UDS_WindowInfoBase::SetWindowPosition(UDS_WindowInfoBase *this,TVector2<double> *param_1)

{
  double dVar1;
  
  if ((this->WindowBaseTableRow).WindowInstanceType == One) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->WindowPosition).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->WindowPosition).field0_0x0._s_0.Y = dVar1;
  }
  return;
}

// SetWindowSize @ 14bb8e190

void __thiscall
UDS_WindowInfoBase::SetWindowSize(UDS_WindowInfoBase *this,TVector2<double> *param_1)

{
  double dVar1;
  
  if ((this->WindowBaseTableRow).WindowInstanceType == One) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->WindowSize).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
    (this->WindowSize).field0_0x0._s_0.Y = dVar1;
  }
  return;
}

// Toggle @ 14bb92d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_WindowInfoBase::Toggle(UDS_WindowInfoBase *this,bool param_1)

{
  TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *this_00;
  bool bVar1;
  ESlateVisibility EVar2;
  UWidget *this_01;
  UObject *pUVar3;
  undefined7 in_register_00000011;
  
  this_00 = &this->WindowFrameWidget;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar1) {
    return false;
  }
  if (param_1) {
    this_01 = (UWidget *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    EVar2 = UWidget::GetVisibility(this_01);
    if ((bool)EVar2 == param_1) {
      this->bIsShowing = param_1;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      (**(code **)(*(longlong *)pUVar3 + 0x4e0))(pUVar3);
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,4);
      return param_1;
    }
  }
  else {
    this->bIsShowing = false;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,CONCAT71(in_register_00000011,1));
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x4e8))(pUVar3);
    (**(code **)(this->_padding_ + 0x2d0))(this);
  }
  return true;
}

// ToggleOnlyVisible @ 14bb92e60

bool __thiscall UDS_WindowInfoBase::ToggleOnlyVisible(UDS_WindowInfoBase *this,bool param_1)

{
  bool bVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->WindowFrameWidget).WeakPtr);
  if (!bVar1) {
    return false;
  }
  if (param_1) {
    this->bIsShowing = param_1;
    pUVar2 = FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
    uVar3 = 4;
  }
  else {
    this->bIsShowing = false;
    pUVar2 = FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
    uVar3 = 1;
  }
  (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,uVar3);
  return true;
}

