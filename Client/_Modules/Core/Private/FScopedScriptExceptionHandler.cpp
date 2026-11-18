// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FScopedScriptExceptionHandler @ 1418558a0

FScopedScriptExceptionHandler * __thiscall
FScopedScriptExceptionHandler::FScopedScriptExceptionHandler
          (FScopedScriptExceptionHandler *this,
          TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)> *param_1)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTlsAutoCleanup *pFVar5;
  FScopedScriptExceptionHandler *pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  FTlsAutoCleanup FVar9;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FScriptExceptionHandler>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
  FVar1 = (FTlsAutoCleanup)(pFVar5 + 2);
  FVar9 = pFVar5[0x1a];
  if (pFVar5[0x1a] == (FTlsAutoCleanup)0x0) {
    FVar9 = FVar1;
  }
  if (((ulonglong)FVar9 <= param_1) &&
     (param_1 < (TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)> *)
                ((longlong)*(int *)&pFVar5[0x1c].field_0x4 * 0x30 + (longlong)FVar9))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FScopedScriptExceptionHandler *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = *(int *)(pFVar5 + 0x1c);
  if (iVar4 == *(int *)&pFVar5[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TFunction<void___cdecl(enum_ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>_>
                      (0x1030,(ForElementType<TFunction<void___cdecl(ELogVerbosity::Type,wchar_t_const_*,wchar_t_const_*)>_>
                               *)FVar1,(int *)&pFVar5[0x1c].field_0x4);
  }
  *(int *)(pFVar5 + 0x1c) = iVar4 + 1;
  FVar9 = pFVar5[0x1a];
  if (pFVar5[0x1a] == (FTlsAutoCleanup)0x0) {
    FVar9 = FVar1;
  }
  lVar7 = (longlong)iVar4 * 0x30;
  *(undefined8 *)((longlong)FVar9 + lVar7) = *(undefined8 *)param_1;
  *(undefined8 *)((longlong)FVar9 + lVar7 + 0x28) = 0;
  if (*(longlong *)((longlong)FVar9 + lVar7) != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  return this;
}

// ~FScopedScriptExceptionHandler @ 1418579b0

void __thiscall
FScopedScriptExceptionHandler::~FScopedScriptExceptionHandler(FScopedScriptExceptionHandler *this)

{
  FScriptExceptionHandler *this_00;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FScriptExceptionHandler>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_00 = (FScriptExceptionHandler *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
  FScriptExceptionHandler::PopExceptionHandler(this_00);
  return;
}

