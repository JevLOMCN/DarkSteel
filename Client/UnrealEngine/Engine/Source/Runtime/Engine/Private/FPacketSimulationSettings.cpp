// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 148006010

UScriptStruct * __cdecl FPacketSimulationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPacketSimulationSettings,(UObject *)pUVar1,
                         L"PacketSimulationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.OuterSingleton;
}

// ConfigHelperBool @ 148024890

bool __thiscall
FPacketSimulationSettings::ConfigHelperBool
          (FPacketSimulationSettings *this,wchar_t *param_1,bool *param_2,wchar_t *param_3)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  if (param_3 != (wchar_t *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%s%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar1 = FConfigCacheIni::GetBool
                      (GConfig,L"PacketSimulationSettings",(wchar_t *)FVar2.Data,param_2,&GEngineIni
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      return true;
    }
  }
  bVar1 = FConfigCacheIni::GetBool(GConfig,L"PacketSimulationSettings",param_1,param_2,&GEngineIni);
  return bVar1;
}

// ConfigHelperInt @ 148024970

bool __thiscall
FPacketSimulationSettings::ConfigHelperInt
          (FPacketSimulationSettings *this,wchar_t *param_1,int *param_2,wchar_t *param_3)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  if (param_3 != (wchar_t *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%s%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar1 = FConfigCacheIni::GetInt
                      (GConfig,L"PacketSimulationSettings",(wchar_t *)FVar2.Data,param_2,&GEngineIni
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      return true;
    }
  }
  bVar1 = FConfigCacheIni::GetInt(GConfig,L"PacketSimulationSettings",param_1,param_2,&GEngineIni);
  return bVar1;
}

// LoadConfig @ 148042390

void __thiscall
FPacketSimulationSettings::LoadConfig(FPacketSimulationSettings *this,wchar_t *param_1)

{
  bool bVar1;
  ForAnyElementType FVar2;
  bool local_res8 [8];
  FString local_18;
  
  ConfigHelperInt(this,L"PktLoss",&this->PktLoss,param_1);
  ConfigHelperInt(this,L"PktLossMinSize",&this->PktLossMinSize,param_1);
  ConfigHelperInt(this,L"PktLossMaxSize",&this->PktLossMaxSize,param_1);
  local_res8[0] = this->PktOrder != 0;
  if (param_1 != (wchar_t *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%s%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar1 = FConfigCacheIni::GetBool
                      (GConfig,L"PacketSimulationSettings",(wchar_t *)FVar2.Data,local_res8,
                       &GEngineIni);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) goto LAB_148042487;
  }
  FConfigCacheIni::GetBool(GConfig,L"PacketSimulationSettings",L"PktOrder",local_res8,&GEngineIni);
LAB_148042487:
  this->PktOrder = (uint)local_res8[0];
  ConfigHelperInt(this,L"PktLag",&this->PktLag,param_1);
  ConfigHelperInt(this,L"PktLagVariance",&this->PktLagVariance,param_1);
  ConfigHelperInt(this,L"PktLagMin",&this->PktLagMin,param_1);
  ConfigHelperInt(this,L"PktLagMax",&this->PktLagMax,param_1);
  ConfigHelperInt(this,L"PktDup",&this->PktDup,param_1);
  ConfigHelperInt(this,L"PktIncomingLagMin",&this->PktIncomingLagMin,param_1);
  ConfigHelperInt(this,L"PktIncomingLagMax",&this->PktIncomingLagMax,param_1);
  ConfigHelperInt(this,L"PktIncomingLoss",&this->PktIncomingLoss,param_1);
  ConfigHelperInt(this,L"PktJitter",&this->PktJitter,param_1);
  ConfigHelperInt(this,L"PktBufferBloatInMS",&this->PktBufferBloatInMS,param_1);
  ConfigHelperInt(this,L"PktIncomingBufferBloatInMS",&this->PktIncomingBufferBloatInMS,param_1);
  ValidateSettings(this);
  return;
}

// LoadEmulationProfile @ 1480425a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPacketSimulationSettings::LoadEmulationProfile(FPacketSimulationSettings *this,wchar_t *param_1)

