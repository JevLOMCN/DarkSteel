// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 148076e00

UScriptStruct * __cdecl FRPCDoSStateConfig::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRPCDoSStateConfig,(UObject *)pUVar1,
                         L"RPCDoSStateConfig");
  }
  return Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.OuterSingleton;
}

// ApplyImpliedValues @ 148095da0

void __thiscall FRPCDoSStateConfig::ApplyImpliedValues(FRPCDoSStateConfig *this)

{
  char cVar1;
  FScriptContainerElement FVar2;
  short sVar3;
  code *pcVar4;
  double dVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  FScriptContainerElement FVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  
  if (((short)this->_padding_ == -1) && (*(short *)((longlong)&this->_padding_ + 2) == -1)) {
    cVar9 = -1;
  }
  else {
    cVar9 = *(char *)((longlong)&this->_padding_ + 4);
  }
  sVar3 = (short)this->_padding_;
  *(char *)((longlong)&this->_padding_ + 4) = cVar9;
  if ((sVar3 != -1) || (cVar10 = -1, *(short *)((longlong)&this->_padding_ + 2) != -1)) {
    cVar10 = *(char *)((longlong)&this->_padding_ + 4);
  }
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  *(char *)((longlong)&this->_padding_ + 4) = cVar10;
  dVar5 = __real_3f50624dd2f1a9fc;
  if ((cVar1 == '\0') && ((sVar3 == -1 || (cVar10 == -1)))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  dVar15 = 0.0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = uVar6;
  sVar3 = *(short *)((longlong)&this->_padding_ + 6);
  if (sVar3 == -1) {
    dVar16 = 0.0;
  }
  else {
    dVar16 = (double)(int)sVar3 * dVar5;
  }
  sVar3 = *(short *)((longlong)&this->_padding_ + 2);
  this->_padding_ = (longlong)dVar16;
  if (sVar3 == -1) {
    dVar16 = 0.0;
  }
  else {
    dVar16 = (double)(int)sVar3 * dVar5;
  }
  sVar3 = *(short *)((longlong)&this->_padding_ + 2);
  this->_padding_ = (longlong)dVar16;
  if (sVar3 == -1) {
    dVar16 = 0.0;
  }
  else {
    dVar16 = (double)(int)sVar3 * dVar5;
  }
  sVar3 = *(short *)((longlong)&this->_padding_ + 6);
  this->_padding_ = (longlong)dVar16;
  if (sVar3 != -1) {
    dVar15 = (double)(int)sVar3 * dVar5;
  }
  this->_padding_ = (longlong)dVar15;
  if ('\0' < cVar9) {
    TArray<signed_char,TSizedDefaultAllocator<32>_>::AddUniqueImpl<signed_char_const_&>
              (&this->AllTimePeriods,(schar *)((longlong)&this->_padding_ + 4));
  }
  if ('\0' < *(char *)((longlong)&this->_padding_ + 4)) {
    TArray<signed_char,TSizedDefaultAllocator<32>_>::AddUniqueImpl<signed_char_const_&>
              (&this->AllTimePeriods,(schar *)((longlong)&this->_padding_ + 4));
  }
  iVar11 = (this->AllTimePeriods).ArrayNum;
  if (iVar11 != 0) {
    if ((iVar11 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = 1;
    iVar11 = (this->AllTimePeriods).ArrayNum;
    FVar12 = *(this->AllTimePeriods).AllocatorInstance.Data;
    if (1 < iVar11) {
      lVar14 = 1;
      do {
        uVar8 = 0;
        if ((int)uVar13 < iVar11) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2 = (this->AllTimePeriods).AllocatorInstance.Data[lVar14];
        if ((char)FVar12 < (char)FVar2) {
          FVar12 = FVar2;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
        iVar11 = (this->AllTimePeriods).ArrayNum;
      } while ((int)uVar13 < iVar11);
    }
    this->HighestTimePeriod = (schar)FVar12;
    return;
  }
  this->HighestTimePeriod = '\0';
  return;
}

// ApplyState @ 148095fb0

void __thiscall FRPCDoSStateConfig::ApplyState(FRPCDoSStateConfig *this,FRPCDoSState *param_1)

{
  param_1->bLogEscalate = SUB81(this->_padding_,0);
  param_1->bSendEscalateAnalytics = *(bool *)((longlong)&this->_padding_ + 1);
  param_1->bKickPlayer = *(bool *)((longlong)&this->_padding_ + 2);
  param_1->bTrackRecentRPCs = *(bool *)((longlong)&this->_padding_ + 3);
  param_1->EscalateQuotaRPCsPerFrame = *(short *)((longlong)&this->_padding_ + 4);
  param_1->EscalateTimeQuotaMSPerFrame = *(short *)((longlong)&this->_padding_ + 6);
  param_1->EscalateQuotaRPCsPerPeriod = (short)this->_padding_;
  param_1->EscalateTimeQuotaMSPerPeriod = *(short *)((longlong)&this->_padding_ + 2);
  param_1->EscalateQuotaTimePeriod = *(schar *)((longlong)&this->_padding_ + 4);
  param_1->RPCRepeatLimitPerPeriod = (short)this->_padding_;
  param_1->RPCRepeatLimitMSPerPeriod = *(short *)((longlong)&this->_padding_ + 2);
  param_1->RPCRepeatLimitTimePeriod = *(schar *)((longlong)&this->_padding_ + 4);
  param_1->CooloffTime = *(short *)((longlong)&this->_padding_ + 6);
  param_1->AutoEscalateTime = (short)this->_padding_;
                    /* WARNING: Could not recover jumptable at 0x000148096020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 8))(param_1);
  return;
}

// GetAllTimePeriods @ 1480a3d70

TArray<signed_char,TSizedDefaultAllocator<32>_> * __thiscall
FRPCDoSStateConfig::GetAllTimePeriods(FRPCDoSStateConfig *this)

{
  return &this->AllTimePeriods;
}

// GetHighestTimePeriod @ 1480a4450

schar __thiscall FRPCDoSStateConfig::GetHighestTimePeriod(FRPCDoSStateConfig *this)

{
  return this->HighestTimePeriod;
}

// LoadStructConfig @ 1480b74e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRPCDoSStateConfig::LoadStructConfig(FRPCDoSStateConfig *this,wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  FFeedbackContext *pFVar2;
  UScriptStruct *this_00;
  int iVar3;
  bool bVar4;
  FString *pFVar5;
  ulonglong uVar6;
  UPackage *pUVar7;
  FName *pFVar8;
  FProperty *this_01;
  ForAnyElementType FVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  bool local_res18;
  undefined1 local_res20 [8];
  FName local_98;
  FString local_90;
  TArray<FString,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  FVar11.Data = GEngineIni.Data.AllocatorInstance.Data;
  if (param_2 == (wchar_t *)0x0) {
    lVar10 = (longlong)GEngineIni.Data.ArrayNum;
    bVar1 = false;
    bVar4 = true;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = GEngineIni.Data.ArrayNum;
    if (GEngineIni.Data.ArrayNum == 0) {
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,GEngineIni.Data.ArrayNum,0,(ForAnyElementType *)&local_90,
                 GEngineIni.Data.ArrayNum,&local_90.Data.ArrayMax);
      memcpy(local_90.Data.AllocatorInstance.Data,FVar11.Data,lVar10 * 2);
    }
    pFVar5 = &local_90;
  }
  else {
    pFVar5 = ::FString::FString(&local_50,param_2);
    bVar1 = true;
    bVar4 = false;
  }
  local_res18 = false;
  local_60.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_60.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if ((bVar4) && (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  bVar4 = FConfigCacheIni::GetSection(GConfig,param_1,&local_80,&local_60);
  if (bVar4) {
    iVar3 = local_80.ArrayNum;
    uVar6 = (ulonglong)local_80.ArrayNum;
    pFVar12 = local_80.AllocatorInstance.Data + uVar6 * 0x10;
    FVar11.Data = local_80.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar6 != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar11.Data == pFVar12) break;
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      ::FString::FString(&local_50,L"=");
      bVar4 = ::FString::Split((FString *)FVar11.Data,&local_50,&local_90,&local_70);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        if (Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar7 = Z_Construct_UPackage__Script_Engine();
          Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FRPCDoSStateConfig,(UObject *)pUVar7,
                               L"RPCDoSStateConfig");
        }
        this_00 = Z_Registration_Info_UScriptStruct_FRPCDoSStateConfig.OuterSingleton;
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_90.Data.ArrayNum != 0) {
          FVar9.Data = local_90.Data.AllocatorInstance.Data;
        }
        pFVar8 = ::FName::FName(&local_98,(wchar_t *)FVar9.Data);
        this_01 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar8);
        pFVar2 = GWarn;
        if (this_01 == (FProperty *)0x0) {
          if (1 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
        }
        else if (((uint)(int)this_01->PropertyFlags >> 0xe & 1) == 0) {
          if (1 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
        }
        else {
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_70.Data.ArrayNum != 0) {
            FVar9.Data = local_70.Data.AllocatorInstance.Data;
          }
          bVar4 = FProperty::ValidateImportFlags(this_01,0,(FOutputDevice *)GWarn);
          if ((bVar4) && (FVar9.Data != (FScriptContainerElement *)0x0)) {
            (**(code **)(this_01->_padding_ + 0xe8))(this_01,FVar9.Data,this,1,0,0x8000000,pFVar2);
          }
        }
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      uVar6 = local_80._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 0x10;
    }
    (**(code **)(this->_padding_ + 8))(this);
    local_res18 = true;
  }
  DestructItems<FString,int>((FString *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return local_res18;
}

// ValidateConfig @ 1480e3490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRPCDoSStateConfig::ValidateConfig(FRPCDoSStateConfig *this)

{
  short sVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  cVar3 = '\0';
  if ((0 < (short)this->_padding_) || (cVar2 = '\0', 0 < *(short *)((longlong)&this->_padding_ + 2))
     ) {
    cVar2 = '\x01';
  }
  cVar5 = *(char *)((longlong)&this->_padding_ + 4);
  if ((cVar5 < cVar2) || ('\x10' < cVar5)) {
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_FRPCDoSStateCon_1519fd5d8,
                 (FLogCategoryBase *)&LogNet);
    }
    cVar5 = *(char *)((longlong)&this->_padding_ + 4);
    cVar4 = '\x10';
    if (cVar5 < '\x10') {
      cVar4 = cVar5;
    }
    if (cVar2 < cVar4) {
      cVar2 = cVar4;
    }
    *(char *)((longlong)&this->_padding_ + 4) = cVar2;
  }
  if ((0 < (short)this->_padding_) || (0 < *(short *)((longlong)&this->_padding_ + 2))) {
    cVar3 = '\x01';
  }
  cVar2 = *(char *)((longlong)&this->_padding_ + 4);
  if ((cVar2 < cVar3) || ('\x10' < cVar2)) {
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_FRPCDoSStateCon_1519fd5d8,
                 (FLogCategoryBase *)&LogNet);
    }
    cVar2 = *(char *)((longlong)&this->_padding_ + 4);
    cVar5 = '\x10';
    if (cVar2 < '\x10') {
      cVar5 = cVar2;
    }
    if (cVar3 < cVar5) {
      cVar3 = cVar5;
    }
    *(char *)((longlong)&this->_padding_ + 4) = cVar3;
  }
  sVar1 = (short)this->_padding_;
  if (((0 < sVar1) && (sVar1 < *(short *)((longlong)&this->_padding_ + 6))) &&
     (2 < (byte)LogNet._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  return;
}

