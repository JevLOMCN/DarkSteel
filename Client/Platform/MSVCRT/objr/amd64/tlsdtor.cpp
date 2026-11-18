// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 7

// __dyn_tls_dtor @ 15015b648

void __cdecl __dyn_tls_dtor(void *param_1,ulong param_2,void *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int *_Memory;
  
  if ((param_2 == 3) || (param_2 == 0)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    _Memory = *(int **)(lVar1 + 0x9d50);
    if (*(int **)(lVar1 + 0x9d50) != (int *)0x0) {
      while( true ) {
        iVar3 = *_Memory + -1;
        if (-1 < iVar3) {
          plVar4 = (longlong *)(_Memory + ((longlong)iVar3 + 2) * 2);
          do {
            if (*plVar4 != 0) {
              (*__guard_dispatch_icall_fptr)();
            }
            plVar4 = plVar4 + -1;
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
        }
        piVar2 = *(int **)(_Memory + 2);
        if (piVar2 == (int *)0x0) break;
        free(_Memory);
        *(int **)(lVar1 + 0x9d50) = piVar2;
        _Memory = piVar2;
      }
      *(undefined8 *)(lVar1 + 0x9d50) = 0;
    }
  }
  return;
}

// operator()<TlsDtorNode> @ 15015b6f4

void __thiscall
__crt_internal_free_policy::operator()<TlsDtorNode>
          (__crt_internal_free_policy *this,TlsDtorNode *param_1)

{
  free(param_1);
  return;
}

// __crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy> @ 15015b704

__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy> * __thiscall
__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy>::
__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy>
          (__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy> *this,TlsDtorNode *param_1)

{
  this->_p = param_1;
  return this;
}

// ~__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy> @ 15015b714

void __thiscall
__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy>::
~__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy>
          (__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy> *this)

{
  free(this->_p);
  this->_p = (TlsDtorNode *)0x0;
  return;
}

// detach @ 15015b738

TlsDtorNode * __thiscall
__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy>::detach
          (__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy> *this)

{
  TlsDtorNode *pTVar1;
  
  pTVar1 = this->_p;
  this->_p = (TlsDtorNode *)0x0;
  return pTVar1;
}

// release @ 15015b74c

void __thiscall
__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy>::release
          (__crt_unique_heap_ptr<TlsDtorNode,__crt_internal_free_policy> *this)

{
  free(this->_p);
  this->_p = (TlsDtorNode *)0x0;
  return;
}

// __tlregdtor @ 15015b770

int __cdecl __tlregdtor(_func___cdecl_void *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar3 = *(int **)(lVar1 + 0x9d50);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)(lVar1 + 0x9d60);
  }
  else {
    iVar2 = *piVar3;
    if (iVar2 != 0x1e) goto LAB_15015b7e9;
    piVar3 = malloc(0x100);
    free((void *)0x0);
    if (piVar3 == (int *)0x0) {
      return -1;
    }
    *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(lVar1 + 0x9d50);
  }
  iVar2 = 0;
  *(int **)(lVar1 + 0x9d50) = piVar3;
  *piVar3 = 0;
LAB_15015b7e9:
  *(_func___cdecl_void **)(piVar3 + (longlong)iVar2 * 2 + 4) = param_1;
  *piVar3 = *piVar3 + 1;
  return 0;
}

