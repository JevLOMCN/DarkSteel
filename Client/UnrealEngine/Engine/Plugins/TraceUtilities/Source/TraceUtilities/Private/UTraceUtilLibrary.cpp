// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceUtilities
// Functions: 35

// StaticClass @ 14f12ea20

UClass * __cdecl UTraceUtilLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TraceUtilities",L"TraceUtilLibrary",
               &Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton,
               StaticRegisterNativesUTraceUtilLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTraceUtilLibrary>,
               InternalVTableHelperCtorCaller<UTraceUtilLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14f12ef40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f12f081) */

void __cdecl
`UTraceUtilLibrary::GetAllChannels'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (char *param_1,bool param_2,void *param_3)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined1 auStack_198 [32];
  FString *local_178;
  FString *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_138._padding_ = 0;
  if (param_1 == (char *)0x0) {
    local_138.StringLength = 0;
    local_138.Ptr = (wchar_t *)0x0;
  }
  else {
    sVar5 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar5,Yes);
  }
  ::FString::FString(&local_148,local_138.Ptr);
  pFVar1 = *(FString **)param_3;
  if ((pFVar1 <= &local_148) && (&local_148 < pFVar1 + *(int *)((longlong)param_3 + 0xc))) {
    local_160 = (longlong)*(int *)((longlong)param_3 + 8);
    local_158 = 0x10;
    local_178 = &local_148;
    local_170 = pFVar1;
    local_168 = (longlong)*(int *)((longlong)param_3 + 0xc);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)((longlong)param_3 + 8);
  if (iVar4 == *(int *)((longlong)param_3 + 0xc)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,param_3,(int *)((longlong)param_3 + 0xc));
  }
  *(int *)((longlong)param_3 + 8) = iVar4 + 1;
  puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)param_3);
  *puVar6 = 0;
  *puVar6 = local_148.Data.AllocatorInstance.Data;
  *(int *)(puVar6 + 1) = local_148.Data.ArrayNum;
  *(int *)((longlong)puVar6 + 0xc) = local_148.Data.ArrayMax;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// UTraceUtilLibrary @ 14f12f1b0

UTraceUtilLibrary * __thiscall
UTraceUtilLibrary::UTraceUtilLibrary(UTraceUtilLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTraceUtilLibrary__6B_;
  return this;
}

// UTraceUtilLibrary @ 14f12f1e0

UTraceUtilLibrary * __thiscall
UTraceUtilLibrary::UTraceUtilLibrary(UTraceUtilLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UTraceUtilLibrary__6B_;
  return this;
}

// ~UTraceUtilLibrary @ 14f12f210

void __thiscall UTraceUtilLibrary::~UTraceUtilLibrary(UTraceUtilLibrary *this)

{
  *(undefined ***)this = &___7UTraceUtilLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetAllChannels @ 14f12f2b0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UTraceUtilLibrary::GetAllChannels
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Trace::EnumerateChannels
            (`UTraceUtilLibrary::GetAllChannels'::__l2::<lambda_1>::<lambda_invoker_cdecl>,
             __return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetEnabledChannels @ 14f12f2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
UTraceUtilLibrary::GetEnabledChannels
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 auStack_278 [32];
  FString local_258;
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_278;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  FTraceAuxiliary::GetActiveChannelsString(&local_238);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Data.ArrayNum = 0;
  local_258.Data.ArrayMax = 0;
  pFVar1 = ::FString::ConstructFromPtrSize
                     (&local_248,local_238.Base,
                      (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  if (&local_258 != pFVar1) {
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    local_258.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_258.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  ::FString::ParseIntoArray(&local_258,__return_storage_ptr__,L",",true);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f12f420

UClass * __cdecl UTraceUtilLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TraceUtilities",L"TraceUtilLibrary",
               &Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton,
               StaticRegisterNativesUTraceUtilLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTraceUtilLibrary>,
               InternalVTableHelperCtorCaller<UTraceUtilLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTraceUtilLibrary.InnerSingleton;
}

// IsChannelEnabled @ 14f12f4e0

bool __cdecl UTraceUtilLibrary::IsChannelEnabled(FString *param_1)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = UE::Trace::IsChannel((wchar_t *)(param_1->Data).AllocatorInstance.Data);
    return bVar1;
  }
  bVar1 = UE::Trace::IsChannel(L"");
  return bVar1;
}

// IsTracing @ 14f12f500

bool __cdecl UTraceUtilLibrary::IsTracing(void)

