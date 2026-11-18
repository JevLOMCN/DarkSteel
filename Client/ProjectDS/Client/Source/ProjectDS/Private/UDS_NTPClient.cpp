// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b5463c0

UClass * __cdecl UDS_NTPClient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NTPClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NTPClient",
               &Z_Registration_Info_UClass_UDS_NTPClient.InnerSingleton,
               StaticRegisterNativesUDS_NTPClient,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NTPClient>,InternalVTableHelperCtorCaller<UDS_NTPClient>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NTPClient.InnerSingleton;
}

// UDS_NTPClient @ 14b54add0

UDS_NTPClient * __thiscall UDS_NTPClient::UDS_NTPClient(UDS_NTPClient *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CooldownSeconds = 10.0;
  this->_padding_ = (longlong)&___7UDS_NTPClient__6B_;
  (this->NTPTimeData).RootDelay = 0;
  (this->NTPTimeData).RootDispersion = 0;
  (this->NTPTimeData).RefClockId = 0;
  (this->NTPTimeData).RefTimeSec = 0;
  (this->NTPTimeData).RefTimeFractionSec = 0;
  (this->NTPTimeData).BaseTimeSec = 0;
  (this->NTPTimeData).BaseTimeFractionSec = 0;
  (this->NTPTimeData).RecvTimeSec = 0;
  (this->NTPTimeData).RecvTimeFractionSec = 0;
  (this->NTPTimeData).SendTimeSec = 0;
  (this->NTPTimeData).SendTimeFractionSec = 0;
  this->OffSetNanoSec = 0.0;
  this->DelayNanoSec = 0.0;
  (this->NowNTPTime)._MyDur._MyRep = 0;
  this->bIsUpdating = (TAtomic<bool>)0x0;
  this->LastUpdateTime = 0.0;
  (this->NTPTimeData).LeapIndi_VerNum_Mode = '\0';
  (this->NTPTimeData).Stratum = '\0';
  (this->NTPTimeData).Poll = '\0';
  (this->NTPTimeData).Precision = '\0';
  return this;
}

// UDS_NTPClient @ 14b54ae40

UDS_NTPClient * __thiscall
UDS_NTPClient::UDS_NTPClient(UDS_NTPClient *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CooldownSeconds = 10.0;
  this->_padding_ = (longlong)&___7UDS_NTPClient__6B_;
  (this->NTPTimeData).RootDelay = 0;
  (this->NTPTimeData).RootDispersion = 0;
  (this->NTPTimeData).RefClockId = 0;
  (this->NTPTimeData).RefTimeSec = 0;
  (this->NTPTimeData).RefTimeFractionSec = 0;
  (this->NTPTimeData).BaseTimeSec = 0;
  (this->NTPTimeData).BaseTimeFractionSec = 0;
  (this->NTPTimeData).RecvTimeSec = 0;
  (this->NTPTimeData).RecvTimeFractionSec = 0;
  (this->NTPTimeData).SendTimeSec = 0;
  (this->NTPTimeData).SendTimeFractionSec = 0;
  this->OffSetNanoSec = 0.0;
  this->DelayNanoSec = 0.0;
  (this->NowNTPTime)._MyDur._MyRep = 0;
  this->bIsUpdating = (TAtomic<bool>)0x0;
  this->LastUpdateTime = 0.0;
  (this->NTPTimeData).LeapIndi_VerNum_Mode = '\0';
  (this->NTPTimeData).Stratum = '\0';
  (this->NTPTimeData).Poll = '\0';
  (this->NTPTimeData).Precision = '\0';
  return this;
}

// ~UDS_NTPClient @ 14b54b890

void __thiscall UDS_NTPClient::~UDS_NTPClient(UDS_NTPClient *this)

{
  this->_padding_ = (longlong)&___7UDS_NTPClient__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b54ce00

UClass * __cdecl UDS_NTPClient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NTPClient.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NTPClient",
               &Z_Registration_Info_UClass_UDS_NTPClient.InnerSingleton,
               StaticRegisterNativesUDS_NTPClient,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_NTPClient>,InternalVTableHelperCtorCaller<UDS_NTPClient>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NTPClient.InnerSingleton;
}