{
  FFeedbackContext *pFVar1;
  UScriptStruct *this_00;
  bool bVar2;
  int iVar3;
  UPackage *pUVar4;
  ulonglong uVar5;
  FName *pFVar6;
  FProperty *this_01;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  UScriptStruct *local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FName local_40;
  
  ::FString::PrintfImpl(&local_80,L"%s.%s");
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar9.Data = local_80.Data.AllocatorInstance.Data;
  }
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  bVar2 = FConfigCacheIni::GetSection(GConfig,(wchar_t *)FVar9.Data,&local_a8,&GEngineIni);
  if (bVar2) {
    this->PktLoss = 0;
    this->PktLossMaxSize = 0;
    this->PktLossMinSize = 0;
    this->PktOrder = 0;
    this->PktDup = 0;
    this->PktLag = 0;
    this->PktLagVariance = 0;
    this->PktLagMin = 0;
    this->PktLagMax = 0;
    this->PktIncomingLagMin = 0;
    this->PktIncomingLagMax = 0;
    this->PktIncomingLoss = 0;
    this->PktJitter = 0;
    this->PktFrameDelay = 0;
    this->PktIncomingFrameDelay = 0;
    this->PktBufferBloatInMS = 0;
    this->PktIncomingBufferBloatInMS = 0;
    local_88 = Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPacketSimulationSettings,(UObject *)pUVar4,
                           L"PacketSimulationSettings");
    }
    uVar5 = (ulonglong)local_a8.ArrayNum;
    pFVar8 = local_a8.AllocatorInstance.Data + uVar5 * 0x10;
    local_res20 = local_a8.ArrayNum;
    FVar9.Data = local_a8.AllocatorInstance.Data;
    local_88 = Z_Registration_Info_UScriptStruct_FPacketSimulationSettings.OuterSingleton;
    while( true ) {
      this_00 = local_88;
      if (local_a8.ArrayNum != (int)uVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar9.Data == pFVar8) break;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      ::FString::FString(&local_60,L"=");
      bVar2 = ::FString::Split((FString *)FVar9.Data,&local_60,&local_b8,&local_98);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        ::FString::FString(&local_70,L"PacketSimulationSettings");
        if (local_b8.Data.ArrayNum == local_70.Data.ArrayNum) {
          if (local_b8.Data.ArrayNum < 2) {
            bVar2 = true;
          }
          else {
            iVar3 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                               (wchar_t *)local_70.Data.AllocatorInstance.Data);
            bVar2 = iVar3 == 0;
          }
        }
        else {
          bVar2 = local_70.Data.ArrayNum + local_b8.Data.ArrayNum == 1;
        }
        iVar3 = local_b8.Data.ArrayNum;
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
          iVar3 = local_b8.Data.ArrayNum;
        }
        if (bVar2) {
          ::FString::FString(&local_50,L"FPacketSimulationSettings");
          FVar7.Data = (FScriptContainerElement *)L"";
          if (local_98.Data.ArrayNum != 0) {
            FVar7.Data = local_98.Data.AllocatorInstance.Data;
          }
          UScriptStruct::ImportText
                    (this_00,(wchar_t *)FVar7.Data,this,(UObject *)0x0,0,(FOutputDevice *)GWarn,
                     &local_50,true);
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        else {
          FVar7.Data = (FScriptContainerElement *)L"";
          if (iVar3 != 0) {
            FVar7.Data = local_b8.Data.AllocatorInstance.Data;
          }
          pFVar6 = ::FName::FName(&local_40,(wchar_t *)FVar7.Data,FNAME_Find);
          this_01 = UStruct::FindPropertyByName((UStruct *)this_00,*pFVar6);
          pFVar1 = GWarn;
          if (this_01 == (FProperty *)0x0) {
            if (2 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
          }
          else {
            FVar7.Data = (FScriptContainerElement *)L"";
            if (local_98.Data.ArrayNum != 0) {
              FVar7.Data = local_98.Data.AllocatorInstance.Data;
            }
            bVar2 = FProperty::ValidateImportFlags(this_01,0,(FOutputDevice *)GWarn);
            if ((bVar2) && (FVar7.Data != (FScriptContainerElement *)0x0)) {
              (**(code **)(this_01->_padding_ + 0xe8))(this_01,FVar7.Data,this,1,0,0x8000000,pFVar1)
              ;
            }
          }
        }
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      FVar9.Data = FVar9.Data + 0x10;
      uVar5 = (ulonglong)local_res20;
    }
    ValidateSettings(this);
    bVar2 = true;
  }
  else {
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    bVar2 = false;
  }
  DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ParseHelper @ 148048180

