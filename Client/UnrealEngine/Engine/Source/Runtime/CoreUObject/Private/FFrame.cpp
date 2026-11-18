// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 28

// Read<unsigned_char> @ 1421fb6a0

uchar __thiscall FFrame::Read<unsigned_char>(FFrame *this)

{
  uchar uVar1;
  
  uVar1 = *this->Code;
  this->Code = this->Code + 1;
  return uVar1;
}

// Read<unsigned_short> @ 1421fb6c0

ushort __thiscall FFrame::Read<unsigned_short>(FFrame *this)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 2);
  return uVar1;
}

// Read<int> @ 1421fb6e0

int __thiscall FFrame::Read<int>(FFrame *this)

{
  int iVar1;
  
  iVar1 = *(int *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 4);
  return iVar1;
}

// Read<float> @ 1421fb700

float __thiscall FFrame::Read<float>(FFrame *this)

{
  float fVar1;
  
  fVar1 = *(float *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 4);
  return fVar1;
}

// Read<double> @ 1421fb720

double __thiscall FFrame::Read<double>(FFrame *this)

{
  double dVar1;
  
  dVar1 = *(double *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 8);
  return dVar1;
}

// Read<enum_EAutoRtfmStopTransactMode> @ 1421fb740

EAutoRtfmStopTransactMode __thiscall FFrame::Read<enum_EAutoRtfmStopTransactMode>(FFrame *this)

{
  EAutoRtfmStopTransactMode EVar1;
  
  EVar1 = *this->Code;
  this->Code = this->Code + 1;
  return EVar1;
}

// Read<__int64> @ 1421fb760

long64 __thiscall FFrame::Read<__int64>(FFrame *this)

{
  long64 lVar1;
  
  lVar1 = *(long64 *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 8);
  return lVar1;
}

// Read<unsigned___int64> @ 1421fb780

ulong64 __thiscall FFrame::Read<unsigned___int64>(FFrame *this)

{
  ulong64 uVar1;
  
  uVar1 = *(ulong64 *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 8);
  return uVar1;
}

// ReadInt<int> @ 1421fb7a0

int __thiscall FFrame::ReadInt<int>(FFrame *this)

{
  int iVar1;
  
  iVar1 = *(int *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 4);
  return iVar1;
}

// ReadInt<double> @ 1421fb7c0

double __thiscall FFrame::ReadInt<double>(FFrame *this)

{
  double dVar1;
  
  dVar1 = *(double *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 8);
  return dVar1;
}

// ReadInt<__int64> @ 1421fb7e0

long64 __thiscall FFrame::ReadInt<__int64>(FFrame *this)

{
  long64 lVar1;
  
  lVar1 = *(long64 *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 8);
  return lVar1;
}

// ReadInt<unsigned___int64> @ 1421fb800

ulong64 __thiscall FFrame::ReadInt<unsigned___int64>(FFrame *this)

{
  ulong64 uVar1;
  
  uVar1 = *(ulong64 *)this->Code;
  this->Code = (uchar *)((longlong)this->Code + 8);
  return uVar1;
}

// FFrame @ 1421fe500

FFrame * __thiscall
FFrame::FFrame(FFrame *this,UObject *param_1,UFunction *param_2,void *param_3,FFrame *param_4,
              FField *param_5)

