// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// OnAbandoned @ 14896a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_DDSWriteTask<float>::OnAbandoned(FWN_DDSWriteTask<float> *this)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  code *local_78 [5];
  undefined8 *local_50;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_78[0] = (code *)0x0;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_50 = FMemory::Malloc(0x40,0x10);
    *local_50 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__OnAbandoned___FWN_DDSWriteTask_M__UEAAXXZ__00_00_Function_Private_Core_UE__6B_
    ;
    plVar1 = local_50 + 2;
    *plVar1 = local_48;
    local_50[7] = local_20;
    local_20 = (longlong *)0x0;
    local_50[4] = local_38;
    local_50[5] = uStack_30;
    local_50[6] = local_28;
    if (*plVar1 != 0) {
      local_48 = 0;
    }
    if (plVar1 != (longlong *)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWN_DDSWriteTask<float>::OnAbandoned'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_78);
    if (local_48 != 0) {
      plVar1 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar1 = local_20;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// OnAbandoned @ 14896a6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_DDSWriteTask<FColor>::OnAbandoned(FWN_DDSWriteTask<FColor> *this)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  code *local_78 [5];
  undefined8 *local_50;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_78[0] = (code *)0x0;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_50 = FMemory::Malloc(0x40,0x10);
    *local_50 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__OnAbandoned___FWN_DDSWriteTask_UFColor____UEAAXXZ__00_00_Function_Private_Core_UE__6B_
    ;
    plVar1 = local_50 + 2;
    *plVar1 = local_48;
    local_50[7] = local_20;
    local_20 = (longlong *)0x0;
    local_50[4] = local_38;
    local_50[5] = uStack_30;
    local_50[6] = local_28;
    if (*plVar1 != 0) {
      local_48 = 0;
    }
    if (plVar1 != (longlong *)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWN_DDSWriteTask<FColor>::OnAbandoned'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_78);
    if (local_48 != 0) {
      plVar1 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar1 = local_20;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// OnAbandoned @ 14896a800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_DDSWriteTask<FFloat16Color>::OnAbandoned(FWN_DDSWriteTask<FFloat16Color> *this)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  code *local_78 [5];
  undefined8 *local_50;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_78[0] = (code *)0x0;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_50 = FMemory::Malloc(0x40,0x10);
    *local_50 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__OnAbandoned___FWN_DDSWriteTask_VFFloat16Color____UEAAXXZ__00_00_Function_Private_Core_UE__6B_
    ;
    plVar1 = local_50 + 2;
    *plVar1 = local_48;
    local_50[7] = local_20;
    local_20 = (longlong *)0x0;
    local_50[4] = local_38;
    local_50[5] = uStack_30;
    local_50[6] = local_28;
    if (*plVar1 != 0) {
      local_48 = 0;
    }
    if (plVar1 != (longlong *)0x0) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWN_DDSWriteTask<FFloat16Color>::OnAbandoned'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_78);
    if (local_48 != 0) {
      plVar1 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar1 = local_20;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return;
}

// RunTask @ 14897b6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_DDSWriteTask<float>::RunTask(FWN_DDSWriteTask<float> *this)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  undefined1 local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = WriteToDisk(this);
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_88[0] = (code *)0x0;
    local_58 = bVar1;
    local_60 = FMemory::Malloc(0x50,0x10);
    *local_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__RunTask___FWN_DDSWriteTask_M__UEAA_NXZ__00_00_Function_Private_Core_UE__6B_
    ;
    *(undefined1 *)(local_60 + 2) = local_58;
    local_60[4] = local_48;
    local_60[9] = local_20;
    local_20 = (longlong *)0x0;
    local_60[6] = local_38;
    local_60[7] = uStack_30;
    local_60[8] = local_28;
    if (local_60[4] != 0) {
      local_48 = 0;
    }
    if (local_60 + 2 != (undefined8 *)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWN_DDSWriteTask<float>::RunTask'::__l5::<lambda_1>,void>::
                    Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_88);
    if (local_48 != 0) {
      plVar2 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar2 = local_20;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return bVar1;
}

// RunTask @ 14897b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_DDSWriteTask<FColor>::RunTask(FWN_DDSWriteTask<FColor> *this)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  undefined1 local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = WriteToDisk(this);
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_88[0] = (code *)0x0;
    local_58 = bVar1;
    local_60 = FMemory::Malloc(0x50,0x10);
    *local_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__RunTask___FWN_DDSWriteTask_UFColor____UEAA_NXZ__00_00_Function_Private_Core_UE__6B_
    ;
    *(undefined1 *)(local_60 + 2) = local_58;
    local_60[4] = local_48;
    local_60[9] = local_20;
    local_20 = (longlong *)0x0;
    local_60[6] = local_38;
    local_60[7] = uStack_30;
    local_60[8] = local_28;
    if (local_60[4] != 0) {
      local_48 = 0;
    }
    if (local_60 + 2 != (undefined8 *)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWN_DDSWriteTask<FColor>::RunTask'::__l5::<lambda_1>,void>::
                    Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_88);
    if (local_48 != 0) {
      plVar2 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar2 = local_20;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return bVar1;
}

// RunTask @ 14897b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_DDSWriteTask<FFloat16Color>::RunTask(FWN_DDSWriteTask<FFloat16Color> *this)

{
  bool bVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  code *local_88 [5];
  undefined8 *local_60;
  undefined1 local_58;
  longlong local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = WriteToDisk(this);
  local_48 = *(longlong *)&this->OnCompleted;
  if (local_48 != 0) {
    local_20 = *(longlong **)&(this->OnCompleted).field_0x28;
    *(undefined8 *)&(this->OnCompleted).field_0x28 = 0;
    local_38 = *(longlong *)&(this->OnCompleted).field_0x10;
    uStack_30 = *(undefined8 *)&(this->OnCompleted).field_0x18;
    local_28 = *(undefined8 *)&(this->OnCompleted).field_0x20;
    *(undefined8 *)&this->OnCompleted = 0;
    local_88[0] = (code *)0x0;
    local_58 = bVar1;
    local_60 = FMemory::Malloc(0x50,0x10);
    *local_60 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__RunTask___FWN_DDSWriteTask_VFFloat16Color____UEAA_NXZ__00_00_Function_Private_Core_UE__6B_
    ;
    *(undefined1 *)(local_60 + 2) = local_58;
    local_60[4] = local_48;
    local_60[9] = local_20;
    local_20 = (longlong *)0x0;
    local_60[6] = local_38;
    local_60[7] = uStack_30;
    local_60[8] = local_28;
    if (local_60[4] != 0) {
      local_48 = 0;
    }
    if (local_60 + 2 != (undefined8 *)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FWN_DDSWriteTask<FFloat16Color>::RunTask'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_88);
    if (local_48 != 0) {
      plVar2 = &local_38;
      if (local_20 != (longlong *)0x0) {
        plVar2 = local_20;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return bVar1;
}

// WriteToDisk @ 14898cf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall FWN_DDSWriteTask<float>::WriteToDisk(FWN_DDSWriteTask<float> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  DWORD DVar8;
  FString *pFVar9;
  long64 lVar10;
  FDDSFile *this_00;
  IFileManager *pIVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined1 auStackY_8b8 [32];
  EDDSError local_888 [2];
  ulonglong local_880;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_878;
  ulong64 local_858;
  FString local_850;
  FString local_840;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  this_00 = (FDDSFile *)0x0;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::__l2::
                __CpuProfilerEventSpecId2810,"WN_DDSWriteTask.WriteToDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
               ,0xafa);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId2810);
  }
  bVar6 = WN_EnsureWritableFile(&this->FilePath);
  if (bVar6) {
    if (((this->ImageView).RawData == (void *)0x0) && (1 < (byte)LogClient._0_1_)) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::__l9::
                  LOG_Static,(FLogCategoryBase *)&LogClient);
    }
    pFVar9 = FPaths::GetPath(&local_850,&this->FilePath);
    bVar6 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(pFVar9,&local_858,&local_880);
    if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_850.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      iVar1 = *(int *)((longlong)&(this->ImageView)._padding_ + 4);
      lVar4 = (this->ImageView)._padding_;
      lVar5 = (this->ImageView)._padding_;
      lVar10 = ERawImageFormat::GetBytesPerPixel
                         (*(Type *)((longlong)&(this->ImageView)._padding_ + 4));
      if (local_880 <
          lVar10 * (longlong)(int)lVar4 * (longlong)iVar1 * (longlong)(int)lVar5 + 0x100000U) {
        if (1 < (byte)LogClient._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::
                      __l32::LOG_Static,(FLogCategoryBase *)&LogClient);
        }
        goto LAB_14898d2d9;
      }
    }
    else {
      DVar8 = FWindowsPlatformMisc::GetLastError();
      FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,DVar8);
      if (2 < (byte)LogClient._0_1_) {
        FPaths::GetPath(&local_840,&this->FilePath);
        UE::Logging::Private::BasicLog<3>
                  (&`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::
                    __l51::LOG_Static,(FLogCategoryBase *)&LogClient);
        if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_840.Data.AllocatorInstance.Data);
        }
      }
    }
    this_00 = UE::DDS::FDDSFile::CreateEmpty2D
                        ((uint)(this->ImageView)._padding_,
                         *(uint *)((longlong)&(this->ImageView)._padding_ + 4),1,R32_FLOAT,0,
                         local_888);
    if ((this_00 != (FDDSFile *)0x0) && (local_888[0] == OK)) {
      if (((this_00->Mips).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      memcpy((this_00->MipRawData).AllocatorInstance.Data,(this->PixelData).AllocatorInstance.Data,
             *(size_t *)((this_00->Mips).AllocatorInstance.Data + 0x20));
      local_878.ArrayMax = 0;
      local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_878.ArrayNum = 0;
      local_888[0] = UE::DDS::FDDSFile::WriteDDS(this_00,&local_878,D3D10);
      if (local_888[0] == OK) {
        pIVar11 = IFileManager::Get();
        if ((this->FilePath).Data.ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
        }
        bVar6 = FFileHelper::SaveArrayToFile(&local_878,pwVar12,pIVar11,0);
        if (!bVar6) {
          if (1 < (byte)LogClient._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::
                        __l111::LOG_Static,(FLogCategoryBase *)&LogClient);
          }
          goto LAB_14898d28b;
        }
        bVar6 = true;
      }
      else if ((byte)LogClient._0_1_ < 2) {
LAB_14898d28b:
        bVar6 = false;
      }
      else {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::
                    __l91::LOG_Static,(FLogCategoryBase *)&LogClient);
        bVar6 = false;
      }
      if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_878.AllocatorInstance.Data);
      }
      goto LAB_14898d2dc;
    }
    if (1 < (byte)LogClient._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FWN_DDSWriteTask<float>::WriteToDisk(void)___ptr64'::__l71
                  ::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
  }
LAB_14898d2d9:
  bVar6 = false;
LAB_14898d2dc:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this_00 != (FDDSFile *)0x0) {
    pFVar2 = (this_00->MipRawData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this_00->Mips).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this_00,0x48);
  }
  return bVar6;
}

// WriteToDisk @ 14898d360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall FWN_DDSWriteTask<FColor>::WriteToDisk(FWN_DDSWriteTask<FColor> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  DWORD DVar8;
  FString *pFVar9;
  long64 lVar10;
  FDDSFile *this_00;
  IFileManager *pIVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined1 auStackY_8b8 [32];
  EDDSError local_888 [2];
  ulonglong local_880;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_878;
  ulong64 local_858;
  FString local_850;
  FString local_840;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  this_00 = (FDDSFile *)0x0;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'::__l2::
                __CpuProfilerEventSpecId2810,"WN_DDSWriteTask.WriteToDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
               ,0xafa);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId2810);
  }
  bVar6 = WN_EnsureWritableFile(&this->FilePath);
  if (bVar6) {
    if (((this->ImageView).RawData == (void *)0x0) && (1 < (byte)LogClient._0_1_)) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'::__l9
                  ::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
    pFVar9 = FPaths::GetPath(&local_850,&this->FilePath);
    bVar6 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(pFVar9,&local_858,&local_880);
    if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_850.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      iVar1 = *(int *)((longlong)&(this->ImageView)._padding_ + 4);
      lVar4 = (this->ImageView)._padding_;
      lVar5 = (this->ImageView)._padding_;
      lVar10 = ERawImageFormat::GetBytesPerPixel
                         (*(Type *)((longlong)&(this->ImageView)._padding_ + 4));
      if (local_880 <
          lVar10 * (longlong)(int)lVar4 * (longlong)iVar1 * (longlong)(int)lVar5 + 0x100000U) {
        if (1 < (byte)LogClient._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'::
                      __l32::LOG_Static,(FLogCategoryBase *)&LogClient);
        }
        goto LAB_14898d6d9;
      }
    }
    else {
      DVar8 = FWindowsPlatformMisc::GetLastError();
      FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,DVar8);
      if (2 < (byte)LogClient._0_1_) {
        FPaths::GetPath(&local_840,&this->FilePath);
        UE::Logging::Private::BasicLog<3>
                  (&`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'::
                    __l51::LOG_Static,(FLogCategoryBase *)&LogClient);
        if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_840.Data.AllocatorInstance.Data);
        }
      }
    }
    this_00 = UE::DDS::FDDSFile::CreateEmpty2D
                        ((uint)(this->ImageView)._padding_,
                         *(uint *)((longlong)&(this->ImageView)._padding_ + 4),1,B8G8R8A8_UNORM,0,
                         local_888);
    if ((this_00 != (FDDSFile *)0x0) && (local_888[0] == OK)) {
      if (((this_00->Mips).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      memcpy((this_00->MipRawData).AllocatorInstance.Data,(this->PixelData).AllocatorInstance.Data,
             *(size_t *)((this_00->Mips).AllocatorInstance.Data + 0x20));
      local_878.ArrayMax = 0;
      local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_878.ArrayNum = 0;
      local_888[0] = UE::DDS::FDDSFile::WriteDDS(this_00,&local_878,D3D10);
      if (local_888[0] == OK) {
        pIVar11 = IFileManager::Get();
        if ((this->FilePath).Data.ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
        }
        bVar6 = FFileHelper::SaveArrayToFile(&local_878,pwVar12,pIVar11,0);
        if (!bVar6) {
          if (1 < (byte)LogClient._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'
                        ::__l111::LOG_Static,(FLogCategoryBase *)&LogClient);
          }
          goto LAB_14898d68b;
        }
        bVar6 = true;
      }
      else if ((byte)LogClient._0_1_ < 2) {
LAB_14898d68b:
        bVar6 = false;
      }
      else {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'::
                    __l91::LOG_Static,(FLogCategoryBase *)&LogClient);
        bVar6 = false;
      }
      if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_878.AllocatorInstance.Data);
      }
      goto LAB_14898d6dc;
    }
    if (1 < (byte)LogClient._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FWN_DDSWriteTask<FColor>::WriteToDisk(void)___ptr64'::__l71
                  ::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
  }
