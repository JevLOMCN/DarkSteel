// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderDocPlugin
// Functions: 2

// MakeRenderDocCaptureFilePath @ 14e2cb2a0

FString * __cdecl
FRenderDocFrameCapturer::MakeRenderDocCaptureFilePath
          (FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  FString *pFVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  FString local_88;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  if ((param_1->Data).ArrayNum < 2) {
    ::FString::FString(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  bVar7 = FPaths::IsRelative(param_1);
  if (bVar7) {
    pFVar10 = ::FString::FString(&local_38,"RenderDocCaptures");
    pFVar9 = FPaths::ProjectSavedDir();
    iVar8 = (pFVar10->Data).ArrayNum;
    iVar11 = 1;
    iVar14 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar14 = 0;
    }
    if (((pFVar9->Data).ArrayNum != 0) || (iVar8 = 2, iVar14 == -1)) {
      iVar8 = 1;
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar9->Data).ArrayNum;
    pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
    local_78.ArrayNum = iVar1;
    if ((iVar1 == 0) && (iVar14 + iVar8 == 0)) {
      local_78.ArrayMax = 0;
    }
    else {
      uVar13 = iVar1 + iVar14 + iVar8;
      if ((int)uVar13 < iVar1) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,0,&local_78.AllocatorInstance,iVar1,&local_78.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_78.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
      }
    }
    ::FString::PathAppend
              ((FString *)&local_78,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
    iVar14 = (param_1->Data).ArrayNum;
    iVar8 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar8 = 0;
    }
    if ((local_78.ArrayNum == 0) && (iVar8 != -1)) {
      iVar11 = 2;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_58,&local_78,iVar8 + iVar11);
    ::FString::PathAppend
              ((FString *)&local_58,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar8);
    pFVar10 = FPaths::ConvertRelativePathToFull(&local_48,(FString *)&local_58);
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar7 = true;
  }
  else {
    iVar8 = (param_1->Data).ArrayNum;
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_68.Data.ArrayMax = 0;
      pFVar10 = &local_68;
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar7 = false;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar8,0,(ForAnyElementType *)&local_68,iVar8,&local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar8 * 2);
      pFVar10 = &local_68;
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar7 = false;
    }
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  lVar12 = (longlong)local_88.Data.ArrayNum;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,pFVar2,lVar12 * 2);
  }
  if ((bVar7) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::FString((FString *)&local_58,"rdc");
  pFVar10 = FPaths::SetExtension(&local_38,&local_88,(FString *)&local_58);
  if (&local_88 != pFVar10) {
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    local_88.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_88.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename(&local_88);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_88.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_88.Data.ArrayMax;
  return __return_storage_ptr__;
}

// SaveAndLaunch @ 14e2cb6a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "RENDERDOC_CaptureOption": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderDocFrameCapturer::SaveAndLaunch
          (FRenderDocPluginModule *param_1,uint param_2,FString *param_3)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  char cVar4;
  DWORD DVar5;
  IPlatformFile *pIVar6;
  FString *pFVar7;
  FTaskBase *this;
  undefined8 *puVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  FTaskBase *this_00;
  undefined1 uVar12;
  undefined1 auStackY_10f8 [32];
  EExtendedTaskPriority local_10b8;
  ETaskPriority local_10b7 [7];
  FString local_10b0;
  undefined1 local_10a0 [8];
  ForAnyElementType local_1098;
  undefined8 local_1090;
  undefined1 local_1088;
  FString local_1080;
  code *local_1068;
  undefined4 local_1058;
  undefined4 uStack_1054;
  atomic<unsigned_int> aStack_1050;
  atomic<unsigned_int> aStack_104c;
  FPipe *local_1048;
  undefined8 local_1040;
  wchar_t local_1038 [2048];
  ulonglong local_38;
  undefined1 uVar13;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  MakeRenderDocCaptureFilePath(&local_10b0,param_3);
  uVar13 = 0;
  uVar12 = 0;
  if (1 < local_10b0.Data.ArrayNum) {
    pIVar6 = IPlatformFile::GetPlatformPhysical();
    FRenderDocPluginModule::GetNewestCapture(param_1,&local_1080);
    if (4 < (byte)RenderDocPlugin._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_static_void___cdecl_FRenderDocFrameCapturer::SaveAndLaunch(FRenderDocPluginModule*___ptr64,unsigned_int,FString_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_10b0.Data.ArrayNum != 0) {
      FVar9.Data = local_10b0.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar6 + 0x78))(pIVar6,FVar9.Data);
    if (cVar4 != '\0') {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_10b0.Data.ArrayNum != 0) {
        FVar9.Data = local_10b0.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar6 + 0x88))(pIVar6,FVar9.Data);
    }
    pcVar3 = *(code **)((longlong)*pIVar6 + 0x200);
    pFVar7 = FPaths::GetPath((FString *)local_10a0,&local_10b0);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    cVar4 = (*pcVar3)(pIVar6,pwVar10);
    if (local_10a0 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_10a0);
    }
    uVar12 = uVar13;
    if (cVar4 == '\0') {
      DVar5 = FWindowsPlatformMisc::GetLastError();
      FWindowsPlatformMisc::GetSystemErrorMessage(local_1038,0x800,DVar5);
      if (2 < (byte)RenderDocPlugin._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_static_void___cdecl_FRenderDocFrameCapturer::SaveAndLaunch(FRenderDocPluginModule*___ptr64,unsigned_int,FString_const&___ptr64)'
                    ::__l55::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
      }
    }
    else {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_1080.Data.ArrayNum != 0) {
        FVar9.Data = local_1080.Data.AllocatorInstance.Data;
      }
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_10b0.Data.ArrayNum != 0) {
        FVar11.Data = local_10b0.Data.AllocatorInstance.Data;
      }
      cVar4 = (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,FVar11.Data,FVar9.Data);
      if (cVar4 == '\0') {
        DVar5 = FWindowsPlatformMisc::GetLastError();
        FWindowsPlatformMisc::GetSystemErrorMessage(local_1038,0x800,DVar5);
        if (2 < (byte)RenderDocPlugin._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    (&`public:_static_void___cdecl_FRenderDocFrameCapturer::SaveAndLaunch(FRenderDocPluginModule*___ptr64,unsigned_int,FString_const&___ptr64)'
                      ::__l35::LOG_Static,(FLogCategoryBase *)&RenderDocPlugin);
        }
      }
      else {
        uVar12 = 1;
      }
    }
    if (local_1080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.Data.AllocatorInstance.Data);
    }
  }
  FVar9.Data = local_10b0.Data.AllocatorInstance.Data;
  if ((param_2 & 1) != 0) {
    this_00 = (FTaskBase *)0x0;
    local_1098.Data = (FScriptContainerElement *)0x0;
    local_1090 = CONCAT44(local_1090._4_4_,local_10b0.Data.ArrayNum);
    local_10a0 = (undefined1  [8])param_1;
    if (local_10b0.Data.ArrayNum == 0) {
      local_1090 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_10b0.Data.ArrayNum,0,&local_1098,local_10b0.Data.ArrayNum,
                 (int *)((longlong)&local_1090 + 4));
      memcpy(local_1098.Data,FVar9.Data,(longlong)local_10b0.Data.ArrayNum * 2);
    }
    local_1088 = uVar12;
    this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
    if (this != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)this,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      this->_padding_ = (longlong)&___7__TGraphTask_UFRenderDocAsyncGraphTask____6B_;
      this_00 = this;
    }
    local_1068 = (code *)0x0;
    puVar8 = FMemory::Malloc(0x28,8);
    *puVar8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__EL___SaveAndLaunch_FRenderDocFrameCapturer__SAXPEAVFRenderDocPluginModule__IAEBVFString___Z__0A__00_Function_Private_Core_UE__6B_
    ;
    puVar8[2] = 0;
    puVar8[1] = local_10a0;
    puVar8[2] = local_1098.Data;
    local_1098.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar8 + 3) = (undefined4)local_1090;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = local_1090._4_4_;
    local_1090 = 0;
    *(undefined1 *)(puVar8 + 4) = local_1088;
    if (puVar8 + 1 != (undefined8 *)0x0) {
      local_1068 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FRenderDocFrameCapturer::SaveAndLaunch'::__l75::<lambda_1>,void>
                   ::Call;
    }
    *(undefined4 *)&this_00[1]._padding_ = 1;
    this_00[1]._padding_ = (longlong)local_1068;
    *(undefined8 **)&this_00[1].StateChangeEvent = puVar8;
    *(undefined4 *)&this_00[1]._padding_ = local_1058;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = uStack_1054;
    this_00[1].RefCount = aStack_1050;
    this_00[1].NumLocks = aStack_104c;
    this_00[1].Pipe = local_1048;
    local_1040 = 0;
    if ((this_00[1]._padding_ == 0) && (local_1068 != (code *)0x0)) {
      (**(code **)(CONCAT44(uStack_1054,local_1058) + 0x10))(&local_1058);
    }
    UE::Tasks::Private::TranslatePriority((Type)this_00[1]._padding_,local_10b7,&local_10b8);
    UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_10b7[0],local_10b8,None);
    if (this_00 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
    }
    else {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x120);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
    if (local_1098.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1098.Data);
    }
  }
  if (local_10b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10b0.Data.AllocatorInstance.Data);
  }
  return;
}