{
  uchar *puVar1;
  longlong lVar2;
  FFrame *pFVar3;
  code *pcVar4;
  bool bVar5;
  uchar uVar6;
  int iVar7;
  FTlsAutoCleanup *pFVar8;
  FFrame *pFVar9;
  FFrame *local_28;
  code *local_20;
  FFrame **local_18;
  
  FOutputDevice::FOutputDevice((FOutputDevice *)this);
  pFVar9 = param_4;
  this->Node = param_2;
  this->Object = param_1;
  this->_padding_ = (longlong)&___7FFrame__6B_;
  puVar1 = (uchar *)param_2->_padding_;
  (this->FlowStack).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  this->Code = puVar1;
  this->MostRecentProperty = (FProperty *)0x0;
  this->MostRecentPropertyAddress = (uchar *)0x0;
  this->MostRecentPropertyContainer = (uchar *)0x0;
  this->Locals = param_3;
  (this->FlowStack).ArrayNum = 0;
  (this->FlowStack).ArrayMax = 8;
  this->PropertyChainForCompiledIn = param_5;
  local_18 = &param_4;
  this->OutParms = (FOutParmRec *)0x0;
  this->CurrentNativeFunction = (UFunction *)0x0;
  this->bArrayContextFailed = false;
  this->bAbortingExecution = false;
  this->DepthCounter = '\0';
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this->PreviousFrame = param_4;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  local_28 = this;
  if (((ulonglong)pFVar8[4] <= &local_28) &&
     (&local_28 < (FFrame **)((longlong)pFVar8[4] + (longlong)*(int *)&pFVar8[5].field_0x4 * 8))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FFrame *)(*pcVar4)();
      return pFVar9;
    }
  }
  iVar7 = *(int *)(pFVar8 + 5);
  if (iVar7 == *(int *)&pFVar8[5].field_0x4) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(pFVar8 + 4),(int *)&pFVar8[5].field_0x4);
  }
  *(int *)(pFVar8 + 5) = iVar7 + 1;
  *(FFrame **)(*(FScriptContainerElement **)(pFVar8 + 4) + (longlong)iVar7 * 8) = local_28;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar3 = *(FFrame **)(lVar2 + 0xce8);
  *(FFrame **)(lVar2 + 0xce8) = this;
  this->PreviousTrackingFrame = pFVar3;
  if (pFVar3 != (FFrame *)0x0) {
    this->bAbortingExecution = (bool)(this->bAbortingExecution | pFVar3->bAbortingExecution);
  }
  if (pFVar9 != (FFrame *)0x0) {
    this->bAbortingExecution = (bool)(this->bAbortingExecution | pFVar9->bAbortingExecution);
    if (pFVar9->DepthCounter == 0xff) {
      uVar6 = 0xff;
    }
    else {
      uVar6 = pFVar9->DepthCounter + '\x01';
    }
    this->DepthCounter = uVar6;
  }
  return this;
}

// ~FFrame @ 142200d50

void __thiscall FFrame::~FFrame(FFrame *this)

{
  FTlsAutoCleanup *pFVar1;
  void *_Dst;
  FFrame *pFVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FTlsAutoCleanup *pFVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  this->_padding_ = (longlong)&___7FFrame__6B_;
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  if (*(int *)(pFVar7 + 5) != 0) {
    if (*(int *)(pFVar7 + 5) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = *(int *)(pFVar7 + 5) - 1;
    _Dst = (void *)((longlong)pFVar7[4] + (longlong)(int)uVar8 * 8);
    iVar6 = ~uVar8 + *(int *)(pFVar7 + 5);
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
    }
    pFVar1 = pFVar7 + 5;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
    if (*(int *)pFVar1 != 0) {
      uVar9 = *(int *)(pFVar7 + 5) - 1;
      uVar8 = 0;
      if ((int)uVar9 < *(int *)(pFVar7 + 5)) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (*(FFrame **)((longlong)pFVar7[4] + -8 + (longlong)*(int *)(pFVar7 + 5) * 8) !=
          this->PreviousTrackingFrame) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4006681261367099570>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Stack.h"
                           ,0xb2,
                           "BlueprintExceptionTracker.ScriptStack.Last() == PreviousTrackingFrame");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      goto LAB_142200ef4;
    }
  }
  if (this->PreviousTrackingFrame != (FFrame *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4006681261367099566>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Stack.h"
                       ,0xae,"PreviousTrackingFrame == nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_142200ef4:
  pFVar2 = this->PreviousTrackingFrame;
  *(FFrame **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xce8) = pFVar2
  ;
  if (pFVar2 != (FFrame *)0x0) {
    pFVar2->bAbortingExecution = (bool)(pFVar2->bAbortingExecution | this->bAbortingExecution);
  }
  FVar3 = (this->FlowStack).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  return;
}

// GetScriptCallstack @ 14220ef60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FFrame::GetScriptCallstack(FString *__return_storage_ptr__,bool param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_2068 [32];
  FString local_2048;
  TStringBuilderWithBuffer<wchar_t,4096> local_2038;
  ulonglong local_18 [2];
  
  local_18[1] = 0x14220ef75;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_2068;
  local_2038._padding_ = (longlong)local_2038.StringBuffer;
  local_2038._padding_._0_2_ = 0;
  local_2038._padding_ = (longlong)local_2038.StringBuffer;
  local_2038._padding_ = (longlong)local_18;
  GetScriptCallstack((TStringBuilderBase<wchar_t> *)&local_2038,param_1,param_2);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_2048,(wchar_t *)local_2038._padding_,
                      (int)(local_2038._padding_ - local_2038._padding_ >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_2048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2048.Data.AllocatorInstance.Data);
  }
  TStringBuilderWithBuffer<wchar_t,4096>::~TStringBuilderWithBuffer<wchar_t,4096>(&local_2038);
  return __return_storage_ptr__;
}

