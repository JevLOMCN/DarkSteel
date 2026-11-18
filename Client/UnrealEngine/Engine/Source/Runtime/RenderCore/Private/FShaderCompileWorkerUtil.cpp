// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// operator() @ 145e485d0

/* WARNING: Removing unreachable block (ram,0x000145e4865d) */
/* WARNING: Removing unreachable block (ram,0x000145e486a6) */
/* WARNING: Removing unreachable block (ram,0x000145e486a7) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>::operator()
          (void *this,FShaderCompileJob *param_1)

{
  longlong lVar1;
  int iVar2;
  IFileManager *pIVar3;
  FArchive *pFVar4;
  wchar_t *pwVar5;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> local_30;
  FString local_20;
  
  ::operator/(&local_20,&(param_1->Input).DumpDebugInfoPath,DebugWorkerInputFileName);
  if (*(int *)(*(longlong *)this + 8) < 2) {
    lVar1 = *(longlong *)((longlong)this + 8);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
      UNLOCK();
    }
    local_30.ArrayNum = 0;
    local_30.ArrayMax = 0;
    local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_30.AllocatorInstance,&local_30.ArrayMax);
    local_30.ArrayNum = iVar2 + 1;
    *(longlong *)(local_30.AllocatorInstance.Data + (longlong)iVar2 * 8) = 0;
    *(longlong *)(local_30.AllocatorInstance.Data + (longlong)iVar2 * 8) = lVar1;
    iVar2 = local_20.Data.ArrayNum + -1;
    if (local_20.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AssignRange(*(FString **)this,(wchar_t *)local_20.Data.AllocatorInstance.Data,iVar2);
    pIVar3 = IFileManager::Get();
    if (*(int *)(*(undefined8 **)this + 1) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)**(undefined8 **)this;
    }
    pFVar4 = (FArchive *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,pwVar5,1);
    FShaderCompileWorkerUtil::WriteTasks(&local_30,pFVar4,SkipSource|CompressTaskFile);
    (**(code **)(*(longlong *)pFVar4 + 0x210))(pFVar4);
    (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
              ((TRefCountPtr<FShaderCommonCompileJob> *)local_30.AllocatorInstance.Data,
               local_30.ArrayNum);
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
    }
  }
  WriteShaderCompileWorkerDebugCommandLine
            ((FShaderCommonCompileJob *)param_1,&(param_1->Input).DumpDebugInfoPath,
             *(FString **)this,*(FShaderDebugDataContext **)((longlong)this + 0x10));
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145e487d0

void __thiscall
`FShaderCompileWorkerUtil::HandleWorkerCrash'::__l2::<lambda_1>::operator()
          (void *this,char *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  int local_40;
  
  if ((param_1 != (char *)0x0) && (**(int **)this + 3 < 0x2000)) {
    local_40 = 0x1ffe - **(int **)this;
    iVar1 = TCString<char>::Strlen(param_1);
    if (iVar1 < local_40) {
      local_40 = iVar1;
    }
    pcVar3 = (char *)((longlong)**(int **)this + *(longlong *)((longlong)this + 8));
    for (lVar2 = (longlong)local_40; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pcVar3 = *param_1;
      param_1 = param_1 + 1;
      pcVar3 = pcVar3 + 1;
    }
    **(int **)this = **(int **)this + local_40;
    *(undefined1 *)(*(longlong *)((longlong)this + 8) + (longlong)**(int **)this) = 10;
    **(int **)this = **(int **)this + 1;
    *(undefined1 *)(*(longlong *)((longlong)this + 8) + (longlong)**(int **)this) = 0;
  }
  return;
}

// operator() @ 145e49000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FShaderCompileWorkerUtil::HandleWorkerCrash'::__l2::<lambda_2>::operator()
          (void *this,FShaderCompilerInput *param_1)

{
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6 [2];
  int local_1a4;
  int local_1a0;
  int local_19c;
  FString *local_198;
  FScriptContainerElement *local_190;
  FString *local_188;
  FScriptContainerElement *local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  wchar_t *local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> *local_e8;
  char *local_e0;
  char *local_d8;
  void *local_d0;
  FString local_c8;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_198 = &param_1->EntryPointName;
  local_1a4 = (param_1->EntryPointName).Data.ArrayNum;
  if (local_1a4 == 0) {
    local_190 = (FScriptContainerElement *)
                `FString::operator*'::__l2::<lambda_1>::operator()(&local_1a8);
  }
  else {
    local_190 = (local_198->Data).AllocatorInstance.Data;
    local_170 = local_190;
    local_168 = local_190;
    local_160 = local_190;
  }
  local_158 = local_190;
  local_120 = local_190;
  local_188 = &param_1->VirtualSourceFilePath;
  local_1a0 = (param_1->VirtualSourceFilePath).Data.ArrayNum;
  if (local_1a0 == 0) {
    local_180 = (FScriptContainerElement *)
                `FString::operator*'::__l2::<lambda_1>::operator()(&local_1a7);
  }
  else {
    local_180 = (local_188->Data).AllocatorInstance.Data;
    local_150 = local_180;
    local_148 = local_180;
    local_140 = local_180;
  }
  local_138 = local_180;
  local_118 = local_180;
  local_130 = L"%s:%s";
  local_128 = L"%s:%s";
  local_110 = L"%s:%s";
  ::FString::Printf<wchar_t_const_*,wchar_t_const_*>
            (&local_c8,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x1506a7d38,
             (wchar_t *)local_180,(wchar_t *)local_120);
  local_d0 = *(void **)this;
  local_19c = local_c8.Data.ArrayNum;
  if (local_c8.Data.ArrayNum == 0) {
    local_178 = (FScriptContainerElement *)
                `FString::operator*'::__l2::<lambda_1>::operator()(local_1a6);
  }
  else {
    local_108 = local_c8.Data.AllocatorInstance.Data;
    local_100 = local_c8.Data.AllocatorInstance.Data;
    local_f8 = local_c8.Data.AllocatorInstance.Data;
    local_178 = local_c8.Data.AllocatorInstance.Data;
  }
  local_f0 = local_178;
  local_e8 = TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
             TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                       (&local_b8,(wchar_t *)local_178);
  local_e0 = local_e8->Ptr;
  local_d8 = local_e0;
  __l2::<lambda_1>::operator()(local_d0,local_e0);
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
  ~TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>(&local_b8);
  ::FString::~FString(&local_c8);
  return;
}

// DumpDebugCompileInput @ 145e52190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FShaderCompileWorkerUtil::DumpDebugCompileInput
          (FShaderCommonCompileJob *param_1,FShaderDebugDataContext *param_2)

{
  code **ppcVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 local_50;
  code *local_48 [2];
  code *local_38 [3];
  code **local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_20[1] = (code *)&local_58;
  local_20[2] = (code *)param_1;
  local_20[3] = (code *)param_2;
  if (local_20 + 1 != (code **)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FShaderCompileWorkerUtil::DumpDebugCompileInput'::__l2::<lambda_1>,void,FShaderCompileJob_&>
                  ::Call;
  }
  FShaderCommonCompileJob::ForEachSingleShaderJob
            (param_1,(TFunction<void___cdecl(FShaderCompileJob_&)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    ppcVar1 = local_48 + 2;
    if (local_20 != (code **)0x0) {
      ppcVar1 = local_20;
    }
    (**(code **)(*ppcVar1 + 0x10))();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// HandleWorkerCrash @ 145e5d980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145e5dfb9) */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FShaderCompileWorkerUtil::HandleWorkerCrash
          (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1,
          FArchive *param_2,int param_3,long64 param_4,ECode param_5,int param_6,int param_7,
          int param_8,int param_9,bool param_10)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FArchive *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStackY_2418 [32];
  undefined1 local_23e8 [8];
  int local_23e0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_23d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_23c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_23b8;
  uint local_23a8;
  uint local_23a4;
  uint local_23a0;
  uint local_239c;
  uint local_2398;
  uint local_2394;
  undefined4 local_2390;
  uint local_238c;
  uint local_2388;
  uint local_2384;
  ECode local_2380;
  TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *local_2378;
  int local_2370;
  int local_236c;
  FShaderPipelineCompileJob *local_2368;
  TArray<TRefCountPtr<FShaderCompileJob>,TSizedDefaultAllocator<32>_> *local_2360;
  TRefCountPtr<FShaderCommonCompileJob> local_2358;
  undefined8 local_2350;
  FShaderCompileJob *local_2348;
  longlong local_2340;
  TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0> local_2338;
  undefined4 local_2320;
  undefined4 local_231c;
  FScriptContainerElement *local_2318;
  FScriptContainerElement *local_2310;
  FScriptContainerElement *local_2308;
  FScriptContainerElement *local_2300;
  FScriptContainerElement *local_22f8;
  FScriptContainerElement *local_22f0;
  code *local_22e8;
  undefined4 local_22e0;
  undefined4 local_22dc;
  FScriptContainerElement *local_22d8;
  FScriptContainerElement *local_22d0;
  FScriptContainerElement *local_22c8;
  FScriptContainerElement *local_22c0;
  FScriptContainerElement *local_22b8;
  FScriptContainerElement *local_22b0;
  code *local_22a8;
  undefined4 local_22a0;
  undefined4 local_229c;
  FScriptContainerElement *local_2298;
  FScriptContainerElement *local_2290;
  FScriptContainerElement *local_2288;
  FScriptContainerElement *local_2280;
  FScriptContainerElement *local_2278;
  FScriptContainerElement *local_2270;
  FScriptContainerElement *local_2268;
  FScriptContainerElement *local_2260;
  FScriptContainerElement *local_2258;
  TRefCountPtr<FShaderCommonCompileJob> *local_2250;
  FShaderCommonCompileJob *local_2248;
  FShaderCommonCompileJob *local_2240;
  undefined4 local_2238;
  undefined4 local_2234;
  FScriptContainerElement *local_2230;
  FScriptContainerElement *local_2228;
  FScriptContainerElement *local_2220;
  longlong local_2218;
  FScriptContainerElement *local_2210;
  FScriptContainerElement *local_2208;
  FScriptContainerElement *local_2200;
  FScriptContainerElement *local_21f8;
  FScriptContainerElement *local_21f0;
  FScriptContainerElement *local_21e8;
  FScriptContainerElement *local_21e0;
  FScriptContainerElement *local_21d8;
  FScriptContainerElement *local_21d0;
  FScriptContainerElement *local_21c8;
  FScriptContainerElement *local_21c0;
  FScriptContainerElement *local_21b8;
  FScriptContainerElement *local_21b0;
  FScriptContainerElement *local_21a8;
  FScriptContainerElement *local_21a0;
  FScriptContainerElement *local_2198;
  FScriptContainerElement *local_2190;
  FScriptContainerElement *local_2188;
  FScriptContainerElement *local_2180;
  FScriptContainerElement *local_2178;
  FScriptContainerElement *local_2170;
  FScriptContainerElement *local_2168;
  FScriptContainerElement *local_2160;
  FScriptContainerElement *local_2158;
  FScriptContainerElement *local_2150;
  FScriptContainerElement *local_2148;
  FScriptContainerElement *local_2140;
  FScriptContainerElement *local_2138;
  FScriptContainerElement *local_2130;
  FScriptContainerElement *local_2128;
  FScriptContainerElement *local_2120;
  FScriptContainerElement *local_2118;
  FScriptContainerElement *local_2110;
  FScriptContainerElement *local_2108;
  FScriptContainerElement *local_2100;
  code *local_20f8;
  undefined4 **local_20f0;
  undefined4 *local_20e8;
  undefined1 *local_20e0;
  undefined4 *local_20d8;
  undefined1 *local_20d0;
  TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0> local_20c8;
  FPlatformMemoryStats local_20a8;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145e5d99f;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2418;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_23b8.AllocatorInstance);
  local_23b8.ArrayNum = 0;
  local_23b8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_23b8.AllocatorInstance);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_7 + 1,&local_23b8.AllocatorInstance,&local_23b8.ArrayNum,&local_23b8.ArrayMax
            );
  local_20f8 = *(code **)(*(longlong *)param_2 + 0x188);
  local_2110 = local_23b8.AllocatorInstance.Data;
  local_2108 = local_23b8.AllocatorInstance.Data;
  local_2100 = local_23b8.AllocatorInstance.Data;
  (*local_20f8)(param_2,local_23b8.AllocatorInstance.Data,(longlong)param_7 << 1);
  local_23a4 = (uint)(-1 < param_7);
  local_23a8 = (uint)(param_7 < local_23b8.ArrayNum);
  if (-1 >= param_7 || param_7 >= local_23b8.ArrayNum) {
    local_2320 = 0;
    local_231c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2318 = local_23b8.AllocatorInstance.Data;
  local_2310 = local_23b8.AllocatorInstance.Data;
  local_2308 = local_23b8.AllocatorInstance.Data + (longlong)param_7 * 2;
  *(undefined2 *)local_2308 = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_23d8.AllocatorInstance);
  local_23d8.ArrayNum = 0;
  local_23d8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_23d8.AllocatorInstance);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_8 + 1,&local_23d8.AllocatorInstance,&local_23d8.ArrayNum,&local_23d8.ArrayMax
            );
  local_22e8 = *(code **)(*(longlong *)param_2 + 0x188);
  local_2300 = local_23d8.AllocatorInstance.Data;
  local_22f8 = local_23d8.AllocatorInstance.Data;
  local_22f0 = local_23d8.AllocatorInstance.Data;
  (*local_22e8)(param_2,local_23d8.AllocatorInstance.Data,(longlong)param_8 << 1);
  local_239c = (uint)(-1 < param_8);
  local_23a0 = (uint)(param_8 < local_23d8.ArrayNum);
  if (-1 >= param_8 || param_8 >= local_23d8.ArrayNum) {
    local_22e0 = 0;
    local_22dc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_22d8 = local_23d8.AllocatorInstance.Data;
  local_22d0 = local_23d8.AllocatorInstance.Data;
  local_22c8 = local_23d8.AllocatorInstance.Data + (longlong)param_8 * 2;
  *(undefined2 *)local_22c8 = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_23c8.AllocatorInstance);
  local_23c8.ArrayNum = 0;
  local_23c8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_23c8.AllocatorInstance);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_9 + 1,&local_23c8.AllocatorInstance,&local_23c8.ArrayNum,&local_23c8.ArrayMax
            );
  local_22a8 = *(code **)(*(longlong *)param_2 + 0x188);
  local_22c0 = local_23c8.AllocatorInstance.Data;
  local_22b8 = local_23c8.AllocatorInstance.Data;
  local_22b0 = local_23c8.AllocatorInstance.Data;
  (*local_22a8)(param_2,local_23c8.AllocatorInstance.Data,(longlong)param_9 << 1);
  local_2394 = (uint)(-1 < param_9);
  local_2398 = (uint)(param_9 < local_23c8.ArrayNum);
  if (-1 >= param_9 || param_9 >= local_23c8.ArrayNum) {
    local_22a0 = 0;
    local_229c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_2298 = local_23c8.AllocatorInstance.Data;
  local_2290 = local_23c8.AllocatorInstance.Data;
  local_2288 = local_23c8.AllocatorInstance.Data + (longlong)param_9 * 2;
  *(undefined2 *)local_2288 = 0;
  FPlatformMemoryStats::FPlatformMemoryStats(&local_20a8);
  if (param_5 == OutOfMemory) {
    pFVar4 = ::operator<<(param_2,(ulong64 *)&local_20a8._padding_);
    pFVar4 = ::operator<<(pFVar4,(ulong64 *)&local_20a8._padding_);
    pFVar4 = ::operator<<(pFVar4,(ulong64 *)&local_20a8._padding_);
    pFVar4 = ::operator<<(pFVar4,(ulong64 *)&local_20a8._padding_);
    pFVar4 = ::operator<<(pFVar4,(ulong64 *)&local_20a8._padding_);
    ::operator<<(pFVar4,(ulong64 *)&local_20a8._padding_);
  }
  local_2390 = 0;
  local_2350 = 0;
  local_2018[0] = 0;
  local_20d8 = &local_2390;
  local_20d0 = local_2018;
  local_20f0 = &local_20d8;
  local_20e8 = &local_2390;
  local_20e0 = local_2018;
  local_2280 = (param_1->AllocatorInstance).Data;
  local_2378 = param_1;
  local_2278 = local_2280;
  local_2270 = local_2280;
  TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>::
  TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>
            (&local_2338,&param_1->ArrayNum,(TRefCountPtr<FShaderCommonCompileJob> *)local_2280);
  local_2268 = (local_2378->AllocatorInstance).Data;
  local_2370 = local_2378->ArrayNum;
  local_2260 = local_2268;
  local_2258 = local_2268;
  TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>::
  TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>
            (&local_20c8,&local_2378->ArrayNum,
             (TRefCountPtr<FShaderCommonCompileJob> *)(local_2268 + (longlong)local_2370 * 8));
  while( true ) {
    if (*local_2338.CurrentNum != local_2338.InitialNum) {
      puVar6 = local_23e8;
      for (lVar5 = 1; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_23e8);
    }
    local_23e8[1] = local_2338.Ptr != local_20c8.Ptr;
    local_238c = (uint)(byte)local_23e8[1];
    if (!(bool)local_23e8[1]) break;
    local_2250 = local_2338.Ptr;
    TRefCountPtr<FShaderCommonCompileJob>::TRefCountPtr<FShaderCommonCompileJob>
              (&local_2358,local_2338.Ptr);
    local_2248 = local_2358.Reference;
    local_2348 = FShaderCommonCompileJob::GetSingleShaderJob(local_2358.Reference);
    if (local_2348 == (FShaderCompileJob *)0x0) {
      local_2240 = local_2358.Reference;
      local_2368 = FShaderCommonCompileJob::GetShaderPipelineJob(local_2358.Reference);
      if (local_2368 != (FShaderPipelineCompileJob *)0x0) {
        for (local_23e0 = 0; local_236c = (local_2368->StageJobs).ArrayNum, local_23e0 < local_236c;
            local_23e0 = local_23e0 + 1) {
          local_2360 = &local_2368->StageJobs;
          local_2384 = (uint)(-1 < local_23e0);
          bVar2 = local_23e0 < (local_2368->StageJobs).ArrayNum;
          local_2388 = (uint)bVar2;
          if (-1 >= local_23e0 || !bVar2) {
            local_2238 = 0;
            local_2234 = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          local_2230 = (local_2360->AllocatorInstance).Data;
          local_2220 = local_2230 + (longlong)local_23e0 * 8;
          local_2340 = *(longlong *)local_2220;
          local_2228 = local_2230;
          local_2218 = local_2340;
          if (local_2340 != 0) {
            `FShaderCompileWorkerUtil::HandleWorkerCrash'::__l2::<lambda_2>::operator()
                      (&local_20f0,(FShaderCompilerInput *)(local_2340 + 0xd8));
          }
        }
      }
    }
    else {
      `FShaderCompileWorkerUtil::HandleWorkerCrash'::__l2::<lambda_2>::operator()
                (&local_20f0,&local_2348->Input);
    }
    TRefCountPtr<FShaderCommonCompileJob>::~TRefCountPtr<FShaderCommonCompileJob>(&local_2358);
    local_2338.Ptr = local_2338.Ptr + 1;
  }
  local_2380 = param_5;
  switch(param_5) {
  case Success:
    local_23e8[3] = 1;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&local_23c8);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&local_23d8);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&local_23b8);
    return (bool)local_23e8[3];
  default:
    LogQueuedCompileJobs(param_1,param_6);
    local_2210 = local_23b8.AllocatorInstance.Data;
    local_2208 = local_23b8.AllocatorInstance.Data;
    local_21f0 = local_23b8.AllocatorInstance.Data;
    local_2200 = local_23d8.AllocatorInstance.Data;
    local_21f8 = local_23d8.AllocatorInstance.Data;
    local_21e8 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleGeneralCrash
              ((wchar_t *)local_23d8.AllocatorInstance.Data,
               (wchar_t *)local_23b8.AllocatorInstance.Data);
    break;
  case BadShaderFormatVersion:
    local_21e0 = local_23d8.AllocatorInstance.Data;
    local_21d8 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleBadShaderFormatVersion
              ((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case BadInputVersion:
    local_21d0 = local_23d8.AllocatorInstance.Data;
    local_21c8 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleBadInputVersion((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case BadSingleJobHeader:
    local_21c0 = local_23d8.AllocatorInstance.Data;
    local_21b8 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleBadSingleJobHeader((wchar_t *)local_23d8.AllocatorInstance.Data)
    ;
    break;
  case BadPipelineJobHeader:
    local_21b0 = local_23d8.AllocatorInstance.Data;
    local_21a8 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleBadPipelineJobHeader
              ((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case CantDeleteInputFile:
    local_21a0 = local_23d8.AllocatorInstance.Data;
    local_2198 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleCantDeleteInputFile
              ((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case CantSaveOutputFile:
    local_2190 = local_23d8.AllocatorInstance.Data;
    local_2188 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleCantSaveOutputFile((wchar_t *)local_23d8.AllocatorInstance.Data)
    ;
    break;
  case NoTargetShaderFormatsFound:
    local_2180 = local_23d8.AllocatorInstance.Data;
    local_2178 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleNoTargetShaderFormatsFound
              ((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case CantCompileForSpecificFormat:
    local_2170 = local_23d8.AllocatorInstance.Data;
    local_2168 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleCantCompileForSpecificFormat
              ((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case CrashInsidePlatformCompiler:
    LogQueuedCompileJobs(param_1,param_6);
    local_2160 = local_23d8.AllocatorInstance.Data;
    local_2158 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleCrashInsidePlatformCompiler
              ((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case BadInputFile:
    local_2150 = local_23d8.AllocatorInstance.Data;
    local_2148 = local_23d8.AllocatorInstance.Data;
    ShaderCompileWorkerError::HandleBadInputFile((wchar_t *)local_23d8.AllocatorInstance.Data);
    break;
  case OutOfMemory:
    local_2140 = local_23c8.AllocatorInstance.Data;
    local_2138 = local_23c8.AllocatorInstance.Data;
    local_2120 = local_23c8.AllocatorInstance.Data;
    local_2130 = local_23d8.AllocatorInstance.Data;
    local_2128 = local_23d8.AllocatorInstance.Data;
    local_2118 = local_23d8.AllocatorInstance.Data;
    local_23e8[2] =
         ShaderCompileWorkerError::HandleOutOfMemory
                   ((wchar_t *)local_23d8.AllocatorInstance.Data,
                    (wchar_t *)local_23c8.AllocatorInstance.Data,&local_20a8,param_1,param_10);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&local_23c8);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&local_23d8);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
              (&local_23b8);
    return (bool)local_23e8[2];
  }
  local_23e8[4] = 0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
            (&local_23c8);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
            (&local_23d8);
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::~TArray<wchar_t,TSizedDefaultAllocator<32>_>
            (&local_23b8);
  return (bool)local_23e8[4];
}

// LogQueuedCompileJobs @ 145e619f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FShaderCompileWorkerUtil::LogQueuedCompileJobs
          (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  FShaderCompileJob *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FOutputDeviceRedirector *this;
  int iVar5;
  FShaderCompileJob *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  FString local_48;
  FString local_38;
  
  if (param_2 == -1) {
    if (1 < (byte)LogShaders._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  else if (1 < (byte)LogShaders._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  iVar5 = param_1->ArrayNum;
  uVar7 = 0;
  if (0 < iVar5) {
    lVar10 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar7 < iVar5) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FShaderCompileJob **)((param_1->AllocatorInstance).Data + lVar10);
      pFVar6 = (FShaderCompileJob *)0x0;
      if ((char)pFVar1->_padding_ == '\0') {
        pFVar6 = pFVar1;
      }
      if (pFVar6 == (FShaderCompileJob *)0x0) {
        uVar9 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar11 = *(longlong *)((param_1->AllocatorInstance).Data + lVar10);
        lVar8 = 0;
        if (*(char *)(lVar11 + 0x30) == '\x01') {
          lVar8 = lVar11;
        }
        if (1 < (byte)LogShaders._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        uVar9 = 0;
        if (0 < *(int *)(lVar8 + 0xd0)) {
          lVar11 = 0;
          do {
            uVar4 = 0;
            if ((int)uVar9 < *(int *)(lVar8 + 0xd0)) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = *(FShaderCompileJob **)(lVar11 + *(longlong *)(lVar8 + 200));
            pFVar6 = (FShaderCompileJob *)0x0;
            if ((char)pFVar1->_padding_ == '\0') {
              pFVar6 = pFVar1;
            }
            if (1 < (byte)LogShaders._0_1_) {
              GetSingleJobCompilationDump(&local_38,pFVar6);
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
            }
            uVar9 = uVar9 + 1;
            lVar11 = lVar11 + 8;
          } while ((int)uVar9 < *(int *)(lVar8 + 0xd0));
        }
      }
      else if (1 < (byte)LogShaders._0_1_) {
        GetSingleJobCompilationDump(&local_48,pFVar6);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      iVar5 = param_1->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar7 < iVar5);
  }
  this = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
  FOutputDeviceRedirector::Flush(this);
}

// ReadTasks @ 145e689d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

ECode __cdecl
FShaderCompileWorkerUtil::ReadTasks
          (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1,
          FArchive *param_2,FShaderCompileWorkerDiagnostics *param_3,EReadTasksFlags param_4)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  code *pcVar4;
  FThreadSafeBool FVar5;
  long64 lVar6;
  bool bVar7;
  ECode EVar8;
  int iVar9;
  longlong lVar10;
  long64 lVar11;
  FOutputDeviceRedirector *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  uint uVar21;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200 [2];
  FSCWOutputFileContext local_1f8;
  uint local_1e8 [2];
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  TArray<FShaderPipelineCompileJob_*,TSizedDefaultAllocator<32>_> local_1b0;
  TArray<FShaderCompileJob_*,TSizedDefaultAllocator<32>_> local_1a0;
  FString local_190;
  FString local_180;
  longlong local_170;
  FString local_168;
  FString local_158;
  FShaderCompileWorkerDiagnostics local_148;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  void *local_c0 [2];
  void *local_b0 [2];
  void *local_a0 [2];
  FText local_90;
  FText local_80;
  void *local_70 [2];
  FText local_60;
  FText local_50;
  
  local_1f8.FileSize = 0;
  local_1f8.OutputFile = param_2;
  lVar10 = (**(code **)(*(longlong *)param_2 + 0x30))(param_2);
  if (lVar10 == 0) {
    (**(code **)(*(longlong *)param_2 + 0x18))(param_2,local_c0);
    ::FString::PrintfImpl(&local_110,L"Output file %s size is 0. Are you out of disk space?");
    ::FString::FString(&local_120,L"ShaderCompileWorker failed");
    ModalErrorOrLog(&local_120,&local_110,0,0,true);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_c0[0] != (void *)0x0) {
      FMemory::Free(local_c0[0]);
    }
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_res20[0] = 0x1c;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res20[0] != 0x1c) {
    FSCWOutputFileContext::ModalErrorOrLog<int,int>
              (&local_1f8,(TCheckedFormatStringPrivate<wchar_t,int,int>)0x15115e000,0x1c,
               local_res20[0]);
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  if ((longlong *)plVar2[1] < (longlong *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_1f8.FileSize,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)&local_1f8.FileSize);
    }
  }
  else {
    local_1f8.FileSize = *(longlong *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  lVar10 = (**(code **)(*(longlong *)param_2 + 0x30))(param_2);
  if (lVar10 < local_1f8.FileSize) {
    (**(code **)(*(longlong *)param_2 + 0x30))(param_2);
    (**(code **)(*(longlong *)param_2 + 0x18))(param_2,local_b0);
    ::FString::PrintfImpl
              (&local_f0,L"Output file corrupted (expected %I64d bytes, but only got %I64d): %s");
    ::FString::FString(&local_100,L"ShaderCompileWorker failed");
    ModalErrorOrLog(&local_100,&local_f0,0,0,true);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_b0[0] != (void *)0x0) {
      FMemory::Free(local_b0[0]);
    }
  }
  uVar18 = 0;
  local_148.ErrorCode = Success;
  local_148.BatchProcessTime = 0.0;
  local_148.BatchIndex = 0;
  local_148.EntryPointTimestamp = 0.0;
  local_148.BatchPreparationTime = 0.0;
  ::operator<<(param_2,&local_148);
  if (param_3 != (FShaderCompileWorkerDiagnostics *)0x0) {
    *(ulonglong *)param_3 = CONCAT44(local_148._4_4_,local_148.ErrorCode);
    param_3->EntryPointTimestamp = local_148.EntryPointTimestamp;
    param_3->BatchPreparationTime = local_148.BatchPreparationTime;
    param_3->BatchProcessTime = local_148.BatchProcessTime;
    *(ulonglong *)&param_3->BatchIndex = CONCAT44(local_148._36_4_,local_148.BatchIndex);
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_210 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_210,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_210);
    }
  }
  else {
    local_210 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_214 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_214,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_214);
    }
  }
  else {
    local_214 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_218 = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_218,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_218);
    }
  }
  else {
    local_218 = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_res18[0] = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if ((local_148.ErrorCode == Success) ||
     (bVar7 = HandleWorkerCrash(param_1,param_2,local_res20[0],local_1f8.FileSize,
                                local_148.ErrorCode,local_210,local_214,local_218,local_res18[0],
                                (bool)(param_4 & WillRetry)), !bVar7)) {
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    SplitJobsByType(param_1,&local_1a0,&local_1b0);
    plVar2 = *(longlong **)&param_2->field_0x8;
    local_20c = 0xffffffff;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_20c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_20c);
      }
    }
    else {
      local_20c = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_20c != 0x53) {
      FSCWOutputFileContext::ModalErrorOrLog<int,int>
                (&local_1f8,(TCheckedFormatStringPrivate<wchar_t,int,int>)0x15115e060,0x53,local_20c
                );
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_208,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_208);
      }
    }
    else {
      local_208 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_208 == local_1a0.ArrayNum) {
      uVar19 = uVar18;
      if (0 < (int)local_208) {
        while( true ) {
          uVar16 = (uint)uVar18;
          uVar21 = 0;
          if ((int)uVar16 < local_1a0.ArrayNum) {
            uVar21 = ~uVar16 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar8 = (*pcVar4)();
            return EVar8;
          }
          ReadSingleJob(*(FShaderCompileJob **)(local_1a0.AllocatorInstance.Data + uVar19),param_2);
          uVar18 = (ulonglong)(uVar16 + 1);
          uVar19 = uVar19 + 8;
          if ((int)local_208 <= (int)(uVar16 + 1)) break;
        }
      }
    }
    else {
      pwVar20 = L"jobs";
      if (local_1a0.ArrayNum == 1) {
        pwVar20 = L"job";
      }
      FSCWOutputFileContext::ModalErrorOrLog<int,wchar_t_const_*,int>
                (&local_1f8,
                 (TCheckedFormatStringPrivate<wchar_t,int,wchar_t_const_*,int>)0x15115e0f0,
                 local_1a0.ArrayNum,pwVar20,local_208);
    }
    uVar21 = 0;
    pwVar20 = L"jobs";
    plVar2 = *(longlong **)&param_2->field_0x8;
    local_204 = 0xffffffff;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_204,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,&local_204);
      }
    }
    else {
      local_204 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_204 != 0x50) {
      FSCWOutputFileContext::ModalErrorOrLog<int,int>
                (&local_1f8,(TCheckedFormatStringPrivate<wchar_t,int,int>)0x15115e140,0x50,local_204
                );
    }
    plVar2 = *(longlong **)&param_2->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_200,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_2,local_200);
      }
    }
    else {
      local_200[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_200[0] == local_1b0.ArrayNum) {
      if (0 < (int)local_200[0]) {
        local_170 = 0;
        do {
          lVar10 = local_170;
          uVar16 = 0;
          if ((int)uVar21 < local_1b0.ArrayNum) {
            uVar16 = ~uVar21 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar8 = (*pcVar4)();
            return EVar8;
          }
          lVar10 = *(longlong *)(local_1b0.AllocatorInstance.Data + lVar10 * 8);
          local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c0.Data.ArrayNum = 0;
          local_1c0.Data.ArrayMax = 0;
          ::operator<<(param_2,&local_1c0);
          puVar3 = *(ulonglong **)&param_2->field_0x8;
          bVar7 = false;
          puVar1 = (uint *)*puVar3 + 1;
          if ((uint *)puVar3[1] < puVar1) {
            local_1e8[0] = 0;
            (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_1e8,4);
            if (1 < local_1e8[0]) {
              FArchiveState::SetError((FArchiveState *)param_2);
            }
            uVar16 = local_1e8[0];
            if ((param_2->field_0x28 & 1) != 0) goto LAB_145e69159;
          }
          else {
            uVar16 = *(uint *)*puVar3;
            *puVar3 = (ulonglong)puVar1;
LAB_145e69159:
            bVar7 = uVar16 != 0;
          }
          *(byte *)(lVar10 + 0x40) = *(byte *)(lVar10 + 0x40) & 0xfd;
          *(byte *)(lVar10 + 0x40) = *(byte *)(lVar10 + 0x40) | bVar7 * '\x02';
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_1c0.Data.ArrayNum != 0) {
            FVar15.Data = local_1c0.Data.AllocatorInstance.Data;
          }
          iVar9 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)FVar15.Data,(wchar_t *)**(undefined8 **)(lVar10 + 0xb0));
          if (iVar9 != 0) {
            ::FString::PrintfImpl(&local_1e0,L"Expecting pipeline job \"%s\", got \"%s\" instead!");
            (**(code **)(*(longlong *)local_1f8.OutputFile + 0x18))(local_1f8.OutputFile,local_a0);
            ::FString::PrintfImpl
                      (&local_190,
                       L"File path: \"%s\"\n%s\nForgot to build ShaderCompileWorker or delete invalidated DerivedDataCache?"
                      );
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
            local_1e0.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
            local_1e0.Data.ArrayNum = local_190.Data.ArrayNum;
            local_1e0.Data.ArrayMax = local_190.Data.ArrayMax;
            local_190.Data.ArrayNum = 0;
            local_190.Data.ArrayMax = 0;
            local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_a0[0] != (void *)0x0) {
              FMemory::Free(local_a0[0]);
            }
            lVar6 = local_1f8.FileSize;
            if (local_1f8.FileSize < 1) {
              ::FString::FString(&local_168,L"Corrupted ShaderCompileWorker output file");
              pFVar12 = GetGlobalLogSingleton();
              FOutputDeviceRedirector::Panic(pFVar12);
              bVar7 = FApp::IsUnattended();
              FVar5 = bModalReported;
              if (bVar7) {
                UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
                FVar15.Data = local_168.Data.AllocatorInstance.Data;
              }
              else {
                LOCK();
                bModalReported = (FThreadSafeBool)0x1;
                UNLOCK();
                if (FVar5 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
                  FWindowsPlatformProcess::SleepInfinite();
                }
                if (1 < (byte)LogShaders._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
                }
                pFVar13 = FText::FromString(&local_80,&local_168);
                pFVar14 = FText::FromString(&local_90,&local_1e0);
                FMessageDialog::Open(Ok,pFVar14,pFVar13);
                if (local_90.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
                }
                if (local_80.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
                }
                FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
                FVar15.Data = local_168.Data.AllocatorInstance.Data;
              }
            }
            else {
              lVar11 = (**(code **)(*(longlong *)local_1f8.OutputFile + 0x28))();
              ::FString::FString(&local_e0,L"Corrupted ShaderCompileWorker output file");
              ModalErrorOrLog(&local_e0,&local_1e0,lVar11,lVar6,true);
              FVar15.Data = local_e0.Data.AllocatorInstance.Data;
            }
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
            }
            if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
            }
          }
          uVar18 = 0;
          if (((*(byte *)(lVar10 + 0x40) & 1) != 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!CurrentJob->bFinalized",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                                 ,0x34e,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            EVar8 = (*pcVar4)();
            return EVar8;
          }
          *(byte *)(lVar10 + 0x40) = *(byte *)(lVar10 + 0x40) | 1;
          plVar2 = *(longlong **)&param_2->field_0x8;
          local_res10[0] = 0xffffffff;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            if ((param_2->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res10,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_2,local_res10);
            }
          }
          else {
            local_res10[0] = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          if (local_res10[0] == *(uint *)(lVar10 + 0xd0)) {
            uVar19 = uVar18;
            if (0 < (int)local_res10[0]) {
              do {
                uVar17 = (uint)uVar18;
                uVar16 = 0;
                if ((int)uVar17 < *(int *)(lVar10 + 0xd0)) {
                  uVar16 = ~uVar17 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  EVar8 = (*pcVar4)();
                  return EVar8;
                }
                ReadSingleJob(*(FShaderCompileJob **)(*(longlong *)(lVar10 + 200) + uVar19),param_2)
                ;
                uVar18 = (ulonglong)(uVar17 + 1);
                uVar19 = uVar19 + 8;
              } while ((int)(uVar17 + 1) < (int)local_res10[0]);
            }
          }
          else {
            ::FString::PrintfImpl(&local_1d0,L"Expecting %d stage pipeline %s, got %d instead!");
            (**(code **)(*(longlong *)local_1f8.OutputFile + 0x18))(local_1f8.OutputFile,local_70);
            ::FString::PrintfImpl
                      (&local_180,
                       L"File path: \"%s\"\n%s\nForgot to build ShaderCompileWorker or delete invalidated DerivedDataCache?"
                      );
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
            local_1d0.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
            local_1d0.Data.ArrayNum = local_180.Data.ArrayNum;
            local_1d0.Data.ArrayMax = local_180.Data.ArrayMax;
            local_180.Data.ArrayNum = 0;
            local_180.Data.ArrayMax = 0;
            local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_70[0] != (void *)0x0) {
              FMemory::Free(local_70[0]);
            }
            lVar6 = local_1f8.FileSize;
            if (local_1f8.FileSize < 1) {
              ::FString::FString(&local_158,L"Corrupted ShaderCompileWorker output file");
              pFVar12 = GetGlobalLogSingleton();
              FOutputDeviceRedirector::Panic(pFVar12);
              bVar7 = FApp::IsUnattended();
              FVar5 = bModalReported;
              if (bVar7) {
                UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
                FVar15.Data = local_158.Data.AllocatorInstance.Data;
              }
              else {
                LOCK();
                bModalReported = (FThreadSafeBool)0x1;
                UNLOCK();
                if (FVar5 != (FThreadSafeBool)0x0) {
                    /* WARNING: Subroutine does not return */
                  FWindowsPlatformProcess::SleepInfinite();
                }
                if (1 < (byte)LogShaders._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
                }
                pFVar13 = FText::FromString(&local_50,&local_158);
                pFVar14 = FText::FromString(&local_60,&local_1d0);
                FMessageDialog::Open(Ok,pFVar14,pFVar13);
                if (local_60.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
                }
                if (local_50.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
                }
                FWindowsPlatformMisc::RequestExit(true,L"ShaderCompiler.ModalErrorOrLog");
                FVar15.Data = local_158.Data.AllocatorInstance.Data;
              }
            }
            else {
              lVar11 = (**(code **)(*(longlong *)local_1f8.OutputFile + 0x28))();
              ::FString::FString(&local_d0,L"Corrupted ShaderCompileWorker output file");
              ModalErrorOrLog(&local_d0,&local_1d0,lVar11,lVar6,true);
              FVar15.Data = local_d0.Data.AllocatorInstance.Data;
            }
            if (FVar15.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar15.Data);
            }
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
          }
          if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
          }
          uVar21 = uVar21 + 1;
          local_170 = local_170 + 1;
          if ((int)local_200[0] <= (int)uVar21) break;
        } while( true );
      }
    }
    else {
      if (local_1b0.ArrayNum == 1) {
        pwVar20 = L"job";
      }
      FSCWOutputFileContext::ModalErrorOrLog<int,wchar_t_const_*,int>
                (&local_1f8,
                 (TCheckedFormatStringPrivate<wchar_t,int,wchar_t_const_*,int>)0x15115e1c0,
                 local_1b0.ArrayNum,pwVar20,local_200[0]);
    }
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
    if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.AllocatorInstance.Data);
    }
    local_148.ErrorCode = Success;
  }
  else {
    GSCWErrorCode = NotSet;
    ::FString::Empty(&GSCWErrorCodeInfo);
  }
  return local_148.ErrorCode;
}