bool __thiscall
FPacketSimulationSettings::ParseHelper
          (FPacketSimulationSettings *this,wchar_t *param_1,wchar_t *param_2,int *param_3,
          wchar_t *param_4)

{
  bool bVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  if (param_4 != (wchar_t *)0x0) {
    ::FString::PrintfImpl(&local_18,L"%s%s");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar2.Data,param_3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      return true;
    }
  }
  bVar1 = FParse::Value(param_1,param_2,param_3);
  return bVar1;
}

// ParseSettings @ 148048590

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPacketSimulationSettings::ParseSettings
          (FPacketSimulationSettings *this,wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  FString local_48;
  FString local_38;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  bVar2 = false;
  bVar1 = FParse::Value(param_1,L"PktEmulationProfile=",&local_48,true,(wchar_t **)0x0);
  if (bVar1) {
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar2 = LoadEmulationProfile(this,(wchar_t *)FVar3.Data);
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048677:
    bVar1 = FParse::Value(param_1,L"PktLoss=",&this->PktLoss);
    if (bVar1) goto LAB_14804868d;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktLoss);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048677;
LAB_14804868d:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048705:
    bVar1 = FParse::Value(param_1,L"PktLossMinSize=",&this->PktLossMinSize);
    if (bVar1) goto LAB_14804871c;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktLossMinSize);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048705;
LAB_14804871c:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_14804878d:
    bVar1 = FParse::Value(param_1,L"PktLossMaxSize=",&this->PktLossMaxSize);
    if (bVar1) goto LAB_1480487a4;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktLossMaxSize);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_14804878d;
LAB_1480487a4:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048815:
    bVar1 = FParse::Value(param_1,L"PktOrder=",&this->PktOrder);
    if (bVar1) goto LAB_14804882c;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktOrder);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048815;
LAB_14804882c:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_14804889d:
    bVar1 = FParse::Value(param_1,L"PktLag=",&this->PktLag);
    if (bVar1) goto LAB_1480488b4;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktLag);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_14804889d;
LAB_1480488b4:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048925:
    bVar1 = FParse::Value(param_1,L"PktDup=",&this->PktDup);
    if (bVar1) goto LAB_14804893c;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktDup);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048925;
LAB_14804893c:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_PktDup_set_to___1519ee738,
                 (FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_1480489ad:
    bVar1 = FParse::Value(param_1,L"PktLagVariance=",&this->PktLagVariance);
    if (bVar1) goto LAB_1480489c4;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktLagVariance);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_1480489ad;
LAB_1480489c4:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048a35:
    bVar1 = FParse::Value(param_1,L"PktLagMin=",&this->PktLagMin);
    if (bVar1) goto LAB_148048a4c;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktLagMin);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048a35;
LAB_148048a4c:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048abd:
    bVar1 = FParse::Value(param_1,L"PktLagMax=",&this->PktLagMax);
    if (bVar1) goto LAB_148048ad4;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktLagMax);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048abd;
LAB_148048ad4:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048b45:
    bVar1 = FParse::Value(param_1,L"PktIncomingLagMin=",&this->PktIncomingLagMin);
    if (bVar1) goto LAB_148048b5c;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktIncomingLagMin);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048b45;
LAB_148048b5c:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048bcd:
    bVar1 = FParse::Value(param_1,L"PktIncomingLagMax=",&this->PktIncomingLagMax);
    if (bVar1) goto LAB_148048be4;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktIncomingLagMax);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048bcd;