// StaticRegisterNativesUDS_NTPClient @ 14b54d7c0

void __cdecl UDS_NTPClient::StaticRegisterNativesUDS_NTPClient(void)

{
  return;
}

// operator() @ 14bb4dfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>::operator()(void *this)

{
  undefined8 *puVar1;
  FDestructionSentinel local_78;
  undefined8 local_60;
  undefined1 local_58 [8];
  ForAnyElementType FStack_50;
  int local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_60 = *(undefined8 *)this;
  local_48 = 0;
  local_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_58,
             (TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)((longlong)this + 8));
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x28,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``UDS_NTPClient::UpdateNTPDataAsync'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  puVar1 = local_10 + 1;
  *puVar1 = local_60;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_10 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if (puVar1 != (undefined8 *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_78);
  if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// ApplyNTPResult @ 14bb50b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_NTPClient::ApplyNTPResult
          (UDS_NTPClient *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
          *param_1,time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
                   *param_2,uchar *param_3)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  UDS_DataManager *this_00;
  UDS_TimeData *this_01;
  UDS_GameInstance *this_02;
  UClass *pUVar7;
  UDS_EnvironmentManager *this_03;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  FWeakObjectPtr local_res8;
  longlong local_res10;
  
  lVar6 = _Xtime_get_ticks();
  std::chrono::steady_clock::now();
  uVar3 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 8);
  (this->NTPTimeData).LeapIndi_VerNum_Mode = (char)uVar3;
  (this->NTPTimeData).Stratum = (char)((ulonglong)uVar3 >> 8);
  (this->NTPTimeData).Poll = (char)((ulonglong)uVar3 >> 0x10);
  (this->NTPTimeData).Precision = (char)((ulonglong)uVar3 >> 0x18);
  (this->NTPTimeData).RootDelay = (int)((ulonglong)uVar3 >> 0x20);
  (this->NTPTimeData).RootDispersion = (int)uVar4;
  (this->NTPTimeData).RefClockId = (int)((ulonglong)uVar4 >> 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  (this->NTPTimeData).RefTimeSec = (int)uVar3;
  (this->NTPTimeData).RefTimeFractionSec = (int)((ulonglong)uVar3 >> 0x20);
  (this->NTPTimeData).BaseTimeSec = (int)uVar4;
  (this->NTPTimeData).BaseTimeFractionSec = (int)((ulonglong)uVar4 >> 0x20);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  (this->NTPTimeData).RecvTimeSec = (int)uVar3;
  (this->NTPTimeData).RecvTimeFractionSec = (int)((ulonglong)uVar3 >> 0x20);
  (this->NTPTimeData).SendTimeSec = (int)uVar4;
  (this->NTPTimeData).SendTimeFractionSec = (int)((ulonglong)uVar4 >> 0x20);
  uVar8 = (this->NTPTimeData).SendTimeSec;
  uVar9 = (this->NTPTimeData).SendTimeFractionSec;
  uVar10 = (this->NTPTimeData).RecvTimeFractionSec;
  uVar11 = (this->NTPTimeData).RecvTimeSec;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  (this->NTPTimeData).SendTimeSec = uVar8;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  (this->NTPTimeData).SendTimeFractionSec = uVar9;
  (this->NTPTimeData).RecvTimeSec = uVar11;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  (this->NTPTimeData).RecvTimeFractionSec = uVar10;
  dVar12 = (double)(uVar8 + 0x7c558180) * __real_41cdcd6500000000 +
           (double)uVar9 * ___real_3fcdcd6500000000;
  dVar13 = (double)(uVar11 + 0x7c558180) * __real_41cdcd6500000000 +
           (double)uVar10 * ___real_3fcdcd6500000000;
  dVar2 = ((double)local_res10 - (double)(param_2->_MyDur)._MyRep) - (dVar13 - dVar12);
  dVar12 = ((dVar12 - (double)(param_1->_MyDur)._MyRep) + (dVar13 - (double)(lVar6 * 100))) *
           __real_3fe0000000000000;
  this->DelayNanoSec = dVar2;
  this->OffSetNanoSec = dVar12;
  (this->NowNTPTime)._MyDur._MyRep = (longlong)(dVar2 + dVar12) + lVar6 * 100;
  this_00 = UDS_DataManager::GetInst();
  UDS_DataManager::GetTimeData(this_00);
  bVar5 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar5) {
    dVar2 = (double)(this->NowNTPTime)._MyDur._MyRep * __real_3e112e0be826d695;
    this_01 = (UDS_TimeData *)FWeakObjectPtr::Get(&local_res8);
    UDS_TimeData::SetDateTime(this_01,NTPTime,dVar2);
  }
  this_02 = UDS_GameInstance::GetInst();
  if (this_02 != (UDS_GameInstance *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_EnvironmentManager_NoRegister();
    this_03 = (UDS_EnvironmentManager *)
              UDS_GameInstance::GetManager(this_02,(FName)pUVar7->_padding_);
    if (this_03 != (UDS_EnvironmentManager *)0x0) {
      pUVar7 = Z_Construct_UClass_UDS_EnvironmentManager_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(this_03->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_14bb50d4b;
    }
  }
  this_03 = (UDS_EnvironmentManager *)0x0;
LAB_14bb50d4b:
  UDS_EnvironmentManager::InitInGameTime(this_03);
  return;
}

// CalculateRecvData @ 14bb53670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_NTPClient::CalculateRecvData
          (UDS_NTPClient *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
          *param_1,time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
                   *param_2,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
          *param_3,time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
                   *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  
  uVar7 = (this->NTPTimeData).SendTimeFractionSec;
  uVar5 = (this->NTPTimeData).SendTimeSec;
  uVar1 = (this->NTPTimeData).RecvTimeFractionSec;
  uVar6 = (this->NTPTimeData).RecvTimeSec;
  uVar8 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  (this->NTPTimeData).SendTimeSec = uVar8;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  (this->NTPTimeData).RecvTimeSec = uVar6;
  uVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (this->NTPTimeData).RecvTimeFractionSec = uVar5;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  (this->NTPTimeData).SendTimeFractionSec = uVar7;
  lVar2 = (param_3->_MyDur)._MyRep;
  dVar4 = (double)(uVar8 + 0x7c558180) * __real_41cdcd6500000000 +
          (double)uVar7 * ___real_3fcdcd6500000000;
  dVar9 = (double)(uVar6 + 0x7c558180) * __real_41cdcd6500000000 +
          (double)uVar5 * ___real_3fcdcd6500000000;
  lVar3 = (param_1->_MyDur)._MyRep;
  dVar10 = ((double)(param_4->_MyDur)._MyRep - (double)(param_2->_MyDur)._MyRep) - (dVar9 - dVar4);
  this->DelayNanoSec = dVar10;
  dVar9 = ((dVar4 - (double)lVar3) + (dVar9 - (double)lVar2)) * __real_3fe0000000000000;
  this->OffSetNanoSec = dVar9;
  (this->NowNTPTime)._MyDur._MyRep = (longlong)(dVar10 + dVar9) + (param_3->_MyDur)._MyRep;
  return;
}

// ExtractTimePoint @ 14bb61c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_NTPClient::ExtractTimePoint
          (UDS_NTPClient *this,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
          param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  tm local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = (longlong)param_1._MyDur._MyRep / 1000000000;
  _localtime64_s(&local_40,&local_48);
  return;
}

// GetNowNTPTime @ 14bb66e50

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
__thiscall UDS_NTPClient::GetNowNTPTime(UDS_NTPClient *this)

{
  duration<__int64,std::ratio<1,1000000000>_> in_RDX;
  
  *(long64 *)in_RDX._MyRep = (this->NowNTPTime)._MyDur._MyRep;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
          )(duration<__int64,std::ratio<1,1000000000>_>)in_RDX._MyRep;
}