// GetScriptCallstack @ 14220f060

void __cdecl
FFrame::GetScriptCallstack(TStringBuilderBase<wchar_t> *param_1,bool param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  FTlsAutoCleanup *pFVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res20 [8];
  code *local_38;
  undefined1 *local_30;
  
  local_30 = local_res20;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  iVar1 = *(int *)(pFVar6 + 5);
  if (iVar1 < 1) {
    if (!param_2) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_1,L"\t[Empty] (FFrame::GetScriptCallstack() called from native code)",0x3f);
      return;
    }
  }
  else {
    if ((iVar1 < 2) || (param_3)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar7 = iVar1 - 1;
    lVar8 = (longlong)(int)uVar7;
    lVar9 = lVar8;
    do {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"\t",1);
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(pFVar6 + 5)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      GetStackDescription(*(FFrame **)((longlong)pFVar6[4] + lVar9 * 8),param_1);
      if ((lVar9 == lVar8) && (bVar3)) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L" <---",5);
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"\n",1);
      lVar9 = lVar9 + -1;
      uVar7 = uVar7 - 1;
    } while ((-1 < (int)uVar7) && (!param_3));
  }
  return;
}

// GetStackDescription @ 14220f4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall FFrame::GetStackDescription(FFrame *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FString *pFVar3;
  int iVar4;
  undefined1 auStack_288 [32];
  FString local_268;
  FName local_258 [2];
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  local_248.bIsDynamic = false;
  local_248.bIsExternal = false;
  local_248.Base = local_228;
  local_248.CurPos = local_228;
  local_248.End = (wchar_t *)local_28;
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)this->Node->_padding_,(UObject *)0x0,&local_248);
  if (local_248.End < local_248.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_248,1);
  }
  pvVar2 = FGenericPlatformString::Memcpy(local_248.CurPos,L".",2);
  local_248.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
  local_258[0] = (FName)this->Node->_padding_;
  ::FName::ToString(local_258,&local_268);
  iVar4 = local_268.Data.ArrayNum + -1;
  if (local_268.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_248,(wchar_t *)local_268.Data.AllocatorInstance.Data,iVar4);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = ::FString::ConstructFromPtrSize
                     (&local_268,local_248.Base,
                      (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
  if (__return_storage_ptr__ != pFVar3) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
  return __return_storage_ptr__;
}

// GetStackDescription @ 14220f670

void __thiscall FFrame::GetStackDescription(FFrame *this,TStringBuilderBase<wchar_t> *param_1)

{
  TStringBuilderBase<wchar_t> *this_00;
  int iVar1;
  FName local_res8;
  FString local_18;
  
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)this->Node->_padding_,(UObject *)0x0,param_1);
  this_00 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L".",1);
  local_res8 = (FName)this->Node->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (this_00,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetStackTrace @ 14220f710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall FFrame::GetStackTrace(FFrame *this,FString *__return_storage_ptr__)

{
  FFrame *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString *pFVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_20d8 [32];
  FFrame **local_20b8;
  FScriptContainerElement *local_20b0;
  longlong local_20a8;
  longlong local_20a0;
  undefined8 local_2098;
  ForAnyElementType local_2088;
  uint local_2080;
  uint uStack_207c;
  undefined1 local_2078 [8];
  FFrame *local_2070;
  FString local_2068;
  TStringBuilderWithBuffer<wchar_t,4096> local_2058;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_20d8;
  local_2058._padding_ = (longlong)local_2058.StringBuffer;
  local_2058._padding_ = (longlong)local_2058.StringBuffer;
  local_2058._padding_ = (longlong)local_38;
  local_2088.Data = (FScriptContainerElement *)0x0;
  local_2058._padding_._0_2_ = 0;
  local_2080 = 0;
  uStack_207c = 0;
  local_2070 = this;
  if (this != (FFrame *)0x0) {
    do {
      if ((local_2088.Data <= (FScriptContainerElement *)&local_2070) &&
         ((FScriptContainerElement *)&local_2070 < local_2088.Data + (longlong)(int)uStack_207c * 8)
         ) {
        local_20a0 = (longlong)(int)local_2080;
        local_2098 = 8;
        local_20b8 = &local_2070;
        local_20b0 = local_2088.Data;
        local_20a8 = (longlong)(int)uStack_207c;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar2)();
          return pFVar5;
        }
      }
      if (local_2080 == uStack_207c) {
        local_2080 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_2088,(int *)&uStack_207c);
      }
      uVar7 = local_2080 + 1;
      *(FFrame **)(local_2088.Data + (longlong)(int)local_2080 * 8) = local_2070;
      local_2070 = local_2070->PreviousFrame;
      local_2080 = uVar7;
    } while (local_2070 != (FFrame *)0x0);
    if (0 < (int)uVar7) {
      if ((ulonglong)local_2058._padding_ < (wchar_t *)(local_2058._padding_ + 0x26)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2058,0x13);
      }
      pvVar6 = FGenericPlatformString::Memcpy
                         ((void *)local_2058._padding_,L"Script call stack:\n",0x26);
      uVar7 = local_2080;
      FVar3.Data = local_2088.Data;
      uVar8 = (ulonglong)(int)local_2080;
      local_2058._padding_ = (longlong)pvVar6 + 0x26;
      pFVar9 = local_2088.Data + uVar8 * 8;
      while( true ) {
        if ((uint)uVar8 != uVar7) {
          `TCheckedPointerIterator<FFrame_const_*,int,1>::operator!='::__l2::<lambda_1>::operator()
                    (local_2078);
        }
        if (pFVar9 == FVar3.Data) break;
        pFVar1 = *(FFrame **)(pFVar9 + -8);
        pFVar9 = pFVar9 + -8;
        if ((ulonglong)local_2058._padding_ < (ulonglong *)(local_2058._padding_ + 2U)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2058,1);
        }
        pvVar6 = FGenericPlatformString::Memcpy((void *)local_2058._padding_,L"\t",2);
        local_2058._padding_ = (longlong)pvVar6 + 2;
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pFVar1->Node,(TStringBuilderBase<wchar_t> *)&local_2058,
                   (UObject *)0x0,None);
        if ((ulonglong)local_2058._padding_ < (ulonglong *)(local_2058._padding_ + 2U)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2058,1);
        }
        pvVar6 = FGenericPlatformString::Memcpy((void *)local_2058._padding_,L"\n",2);
        uVar8 = (ulonglong)local_2080;
        local_2058._padding_ = (longlong)pvVar6 + 2;
      }
      goto LAB_14220f9b9;
    }
  }
  if ((ulonglong)local_2058._padding_ < (wchar_t *)(local_2058._padding_ + 0x98)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2058,0x4c);
  }
  pvVar6 = FGenericPlatformString::Memcpy
                     ((void *)local_2058._padding_,
                      L"Script call stack: [Empty] (FFrame::GetStackTrace() called from native code)"
                      ,0x98);
  local_2058._padding_ = (longlong)pvVar6 + 0x98;
LAB_14220f9b9:
  if (local_2088.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2088.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar5 = ::FString::ConstructFromPtrSize
                     (&local_2068,(wchar_t *)local_2058._padding_,
                      (int)(local_2058._padding_ - local_2058._padding_ >> 1));
  if (__return_storage_ptr__ != pFVar5) {
    pFVar9 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_2068.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2068.Data.AllocatorInstance.Data);
  }
  TStringBuilderWithBuffer<wchar_t,4096>::~TStringBuilderWithBuffer<wchar_t,4096>(&local_2058);
  return __return_storage_ptr__;
}

// GetStackTrace @ 14220fa80

void __thiscall FFrame::GetStackTrace(FFrame *this,TStringBuilderBase<wchar_t> *param_1)

{
  FFrame *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FFrame *local_38;
  ForAnyElementType local_30;
  uint local_28;
  uint local_24 [3];
  
  local_28 = 0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_24[0] = 0;
  local_38 = this;
  if (this != (FFrame *)0x0) {
    do {
      if (((local_30.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < local_30.Data + (longlong)(int)local_24[0] * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_28 == local_24[0]) {
        local_28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_30,(int *)local_24);
      }
      uVar5 = local_28 + 1;
      *(FFrame **)(local_30.Data + (longlong)(int)local_28 * 8) = local_38;
      local_38 = local_38->PreviousFrame;
      local_28 = uVar5;
    } while (local_38 != (FFrame *)0x0);
    if (0 < (int)uVar5) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"Script call stack:\n",0x13);
      uVar5 = local_28;
      FVar3.Data = local_30.Data;
      uVar6 = (ulonglong)(int)local_28;
      pFVar7 = local_30.Data + uVar6 * 8;
      while( true ) {
        if ((uint)uVar6 != uVar5) {
          `TCheckedPointerIterator<FFrame_const_*,int,1>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar7 == FVar3.Data) break;
        pFVar1 = *(FFrame **)(pFVar7 + -8);
        pFVar7 = pFVar7 + -8;
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"\t",1);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pFVar1->Node,param_1,(UObject *)0x0,None);
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"\n",1);
        uVar6 = (ulonglong)local_28;
      }
      goto LAB_14220fc16;
    }
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,L"Script call stack: [Empty] (FFrame::GetStackTrace() called from native code)"
             ,0x4c);