{
  if ((UE::Trace::Private::GDataHandle == 0) && (UE::Trace::Private::GPendingDataHandle == 0)) {
    return false;
  }
  return true;
}

// PauseTracing @ 14f12f510

bool __cdecl UTraceUtilLibrary::PauseTracing(void)

{
  FTraceAuxiliaryImpl::PauseChannels(&GTraceAuxiliary);
  return true;
}

// ResumeTracing @ 14f12f520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UTraceUtilLibrary::ResumeTracing(void)

{
  wchar_t *pwVar1;
  undefined8 uStackX_8;
  pmf_41f21a49 apStackX_10 [3];
  
  apStackX_10[0] = (pmf_41f21a49)FTraceAuxiliaryImpl::EnableChannel<wchar_t_const_*>;
  pwVar1 = L"";
  if (GTraceAuxiliary.PausedPreset.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GTraceAuxiliary.PausedPreset.Data.AllocatorInstance.Data;
  }
  uStackX_8 = 0;
  FTraceAuxiliaryImpl::
  ForEachChannel<bool_(__cdecl_FTraceAuxiliaryImpl::*)(wchar_t_const_*,FLogCategoryBase_const_&,FString_*),FLogCategoryLogTrace_&,std::nullptr_t>
            (&GTraceAuxiliary,pwVar1,false,apStackX_10,&LogTrace,(void **)&uStackX_8);
  ::FString::Empty(&GTraceAuxiliary.PausedPreset);
  return true;
}

// StartTraceSendTo @ 14f12f530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UTraceUtilLibrary::StartTraceSendTo
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  iVar1 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar2 = true;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L",",1);
    }
    iVar6 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar4,iVar6);
    pFVar4 = pFVar4 + 0x10;
  }
  pwVar3 = L"";
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FTraceAuxiliary::Start
                    (Network,pwVar3,(wchar_t *)FVar7.Data,(FOptions *)0x0,
                     (FLogCategoryBase *)&LogCore);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StartTraceToFile @ 14f12f630

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UTraceUtilLibrary::StartTraceToFile
          (FString *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  FString local_38;
  
  iVar1 = param_2->ArrayNum;
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar2 = true;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      ::FString::AppendChars(&local_38,L",",1);
    }
    iVar6 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_38,*(wchar_t **)pFVar4,iVar6);
    pFVar4 = pFVar4 + 0x10;
  }
  pwVar3 = L"";
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
  if ((param_1->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = FTraceAuxiliary::Start
                    (File,pwVar3,(wchar_t *)FVar7.Data,(FOptions *)0x0,(FLogCategoryBase *)&LogCore)
  ;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// StaticRegisterNativesUTraceUtilLibrary @ 14f12f730

void __cdecl UTraceUtilLibrary::StaticRegisterNativesUTraceUtilLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UTraceUtilLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopTracing @ 14f12f770

bool __cdecl UTraceUtilLibrary::StopTracing(void)

{
  bool bVar1;
  
  bVar1 = FTraceAuxiliaryImpl::Stop(&GTraceAuxiliary);
  return bVar1;
}

// ToggleChannel @ 14f12f780

bool __cdecl UTraceUtilLibrary::ToggleChannel(FString *param_1,bool param_2)

{
  bool bVar1;
  
  if ((param_1->Data).ArrayNum != 0) {
    bVar1 = UE::Trace::ToggleChannel((wchar_t *)(param_1->Data).AllocatorInstance.Data,param_2);
    return bVar1;
  }
  bVar1 = UE::Trace::ToggleChannel(L"",param_2);
  return bVar1;
}

// TraceBookmark @ 14f12f7a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UTraceUtilLibrary::TraceBookmark(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong _Size;
  wchar_t *_Str;
  undefined1 auStack_1058 [32];
  undefined4 local_1038;
  undefined4 uStack_1034;
  undefined1 auStack_102e [6];
  undefined4 local_1028;
  undefined1 local_1024 [4092];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1058;
  if (-1 < BookmarkChannel->Enabled) {
    if (!__BookmarkPoint79) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint79,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\TraceUtilities\\Source\\TraceUtilities\\Private\\TraceUtilLibrary.cpp"
                 ,0x4f,L"%s");
      __BookmarkPoint79 = true;
    }
    if ((param_1->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar3 = CallstackTrace_GetCurrentId();
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      uVar9 = 4;
      local_1028 = 0xc201;
      puVar8 = local_1024;
    }
    else {
      sVar6 = wcslen(_Str);
      iVar4 = (int)sVar6 * 2 + 2;
      if (0xffff < iVar4) {
        iVar4 = 0xffff;
      }
      uVar9 = (longlong)iVar4 + 2;
      if (0x1000 < uVar9) {
        return;
      }
      local_1028 = CONCAT22(local_1028._2_2_,0xc201);
      sVar6 = wcslen(_Str);
      uVar5 = (int)sVar6 * 2 + 2;
      uVar7 = (ulonglong)uVar5;
      if (0xffff < (int)uVar5) {
        uVar7 = 0xffff;
      }
      _Size = uVar7 & 0xffff;
      memcpy((void *)((longlong)&local_1028 + 2),_Str,_Size);
      if ((short)uVar7 == -1) {
        local_1038 = 0x2e002e;
        uStack_1034 = 0x2e;
        *(undefined8 *)(auStack_102e + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
      }
      puVar8 = local_1024 + (_Size - 2);
    }
    if (((longlong)puVar8 - (longlong)&local_1028 != uVar9) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PayloadBufferPtr - Buffer == FormatArgsSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                           ,0x44,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((ushort)uVar9 != 0) {
      FMiscTrace::OutputBookmarkInternal
                (&__BookmarkPoint79,uVar3,(ushort)uVar9,(uchar *)&local_1028);
    }
  }
  return;
}

// TraceMarkRegionEnd @ 14f12f980

void __cdecl UTraceUtilLibrary::TraceMarkRegionEnd(FString *param_1)

{
  if ((param_1->Data).ArrayNum != 0) {
    FMiscTrace::OutputEndRegion((wchar_t *)(param_1->Data).AllocatorInstance.Data);
    return;
  }
  FMiscTrace::OutputEndRegion(L"");
  return;
}

// TraceMarkRegionStart @ 14f12f9a0

void __cdecl UTraceUtilLibrary::TraceMarkRegionStart(FString *param_1)

{
  if ((param_1->Data).ArrayNum != 0) {
    FMiscTrace::OutputBeginRegion((wchar_t *)(param_1->Data).AllocatorInstance.Data,(wchar_t *)0x0);
    return;
  }
  FMiscTrace::OutputBeginRegion(L"",(wchar_t *)0x0);
  return;
}

// TraceScreenshot @ 14f12f9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UTraceUtilLibrary::TraceScreenshot(FString *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  longlong lVar1;
  FString local_18;
  
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar1 = (longlong)local_18.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar1 * 2);
  }
  FTraceScreenshot::RequestScreenshot(&local_18,param_2,(FLogCategoryBase *)&LogCore);
  return;
}

