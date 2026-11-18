// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// AssertionExceptionHandler @ 141864020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FScriptExceptionHandler::AssertionExceptionHandler(Type param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *local_res10;
  wchar_t *local_res18 [2];
  wchar_t **local_18;
  wchar_t **local_10;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (param_1 < Warning) {
    local_18 = &local_res10;
    local_10 = local_res18;
    `FScriptExceptionHandler::AssertionExceptionHandler'::__l5::<lambda_1>::operator()(&local_18);
    return;
  }
  LoggingExceptionHandler(param_1,param_2,param_3);
  return;
}

// Get @ 141872470

FScriptExceptionHandler * __cdecl FScriptExceptionHandler::Get(void)

{
  FScriptExceptionHandler *pFVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FScriptExceptionHandler>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar1 = (FScriptExceptionHandler *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
  return pFVar1;
}

// HandleException @ 141877de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FScriptExceptionHandler::HandleException
          (FScriptExceptionHandler *this,Type param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
  FVar8;
  longlong lVar9;
  Type local_res8 [8];
  Type local_48 [8];
  wchar_t *local_40;
  wchar_t *local_38;
  wchar_t *local_30;
  wchar_t *local_28 [2];
  
  iVar1 = (this->ExceptionHandlerStack).ArrayNum;
  if (iVar1 < 1) {
    local_48[0] = param_1;
    local_30 = param_3;
    local_28[0] = param_2;
    UE::Core::Private::Function::CheckCallable((void *)DefaultExceptionHandler._0_8_);
    uVar5 = DefaultExceptionHandler._0_8_;
    plVar7 = (longlong *)&DefaultExceptionHandler.field_0x10;
    if (DefaultExceptionHandler._40_8_ != 0) {
      plVar7 = (longlong *)DefaultExceptionHandler._40_8_;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*(code *)uVar5)(uVar6,local_48,local_28,&local_30);
    return;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar8 = (this->ExceptionHandlerStack).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
                )0x0) {
    FVar8 = (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
             )&this->ExceptionHandlerStack;
  }
  lVar9 = (longlong)(this->ExceptionHandlerStack).ArrayNum * 0x30 + (longlong)FVar8;
  local_res8[0] = param_1;
  local_40 = param_3;
  local_38 = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar9 + -0x30));
  pcVar2 = *(code **)(lVar9 + -0x30);
  plVar7 = (longlong *)(lVar9 + -0x20);
  if (*(longlong **)(lVar9 + -8) != (longlong *)0x0) {
    plVar7 = *(longlong **)(lVar9 + -8);
  }
  uVar5 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar5,local_res8,&local_38,&local_40);
  return;
}

// LoggingExceptionHandler @ 14187da80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FScriptExceptionHandler::LoggingExceptionHandler(Type param_1,wchar_t *param_2,wchar_t *param_3)

{
  FMsg::Logf_InternalImpl
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CoreMisc.cpp"
             ,0x19d,(FName *)&LogScript.field_0x4,param_1,L"Script Msg: %s");
  if (*param_3 != L'\0') {
    FMsg::Logf_InternalImpl
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CoreMisc.cpp"
               ,0x1a0,(FName *)&LogScript.field_0x4,param_1,L"%s");
  }
  return;
}

// PopExceptionHandler @ 141885360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FScriptExceptionHandler::PopExceptionHandler(FScriptExceptionHandler *this)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
  FVar8;
  void *_Src;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((this->ExceptionHandlerStack).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExceptionHandlerStack.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\CoreMisc.cpp"
                       ,0x17c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ExceptionHandlerStack).ArrayNum;
  if (iVar5 < 1) {
    local_58 = 0;
    local_50 = (longlong)iVar5;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar6 = (longlong)(this->ExceptionHandlerStack).ArrayNum;
  FVar8 = (this->ExceptionHandlerStack).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
                )0x0) {
    FVar8 = (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
             )&this->ExceptionHandlerStack;
  }
  local_48 = *(longlong *)((longlong)FVar8 + -0x30 + lVar6 * 0x30);
  local_20 = (longlong *)((longlong *)((longlong)FVar8 + -8))[lVar6 * 6];
  ((longlong *)((longlong)FVar8 + -8))[lVar6 * 6] = 0;
  puVar2 = (undefined4 *)((longlong)FVar8 + -0x20 + lVar6 * 0x30);
  local_38 = *puVar2;
  uStack_34 = puVar2[1];
  uStack_30 = puVar2[2];
  uStack_2c = puVar2[3];
  local_28 = *(undefined8 *)
              ((((FScriptExceptionHandler *)((longlong)FVar8 + -0x10))->ExceptionHandlerStack).
               AllocatorInstance.InlineData + lVar6 * 0x30 + -0x10);
  if (local_48 != 0) {
    *(undefined8 *)((longlong)FVar8 + -0x30 + lVar6 * 0x30) = 0;
  }
  FVar8 = (this->ExceptionHandlerStack).AllocatorInstance.SecondaryData;
  iVar5 = (this->ExceptionHandlerStack).ArrayNum;
  if (FVar8 == (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
                )0x0) {
    FVar8 = (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
             )&this->ExceptionHandlerStack;
  }
  _Src = (void *)((longlong)iVar5 * 0x30 + (longlong)FVar8);
  if (*(longlong *)((longlong)_Src + -0x30) != 0) {
    plVar7 = (longlong *)((longlong)_Src + -0x20);
    if (*(longlong **)((longlong)_Src + -8) != (longlong *)0x0) {
      plVar7 = *(longlong **)((longlong)_Src + -8);
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  iVar5 = (this->ExceptionHandlerStack).ArrayNum - iVar5;
  if (iVar5 != 0) {
    memmove((void *)((longlong)_Src + -0x30),_Src,(longlong)iVar5 * 0x30);
  }
  piVar1 = &(this->ExceptionHandlerStack).ArrayNum;
  *piVar1 = *piVar1 + -1;
  if (local_48 != 0) {
    plVar7 = (longlong *)&local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// PushExceptionHandler @ 141886830

void __thiscall
FScriptExceptionHandler::PushExceptionHandler
          (FScriptExceptionHandler *this,
          TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)> *param_1)

{
  TArray<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
  FVar8;
  
  FVar8 = (this->ExceptionHandlerStack).AllocatorInstance.SecondaryData;
  pTVar1 = &this->ExceptionHandlerStack;
  if (FVar8 == (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
                )0x0) {
    FVar8 = (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
             )pTVar1;
  }
  if (((ulonglong)FVar8 <= param_1) &&
     (param_1 < (TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)> *)
                ((longlong)(this->ExceptionHandlerStack).ArrayMax * 0x30 + (longlong)FVar8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ExceptionHandlerStack).ArrayNum;
  piVar2 = &(this->ExceptionHandlerStack).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>_>
                      (0x1030,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ExceptionHandlerStack).ArrayNum = iVar5 + 1;
  FVar8 = (this->ExceptionHandlerStack).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
                )0x0) {
    FVar8 = (ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
             )pTVar1;
  }
  lVar6 = (longlong)iVar5 * 0x30;
  *(undefined8 *)((longlong)FVar8 + lVar6) = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)FVar8 + lVar6 + 0x28) = 0;
  if (*(longlong *)((longlong)FVar8 + lVar6) != 0) {
    puVar7 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar7)();
  }
  return;
}

// operator() @ 15047e030

bool __thiscall
`FScriptExceptionHandler::AssertionExceptionHandler'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<631469778602557841>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<631469778602557841>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