LAB_14220fc16:
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return;
}

// GetThreadLocalTopStackFrame @ 14220fc60

FFrame * __cdecl FFrame::GetThreadLocalTopStackFrame(void)

{
  return *(FFrame **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xce8);
}

// InitPrintScriptCallstack @ 142211e20

void __cdecl FFrame::InitPrintScriptCallstack(void)

{
  GPrintScriptCallStackFn = PrintScriptCallStackImpl;
  return;
}

// KismetExecutionMessage @ 1422132e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FFrame::KismetExecutionMessage(wchar_t *param_1,Type param_2,FName param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  void *pvVar8;
  FString *pFVar9;
  FTlsAutoCleanup *pFVar10;
  FScriptExceptionHandler *this;
  ulong64 uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_20e8 [32];
  undefined1 local_20b8 [8];
  wchar_t *local_20b0;
  FName local_20a8;
  FString local_20a0;
  code *local_2090;
  undefined1 *local_2088;
  FString local_2080;
  TStringBuilderWithBuffer<wchar_t,4096> local_2068;
  ulonglong local_48 [2];
  
  local_48[1] = 0x1422132fd;
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_20e8;
  local_20b0 = param_1;
  if (param_2 < Display) {
    pwVar6 = FCommandLine::Get();
    bVar4 = FParse::Param(pwVar6,L"FATALSCRIPTWARNINGS");
    if (!bVar4) goto LAB_142213344;
    param_2 = Fatal;
LAB_1422133b8:
    local_2068._padding_ = (longlong)local_48;
    local_2068._padding_ = (longlong)local_2068.StringBuffer;
    local_2068._padding_._0_2_ = 0;
    local_2068._padding_ = local_2068._padding_;
    sVar7 = wcslen(param_1);
    if (((int)sVar7 < 1) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7634585018982989155>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                           ,0x29d,
                           "Verbosity > ELogVerbosity::Warning || FCString::Strlen(Message) > 0"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_2 < Warning) || (bVar4 = ShowKismetScriptStackOnWarnings(), bVar4)) {
      local_2068._padding_ = local_2068._padding_;
      if ((ulonglong)local_2068._padding_ < (wchar_t *)(local_2068._padding_ + 0x26)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,0x13);
      }
      pvVar8 = FGenericPlatformString::Memcpy
                         ((void *)local_2068._padding_,L"Script call stack:\n",0x26);
      local_2068._padding_ = (longlong)pvVar8 + 0x26;
      local_2088 = local_20b8;
      local_2090 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FBlueprintContextTracker>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
      pFVar10 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2090,
                           &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBlueprintContextTracker>::GetTlsSlot(void)'
                            ::__l2::TlsSlot);
      iVar12 = *(int *)(pFVar10 + 5);
      if (iVar12 < 1) {
        if ((ulonglong)local_2068._padding_ < (wchar_t *)(local_2068._padding_ + 0x7e)) {
          TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,0x3f);
        }
        pvVar8 = FGenericPlatformString::Memcpy
                           ((void *)local_2068._padding_,
                            L"\t[Empty] (FFrame::GetScriptCallstack() called from native code)",0x7e
                           );
        local_2068._padding_ = (longlong)pvVar8 + 0x7e;
        param_1 = local_20b0;
      }
      else {
        uVar13 = iVar12 - 1;
        lVar14 = (longlong)(int)uVar13;
        lVar15 = lVar14;
        do {
          if ((ulonglong)local_2068._padding_ < (wchar_t *)(local_2068._padding_ + 2)) {
            TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,1);
          }
          pvVar8 = FGenericPlatformString::Memcpy((void *)local_2068._padding_,L"\t",2);
          local_2068._padding_ = (longlong)pvVar8 + 2;
          uVar5 = 0;
          if ((int)uVar13 < *(int *)(pFVar10 + 5)) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)((longlong)pFVar10[4] + lVar15 * 8);
          UObjectBaseUtility::GetPathName
                    (*(UObjectBaseUtility **)(*(longlong *)(lVar2 + 0x10) + 0x20),(UObject *)0x0,
                     (TStringBuilderBase<wchar_t> *)&local_2068);
          if ((ulonglong)local_2068._padding_ < (ulonglong *)(local_2068._padding_ + 2)) {
            TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,1);
          }
          pvVar8 = FGenericPlatformString::Memcpy((void *)local_2068._padding_,L".",2);
          local_2068._padding_ = (longlong)pvVar8 + 2;
          local_20a8 = *(FName *)(*(longlong *)(lVar2 + 0x10) + 0x18);
          ::FName::ToString(&local_20a8,&local_20a0);
          iVar16 = local_20a0.Data.ArrayNum + -1;
          if (local_20a0.Data.ArrayNum == 0) {
            iVar16 = 0;
          }
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)&local_2068,
                     (wchar_t *)local_20a0.Data.AllocatorInstance.Data,iVar16);
          if (local_20a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_20a0.Data.AllocatorInstance.Data);
          }
          if ((lVar15 == lVar14) && (1 < iVar12)) {
            if ((ulonglong)local_2068._padding_ < (ulonglong *)(local_2068._padding_ + 10)) {
              TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,5);
            }
            pvVar8 = FGenericPlatformString::Memcpy((void *)local_2068._padding_,L" <---",10);
            local_2068._padding_ = (longlong)pvVar8 + 10;
          }
          if ((ulonglong)local_2068._padding_ < (ulonglong *)(local_2068._padding_ + 2)) {
            TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,1);
          }
          pvVar8 = FGenericPlatformString::Memcpy((void *)local_2068._padding_,L"\n",2);
          lVar15 = lVar15 + -1;
          uVar13 = uVar13 - 1;
          local_2068._padding_ = (longlong)pvVar8 + 2;
          param_1 = local_20b0;
        } while (-1 < (int)uVar13);
      }
      goto LAB_142213763;
    }
    lVar15 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xce8);
    if (lVar15 != 0) {
      local_2068._padding_ = local_2068._padding_;
      if ((ulonglong)local_2068._padding_ < (wchar_t *)(local_2068._padding_ + 0x2c)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,0x16);
      }
      pvVar8 = FGenericPlatformString::Memcpy
                         ((void *)local_2068._padding_,L"Script Msg called by: ",0x2c);
      local_2068._padding_ = (longlong)pvVar8 + 0x2c;
      pFVar9 = UObjectBaseUtility::GetFullName
                         (*(UObjectBaseUtility **)(lVar15 + 0x18),&local_2080,(UObject *)0x0,None);
      iVar16 = (pFVar9->Data).ArrayNum;
      pFVar1 = (pFVar9->Data).AllocatorInstance.Data;
      iVar12 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar12 = 0;
      }
      uVar11 = (ulong64)iVar12;
      if ((ulonglong)local_2068._padding_ < (wchar_t *)(local_2068._padding_ + uVar11 * 2)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,uVar11);
      }
      if (iVar12 != 0) {
        pvVar8 = FGenericPlatformString::Memcpy((void *)local_2068._padding_,pFVar1,uVar11 * 2);
        local_2068._padding_ = (longlong)pvVar8 + uVar11 * 2;
      }
      if (local_2080.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2080.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
LAB_142213344:
    if ((param_2 == Warning) && (param_3 != (FName)0x0)) {
      bVar4 = FBlueprintSupport::ShouldTreatWarningAsError(param_3);
      if (bVar4) {
        param_2 = Error;
        goto LAB_1422133b8;
      }
      bVar4 = FBlueprintSupport::ShouldSuppressWarning(param_3);
      if (bVar4) {
        return;
      }
    }
    local_2068._padding_._0_2_ = 0;
    local_2068._padding_ = (longlong)local_2068.StringBuffer;
    local_2068._padding_ = (longlong)local_48;
    local_2068._padding_ = (longlong)local_2068.StringBuffer;
    if (param_2 < Display) goto LAB_1422133b8;
LAB_142213763:
    if (param_2 == Fatal) {
      if ((ulonglong)local_2068._padding_ < (wchar_t *)(local_2068._padding_ + 2)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,1);
      }
      *(wchar_t *)local_2068._padding_ = L'\0';
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogScriptCore);
      goto LAB_1422137f4;
    }
  }
  if ((param_2 & VerbosityMask) <= (byte)LogScriptCore._0_1_) {
    this = FScriptExceptionHandler::Get();
    if ((ulonglong)local_2068._padding_ < (wchar_t *)(local_2068._padding_ + 2)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_2068,1);
    }
    *(wchar_t *)local_2068._padding_ = L'\0';
    FScriptExceptionHandler::HandleException(this,param_2,param_1,(wchar_t *)local_2068._padding_);
  }