// execGetAllChannels @ 14f12fb30

void __cdecl UTraceUtilLibrary::execGetAllChannels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *local_18;
  undefined8 local_10;
  
  local_18 = (FString *)0x0;
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UE::Trace::EnumerateChannels
            (`UTraceUtilLibrary::GetAllChannels'::__l2::<lambda_1>::<lambda_invoker_cdecl>,&local_18
            );
  if (param_3 == &local_18) {
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FString **)param_3 = local_18;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = (FString *)0x0;
    local_10._0_4_ = 0;
  }
  DestructItems<FString,int>(local_18,(int)local_10);
  if (local_18 != (FString *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetEnabledChannels @ 14f12fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UTraceUtilLibrary::execGetEnabledChannels(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStack_298 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_278;
  FString local_268;
  FString local_258;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  FTraceAuxiliary::GetActiveChannelsString(&local_248);
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.Data.ArrayNum = 0;
  local_268.Data.ArrayMax = 0;
  pFVar1 = ::FString::ConstructFromPtrSize
                     (&local_258,local_248.Base,
                      (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
  if (&local_268 != pFVar1) {
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
    local_268.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    local_268.Data.ArrayMax = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  ::FString::ParseIntoArray(&local_268,&local_278,L",",true);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  if (param_3 == &local_278) {
    iVar2 = local_278.ArrayNum;
  }
  else {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_278.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_278.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_278.ArrayMax;
    local_278.ArrayNum = 0;
    local_278.ArrayMax = 0;
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar2 = 0;
  }
  DestructItems<FString,int>((FString *)local_278.AllocatorInstance.Data,iVar2);
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  return;
}

// execIsChannelEnabled @ 14f12fda0

void __cdecl UTraceUtilLibrary::execIsChannelEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_10 != 0) {
    pwVar3 = local_18;
  }
  bVar2 = UE::Trace::IsChannel(pwVar3);
  *(bool *)param_3 = bVar2;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execIsTracing @ 14f12fe50

void __cdecl UTraceUtilLibrary::execIsTracing(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FTraceAuxiliary::IsConnected();
  *(bool *)param_3 = bVar1;
  return;
}

// execPauseTracing @ 14f12fe80

void __cdecl UTraceUtilLibrary::execPauseTracing(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FTraceAuxiliary::Pause();
  *(bool *)param_3 = bVar1;
  return;
}

// execResumeTracing @ 14f12feb0

void __cdecl UTraceUtilLibrary::execResumeTracing(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FTraceAuxiliary::Resume();
  *(bool *)param_3 = bVar1;
  return;
}

// execStartTraceSendTo @ 14f12fee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UTraceUtilLibrary::execStartTraceSendTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FString **ppFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FString *pFVar10;
  undefined1 local_res10 [8];
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58 = (FString *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ppFVar7 = &local_58;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar7 = (FString **)param_2->MostRecentPropertyAddress;
  }
  bVar4 = true;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppFVar7 + 1);
  pFVar6 = *ppFVar7;
  pFVar10 = pFVar6 + iVar1;
  while( true ) {
    if (*(int *)(ppFVar7 + 1) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar10) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar2 = (pFVar6->Data).ArrayNum;
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
    pFVar6 = pFVar6 + 1;
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
  }
  pwVar5 = L"";
  if ((int)local_30 != 0) {
    pwVar5 = local_38;
  }
  bVar4 = FTraceAuxiliary::Start
                    (Network,pwVar5,(wchar_t *)FVar9.Data,(FOptions *)0x0,
                     (FLogCategoryBase *)&LogCore);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar4;
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execStartTraceToFile @ 14f1300c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UTraceUtilLibrary::execStartTraceToFile(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FString **ppFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  FString *pFVar10;
  undefined1 local_res10 [8];
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_58 = (FString *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  ppFVar7 = &local_58;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar7 = (FString **)param_2->MostRecentPropertyAddress;
  }
  bVar4 = true;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppFVar7 + 1);
  pFVar6 = *ppFVar7;
  pFVar10 = pFVar6 + iVar1;
  while( true ) {
    if (*(int *)(ppFVar7 + 1) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar10) break;
    if (bVar4) {
      bVar4 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar2 = (pFVar6->Data).ArrayNum;
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar8);
    pFVar6 = pFVar6 + 1;
  }
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar9.Data = local_48.Data.AllocatorInstance.Data;
  }
  pwVar5 = L"";
  if ((int)local_30 != 0) {
    pwVar5 = local_38;
  }
  bVar4 = FTraceAuxiliary::Start
                    (File,pwVar5,(wchar_t *)FVar9.Data,(FOptions *)0x0,(FLogCategoryBase *)&LogCore)
  ;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  *(bool *)param_3 = bVar4;
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execStopTracing @ 14f1302a0

void __cdecl UTraceUtilLibrary::execStopTracing(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FTraceAuxiliary::Stop();
  *(bool *)param_3 = bVar1;
  return;
}

// execToggleChannel @ 14f1302d0

void __cdecl UTraceUtilLibrary::execToggleChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int local_res10 [2];
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar3 = L"";
  if ((int)local_10 != 0) {
    pwVar3 = local_18;
  }
  bVar2 = UE::Trace::ToggleChannel(pwVar3,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execTraceBookmark @ 14f1303c0

void __cdecl UTraceUtilLibrary::execTraceBookmark(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TraceBookmark(&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execTraceMarkRegionEnd @ 14f130450

void __cdecl
UTraceUtilLibrary::execTraceMarkRegionEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar2 = L"";
  if ((int)local_10 != 0) {
    pwVar2 = local_18;
  }
  FMiscTrace::OutputEndRegion(pwVar2);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execTraceMarkRegionStart @ 14f1304f0

void __cdecl
UTraceUtilLibrary::execTraceMarkRegionStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  wchar_t *pwVar2;
  wchar_t *local_18;
  undefined8 local_10;
  
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pwVar2 = L"";
  if ((int)local_10 != 0) {
    pwVar2 = local_18;
  }
  FMiscTrace::OutputBeginRegion(pwVar2,(wchar_t *)0x0);
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execTraceScreenshot @ 14f130590

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UTraceUtilLibrary::execTraceScreenshot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  int local_res10 [2];
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_28;
  bVar3 = local_res10[0] != 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_18,(int)local_20,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  FTraceScreenshot::RequestScreenshot(&local_18,bVar3,(FLogCategoryBase *)&LogCore);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