LAB_148048be4:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048c55:
    bVar1 = FParse::Value(param_1,L"PktIncomingLoss=",&this->PktIncomingLoss);
    if (bVar1) goto LAB_148048c6c;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktIncomingLoss);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048c55;
LAB_148048c6c:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048cdd:
    bVar1 = FParse::Value(param_1,L"PktJitter=",&this->PktJitter);
    if (bVar1) goto LAB_148048cf4;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktJitter);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048cdd;
LAB_148048cf4:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048d65:
    bVar1 = FParse::Value(param_1,L"PktBufferBloatInMS=",&this->PktBufferBloatInMS);
    if (bVar1) goto LAB_148048d7c;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktBufferBloatInMS);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048d65;
LAB_148048d7c:
    bVar2 = true;
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  if (param_2 == (wchar_t *)0x0) {
LAB_148048df3:
    bVar1 = FParse::Value(param_1,L"PktIncomingBufferBloatInMS=",&this->PktIncomingBufferBloatInMS);
    if (!bVar1) goto LAB_148048e2d;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"%s%s");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar3.Data = local_38.Data.AllocatorInstance.Data;
    }
    bVar1 = FParse::Value(param_1,(wchar_t *)FVar3.Data,&this->PktIncomingBufferBloatInMS);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (!bVar1) goto LAB_148048df3;
  }
  bVar2 = true;
  if (4 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
LAB_148048e2d:
  ValidateSettings(this);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ResetSettings @ 148054b60

void __thiscall FPacketSimulationSettings::ResetSettings(FPacketSimulationSettings *this)

{
  this->PktLoss = 0;
  this->PktLossMaxSize = 0;
  this->PktLossMinSize = 0;
  this->PktOrder = 0;
  this->PktDup = 0;
  this->PktLag = 0;
  this->PktLagVariance = 0;
  this->PktLagMin = 0;
  this->PktLagMax = 0;
  this->PktIncomingLagMin = 0;
  this->PktIncomingLagMax = 0;
  this->PktIncomingLoss = 0;
  this->PktJitter = 0;
  this->PktFrameDelay = 0;
  this->PktIncomingFrameDelay = 0;
  this->PktBufferBloatInMS = 0;
  this->PktIncomingBufferBloatInMS = 0;
  return;
}

// ValidateSettings @ 148071960

void __thiscall FPacketSimulationSettings::ValidateSettings(FPacketSimulationSettings *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 100;
  if (this->PktLoss < 100) {
    iVar2 = this->PktLoss;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->PktLoss = iVar1;
  iVar2 = 1;
  if (this->PktOrder < 1) {
    iVar2 = this->PktOrder;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->PktOrder = iVar1;
  iVar2 = 0;
  if (0 < this->PktLagMin) {
    iVar2 = this->PktLagMin;
  }
  this->PktLagMin = iVar2;
  iVar1 = this->PktLagMax;
  if (this->PktLagMax < iVar2) {
    iVar1 = iVar2;
  }
  this->PktLagMax = iVar1;
  iVar2 = 100;
  if (this->PktDup < 100) {
    iVar2 = this->PktDup;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->PktDup = iVar1;
  iVar2 = 0;
  if (0 < this->PktIncomingLagMin) {
    iVar2 = this->PktIncomingLagMin;
  }
  this->PktIncomingLagMin = iVar2;
  iVar1 = this->PktIncomingLagMax;
  if (this->PktIncomingLagMax < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 100;
  if (this->PktIncomingLoss < 100) {
    iVar2 = this->PktIncomingLoss;
  }
  this->PktIncomingLagMax = iVar1;
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  this->PktIncomingLoss = iVar1;
  iVar2 = 0;
  if (0 < this->PktBufferBloatInMS) {
    iVar2 = this->PktBufferBloatInMS;
  }
  this->PktBufferBloatInMS = iVar2;
  iVar2 = 0;
  if (0 < this->PktIncomingBufferBloatInMS) {
    iVar2 = this->PktIncomingBufferBloatInMS;
  }
  this->PktIncomingBufferBloatInMS = iVar2;
  return;
}

