// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 5

// Call @ 14311cc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FCookOnTheFlyServerConnection *this;
  ICookOnTheFlyServerTransport *pIVar1;
  FCookOnTheFlyServerConnection *apFStackX_8 [4];
  code *pcStack_18;
  FCookOnTheFlyServerConnection **ppFStack_10;
  
  this = *(FCookOnTheFlyServerConnection **)param_1;
  ppFStack_10 = apFStackX_8;
  pcStack_18 = TFunctionRefCaller<`FCookOnTheFlyServerConnection::ThreadEntry'::__l2::<lambda_1>,bool>
               ::Call;
  apFStackX_8[0] = this;
  FCookOnTheFlyServerConnection::ProcessMessagesWhile
            (this,(TFunctionRef<bool___cdecl(void)> *)&pcStack_18);
  if (3 < (byte)LogCotfServerConnection._0_1_) {
    Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)
               &`private:_void___cdecl_FCookOnTheFlyServerConnection::ThreadEntry(void)___ptr64'::
                __l3::LOG_Static,(FLogCategoryBase *)&LogCotfServerConnection);
  }
  FCookOnTheFlyServerConnection::Flush(this);
  pIVar1 = (this->Transport).Ptr;
  if (pIVar1 != (ICookOnTheFlyServerTransport *)0x0) {
    (this->Transport).Ptr = (ICookOnTheFlyServerTransport *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014311c523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// Call @ 14311cc70

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCookOnTheFlyServerConnection::SingleThreadedTickFunction'::__l2::<lambda_1>,bool>
::Call(void *param_1)

{
  char cVar1;
  
  if (*(longlong **)(*(longlong *)param_1 + 0x30) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x30) + 0x20))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// Call @ 14311cca0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCookOnTheFlyServerConnection::ThreadEntry'::__l2::<lambda_1>,bool>::Call
          (void *param_1)

{
  return *(char *)(*(longlong *)param_1 + 0x70) == '\0';
}

// Call @ 14311ccc0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCookOnTheFlyServerConnection::SendRequest'::__l29::<lambda_1>,bool>::Call
          (void *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)param_1;
  if (*(int *)(lVar1 + 0xe0) != *(int *)(lVar1 + 0x10c)) {
    lVar3 = *(longlong *)(lVar1 + 0x118);
    if (*(longlong *)(lVar1 + 0x118) == 0) {
      lVar3 = lVar1 + 0x110;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar1 + 0x120) - 1U & *(uint *)((longlong)param_1 + 8)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar1 + 0xd8) + (longlong)iVar2 * 0x18) ==
            *(uint *)((longlong)param_1 + 8)) goto LAB_14311c5ac;
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0xd8) + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14311c5ac:
  return iVar2 != -1;
}

// Call @ 14311ccd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FCookOnTheFlyServerConnection *local_res8 [4];
  code *local_18;
  FCookOnTheFlyServerConnection **local_10;
  
  local_res8[0] = *(FCookOnTheFlyServerConnection **)param_1;
  local_10 = local_res8;
  local_18 = TFunctionRefCaller<`FCookOnTheFlyServerConnection::SingleThreadedTickFunction'::__l2::<lambda_1>,bool>
             ::Call;
  FCookOnTheFlyServerConnection::ProcessMessagesWhile
            (local_res8[0],(TFunctionRef<bool___cdecl(void)> *)&local_18);
  return;
}

