// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FVisualLoggerBinaryFileDevice @ 1489b5f60

FVisualLoggerBinaryFileDevice * __thiscall
FVisualLoggerBinaryFileDevice::FVisualLoggerBinaryFileDevice(FVisualLoggerBinaryFileDevice *this)

{
  bool local_res8 [8];
  bool local_res10 [8];
  
  local_res8[0] = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVisualLoggerBinaryFileDevice__6B_;
  this->FileArchive = (FArchive *)0x0;
  (this->TempFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempFileName).Data.ArrayNum = 0;
  (this->TempFileName).Data.ArrayMax = 0;
  (this->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileName).Data.ArrayNum = 0;
  (this->FileName).Data.ArrayMax = 0;
  (this->FrameCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameCache).ArrayNum = 0;
  (this->FrameCache).ArrayMax = 0;
  FConfigCacheIni::GetBool(GConfig,L"VisualLogger",L"FrameCacheLenght",local_res8,&GEngineIni);
  local_res10[0] = false;
  this->FrameCacheLenght = (float)local_res8[0];
  FConfigCacheIni::GetBool(GConfig,L"VisualLogger",L"UseCompression",local_res10,&GEngineIni);
  *(uint *)&this->field_0x18 =
       ((uint)local_res10[0] ^ *(uint *)&this->field_0x18) & 0xfffffffe ^ (uint)local_res10[0];
  return this;
}

// Cleanup @ 1489cfde0

void __thiscall
FVisualLoggerBinaryFileDevice::Cleanup(FVisualLoggerBinaryFileDevice *this,bool param_1)

{
  return;
}

// DiscardRecordingToFile @ 1489d66c0

void __thiscall
FVisualLoggerBinaryFileDevice::DiscardRecordingToFile(FVisualLoggerBinaryFileDevice *this)

