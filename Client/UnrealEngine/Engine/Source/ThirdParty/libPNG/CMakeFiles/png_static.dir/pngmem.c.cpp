// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 12

// png_destroy_png_struct @ 140dc61f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl png_destroy_png_struct(png_struct_def_conflict *param_1)

{
  code *pcVar1;
  undefined1 auStack_548 [32];
  png_struct_def_conflict local_528;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_548;
  if (param_1 != (png_struct_def_conflict *)0x0) {
    memcpy(&local_528,param_1,0x510);
    memset(param_1,0,0x510);
    if (local_528.free_fn == (_func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *)0x0) {
      free(param_1);
    }
    else {
      (*local_528.free_fn)(&local_528,param_1);
    }
    png_free_jmpbuf(&local_528);
  }
  if ((local_10 ^ (ulonglong)auStack_548) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// png_free @ 140dc6290

void __cdecl png_free(png_struct_def_conflict *param_1,void *param_2)

{
  if (param_2 == (void *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
  if (param_1->free_fn != (_func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140dc62af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_1->free_fn)(param_1,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc62b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_2);
  return;
}

// png_calloc @ 140dc62d0

void * __cdecl png_calloc(png_struct_def_conflict *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (param_1->malloc_fn == (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0) {
      pvVar1 = malloc(param_2);
    }
    else {
      pvVar1 = (*param_1->malloc_fn)(param_1,param_2);
    }
    if (pvVar1 != (void *)0x0) {
      pvVar1 = memset(pvVar1,0,param_2);
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Out of memory");
}

// png_malloc @ 140dc6340

void * __cdecl png_malloc(png_struct_def_conflict *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (param_1->malloc_fn == (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0) {
      pvVar1 = malloc(param_2);
    }
    else {
      pvVar1 = (*param_1->malloc_fn)(param_1,param_2);
    }
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Out of memory");
}

// png_malloc_base @ 140dc63a0

void * __cdecl png_malloc_base(png_struct_def_conflict *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_1 != (png_struct_def_conflict *)0x0) &&
     (param_1->malloc_fn != (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140dc63b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*param_1->malloc_fn)(param_1,param_2);
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc63bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(param_2);
  return pvVar1;
}

// png_malloc_array @ 140dc63d0

void * __cdecl png_malloc_array(png_struct_def_conflict *param_1,int param_2,ulong64 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  void *pvVar3;
  size_t _Size;
  
  if ((param_2 < 1) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array alloc");
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_2);
  if ((SUB168(auVar1 * auVar2,8) == 0) && (_Size = CONCAT44(0,param_2) * param_3, _Size != 0)) {
    if ((param_1 != (png_struct_def_conflict *)0x0) &&
       (param_1->malloc_fn != (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140dc6409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (*param_1->malloc_fn)(param_1,_Size);
      return pvVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000140dc641a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar3 = malloc(_Size);
    return pvVar3;
  }
  return (void *)0x0;
}

// png_realloc_array @ 140dc6440

void * __cdecl
png_realloc_array(png_struct_def_conflict *param_1,void *param_2,int param_3,int param_4,
                 ulong64 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  void *_Dst;
  ulonglong uVar3;
  size_t sVar4;
  
  if ((((param_3 < 0) || (param_4 < 1)) || (param_5 == 0)) ||
     (param_3 != 0 && param_2 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array realloc");
  }
  if ((((uint)param_4 <= (param_3 ^ 0x7fffffffU)) &&
      (uVar3 = CONCAT44(0,param_4 + param_3), auVar1._8_8_ = 0, auVar1._0_8_ = param_5,
      auVar2._8_8_ = 0, auVar2._0_8_ = uVar3, SUB168(auVar1 * auVar2,8) == 0)) &&
     (sVar4 = uVar3 * param_5, sVar4 != 0)) {
    if ((param_1 == (png_struct_def_conflict *)0x0) ||
       (param_1->malloc_fn == (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0)) {
      _Dst = malloc(sVar4);
    }
    else {
      _Dst = (*param_1->malloc_fn)(param_1,sVar4);
    }
    if (_Dst != (void *)0x0) {
      if (param_3 == 0) {
        sVar4 = 0;
      }
      else {
        sVar4 = (uint)param_3 * param_5;
        memcpy(_Dst,param_2,sVar4);
      }
      memset((void *)(sVar4 + (longlong)_Dst),0,(uint)param_4 * param_5);
      return _Dst;
    }
  }
  return (void *)0x0;
}

// png_malloc_default @ 140dc6530

void * __cdecl png_malloc_default(png_struct_def_conflict *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  if (param_1 == (png_struct_def_conflict *)0x0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    pvVar1 = malloc(param_2);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Out of Memory");
}

// png_malloc_warn @ 140dc6580

void * __cdecl png_malloc_warn(png_struct_def_conflict *param_1,ulong64 param_2)

{
  void *pvVar1;
  
  if (param_1 != (png_struct_def_conflict *)0x0) {
    if (param_2 != 0) {
      if (param_1->malloc_fn == (_func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *)0x0) {
        pvVar1 = malloc(param_2);
      }
      else {
        pvVar1 = (*param_1->malloc_fn)(param_1,param_2);
      }
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
    }
    png_warning(param_1,"Out of memory");
  }
  return (void *)0x0;
}

// png_free_default @ 140dc65e0

void __cdecl png_free_default(png_struct_def_conflict *param_1,void *param_2)

{
  if (param_2 == (void *)0x0 || param_1 == (png_struct_def_conflict *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140dc65f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_2);
  return;
}

// png_set_mem_fn @ 140dc6610

void __cdecl
png_set_mem_fn(png_struct_def_conflict *param_1,void *param_2,
              _func___cdecl_void_ptr_png_struct_def_ptr_ulong64_conflict *param_3,
              _func___cdecl_void_png_struct_def_ptr_void_ptr_conflict *param_4)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    param_1->mem_ptr = param_2;
    param_1->malloc_fn = param_3;
    param_1->free_fn = param_4;
  }
  return;
}

// png_get_mem_ptr @ 140dc6640

void * __cdecl png_get_mem_ptr(png_struct_def_conflict *param_1)

{
  if (param_1 != (png_struct_def_conflict *)0x0) {
    return param_1->mem_ptr;
  }
  return (void *)0x0;
}