// WriteTasks @ 145e72280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FShaderCompileWorkerUtil::WriteTasks
          (TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1,
          FArchive *param_2,EWriteTasksFlags param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  FFastPathLoadBuffer *pFVar5;
  FShaderParametersMetadata *pFVar6;
  void *_Src;
  char *_Str;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  undefined1 uVar11;
  FNameEntryId FVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  undefined4 extraout_var;
  ForAnyElementType FVar15;
  int iVar16;
  uint uVar17;
  FArchiveState *this;
  FScriptContainerElement *pFVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  undefined8 *puVar25;
  FArchiveState *pFVar26;
  FArchive *this_00;
  ForAnyElementType FVar27;
  byte *pbVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  EWriteTasksFlags EVar31;
  undefined1 auStackY_408 [32];
  uchar local_3c8;
  uchar local_3c7;
  uchar local_3c6;
  EWriteTasksFlags local_3c5;
  undefined1 local_3c4;
  undefined1 local_3c3;
  undefined1 local_3c2;
  EWriteTasksFlags local_3c1;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8 [2];
  byte *local_3b0;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358 [2];
  TArray<FShaderParametersMetadata_const_*,TSizedDefaultAllocator<32>_> local_350;
  TArray<TRefCountPtr<FSharedShaderCompilerEnvironment>,TSizedDefaultAllocator<32>_> local_340;
  TArray<FShaderCompileJob_*,TSizedDefaultAllocator<32>_> local_330;
  FArchiveState *local_320;
  TArray<FShaderPipelineCompileJob_*,TSizedDefaultAllocator<32>_> local_318;
  FName local_308;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_300;
  TArray<FShaderParametersMetadata_const_*,TSizedDefaultAllocator<32>_> local_2f0;
  FString local_2e0;
  void *local_2d0;
  undefined8 local_2c8;
  FName local_2c0;
  FArchive *local_2b8;
  undefined8 local_2b0;
  FShaderParametersMetadata *local_2a8;
  undefined1 local_2a0 [8];
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FArchiveState local_218;
  undefined8 local_188;
  void **local_180;
  undefined8 local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_35c = 0x20;
  plVar2 = *(longlong **)&param_2->field_0x8;
  local_3c5 = param_3;
  local_2b8 = param_2;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&local_35c,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,&local_35c);
    }
  }
  else {
    local_35c = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar29 = 0;
  local_2d0 = (void *)0x0;
  local_2c8 = 0;
  local_2b0 = 0;
  local_218._padding_ = 0;
  local_218.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_218.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_218.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_218.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_218._40_8_ = 0;
  local_218.ArSerializingDefaults = 0;
  local_218.ArPortFlags = 0;
  local_218.ArMaxSerializeSize = 0;
  local_218.ArUEVer.FileVersionUE4 = 0;
  local_218.ArUEVer.FileVersionUE5 = 0;
  local_218.ArLicenseeUEVer = 0;
  local_218.ArEngineVer.Major = 0;
  local_218.ArEngineVer.Minor = 0;
  local_218.ArEngineVer.Patch = 0;
  local_218.ArEngineVer._6_2_ = 0;
  local_218.ArEngineVer.Changelist = 0;
  local_218.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_218.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_218.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_218.SerializedProperty = (FProperty *)0x0;
  local_218.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_218.bCustomVersionsAreReset = false;
  local_218._129_7_ = 0;
  local_218.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_218);
  local_188 = 0;
  local_218._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_180 = &local_2d0;
  local_178 = 0;
  FArchiveState::SetIsSaving(&local_218,true);
  (**(code **)(local_218._padding_ + 0x108))(&local_218,0);
  local_218._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_3c1 = param_3 & CompressTaskFile;
  local_320 = &local_218;
  this = local_320;
  if (local_3c1 == None) {
    local_2c0.ComparisonIndex.Value = 0;
    local_2c0.Number = 0;
    local_320 = (FArchiveState *)param_2;
    ::FName::ToString(&local_2c0,&local_298);
    ::operator<<(param_2,&local_298);
    this = (FArchiveState *)param_2;
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    GetFormatVersionMap(&FormatVersionMap);
    atexit(`FShaderCompileWorkerUtil::WriteTasks'::__l2::
           _dynamic_atexit_destructor_for__FormatVersionMap__);
    _Init_thread_footer(&::_TSS0);
  }
  TSetPrivateFriend::
  Serialize<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
            ((FArchive *)this,
             (TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)&FormatVersionMap);
  local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.ArrayNum = 0;
  local_330.ArrayMax = 0;
  local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_318.ArrayNum = 0;
  local_318.ArrayMax = 0;
  SplitJobsByType(param_1,&local_330,&local_318);
  local_340.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.ArrayNum = 0;
  local_340.ArrayMax = 0;
  local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ArrayNum = 0;
  local_2f0.ArrayMax = 0;
  uVar30 = uVar29;
  if (0 < local_330.ArrayNum) {
    do {
      uVar22 = (uint)uVar29;
      uVar17 = 0;
      if ((int)uVar22 < local_330.ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      lVar3 = *(longlong *)(local_330.AllocatorInstance.Data + uVar30);
      lVar24 = *(longlong *)(lVar3 + 0x4b8);
      if (((lVar24 != 0) && (*(int *)(lVar24 + 0x68) != *(int *)(lVar24 + 0x94))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!SharedEnvironment || SharedEnvironment->IncludeVirtualPathToSharedContentsMap.Num() == 0"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerCore.h"
                              ,0x144,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      if (*(longlong *)(lVar3 + 0x4b8) != 0) {
        TArray<TRefCountPtr<FSharedShaderCompilerEnvironment>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TRefCountPtr<FSharedShaderCompilerEnvironment>_const_&>
                  (&local_340,(TRefCountPtr<FSharedShaderCompilerEnvironment> *)(lVar3 + 0x4b8));
      }
      if (*(FShaderParametersMetadata **)(lVar3 + 0x4c0) != (FShaderParametersMetadata *)0x0) {
        TArray<FShaderParametersMetadata_const_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FShaderParametersMetadata_const_*_const_&>
                  (&local_2f0,(FShaderParametersMetadata **)(lVar3 + 0x4c0));
      }
      uVar29 = (ulonglong)(uVar22 + 1);
      uVar30 = uVar30 + 8;
    } while ((int)(uVar22 + 1) < local_330.ArrayNum);
  }
  uVar17 = 0;
  if (0 < local_318.ArrayNum) {
    local_3b0 = (byte *)0x0;
    iVar16 = local_318.ArrayNum;
    do {
      pbVar28 = local_3b0;
      uVar29 = 0;
      uVar22 = 0;
      if ((int)uVar17 < iVar16) {
        uVar22 = ~uVar17 >> 0x1f;
      }
      if (uVar22 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        iVar16 = local_318.ArrayNum;
      }
      lVar3 = *(longlong *)(local_318.AllocatorInstance.Data + (longlong)pbVar28);
      iVar1 = *(int *)(lVar3 + 0xd0);
      uVar30 = uVar29;
      if (0 < (longlong)iVar1) {
        do {
          uVar21 = (uint)uVar29;
          uVar22 = 0;
          if ((int)uVar21 < *(int *)(lVar3 + 0xd0)) {
            uVar22 = ~uVar21 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          lVar24 = *(longlong *)(*(longlong *)(lVar3 + 200) + uVar30 * 8);
          lVar4 = *(longlong *)(lVar24 + 0x4b8);
          if (((lVar4 != 0) && (*(int *)(lVar4 + 0x68) != *(int *)(lVar4 + 0x94))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!SharedEnvironment || SharedEnvironment->IncludeVirtualPathToSharedContentsMap.Num() == 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerCore.h"
                                  ,0x144,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if (*(longlong *)(lVar24 + 0x4b8) != 0) {
            TArray<TRefCountPtr<FSharedShaderCompilerEnvironment>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TRefCountPtr<FSharedShaderCompilerEnvironment>_const_&>
                      (&local_340,(TRefCountPtr<FSharedShaderCompilerEnvironment> *)(lVar24 + 0x4b8)
                      );
          }
          if (*(FShaderParametersMetadata **)(lVar24 + 0x4c0) != (FShaderParametersMetadata *)0x0) {
            TArray<FShaderParametersMetadata_const_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FShaderParametersMetadata_const_*_const_&>
                      (&local_2f0,(FShaderParametersMetadata **)(lVar24 + 0x4c0));
          }
          uVar29 = (ulonglong)(uVar21 + 1);
          uVar30 = uVar30 + 1;
        } while ((longlong)uVar30 < (longlong)iVar1);
        iVar16 = local_318.ArrayNum;
      }
      uVar17 = uVar17 + 1;
      local_3b0 = (byte *)((longlong)local_3b0 + 8);
      this = local_320;
    } while ((int)uVar17 < iVar16);
  }
  uVar29 = 0;
  pFVar5 = this->ActiveFPLB;
  local_358[0] = local_340.ArrayNum;
  if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_358);
    }
  }
  else {
    local_358[0] = *(uint *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  local_3b0 = &this->field_0x2a;
  uVar30 = uVar29;
  uVar20 = uVar29;
  if (0 < local_340.ArrayNum) {
    do {
      uVar22 = (uint)uVar20;
      uVar17 = 0;
      if ((int)uVar22 < local_340.ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      FShaderCompilerEnvironment::SerializeCompilationDependencies
                ((FShaderCompilerEnvironment *)
                 (*(longlong *)(local_340.AllocatorInstance.Data + uVar30) + 0x10),(FArchive *)this)
      ;
      uVar30 = uVar30 + 8;
      uVar20 = (ulonglong)(uVar22 + 1);
    } while ((int)(uVar22 + 1) < local_340.ArrayNum);
  }
  local_350.ArrayNum = 0;
  local_350.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_350.ArrayMax = 0;
  uVar30 = uVar29;
  if (0 < local_2f0.ArrayNum) {
    do {
      uVar22 = (uint)uVar30;
      uVar17 = 0;
      if ((int)uVar22 < local_2f0.ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      pFVar6 = *(FShaderParametersMetadata **)(local_2f0.AllocatorInstance.Data + uVar29);
      iVar16 = (pFVar6->Members).ArrayNum;
      pFVar23 = (pFVar6->Members).AllocatorInstance.Data;
      pFVar18 = pFVar23 + (longlong)iVar16 * 0x30;
      while( true ) {
        if ((pFVar6->Members).ArrayNum != iVar16) {
          local_3c4 = 0;
          `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_3c4);
        }
        if (pFVar23 == pFVar18) break;
        if (*(FShaderParametersMetadata **)(pFVar23 + 0x28) != (FShaderParametersMetadata *)0x0) {
          FShaderParametersMetadata::
          IterateStructureMetadataDependencies<_FShaderCompileWorkerUtil::WriteTasks_::__l17::<lambda_1>_>
                    (*(FShaderParametersMetadata **)(pFVar23 + 0x28),&local_350);
        }
        pFVar23 = pFVar23 + 0x30;
      }
      local_2a8 = pFVar6;
      TArray<FShaderParametersMetadata_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FShaderParametersMetadata_const_*_const_&>(&local_350,&local_2a8);
      uVar29 = uVar29 + 8;
      uVar30 = (ulonglong)(uVar22 + 1);
    } while ((int)(uVar22 + 1) < local_2f0.ArrayNum);
  }
  pFVar5 = this->ActiveFPLB;
  if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
    local_39c = local_350.ArrayNum;
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_39c);
    }
  }
  else {
    local_39c = *(uint *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  uVar30 = (ulonglong)local_350.ArrayNum;
  local_3c0 = local_350.ArrayNum;
  local_320 = (FArchiveState *)(local_350.AllocatorInstance.Data + uVar30 * 8);
  FVar27.Data = local_350.AllocatorInstance.Data;
  uVar29 = uVar30;
  while( true ) {
    pFVar26 = local_320;
    uVar20 = 0;
    if ((int)uVar30 != (int)uVar29) {
      local_3c3 = 0;
      `TCheckedPointerIterator<FShaderParametersMetadata_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_3c3);
    }
    pbVar28 = local_3b0;
    if ((FArchiveState *)FVar27.Data == pFVar26) break;
    lVar3 = *(longlong *)FVar27.Data;
    if ((*(longlong *)(lVar3 + 0x48) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x177,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.Data.ArrayNum = *(int *)(*(longlong *)(lVar3 + 0x48) + 0x20);
    lVar24 = (longlong)local_2e0.Data.ArrayNum;
    _Src = *(void **)(*(longlong *)(lVar3 + 0x48) + 0x18);
    if (local_2e0.Data.ArrayNum == 0) {
      local_2e0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2e0.Data.ArrayNum,0,(ForAnyElementType *)&local_2e0,
                 local_2e0.Data.ArrayNum,&local_2e0.Data.ArrayMax);
      memcpy(local_2e0.Data.AllocatorInstance.Data,_Src,lVar24 * 2);
    }
    ::FString::FString(&local_248,*(wchar_t **)(lVar3 + 0x10));
    ::FString::FString(&local_258,*(wchar_t **)(lVar3 + 0x18));
    local_3c8 = *(uchar *)(lVar3 + 0x40);
    _Str = *(char **)(lVar3 + 0x30);
    local_68.Data = (FScriptContainerElement *)0x0;
    if (_Str == (char *)0x0) {
      local_60 = (FScriptContainerElement *)0x0;
      local_58 = 0;
    }
    else {
      sVar13 = strlen(_Str);
      local_58 = (int)sVar13;
      uVar17 = local_58 + 1;
      FVar15.Data = (FScriptContainerElement *)0x0;
      if (0x80 < uVar17) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar17,2);
        FVar15.Data = local_68.Data;
      }
      local_60 = local_168;
      if (FVar15.Data != (FScriptContainerElement *)0x0) {
        local_60 = FVar15.Data;
      }
      pwVar14 = FGenericPlatformString::Convert<char,wchar_t>
                          ((wchar_t *)local_60,uVar17,_Str,uVar17);
      if ((pwVar14 == (wchar_t *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                              ,0x25,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
    }
    ::FString::FString(&local_268,(wchar_t *)local_60);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    local_398 = *(uint *)(lVar3 + 0x38);
    local_394 = *(uint *)(lVar3 + 0x3c);
    local_390 = *(uint *)(lVar3 + 0x58);
    ::operator<<((FArchive *)this,&local_2e0);
    ::operator<<((FArchive *)this,&local_248);
    ::operator<<((FArchive *)this,&local_258);
    pFVar5 = this->ActiveFPLB;
    if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 1) {
      (**(code **)(this->_padding_ + 0x188))(this,&local_3c8);
    }
    else {
      local_3c8 = *pFVar5->StartFastPathLoadBuffer;
      pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 1;
    }
    ::operator<<((FArchive *)this,&local_268);
    pbVar28 = local_3b0;
    pFVar5 = this->ActiveFPLB;
    if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
      if ((*local_3b0 & 1) == 0) {
        (**(code **)(this->_padding_ + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_398);
      }
    }
    else {
      local_398 = *(uint *)pFVar5->StartFastPathLoadBuffer;
      pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
    }
    pFVar5 = this->ActiveFPLB;
    if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
      if ((*pbVar28 & 1) == 0) {
        (**(code **)(this->_padding_ + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_394);
      }
    }
    else {
      local_394 = *(uint *)pFVar5->StartFastPathLoadBuffer;
      pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
    }
    pFVar5 = this->ActiveFPLB;
    if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
      if ((*pbVar28 & 1) == 0) {
        (**(code **)(this->_padding_ + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_390);
      }
    }
    else {
      local_390 = *(uint *)pFVar5->StartFastPathLoadBuffer;
      pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
    }
    pbVar28 = local_3b0;
    iVar16 = *(int *)(lVar3 + 0x58);
    puVar25 = *(undefined8 **)(lVar3 + 0x50);
    puVar19 = puVar25 + (longlong)iVar16 * 6;
    while( true ) {
      if (*(int *)(lVar3 + 0x58) != iVar16) {
        local_3c2 = 0;
        `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_3c2);
      }
      if (puVar25 == puVar19) break;
      ::FString::FString(&local_278,(wchar_t *)*puVar25);
      ::FString::FString(&local_288,(wchar_t *)puVar25[1]);
      local_38c = *(uint *)(puVar25 + 2);
      local_388 = *(uint *)((longlong)puVar25 + 0x14);
      local_3c7 = *(uchar *)(puVar25 + 3);
      local_3c6 = *(uchar *)((longlong)puVar25 + 0x19);
      local_384 = *(uint *)((longlong)puVar25 + 0x1c);
      local_380 = *(uint *)(puVar25 + 4);
      local_37c = *(uint *)((longlong)puVar25 + 0x24);
      local_3a8 = 0xffffffff;
      if (puVar25[5] != 0) {
        for (FVar15.Data = local_350.AllocatorInstance.Data;
            FVar15.Data != local_350.AllocatorInstance.Data + (longlong)local_350.ArrayNum * 8;
            FVar15.Data = FVar15.Data + 8) {
          if (*(longlong *)FVar15.Data == puVar25[5]) {
            local_3a8 = (uint)((longlong)FVar15.Data - (longlong)local_350.AllocatorInstance.Data >>
                              3);
            if (local_3a8 != 0xffffffff) goto LAB_145e72cc7;
            break;
          }
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMetadataIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                            ,0x1fb,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
      }
LAB_145e72cc7:
      ::operator<<((FArchive *)this,&local_278);
      ::operator<<((FArchive *)this,&local_288);
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_38c);
        }
      }
      else {
        local_38c = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_388);
        }
      }
      else {
        local_388 = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 1) {
        (**(code **)(this->_padding_ + 0x188))(this,&local_3c7);
      }
      else {
        local_3c7 = *pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 1;
      }
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < pFVar5->StartFastPathLoadBuffer + 1) {
        (**(code **)(this->_padding_ + 0x188))(this,&local_3c6);
      }
      else {
        local_3c6 = *pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 1;
      }
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_384);
        }
      }
      else {
        local_384 = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_380);
        }
      }
      else {
        local_380 = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_37c);
        }
      }
      else {
        local_37c = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_3a8);
        }
      }
      else {
        local_3a8 = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      puVar25 = puVar25 + 6;
    }
    uVar29 = (ulonglong)local_3c0;
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    }
    uVar30 = (ulonglong)(uint)local_350.ArrayNum;
    FVar27.Data = FVar27.Data + 8;
  }
  pFVar5 = this->ActiveFPLB;
  local_378 = 0x53;
  if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
    if ((*local_3b0 & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_378);
    }
  }
  else {
    local_378 = *(uint *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  pFVar5 = this->ActiveFPLB;
  local_374 = local_330.ArrayNum;
  if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
    if ((*pbVar28 & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_374);
    }
  }
  else {
    local_374 = *(uint *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  if (0 < local_330.ArrayNum) {
    EVar31 = local_3c5 & SkipSource;
    uVar29 = uVar20;
    do {
      uVar17 = (uint)uVar20;
      uVar22 = ~uVar17 >> 0x1f;
      if (EVar31 == None) {
        uVar21 = 0;
        if ((int)uVar17 < local_330.ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        FShaderCompileJob::SerializeWorkerInput
                  (*(FShaderCompileJob **)(local_330.AllocatorInstance.Data + uVar29),
                   (FArchive *)this);
      }
      else {
        uVar21 = 0;
        if ((int)uVar17 < local_330.ArrayNum) {
          uVar21 = uVar22;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        FShaderCompileJob::SerializeWorkerInputNoSource
                  (*(FShaderCompileJob **)(local_330.AllocatorInstance.Data + uVar29),
                   (FArchive *)this);
      }
      uVar21 = 0;
      if ((int)uVar17 < local_330.ArrayNum) {
        uVar21 = uVar22;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      lVar3 = *(longlong *)(local_330.AllocatorInstance.Data + uVar29);
      if (((this->field_0x28 & 4) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ar.IsSaving()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerCore.h"
                              ,0x153,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      if (local_340.AllocatorInstance.Data !=
          local_340.AllocatorInstance.Data + (longlong)local_340.ArrayNum * 8) {
        FVar27.Data = local_340.AllocatorInstance.Data;
        do {
          if (*(FSharedShaderCompilerEnvironment **)FVar27.Data ==
              *(FSharedShaderCompilerEnvironment **)(lVar3 + 0x4b8)) {
            local_370 = (uint)((longlong)FVar27.Data - (longlong)local_340.AllocatorInstance.Data >>
                              3);
            goto LAB_145e73155;
          }
          FVar27.Data = FVar27.Data + 8;
        } while (FVar27.Data != local_340.AllocatorInstance.Data + (longlong)local_340.ArrayNum * 8)
        ;
      }
      local_370 = 0xffffffff;
LAB_145e73155:
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_370);
        }
      }
      else {
        local_370 = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      lVar3 = *(longlong *)(lVar3 + 0x4c0);
      local_3a4 = 0xffffffff;
      if (lVar3 != 0) {
        for (FVar27.Data = local_350.AllocatorInstance.Data;
            FVar27.Data != local_350.AllocatorInstance.Data + (longlong)local_350.ArrayNum * 8;
            FVar27.Data = FVar27.Data + 8) {
          if (*(longlong *)FVar27.Data == lVar3) {
            local_3a4 = (uint)((longlong)FVar27.Data - (longlong)local_350.AllocatorInstance.Data >>
                              3);
            if (local_3a4 != 0xffffffff) goto LAB_145e73216;
            break;
          }
        }
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderParameterStructureIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerCore.h"
                            ,0x15c,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
      }
LAB_145e73216:
      pFVar5 = this->ActiveFPLB;
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_3a4);
        }
      }
      else {
        local_3a4 = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      uVar20 = (ulonglong)(uVar17 + 1);
      uVar29 = uVar29 + 8;
    } while ((int)(uVar17 + 1) < local_330.ArrayNum);
  }
  pFVar5 = this->ActiveFPLB;
  local_36c = 0x50;
  if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
    if ((*pbVar28 & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_36c);
    }
  }
  else {
    local_36c = *(uint *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  pFVar5 = this->ActiveFPLB;
  local_368 = local_318.ArrayNum;
  if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
    if ((*pbVar28 & 1) == 0) {
      (**(code **)(this->_padding_ + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_368);
    }
  }
  else {
    local_368 = *(uint *)pFVar5->StartFastPathLoadBuffer;
    pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
  }
  local_3c0 = 0;
  if (0 < local_318.ArrayNum) {
    local_320 = (FArchiveState *)0x0;
    do {
      pFVar26 = local_320;
      uVar17 = local_3c0;
      uVar29 = 0;
      uVar22 = 0;
      if ((int)local_3c0 < local_318.ArrayNum) {
        uVar22 = ~local_3c0 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      lVar3 = *(longlong *)(local_318.AllocatorInstance.Data + (longlong)pFVar26);
      ::FString::FString(&local_238,(wchar_t *)**(undefined8 **)(lVar3 + 0xb0));
      ::operator<<((FArchive *)this,&local_238);
      pFVar5 = this->ActiveFPLB;
      local_3bc = *(uint *)(lVar3 + 0xd0);
      if (pFVar5->EndFastPathLoadBuffer < (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
        if ((*pbVar28 & 1) == 0) {
          (**(code **)(this->_padding_ + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_3bc);
        }
      }
      else {
        local_3bc = *(uint *)pFVar5->StartFastPathLoadBuffer;
        pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
      }
      pbVar28 = local_3b0;
      if (0 < (int)local_3bc) {
        EVar31 = local_3c5 & SkipSource;
        uVar30 = uVar29;
        do {
          uVar22 = (uint)uVar29;
          uVar17 = ~uVar22 >> 0x1f;
          if (EVar31 == None) {
            uVar21 = 0;
            if ((int)uVar22 < *(int *)(lVar3 + 0xd0)) {
              uVar21 = uVar17;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            FShaderCompileJob::SerializeWorkerInput
                      (*(FShaderCompileJob **)(*(longlong *)(lVar3 + 200) + uVar30),(FArchive *)this
                      );
          }
          else {
            uVar21 = 0;
            if ((int)uVar22 < *(int *)(lVar3 + 0xd0)) {
              uVar21 = uVar17;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
            FShaderCompileJob::SerializeWorkerInputNoSource
                      (*(FShaderCompileJob **)(*(longlong *)(lVar3 + 200) + uVar30),(FArchive *)this
                      );
          }
          uVar21 = 0;
          if ((int)uVar22 < *(int *)(lVar3 + 0xd0)) {
            uVar21 = uVar17;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          lVar24 = *(longlong *)(uVar30 + *(longlong *)(lVar3 + 200));
          if (((this->field_0x28 & 4) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Ar.IsSaving()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerCore.h"
                                  ,0x153,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if (local_340.AllocatorInstance.Data !=
              local_340.AllocatorInstance.Data + (longlong)local_340.ArrayNum * 8) {
            FVar27.Data = local_340.AllocatorInstance.Data;
            do {
              if (*(FSharedShaderCompilerEnvironment **)FVar27.Data ==
                  *(FSharedShaderCompilerEnvironment **)(lVar24 + 0x4b8)) {
                local_364 = (uint)((longlong)FVar27.Data -
                                   (longlong)local_340.AllocatorInstance.Data >> 3);
                goto LAB_145e73578;
              }
              FVar27.Data = FVar27.Data + 8;
            } while (FVar27.Data !=
                     local_340.AllocatorInstance.Data + (longlong)local_340.ArrayNum * 8);
          }
          local_364 = 0xffffffff;
LAB_145e73578:
          pFVar5 = this->ActiveFPLB;
          if (pFVar5->EndFastPathLoadBuffer <
              (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
            if ((*pbVar28 & 1) == 0) {
              (**(code **)(this->_padding_ + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_364);
            }
          }
          else {
            local_364 = *(uint *)pFVar5->StartFastPathLoadBuffer;
            pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
          }
          lVar24 = *(longlong *)(lVar24 + 0x4c0);
          local_3a0 = 0xffffffff;
          if (lVar24 != 0) {
            for (FVar27.Data = local_350.AllocatorInstance.Data;
                FVar27.Data != local_350.AllocatorInstance.Data + (longlong)local_350.ArrayNum * 8;
                FVar27.Data = FVar27.Data + 8) {
              if (*(longlong *)FVar27.Data == lVar24) {
                local_3a0 = (uint)((longlong)FVar27.Data -
                                   (longlong)local_350.AllocatorInstance.Data >> 3);
                if (local_3a0 != 0xffffffff) goto LAB_145e73636;
                break;
              }
            }
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ShaderParameterStructureIndex != INDEX_NONE",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerCore.h"
                                ,0x15c,L"");
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              uVar11 = (*pcVar7)();
              return (bool)uVar11;
            }
          }
LAB_145e73636:
          pFVar5 = this->ActiveFPLB;
          if (pFVar5->EndFastPathLoadBuffer <
              (uint *)((longlong)pFVar5->StartFastPathLoadBuffer + 4)) {
            if ((*pbVar28 & 1) == 0) {
              (**(code **)(this->_padding_ + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)this,&local_3a0);
            }
          }
          else {
            local_3a0 = *(uint *)pFVar5->StartFastPathLoadBuffer;
            pFVar5->StartFastPathLoadBuffer = pFVar5->StartFastPathLoadBuffer + 4;
          }
          uVar29 = (ulonglong)(uVar22 + 1);
          uVar30 = uVar30 + 8;
          pFVar26 = local_320;
          uVar17 = local_3c0;
        } while ((int)(uVar22 + 1) < (int)local_3bc);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      local_3c0 = uVar17 + 1;
      local_320 = (FArchiveState *)((longlong)pFVar26 + 8);
      pbVar28 = local_3b0;
    } while ((int)local_3c0 < local_318.ArrayNum);
  }
  this_00 = local_2b8;
  if (local_3c1 != None) {
    (**(code **)(this->_padding_ + 0x210))(this);
    FVar12 = FNameEntryId::FromValidEName((EName)local_2a0);
    local_308.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar12.Value);
    local_308.Number = 0;
    ::FName::ToString(&local_308,&local_228);
    this_00 = local_2b8;
    ::operator<<(local_2b8,&local_228);
    local_3b8[0] = (uint)local_2c8;
    if (((uint)local_2c8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("UncompressedDataSize != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                            ,0x250,L"Did not write any data to the task file for the compression."),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    plVar2 = *(longlong **)&this_00->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,local_3b8);
      }
    }
    else {
      local_3b8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    FVar8.Number = local_308.Number;
    FVar8.ComparisonIndex.Value = local_308.ComparisonIndex.Value;
    uVar17 = FCompression::CompressMemoryBound(FVar8,local_3b8[0],COMPRESS_NoFlags,0);
    local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.ArrayNum = 0;
    local_300.ArrayMax = 0;
    if ((int)uVar17 < 1) {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar17,&local_300.AllocatorInstance,&local_300.ArrayNum,&local_300.ArrayMax);
    }
    FVar9.Number = local_308.Number;
    FVar9.ComparisonIndex.Value = local_308.ComparisonIndex.Value;
    local_360 = uVar17;
    FCompression::CompressMemory
              (FVar9,local_300.AllocatorInstance.Data,(int *)&local_360,local_2d0,local_3b8[0],
               COMPRESS_BiasSpeed,0);
    if (((int)uVar17 < (int)local_360) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ActualCompressedSize <= CompressedSizeBound",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCompileWorkerUtil.cpp"
                            ,0x25a,
                            L"Compressed size was larger than the bound - we stomped the memory."),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(&local_300,local_360,No);
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(this_00,&local_300);
    if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.AllocatorInstance.Data);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = (**(code **)(*(longlong *)this_00 + 0x210))(this_00);
  if (local_350.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.AllocatorInstance.Data);
  }
  if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.AllocatorInstance.Data);
  }
  DestructItems<TRefCountPtr<FSharedShaderCompilerEnvironment>,int>
            ((TRefCountPtr<FSharedShaderCompilerEnvironment> *)local_340.AllocatorInstance.Data,
             local_340.ArrayNum);
  if (local_340.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.AllocatorInstance.Data);
  }
  if (local_318.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.AllocatorInstance.Data);
  }
  if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_218);
  if (local_2d0 != (void *)0x0) {
    FMemory::Free(local_2d0);
  }
  return (bool)uVar11;
}