{
  FArchive *pFVar1;
  FString *pFVar2;
  size_t sVar3;
  IFileManager *pIVar4;
  wchar_t *_Str;
  ForAnyElementType FVar5;
  int iVar6;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  if (this->FileArchive != (FArchive *)0x0) {
    (**(code **)(*(longlong *)this->FileArchive + 0x210))();
    pFVar1 = this->FileArchive;
    if (pFVar1 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    this->FileArchive = (FArchive *)0x0;
    iVar6 = 0;
    if ((this->TempFileName).Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(this->TempFileName).Data.AllocatorInstance.Data;
    }
    pFVar2 = FPaths::ProjectLogDir(&local_38);
    if ((pFVar2->Data).ArrayNum == 0) {
      local_28.DataPtr = L"";
    }
    else {
      local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    local_28.Size = iVar6;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(local_28.DataPtr);
      local_28.Size = (int)sVar3;
    }
    local_18 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(_Str);
      iVar6 = (int)sVar3;
    }
    local_10 = iVar6;
    FPaths::CombineInternal(&local_48,&local_28,2);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pIVar4 = IFileManager::Get();
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,FVar5.Data,0,1,1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Get @ 1489e5960

FVisualLoggerBinaryFileDevice * __cdecl FVisualLoggerBinaryFileDevice::Get(void)

{
  bool local_res8 [8];
  bool local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice._padding_ = 0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice._padding_ = 0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.TempFileName.Data.ArrayNum = 0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.TempFileName.Data.ArrayMax = 0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FileName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FileName.Data.ArrayNum = 0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FileName.Data.ArrayMax = 0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FrameCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FrameCache.ArrayNum = 0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FrameCache.ArrayMax = 0;
      local_res8[0] = false;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice._padding_ = (longlong)&___7FVisualLoggerBinaryFileDevice__6B_;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FileArchive = (FArchive *)0x0;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.TempFileName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FConfigCacheIni::GetBool(GConfig,L"VisualLogger",L"FrameCacheLenght",local_res8,&GEngineIni);
      local_res10[0] = false;
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.FrameCacheLenght = (float)local_res8[0];
      FConfigCacheIni::GetBool(GConfig,L"VisualLogger",L"UseCompression",local_res10,&GEngineIni);
      `public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
      ::__l2::GDevice.bUseCompression = (uint)local_res10[0];
      atexit(`FVisualLoggerBinaryFileDevice::Get'::__l2::_dynamic_atexit_destructor_for__GDevice__);
      _Init_thread_footer(&`public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
              ::__l2::GDevice;
    }
  }
  return &`public:_static_class_FVisualLoggerBinaryFileDevice&___ptr64___cdecl_FVisualLoggerBinaryFileDevice::Get(void)'
          ::__l2::GDevice;
}

// GetRecordedLogs @ 1489ecb70

void __thiscall
FVisualLoggerBinaryFileDevice::GetRecordedLogs
          (FVisualLoggerBinaryFileDevice *this,
          TArray<FVisualLogDevice::FVisualLogEntryItem,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FVisualLogEntryItem *pFVar3;
  
  if (param_1 != &this->FrameCache) {
    DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>
              ((FVisualLogEntryItem *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
    iVar2 = (this->FrameCache).ArrayNum;
    piVar1 = &param_1->ArrayMax;
    pFVar3 = (FVisualLogEntryItem *)(this->FrameCache).AllocatorInstance.Data;
    param_1->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,iVar2,*piVar1,&param_1->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FVisualLogDevice::FVisualLogEntryItem,FVisualLogDevice::FVisualLogEntryItem,int>
              ((param_1->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return;
}

// HasFlags @ 1489f2380

bool __thiscall
FVisualLoggerBinaryFileDevice::HasFlags(FVisualLoggerBinaryFileDevice *this,int param_1)

{
  return (param_1 & 3U) != 0;
}

// Serialize @ 148a129b0

void __thiscall
FVisualLoggerBinaryFileDevice::Serialize
          (FVisualLoggerBinaryFileDevice *this,UObject *param_1,FName *param_2,FName *param_3,
          FName *param_4,FVisualLogEntry *param_5)

{
  int *piVar1;
  FVisualLogEntryItem *pFVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FVisualLogEntry local_b0;
  
  if (this->FileArchive != (FArchive *)0x0) {
    if ((0 < (this->FrameCache).ArrayNum) &&
       (dVar9 = (double)this->FrameCacheLenght + this->LastLogTimeStamp,
       dVar9 < param_5->TimeStamp || dVar9 == param_5->TimeStamp)) {
      FVisualLoggerHelpers::Serialize(this->FileArchive,&this->FrameCache);
      piVar1 = &(this->FrameCache).ArrayMax;
      pFVar2 = (FVisualLogEntryItem *)(this->FrameCache).AllocatorInstance.Data;
      iVar7 = (this->FrameCache).ArrayNum;
      if ((this->FrameCache).ArrayMax < 0) {
        DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>(pFVar2,iVar7);
        (this->FrameCache).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa8,8,0,&(this->FrameCache).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>(pFVar2,iVar7);
        (this->FrameCache).ArrayNum = 0;
      }
      this->LastLogTimeStamp = param_5->TimeStamp;
    }
    local_c8 = *param_2;
    local_c0 = *param_3;
    local_b8 = *param_4;
    FVisualLogEntry::FVisualLogEntry(&local_b0,param_5);
    pFVar3 = (FName *)(this->FrameCache).AllocatorInstance.Data;
    if ((pFVar3 <= &local_c8) && (&local_c8 < pFVar3 + (longlong)(this->FrameCache).ArrayMax * 0x15)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->FrameCache).ArrayNum;
    piVar1 = &(this->FrameCache).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8a8,&(this->FrameCache).AllocatorInstance,piVar1);
    }
    lVar8 = (longlong)iVar7 * 0xa8;
    (this->FrameCache).ArrayNum = iVar7 + 1;
    pFVar4 = (this->FrameCache).AllocatorInstance.Data;
    *(FName *)(pFVar4 + lVar8) = local_c8;
    *(FName *)(pFVar4 + lVar8 + 8) = local_c0;
    *(FName *)(pFVar4 + lVar8 + 0x10) = local_b8;
    FVisualLogEntry::FVisualLogEntry((FVisualLogEntry *)(pFVar4 + lVar8 + 0x18),&local_b0);
    FVisualLogEntry::~FVisualLogEntry(&local_b0);
  }
  return;
}

// SetFileName @ 148a14890

void __thiscall
FVisualLoggerBinaryFileDevice::SetFileName(FVisualLoggerBinaryFileDevice *this,FString *param_1)

{
  ::FString::operator=(&this->FileName,param_1);
  return;
}

// StartRecordingToFile @ 148a175b0

void __thiscall
FVisualLoggerBinaryFileDevice::StartRecordingToFile
          (FVisualLoggerBinaryFileDevice *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  FGuid *pFVar5;
  FDateTime this_00;
  FString *pFVar6;
  size_t sVar7;
  IFileManager *pIVar8;
  FArchive *pFVar9;
  wchar_t *_Str;
  ForAnyElementType FVar10;
  int iVar11;
  FString local_78;
  TStringView<wchar_t> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  FString local_48;
  ForAnyElementType local_38;
  
  if (this->FileArchive == (FArchive *)0x0) {
    pFVar5 = FGuid::NewGuid((FGuid *)&local_38);
    lVar3 = *(longlong *)pFVar5;
    lVar4 = *(longlong *)&pFVar5->C;
    auVar2._8_4_ = SUB84(param_1,0);
    auVar2._0_8_ = param_1;
    auVar2._12_4_ = (int)((ulonglong)param_1 >> 0x20);
    this->StartRecordingTime = param_1;
    this->LastLogTimeStamp = (double)auVar2._8_8_;
    this->_padding_ = lVar3;
    this->_padding_ = lVar4;
    ::FString::FString((FString *)&local_68,L"bvlog");
    this_00 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_00.Ticks,(FString *)&local_38);
    ::FString::PrintfImpl(&local_78,L"VTEMP_%s.%s");
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    pFVar6 = &this->TempFileName;
    iVar11 = 0;
    if (pFVar6 != &local_78) {
      pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar6->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (this->TempFileName).Data.ArrayNum = local_78.Data.ArrayNum;
      (this->TempFileName).Data.ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_68.DataPtr);
    }
    if ((this->TempFileName).Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = FPaths::ProjectLogDir((FString *)&local_38);
    if ((pFVar6->Data).ArrayNum == 0) {
      local_68.DataPtr = L"";
    }
    else {
      local_68.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    local_68.Size = iVar11;
    if ((FScriptContainerElement *)local_68.DataPtr != (FScriptContainerElement *)0x0) {
      sVar7 = wcslen(local_68.DataPtr);
      local_68.Size = (int)sVar7;
    }
    local_58 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar7 = wcslen(_Str);
      iVar11 = (int)sVar7;
    }
    local_50 = iVar11;
    FPaths::CombineInternal(&local_48,&local_68,2);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    pIVar8 = IFileManager::Get();
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar10.Data = local_48.Data.AllocatorInstance.Data;
    }
    pFVar9 = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar10.Data,0);
    this->FileArchive = pFVar9;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StopRecordingToFile @ 148a18990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVisualLoggerBinaryFileDevice::StopRecordingToFile
          (FVisualLoggerBinaryFileDevice *this,double param_1)

{
  FVisualLogEntryItem *pFVar1;
  FArchive *pFVar2;
  int iVar3;
  longlong lVar4;
  FString *pFVar5;
  size_t sVar6;
  IFileManager *pIVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  undefined4 uVar10;
  wchar_t *_Str;
  uint uVar11;
  int *in_stack_ffffffffffffff40;
  int *piVar12;
  FString local_a8;
  FString local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  FScriptContainerElement *local_68;
  int local_60;
  FString local_58;
  FString local_48 [3];
  
  if (this->FileArchive != (FArchive *)0x0) {
    uVar10 = 0;
    if (0 < (this->FrameCache).ArrayNum) {
      FVisualLoggerHelpers::Serialize(this->FileArchive,&this->FrameCache);
      piVar12 = &(this->FrameCache).ArrayMax;
      pFVar1 = (FVisualLogEntryItem *)(this->FrameCache).AllocatorInstance.Data;
      iVar3 = (this->FrameCache).ArrayNum;
      if (*piVar12 < 0) {
        DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>(pFVar1,iVar3);
        (this->FrameCache).ArrayNum = 0;
        if (*piVar12 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa8,8,0,&(this->FrameCache).AllocatorInstance,0,piVar12);
          in_stack_ffffffffffffff40 = piVar12;
        }
      }
      else {
        DestructItems<FVisualLogDevice::FVisualLogEntryItem,int>(pFVar1,iVar3);
        (this->FrameCache).ArrayNum = 0;
      }
    }
    lVar4 = (**(code **)(*(longlong *)this->FileArchive + 0x30))();
    (**(code **)(*(longlong *)this->FileArchive + 0x210))();
    pFVar2 = this->FileArchive;
    if (pFVar2 != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    }
    this->FileArchive = (FArchive *)0x0;
    if ((this->TempFileName).Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(this->TempFileName).Data.AllocatorInstance.Data;
    }
    pFVar5 = FPaths::ProjectLogDir(local_48);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_78.DataPtr = L"";
    }
    else {
      local_78.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar3 = 0;
    local_78.Size = iVar3;
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_78.DataPtr);
      local_78.Size = (int)sVar6;
    }
    local_60 = iVar3;
    local_68 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(_Str);
      local_60 = (int)sVar6;
    }
    FPaths::CombineInternal(&local_98,&local_78,2);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(local_48,L"%s_%s");
    ::FString::PrintfImpl(&local_88,L"%lld-%lld_");
    uVar11 = 0;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar9.Data = local_88.Data.AllocatorInstance.Data;
    }
    ::FString::Replace(local_48,(FString *)&local_78,L"VTEMP_",(wchar_t *)FVar9.Data,CaseSensitive);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_58,L"%u_%s");
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    pFVar5 = FPaths::ProjectLogDir(local_48);
    if ((pFVar5->Data).ArrayNum == 0) {
      local_78.DataPtr = L"";
    }
    else {
      local_78.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen(local_78.DataPtr);
      iVar3 = (int)sVar6;
    }
    local_78.Size = iVar3;
    local_68 = FVar9.Data;
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      sVar6 = wcslen((wchar_t *)FVar9.Data);
      uVar10 = (undefined4)sVar6;
    }
    local_60 = uVar10;
    FPaths::CombineInternal(&local_a8,&local_78,2);
    if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
    }
    if (lVar4 < 1) {
      pIVar7 = IFileManager::Get();
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar9.Data = local_98.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,FVar9.Data,0,1,1);
    }
    else {
      pIVar7 = IFileManager::Get();
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar9.Data = local_98.Data.AllocatorInstance.Data;
      }
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar8.Data = local_a8.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar7 + 0x48))
                (pIVar7,FVar8.Data,FVar9.Data,1,uVar11 & 0xffffff00,
                 (ulonglong)in_stack_ffffffffffffff40 & 0xffffffffffffff00,0);
      if (3 < (byte)LogVisual._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVisual);
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

