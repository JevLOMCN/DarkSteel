// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 28

// strchr @ 15018fa11

char * __cdecl strchr(char *_Str,int _Val)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strchr(_Str,_Val);
  return pcVar1;
}

// memcpy @ 15018fa1d

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}

// memmove @ 15018fa29

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}

// memset @ 15018fa35

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}

// _purecall @ 15018fa41

void _purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fa41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _purecall();
  return;
}

// strstr @ 15018fa4d

char * __cdecl strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strstr(_Str,_SubStr);
  return pcVar1;
}

// wcsstr @ 15018fa59

wchar_t * __cdecl wcsstr(wchar_t *_Str,wchar_t *_SubStr)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsstr(_Str,_SubStr);
  return pwVar1;
}

// memcmp @ 15018fa65

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}

// strrchr @ 15018fa71

char * __cdecl strrchr(char *_Str,int _Ch)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strrchr(_Str,_Ch);
  return pcVar1;
}

// wcschr @ 15018fa7d

wchar_t * __cdecl wcschr(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcschr(_Str,_Ch);
  return pwVar1;
}

// wcsrchr @ 15018fa89

wchar_t * __cdecl wcsrchr(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t *pwVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pwVar1 = wcsrchr(_Str,_Ch);
  return pwVar1;
}

// _set_purecall_handler @ 15018fa95

_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler)

{
  _purecall_handler p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fa95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _set_purecall_handler(_Handler);
  return p_Var1;
}

// __C_specific_handler @ 15018faa1

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EXCEPTION_DISPOSITION
__C_specific_handler
          (_EXCEPTION_RECORD *ExceptionRecord,void *EstablisherFrame,_CONTEXT *ContextRecord,
          _DISPATCHER_CONTEXT *DispatcherContext)

{
  EXCEPTION_DISPOSITION EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018faa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = __C_specific_handler(ExceptionRecord,EstablisherFrame,ContextRecord,DispatcherContext);
  return EVar1;
}

// memchr @ 15018faad

void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018faad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memchr(_Buf,_Val,_MaxCount);
  return pvVar1;
}

// __std_terminate @ 15018fab9

void __std_terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_terminate();
  return;
}

// longjmp @ 15018fac5

void __cdecl longjmp(_JBTYPE *_Buf,int _Value)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fac5. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  longjmp(_Buf,_Value);
  return;
}

// __std_exception_copy @ 15018fad1

void __std_exception_copy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_copy();
  return;
}

// __std_exception_destroy @ 15018fadd

void __std_exception_destroy(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fadd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_destroy();
  return;
}

// _CxxThrowException @ 15018fae9

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fae9. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}

// __std_type_info_compare @ 15018fb01

void __std_type_info_compare(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_type_info_compare();
  return;
}

// __RTDynamicCast @ 15018fb0d

void __RTDynamicCast(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __RTDynamicCast();
  return;
}

// __CxxFrameHandler3 @ 15018fb19

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb19. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}

// __RTtypeid @ 15018fb25

void __RTtypeid(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __RTtypeid();
  return;
}

// __std_type_info_name @ 15018fb31

void __std_type_info_name(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_type_info_name();
  return;
}

// _setjmp @ 15018fb3d

void _setjmp(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __intrinsic_setjmp();
  return;
}

// __current_exception @ 15018fb49

void __current_exception(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception();
  return;
}

// __current_exception_context @ 15018fb55

void __current_exception_context(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __current_exception_context();
  return;
}

// __std_type_info_destroy_list @ 15018fb61

void __std_type_info_destroy_list(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015018fb61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_type_info_destroy_list();
  return;
}

