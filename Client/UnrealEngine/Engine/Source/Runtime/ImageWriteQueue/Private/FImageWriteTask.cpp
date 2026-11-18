// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 6

// AddPreProcessorToSetAlphaOpaque @ 1446eb410

void __thiscall FImageWriteTask::AddPreProcessorToSetAlphaOpaque(FImageWriteTask *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  iVar1 = (this->PixelPreProcessors).ArrayNum;
  if (iVar1 == (this->PixelPreProcessors).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->PixelPreProcessors).AllocatorInstance,
                       &(this->PixelPreProcessors).ArrayMax);
  }
  (this->PixelPreProcessors).ArrayNum = iVar1 + 1;
  pFVar2 = (this->PixelPreProcessors).AllocatorInstance.Data + (longlong)iVar1 * 0x30;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 0x28) = 0;
  *(undefined ***)(pFVar2 + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::`2'::PreProcessorToSetAlphaOpaque,1,0>
        ::_vftable_;
  if (pFVar2 != (FScriptContainerElement *)0xffffffffffffffe8) {
    *(code **)pFVar2 =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,void,FImagePixelData_*>
         ::Call;
  }
  return;
}

// EnsureWritableFile @ 1446ecd40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FImageWriteTask::EnsureWritableFile(FImageWriteTask *this)

{
  char cVar1;
  IFileManager *pIVar2;
  longlong lVar3;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FString local_18;
  
  FPaths::GetPath(&local_18,&this->Filename);
  pIVar2 = IFileManager::Get();
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,FVar5.Data);
  if (cVar1 == '\0') {
    pIVar2 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar5.Data = local_18.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar2 + 0x60))(pIVar2,FVar5.Data,1);
  }
  pIVar2 = IFileManager::Get();
  if ((this->Filename).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
  }
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,pwVar6);
  if (lVar3 == -1) {
LAB_1446ece71:
    bVar7 = true;
  }
  else {
    if (this->bOverwriteFile == false) {
LAB_1446ece44:
      if (1 < (byte)LogImageWriteQueue._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWriteQueue);
        bVar7 = false;
        goto LAB_1446ece73;
      }
    }
    else {
      this_00 = FPlatformFileManager::Get();
      pIVar4 = FPlatformFileManager::GetPlatformFile(this_00);
      if ((this->Filename).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->Filename).Data.AllocatorInstance.Data;
      }
      cVar1 = (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,pwVar6);
      if (cVar1 != '\0') goto LAB_1446ece71;
      if (this->bOverwriteFile == false) goto LAB_1446ece44;
      if (1 < (byte)LogImageWriteQueue._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWriteQueue);
      }
    }
    bVar7 = false;
  }
LAB_1446ece73:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// OnAbandoned @ 1446ee6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImageWriteTask::OnAbandoned(FImageWriteTask *this)

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
    *local_50 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FImageWriteTask::OnAbandoned'::`5'::<lambda_1>,1,1>::
                 _vftable_;
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
                    TFunctionRefCaller<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,void>::Call;
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

// PreProcess @ 1446ee8f0

void __thiscall FImageWriteTask::PreProcess(FImageWriteTask *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  FImagePixelData *local_res8;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId37,"ImageWriteTask.PreProcess",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteTask.cpp"
               ,0x25);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId37);
  }
  iVar1 = (this->PixelPreProcessors).ArrayNum;
  pFVar5 = (this->PixelPreProcessors).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->PixelPreProcessors).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar6) break;
    local_res8 = (this->PixelData).Ptr;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
    pcVar2 = *(code **)pFVar5;
    pFVar4 = pFVar5 + 0x10;
    if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
    }
    uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
    (*pcVar2)(uVar3,&local_res8);
    pFVar5 = pFVar5 + 0x30;
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// RunTask @ 1446efaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FImageWriteTask::RunTask(FImageWriteTask *this)

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
    *local_60 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FImageWriteTask::RunTask'::`5'::<lambda_1>,1,1>::_vftable_;
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
                    TFunctionRefCaller<`FImageWriteTask::RunTask'::__l5::<lambda_1>,void>::Call;
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

// WriteToDisk @ 1446efda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FImageWriteTask::WriteToDisk(FImageWriteTask *this)

{
  FString *pFVar1;
  int iVar2;
  FName FVar3;
  EImageFormat EVar4;
  char cVar5;
  DWORD DVar6;
  FModuleManager *this_00;
  IModuleInterface *pIVar7;
  wchar_t *pwVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar9;
  undefined8 uVar10;
  FString *pFVar11;
  IFileManager *pIVar12;
  FScriptContainerElement *pFVar13;
  FStaticBasicLogRecord *pFVar14;
  char cVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 auStack_8f8 [32];
  wchar_t *local_8d8;
  char local_8c8;
  undefined1 local_8c7 [7];
  FString local_8c0;
  FString local_8b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_8a0;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_890;
  FImagePixelData *local_878;
  code *local_870;
  FString local_868;
  FImageView local_858;
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_8f8;
  bVar18 = CpuChannel->Enabled < 0;
  if (bVar18) {
    local_8c8 = '\0';
  }
  else {
    local_8c8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId50,"ImageWriteTask.WriteToDisk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteTask.cpp"
               ,0x32);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId50);
  }
  cVar15 = !bVar18;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ImageWrapperName,"ImageWrapper");
    _Init_thread_footer(&::_TSS0);
  }
  FVar3 = ImageWrapperName;
  this_00 = FModuleManager::Get();
  pIVar7 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  pFVar1 = &this->Filename;
  if ((this->Filename).Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  local_8b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)pIVar7;
  EVar4 = (**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,pwVar8);
  if (EVar4 != this->Format) {
    pwVar8 = (wchar_t *)(**(code **)((longlong)*pIVar7 + 0x70))(pIVar7);
    pTVar9 = &FPaths::GetBaseFilename(&local_868,pFVar1,false)->Data;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_8a0,pTVar9,2 - (uint)(pTVar9->ArrayNum != 0));
    ::FString::AppendChar((FString *)&local_8a0,L'.');
    ::FString::ConcatFC(&local_8c0,(FString *)&local_8a0,pwVar8);
    if (pFVar1 != &local_8c0) {
      pFVar16 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_8c0.Data.AllocatorInstance.Data;
      (this->Filename).Data.ArrayNum = local_8c0.Data.ArrayNum;
      (this->Filename).Data.ArrayMax = local_8c0.Data.ArrayMax;
      local_8c0.Data.ArrayNum = 0;
      local_8c0.Data.ArrayMax = 0;
      local_8c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
    }
    if (local_8a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a0.AllocatorInstance.Data);
    }
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
  }
  bVar18 = EnsureWritableFile(this);
  if (bVar18) {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId37,"ImageWriteTask.PreProcess",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWriteQueue\\Private\\ImageWriteTask.cpp"
                 ,0x25);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId37);
    }
    iVar2 = (this->PixelPreProcessors).ArrayNum;
    pFVar16 = (this->PixelPreProcessors).AllocatorInstance.Data;
    pFVar17 = pFVar16 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((this->PixelPreProcessors).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniqueFunction<void___cdecl(FImagePixelData_*)>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_8c7);
      }
      cVar15 = local_8c8;
      if (pFVar16 == pFVar17) break;
      local_878 = (this->PixelData).Ptr;
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar16);
      pFVar13 = *(FScriptContainerElement **)(pFVar16 + 0x28);
      local_870 = *(code **)pFVar16;
      if (pFVar13 == (FScriptContainerElement *)0x0) {
        pFVar13 = pFVar16 + 0x10;
      }
      uVar10 = (**(code **)(*(longlong *)pFVar13 + 8))();
      (*local_870)(uVar10,&local_878);
      pFVar16 = pFVar16 + 0x30;
    }
    pFVar1 = &this->Filename;
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FImagePixelData::GetImageView((this->PixelData).Ptr,&local_858);
    if (local_858.RawData == (void *)0x0) {
      if (1 < (byte)LogImageWriteQueue._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWriteQueue);
        bVar18 = false;
        goto LAB_1446f0246;
      }
    }
    else {
      local_890.ArrayMax = 0;
      local_890.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_890.ArrayNum = 0;
      local_8d8 = (wchar_t *)CONCAT44(local_8d8._4_4_,this->CompressionQuality);
      cVar5 = (**(code **)((longlong)*(IModuleInterface *)local_8b0.Data.AllocatorInstance.Data +
                          0x40))(local_8b0.Data.AllocatorInstance.Data,&local_890,this->Format);
      if (cVar5 != '\0') {
        pFVar11 = FPaths::GetPath(&local_8b0,pFVar1);
        bVar18 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace
                           (pFVar11,(ulong64 *)&local_8a0,(ulong64 *)&local_868);
        if ((IModuleInterface *)local_8b0.Data.AllocatorInstance.Data != (IModuleInterface *)0x0) {
          FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
        }
        if (bVar18) {
          if (local_868.Data.AllocatorInstance.Data <
              (FScriptContainerElement *)(local_890.ArrayNum + 0x100000U)) {
            if (1 < (byte)LogImageWriteQueue._0_1_) {
              pFVar14 = &::LOG_Static;
              goto LAB_1446f0156;
            }
            goto LAB_1446f0165;
          }
        }
        else {
          DVar6 = FWindowsPlatformMisc::GetLastError();
          FWindowsPlatformMisc::GetSystemErrorMessage(local_838,0x400,DVar6);
          if (2 < (byte)LogImageWriteQueue._0_1_) {
            FPaths::GetPath(&local_8b0,pFVar1);
            local_8d8 = local_838;
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWriteQueue)
            ;
            if ((IModuleInterface *)local_8b0.Data.AllocatorInstance.Data != (IModuleInterface *)0x0
               ) {
              FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
            }
          }
        }
        pIVar12 = IFileManager::Get();
        if ((this->Filename).Data.ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
        }
        bVar18 = FFileHelper::SaveArrayToFile(&local_890,pwVar8,pIVar12,0);
        if (local_890.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_890.AllocatorInstance.Data);
        }
        if (bVar18) goto LAB_1446f0246;
        goto LAB_1446f021e;
      }
      if (1 < (byte)LogImageWriteQueue._0_1_) {
        pFVar14 = &::LOG_Static;
LAB_1446f0156:
        UE::Logging::Private::BasicLog<2>(pFVar14,(FLogCategoryBase *)&LogImageWriteQueue);
      }
LAB_1446f0165:
      if (local_890.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_890.AllocatorInstance.Data);
      }
    }
    bVar18 = false;
  }
  else {
LAB_1446f021e:
    if (1 < (byte)LogImageWriteQueue._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWriteQueue);
    }
  }
LAB_1446f0246:
  if (cVar15 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar18;
}