LAB_1422137f4:
  TStringBuilderWithBuffer<wchar_t,4096>::~TStringBuilderWithBuffer<wchar_t,4096>(&local_2068);
  return;
}

// PopThreadLocalTopStackFrame @ 142215b20

void __cdecl FFrame::PopThreadLocalTopStackFrame(FFrame *param_1)

{
  *(FFrame **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xce8) =
       param_1;
  return;
}

// PushThreadLocalTopStackFrame @ 142218870

FFrame * __cdecl FFrame::PushThreadLocalTopStackFrame(FFrame *param_1)

{
  longlong lVar1;
  FFrame *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pFVar2 = *(FFrame **)(lVar1 + 0xce8);
  *(FFrame **)(lVar1 + 0xce8) = param_1;
  return pFVar2;
}

// Serialize @ 14221cd40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFrame::Serialize(FFrame *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  bool bVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_2 == Warning) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pwVar4 = FCommandLine::Get();
      GTreatScriptWarningsFatal = FParse::Param(pwVar4,L"FATALSCRIPTWARNINGS");
      _Init_thread_footer(&::_TSS0);
    }
    if (GTreatScriptWarningsFatal == false) {
LAB_14221cda7:
      if (GShortScriptWarnings == 0) {
        if ((byte)LogScript._0_1_ < 3) {
          return;
        }
        bVar1 = ShowKismetScriptStackOnWarnings();
        if (bVar1) {
          pFVar2 = GetStackTrace(this,&local_38);
          pFVar3 = ::FString::FString(&local_48,L"\r\n");
          ::FString::ConcatFF(&local_58,pFVar3,pFVar2);
        }
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this->Node,&local_78,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this->Object,&local_68,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if ((FName)local_78.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((bVar1) && ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if ((bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar1) {
          return;
        }
      }
      else {
        if ((byte)LogScript._0_1_ < 3) {
          return;
        }
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)this->Node->_padding_;
        ::FName::ToString((FName *)&local_78,&local_58);
        local_78.Data.AllocatorInstance.Data._0_4_ = *(uint *)&this->Object->field_0x18;
        local_78.Data.AllocatorInstance.Data._4_4_ = *(uint *)&this->Object->field_0x1c;
        ::FName::ToString((FName *)&local_78,&local_68);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScript);
        local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
          local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        }
      }
      goto LAB_14221d042;
    }
  }
  else if (param_2 != Error) goto LAB_14221cda7;
  GetStackTrace(this,&local_78);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this->Node,&local_68,(UObject *)0x0,None);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this->Object,&local_58,(UObject *)0x0,None);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogScriptCore);
  if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_38.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    local_38.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