LAB_14898d6d9:
  bVar6 = false;
LAB_14898d6dc:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this_00 != (FDDSFile *)0x0) {
    pFVar2 = (this_00->MipRawData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this_00->Mips).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this_00,0x48);
  }
  return bVar6;
}

// WriteToDisk @ 14898d760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EDDSError": Some values do not have unique names */

bool __thiscall FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(FWN_DDSWriteTask<FFloat16Color> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  DWORD DVar8;
  FString *pFVar9;
  long64 lVar10;
  FDDSFile *this_00;
  IFileManager *pIVar11;
  wchar_t *pwVar12;
  bool bVar13;
  undefined1 auStackY_8b8 [32];
  EDDSError local_888 [2];
  ulonglong local_880;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_878;
  ulong64 local_858;
  FString local_850;
  FString local_840;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  this_00 = (FDDSFile *)0x0;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'::
                __l2::__CpuProfilerEventSpecId2810,"WN_DDSWriteTask.WriteToDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealClient.cpp"
               ,0xafa);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'::
               __l2::__CpuProfilerEventSpecId2810);
  }
  bVar6 = WN_EnsureWritableFile(&this->FilePath);
  if (bVar6) {
    if (((this->ImageView).RawData == (void *)0x0) && (1 < (byte)LogClient._0_1_)) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
    pFVar9 = FPaths::GetPath(&local_850,&this->FilePath);
    bVar6 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(pFVar9,&local_858,&local_880);
    if (local_850.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_850.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      iVar1 = *(int *)((longlong)&(this->ImageView)._padding_ + 4);
      lVar4 = (this->ImageView)._padding_;
      lVar5 = (this->ImageView)._padding_;
      lVar10 = ERawImageFormat::GetBytesPerPixel
                         (*(Type *)((longlong)&(this->ImageView)._padding_ + 4));
      if (local_880 <
          lVar10 * (longlong)(int)lVar4 * (longlong)iVar1 * (longlong)(int)lVar5 + 0x100000U) {
        if (1 < (byte)LogClient._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'
                      ::__l32::LOG_Static,(FLogCategoryBase *)&LogClient);
        }
        goto LAB_14898dad9;
      }
    }
    else {
      DVar8 = FWindowsPlatformMisc::GetLastError();
      FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,DVar8);
      if (2 < (byte)LogClient._0_1_) {
        FPaths::GetPath(&local_840,&this->FilePath);
        UE::Logging::Private::BasicLog<3>
                  (&`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'
                    ::__l51::LOG_Static,(FLogCategoryBase *)&LogClient);
        if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_840.Data.AllocatorInstance.Data);
        }
      }
    }
    this_00 = UE::DDS::FDDSFile::CreateEmpty2D
                        ((uint)(this->ImageView)._padding_,
                         *(uint *)((longlong)&(this->ImageView)._padding_ + 4),1,R16G16B16A16_FLOAT,
                         0,local_888);
    if ((this_00 != (FDDSFile *)0x0) && (local_888[0] == OK)) {
      if (((this_00->Mips).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      memcpy((this_00->MipRawData).AllocatorInstance.Data,(this->PixelData).AllocatorInstance.Data,
             *(size_t *)((this_00->Mips).AllocatorInstance.Data + 0x20));
      local_878.ArrayMax = 0;
      local_878.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_878.ArrayNum = 0;
      local_888[0] = UE::DDS::FDDSFile::WriteDDS(this_00,&local_878,D3D10);
      if (local_888[0] == OK) {
        pIVar11 = IFileManager::Get();
        if ((this->FilePath).Data.ArrayNum == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(this->FilePath).Data.AllocatorInstance.Data;
        }
        bVar6 = FFileHelper::SaveArrayToFile(&local_878,pwVar12,pIVar11,0);
        if (!bVar6) {
          if (1 < (byte)LogClient._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'
                        ::__l111::LOG_Static,(FLogCategoryBase *)&LogClient);
          }
          goto LAB_14898da8b;
        }
        bVar6 = true;
      }
      else if ((byte)LogClient._0_1_ < 2) {
LAB_14898da8b:
        bVar6 = false;
      }
      else {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'
                    ::__l91::LOG_Static,(FLogCategoryBase *)&LogClient);
        bVar6 = false;
      }
      if (local_878.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_878.AllocatorInstance.Data);
      }
      goto LAB_14898dadc;
    }
    if (1 < (byte)LogClient._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_FWN_DDSWriteTask<FFloat16Color>::WriteToDisk(void)___ptr64'
                  ::__l71::LOG_Static,(FLogCategoryBase *)&LogClient);
    }
  }
LAB_14898dad9:
  bVar6 = false;
LAB_14898dadc:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this_00 != (FDDSFile *)0x0) {
    pFVar2 = (this_00->MipRawData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (this_00->Mips).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this_00,0x48);
  }
  return bVar6;
}