// GetRemainingCooldown @ 14bb67c50

float __thiscall UDS_NTPClient::GetRemainingCooldown(UDS_NTPClient *this)

{
  float fVar1;
  LARGE_INTEGER local_res8 [4];
  
  fVar1 = 0.0;
  if (0.0 < this->LastUpdateTime) {
    QueryPerformanceCounter(local_res8);
    fVar1 = this->CooldownSeconds -
            (float)(((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                    __real_4170000000000000) - this->LastUpdateTime);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
  }
  return fVar1;
}

// IsCooldownActive @ 14bb6ead0

bool __thiscall UDS_NTPClient::IsCooldownActive(UDS_NTPClient *this)

{
  LARGE_INTEGER local_res8 [4];
  
  if (this->LastUpdateTime <= 0.0) {
    return false;
  }
  QueryPerformanceCounter(local_res8);
  return ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000) - this->LastUpdateTime < (double)this->CooldownSeconds;
}

// TryConnectNTPServer @ 14bb92f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_NTPClient::TryConnectNTPServer
          (UDS_NTPClient *this,FSocket *param_1,FString *param_2,uchar *param_3)

{
  ushort uVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FName *pFVar8;
  size_t sVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  wchar_t *_Str;
  ForAnyElementType FVar16;
  uint uVar17;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_174;
  uchar *local_170;
  longlong *local_168;
  TReferenceControllerBase<1> *local_160;
  ISocketSubsystem *local_158;
  code *local_150;
  UDS_NTPClient *local_148;
  FName local_140;
  FScriptContainerElement local_138 [128];
  ForAnyElementType local_b8;
  FScriptContainerElement *local_b0;
  int local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_170 = param_3;
  local_148 = this;
  pFVar8 = ::FName::FName(&local_140,L"WINDOWS");
  local_158 = ISocketSubsystem::Get(pFVar8);
  pFVar10 = (FScriptContainerElement *)0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_150 = *(code **)(local_158->_padding_ + 0x60);
  if ((param_2->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_b0 = (FScriptContainerElement *)0x0;
      local_a8 = 0;
      goto LAB_14bb930d4;
    }
  }
  sVar9 = wcslen(_Str);
  local_a8 = (int)sVar9;
  uVar17 = local_a8 + 1;
  FVar16.Data = pFVar10;
  if (0x80 < uVar17) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b8,0,uVar17,1);
    FVar16.Data = local_b8.Data;
  }
  lVar12 = (longlong)(int)uVar17;
  pFVar15 = local_138;
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    pFVar15 = FVar16.Data;
  }
  bVar4 = false;
  pFVar14 = pFVar10;
  local_b0 = pFVar15;
  if (0 < (int)uVar17) {
    do {
      uVar1 = *(ushort *)((longlong)_Str + (longlong)pFVar14 * 2);
      pFVar15[(longlong)pFVar14] = SUB21(uVar1,0);
      pFVar14 = pFVar14 + 1;
      bVar4 = (bool)(bVar4 | 0x7f < uVar1);
    } while ((longlong)pFVar14 < lVar12);
    if (bVar4) {
      do {
        if (0x7f < *(ushort *)((longlong)_Str + (longlong)pFVar10 * 2)) {
          pFVar15[(longlong)pFVar10] = (FScriptContainerElement)0x3f;
        }
        pFVar10 = pFVar10 + 1;
      } while ((longlong)pFVar10 < lVar12);
    }
  }
  param_3 = local_170;
  if ((pFVar15 + lVar12 == (FScriptContainerElement *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), param_3 = local_170, bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_14bb930d4:
  plVar11 = (longlong *)(*local_150)(local_158,local_b0);
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  lVar12 = _Xtime_get_ticks();
  fVar3 = __real_3c23d70a;
  do {
    lVar13 = _Xtime_get_ticks();
    if (lVar12 + 20000000 <= lVar13) {
      if (3 < (byte)FNTPTests._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
      }
LAB_14bb9330b:
      pFVar10 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      return false;
    }
    if ((plVar11 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar11 + 8))(plVar11), cVar6 == '\x01')) {
      iVar7 = (**(code **)(*plVar11 + 0x10))(plVar11);
      if (iVar7 != 0) {
        if (1 < (byte)FNTPTests._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
        }
        goto LAB_14bb9330b;
      }
      plVar11 = (longlong *)(**(code **)(*plVar11 + 0x18))(plVar11);
      (**(code **)(*plVar11 + 0xa0))(plVar11,&local_168);
      (**(code **)(*local_168 + 0x48))(local_168,0x7b);
      local_98._0_1_ = (local_148->NTPTimeData).LeapIndi_VerNum_Mode;
      local_98._1_1_ = (local_148->NTPTimeData).Stratum;
      local_98._2_1_ = (local_148->NTPTimeData).Poll;
      local_98._3_1_ = (local_148->NTPTimeData).Precision;
      local_98._4_4_ = (local_148->NTPTimeData).RootDelay;
      uStack_90._0_4_ = (local_148->NTPTimeData).RootDispersion;
      uStack_90._4_4_ = (local_148->NTPTimeData).RefClockId;
      local_88._0_4_ = (local_148->NTPTimeData).RefTimeSec;
      local_88._4_4_ = (local_148->NTPTimeData).RefTimeFractionSec;
      uStack_80._0_4_ = (local_148->NTPTimeData).BaseTimeSec;
      uStack_80._4_4_ = (local_148->NTPTimeData).BaseTimeFractionSec;
      local_78 = (local_148->NTPTimeData).RecvTimeSec;
      uStack_74 = (local_148->NTPTimeData).RecvTimeFractionSec;
      uStack_70 = (local_148->NTPTimeData).SendTimeSec;
      uStack_6c = (local_148->NTPTimeData).SendTimeFractionSec;
      if (3 < (byte)FNTPTests._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
      }
      local_188 = local_168;
      local_178 = 0;
      cVar6 = (**(code **)(param_1->_padding_ + 0x58))(param_1,&local_98,0x30,&local_178);
      if (cVar6 != '\0') {
        local_174 = 0;
        lVar12 = _Xtime_get_ticks();
        break;
      }
      if (3 < (byte)FNTPTests._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160)
      ;
      goto LAB_14bb9330b;
    }
    FWindowsPlatformProcess::Sleep(fVar3);
  } while( true );