LAB_14221d042:
  if ((FName)local_38.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Step @ 14222dfb0

/* WARNING: Switch with 1 destination removed at 0x00014222dfd6 : 255 cases all go to same
   destination */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFrame::Step(FFrame *this,UObject *param_1,void *param_2)

{
  UFunction *pUVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FString *pFVar8;
  uchar *puVar9;
  FString FStack_78;
  TSharedPtr<FCulture,1> TStack_68;
  FText FStack_58;
  FText FStack_48;
  FText FStack_38;
  FText FStack_28;
  FTextFormat FStack_18;
  
  this->Code = this->Code + 1;
  pUVar1 = this->Node;
  TStack_68.Object = (FCulture *)0x0;
  TStack_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  if (pUVar1 == (UFunction *)0x0) {
    puVar9 = (uchar *)0x0;
  }
  else {
    if (((int)pUVar1->_padding_ < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar9 = this->Code + (-1 - pUVar1->_padding_);
  }
  pFVar4 = FText::AsNumber(&FStack_38,(ulong64)puVar9,(FNumberFormattingOptions *)0x0,&TStack_68);
  ::FString::PrintfImpl(&FStack_78,L"0x%02X");
  pFVar5 = FText::FromString(&FStack_28,&FStack_78);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_48,L"ScriptCore",L"UndefinedOpcode",
                      L"Encountered an undefined opcode ({0}) at byte offset {1}. The compiler may have generated an instruction sequence that was unexpected or incomplete."
                     );
  pFVar7 = FTextFormat::FTextFormat(&FStack_18,pFVar6,Default);
  FText::Format<FText,FText>(&FStack_58,pFVar7,pFVar5,pFVar4);
  if (FStack_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_48.TextData.Reference + 0x10))();
  }
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  pFVar8 = FText::ToString(&FStack_58);
  FOutputDevice::Log((FOutputDevice *)this,Error,pFVar8);
  if (FStack_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_58.TextData.Reference + 0x10))();
  }
  return;
}

// StepExplicitProperty @ 14222dfe0

void __thiscall FFrame::StepExplicitProperty(FFrame *this,void *param_1,FProperty *param_2)

{
  FOutParmRec *pFVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  
  if (((uint)(int)param_2->PropertyFlags >> 8 & 1) != 0) {
    pFVar1 = this->OutParms;
    pFVar2 = pFVar1->Property;
    while (pFVar2 != param_2) {
      pFVar1 = pFVar1->NextOutParm;
      pFVar2 = pFVar1->Property;
    }
    this->MostRecentPropertyAddress = pFVar1->PropAddr;
    this->MostRecentPropertyContainer = (uchar *)0x0;
    return;
  }
  puVar3 = this->Locals;
  if ((param_2->ArrayDim < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((puVar3 == (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->MostRecentPropertyAddress = puVar3 + param_2->Offset_Internal;
  this->MostRecentPropertyContainer = this->Locals;
                    /* WARNING: Could not recover jumptable at 0x00014222e0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2->_padding_ + 0x110))(param_2,param_1);
  return;
}