LAB_14bb93230:
  lVar13 = _Xtime_get_ticks();
  if (lVar12 + 30000000 <= lVar13) {
    bVar4 = false;
    if (3 < (byte)FNTPTests._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
    }
LAB_14bb9329d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
    pFVar10 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar10 == (FScriptContainerElement *)0x0) {
      return bVar4;
    }
    FMemory::Free(pFVar10);
    return bVar4;
  }
  local_180 = 0;
  local_188 = local_168;
  cVar6 = (**(code **)(param_1->_padding_ + 0x68))(param_1,param_3,0x30,&local_174);
  if (cVar6 == '\x01') {
    bVar4 = true;
    goto LAB_14bb9329d;
  }
  FWindowsPlatformProcess::Sleep(fVar3);
  goto LAB_14bb93230;
}

// UpdateNTPDataAsync @ 14bb96e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NTPClient::UpdateNTPDataAsync
          (UDS_NTPClient *this,TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1,
          bool param_2)

{
  LARGE_INTEGER *pLVar1;
  TAtomic<bool> TVar2;
  bool bVar3;
  longlong *plVar4;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88;
  FDestructionSentinel local_80;
  LARGE_INTEGER local_68;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  int local_50;
  code *local_48 [5];
  undefined8 *local_20;
  
  if ((param_2) || (this->LastUpdateTime <= 0.0)) {
LAB_14bb96f6e:
    LOCK();
    TVar2 = this->bIsUpdating;
    this->bIsUpdating = (TAtomic<bool>)0x1;
    UNLOCK();
    if (TVar2 != (TAtomic<bool>)0x1) {
      QueryPerformanceCounter(&local_88);
      this->LastUpdateTime =
           (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_res20.QuadPart = 0;
      local_88 = (LARGE_INTEGER)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res20.s,(FObjectPtr)&local_88);
      local_68.s = local_res20.s;
      local_50 = 0;
      local_60 = (undefined1  [8])0x0;
      FStack_58.Data = (FScriptContainerElement *)0x0;
      TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_60,param_1);
      local_48[0] = (code *)0x0;
      local_20 = FMemory::Malloc(0x28,8);
      *local_20 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataAsync'::`2'::<lambda_2>,1,1>::
                   _vftable_;
      pLVar1 = (LARGE_INTEGER *)(local_20 + 1);
      *pLVar1 = local_68;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_20 + 2),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
      if (pLVar1 != (LARGE_INTEGER *)0x0) {
        local_48[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>,void>
                      ::Call;
      }
      local_88 = local_res20;
      Async<_UDS_NTPClient::UpdateNTPDataAsync_::__l2::<lambda_1>_>
                ((TFuture<bool> *)&local_80,ThreadPool,(<lambda_1> *)&local_88.s,
                 (TUniqueFunction<void___cdecl(void)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_80.Accessor);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
                 (FWriteAccessScope *)&local_80);
      if ((local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_58.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
      }
      if (FStack_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_60);
      goto LAB_14bb97119;
    }
    if (2 < (byte)FNTPTests._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
    }
    bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (!bVar3) goto LAB_14bb97119;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_80);
    if (*(int *)&param_1->field_0x10 == 0) goto LAB_14bb96f53;
    plVar4 = *(longlong **)&param_1->field_0x8;
  }
  else {
    QueryPerformanceCounter(&local_88);
    if ((double)this->CooldownSeconds <=
        ((double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
        ) - this->LastUpdateTime) goto LAB_14bb96f6e;
    if (2 < (byte)FNTPTests._0_1_) {
      if (0.0 < this->LastUpdateTime) {
        QueryPerformanceCounter(&local_88);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
    }
    bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
    if (!bVar3) goto LAB_14bb97119;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_80);
    if (*(int *)&param_1->field_0x10 == 0) {
LAB_14bb96f53:
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&param_1->field_0x8;
    }
  }
  (**(code **)(*plVar4 + 0x60))(plVar4,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_80);
LAB_14bb97119:
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// UpdateNTPDataInternal @ 14bb97160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NTPClient::UpdateNTPDataInternal(UDS_NTPClient *this)

{
  void *_Src;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FSocket *pFVar7;
  longlong lVar8;
  longlong lVar9;
  FName *pFVar10;
  ISocketSubsystem *pIVar11;
  longlong lVar12;
  ulonglong uVar13;
  size_t _Size;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_188;
  undefined8 local_180;
  uint local_178;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  ForAnyElementType local_160;
  undefined8 local_158;
  UDS_NTPClient *local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  ulonglong local_138;
  ulonglong local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  FString local_118;
  FSocket *local_108;
  FUdpSocketBuilder local_100;
  UDS_NTPClient *local_b8;
  FString local_b0;
  FName local_a0;
  code *local_98 [5];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar13 = 0;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_150 = this;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_188,(int *)((longlong)&local_180 + 4));
  local_180._0_4_ = iVar5 + 1;
  ::FString::FString((FString *)(local_188.Data + (longlong)iVar5 * 0x10),"pool.ntp.org");
  if ((int)local_180 == local_180._4_4_) {
    local_180._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_188,(int *)((longlong)&local_180 + 4));
  }
  lVar12 = (longlong)(int)local_180;
  local_180._0_4_ = (int)local_180 + 1;
  ::FString::FString((FString *)(local_188.Data + lVar12 * 0x10),"time.windows.com");
  iVar5 = (int)local_180;
  if ((int)local_180 == local_180._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_188,(int *)((longlong)&local_180 + 4));
  }
  local_180 = CONCAT44(local_180._4_4_,iVar5 + 1);
  ::FString::FString((FString *)(local_188.Data + (longlong)iVar5 * 0x10),"time.google.com");
  ::FString::FString(&local_b0,L"NTP");
  FVar2.Data = local_b0.Data.AllocatorInstance.Data;
  local_100.AllowBroadcast = false;
  local_100.Blocking = false;
  local_100.Bound = false;
  local_100.BoundEndpoint.Address.field0_0x0._s_0 = FIPv4Address::Any.field0_0x0;
  local_100.BoundEndpoint.Port = 0;
  local_100.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b0.Data.ArrayNum == 0) {
    local_100.Description.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_100.Description,
               local_b0.Data.ArrayNum,&local_100.Description.Data.ArrayMax);
    memcpy(local_100.Description.Data.AllocatorInstance.Data,FVar2.Data,
           (longlong)local_b0.Data.ArrayNum * 2);
  }
  local_100.MulticastInterface.field0_0x0._s_0 = FIPv4Address::Any.field0_0x0;
  local_100.JoinedGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.JoinedGroups.ArrayNum = 0;
  local_100.JoinedGroups.ArrayMax = 0;
  local_100.MulticastLoopback = false;
  local_100.MulticastTtl = '\x01';
  local_100.ReceiveBufferSize = 0;
  local_100.Reusable = false;
  local_100.SendBufferSize = 0;
  pFVar7 = FUdpSocketBuilder::Build(&local_100);
  local_108 = pFVar7;
  if (local_100.JoinedGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.JoinedGroups.AllocatorInstance.Data);
  }
  if (local_100.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Description.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  if (pFVar7 == (FSocket *)0x0) {
    if (3 < (byte)FNTPTests._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
      bVar3 = false;
      goto LAB_14bb977d6;
    }
  }
  else {
    (this->NTPTimeData).LeapIndi_VerNum_Mode = 0xe3;
    (this->NTPTimeData).Stratum = '\0';
    (this->NTPTimeData).Poll = '\x04';
    (this->NTPTimeData).Precision = 0xf6;
    (this->NTPTimeData).RootDelay = 0x100;
    (this->NTPTimeData).RootDispersion = 0x100;
    local_178 = 0;
    lVar12 = _Xtime_get_ticks();
    bVar3 = false;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar14 = uVar13;
    uVar16 = uVar13;
    uVar17 = uVar13;
    uVar19 = uVar13;
    while( true ) {
      lVar8 = _Xtime_get_ticks();
      uVar18 = (uint)uVar19;
      if ((lVar12 + 150000000 <= lVar8) || (4 < (int)uVar17)) goto LAB_14bb975e3;
      uVar6 = 0;
      if ((int)uVar18 < (int)local_180) {
        uVar6 = ~uVar18 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_170.Data = (FScriptContainerElement *)0x0;
      local_168 = *(int *)(local_188.Data + uVar16 * 0x10 + 8);
      lVar8 = (longlong)local_168;
      _Src = *(void **)(local_188.Data + uVar16 * 0x10);
      if (local_168 == 0) {
        local_164 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_168,0,&local_170,local_168,&local_164);
        memcpy(local_170.Data,_Src,lVar8 * 2);
      }
      lVar8 = _Xtime_get_ticks();
      uVar14 = lVar8 * 100;
      lVar8 = _Query_perf_frequency();
      lVar9 = _Query_perf_counter();
      FVar2.Data = local_170.Data;
      if (lVar8 == 10000000) {
        uVar13 = lVar9 * 100;
      }
      else {
        if (lVar8 == 24000000) {
          lVar8 = lVar9 + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar9),8);
          lVar15 = (lVar8 >> 0x18) - (lVar8 >> 0x3f);
          lVar8 = (lVar9 + lVar15 * -24000000) * 1000000000;
          lVar8 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar8),8) + lVar8;
          lVar8 = (lVar8 >> 0x18) - (lVar8 >> 0x3f);
          lVar15 = lVar15 * 1000000000;
        }
        else {
          lVar15 = ((lVar9 % lVar8) * 1000000000) / lVar8;
          lVar8 = (lVar9 / lVar8) * 1000000000;
        }
        uVar13 = lVar8 + lVar15;
      }
      local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      lVar8 = (longlong)local_168;
      local_118.Data.ArrayNum = local_168;
      if (local_168 == 0) {
        local_118.Data.ArrayMax = local_168;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_168,0,(ForAnyElementType *)&local_118,local_168,
                   &local_118.Data.ArrayMax);
        memcpy(local_118.Data.AllocatorInstance.Data,FVar2.Data,lVar8 * 2);
      }
      bVar3 = TryConnectNTPServer(local_150,local_108,&local_118,(uchar *)&local_68);
      if (bVar3) break;
      uVar19 = (ulonglong)(uVar18 + 1);
      local_178 = local_178 + 1;
      uVar17 = (ulonglong)local_178;
      uVar16 = uVar16 + 1;
      if ((int)local_180 <= (int)(uVar18 + 1)) {
        uVar19 = 0;
        uVar16 = 0;
      }
      if (local_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data);
      }
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
LAB_14bb975e3:
    pFVar10 = ::FName::FName(&local_a0,L"WINDOWS");
    pIVar11 = ISocketSubsystem::Get(pFVar10);
    (**(code **)(pIVar11->_padding_ + 0x38))(pIVar11,local_108);
    if (bVar3 != false) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_150);
      }
      local_148.ObjectIndex = 0;
      local_148.ObjectSerialNumber = 0;
      local_b8 = local_150;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_150);
      }
      FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_b8);
      local_160.Data = (FScriptContainerElement *)0x0;
      local_158 = 0;
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0x30,&local_160,(int *)&local_158,(int *)((longlong)&local_158 + 4));
      FVar2.Data = local_160.Data;
      lVar12 = (longlong)iVar5;
      local_128.Data = (FScriptContainerElement *)0x0;
      *(undefined8 *)(local_160.Data + lVar12) = local_68;
      *(undefined8 *)(local_160.Data + lVar12 + 8) = uStack_60;
      *(undefined8 *)(local_160.Data + lVar12 + 0x10) = local_58;
      *(undefined8 *)(local_160.Data + lVar12 + 0x10 + 8) = uStack_50;
      *(undefined8 *)(local_160.Data + lVar12 + 0x20) = local_48;
      *(undefined8 *)(local_160.Data + lVar12 + 0x20 + 8) = uStack_40;
      _Size = (size_t)(int)local_158;
      local_140 = local_148;
      local_120 = CONCAT44(local_120._4_4_,(int)local_158);
      local_138 = uVar14;
      local_130 = uVar13;
      if ((int)local_158 == 0) {
        local_120 = local_158 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)local_158,0,&local_128,(int)local_158,(int *)((longlong)&local_120 + 4))
        ;
        memcpy(local_128.Data,FVar2.Data,_Size);
      }
      local_98[0] = (code *)0x0;
      local_70 = FMemory::Malloc(0x30,8);
      *local_70 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataInternal'::`2'::<lambda_1>,1,1>
                   ::_vftable_;
      *(FWeakObjectPtr *)(local_70 + 1) = local_140;
      local_70[2] = local_138;
      local_70[3] = local_130;
      local_70[4] = 0;
      local_70[4] = local_128.Data;
      local_128.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_70 + 5) = (undefined4)local_120;
      *(undefined4 *)((longlong)local_70 + 0x2c) = local_120._4_4_;
      local_120 = 0;
      if ((FWeakObjectPtr *)(local_70 + 1) != (FWeakObjectPtr *)0x0) {
        local_98[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UDS_NTPClient::UpdateNTPDataInternal'::__l2::<lambda_1>,void>
                      ::Call;
      }
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_98);
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      bVar3 = true;
      if (local_160.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data);
      }
      goto LAB_14bb977d6;
    }
    if (1 < (byte)FNTPTests._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&FNTPTests);
    }
  }
  bVar3 = false;
LAB_14bb977d6:
  DestructItems<FString,int>((FString *)local_188.Data,(int)local_180);
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  return bVar3;
}

