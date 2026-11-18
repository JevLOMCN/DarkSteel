// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 69

// OodleDelete<oo2::OodleJobWaitSet> @ 14f3d48a0

void __cdecl oo2::OodleDelete<oo2::OodleJobWaitSet>(OodleJobWaitSet *param_1)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&(param_1->m_all_handles).field_0x110 = 0;
  puVar1 = *(undefined1 **)&(param_1->m_all_handles).field_0x100;
  if ((puVar1 != (undefined1 *)0x0) &&
     ((vector_st<unsigned___int64,32> *)puVar1 != &param_1->m_all_handles)) {
    (*g_fp_OodleCore_Plugin_Free)(puVar1);
  }
  *(undefined8 *)&(param_1->m_all_handles).field_0x100 = 0;
  *(undefined8 *)&(param_1->m_all_handles).field_0x108 = 0;
                    /* WARNING: Could not recover jumptable at 0x00014f3d4901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleDeleteVirtual<oo2::OodleJobBase> @ 14f3d4920

void __cdecl oo2::OodleDeleteVirtual<oo2::OodleJobBase>(OodleJobBase *param_1)

{
  (**(code **)*param_1)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014f3d4938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// default_construct<unsigned___int64> @ 14f3d4950

ulong64 * __cdecl oo2::default_construct<unsigned___int64>(ulong64 *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct<oo2::OodleJobWaitSet> @ 14f3d4960

OodleJobWaitSet * __cdecl oo2::destruct<oo2::OodleJobWaitSet>(OodleJobWaitSet *param_1)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&(param_1->m_all_handles).field_0x110 = 0;
  puVar1 = *(undefined1 **)&(param_1->m_all_handles).field_0x100;
  if ((puVar1 != (undefined1 *)0x0) &&
     ((vector_st<unsigned___int64,32> *)puVar1 != &param_1->m_all_handles)) {
    (*g_fp_OodleCore_Plugin_Free)(puVar1);
  }
  *(undefined8 *)&(param_1->m_all_handles).field_0x100 = 0;
  *(undefined8 *)&(param_1->m_all_handles).field_0x108 = 0;
  return param_1;
}

// destruct<unsigned___int64> @ 14f3d49d0

ulong64 * __cdecl oo2::destruct<unsigned___int64>(ulong64 *param_1)

{
  return param_1;
}

// destruct<unsigned___int64> @ 14f3d49e0

ulong64 * __cdecl oo2::destruct<unsigned___int64>(ulong64 *param_1,ulong64 param_2)

{
  return param_1;
}

// destruct_virtual<oo2::OodleJobBase> @ 14f3d4a00

OodleJobBase * __cdecl oo2::destruct_virtual<oo2::OodleJobBase>(OodleJobBase *param_1)

{
  (**(code **)*param_1)(param_1,0);
  return param_1;
}

// move<unsigned___int64_&> @ 14f3d4a20

ulong64 * __cdecl oo2::move<unsigned___int64_&>(ulong64 *param_1)

{
  return param_1;
}

// move_construct<unsigned___int64> @ 14f3d4a30

void __cdecl oo2::move_construct<unsigned___int64>(ulong64 *param_1,ulong64 *param_2)

{
  if (param_1 != (ulong64 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// move_construct<unsigned___int64> @ 14f3d4a50

void __cdecl
oo2::move_construct<unsigned___int64>(ulong64 *param_1,ulong64 *param_2,ulong64 param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      if (param_1 != (ulong64 *)0x0) {
        *param_1 = *(ulong64 *)(lVar1 + (longlong)param_1);
      }
      param_1 = param_1 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> @ 14f3d4a80

vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> * __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::
vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  this->m_size = 0;
  return this;
}

// vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> @ 14f3d4ab0

vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::
vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  return this;
}

// vector_st<unsigned___int64,32> @ 14f3d4ae0

vector_st<unsigned___int64,32> * __thiscall
oo2::vector_st<unsigned___int64,32>::vector_st<unsigned___int64,32>
          (vector_st<unsigned___int64,32> *this)

{
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  return this;
}

// vector_storage_st<unsigned___int64,32> @ 14f3d4b10

vector_storage_st<unsigned___int64,32> * __thiscall
oo2::vector_storage_st<unsigned___int64,32>::vector_storage_st<unsigned___int64,32>
          (vector_storage_st<unsigned___int64,32> *this)

{
  this->m_begin = (ulong64 *)0x0;
  this->m_capacity = 0;
  return this;
}

// OodleJobWaitSet @ 14f3d4b30

OodleJobWaitSet * __thiscall oo2::OodleJobWaitSet::OodleJobWaitSet(OodleJobWaitSet *this)

{
  this->m_parent = (OodleJobWaitSet *)0x0;
  this->m_user_ptr = (void *)0x0;
  this->m_nhandles = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x100 = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x108 = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x110 = 0;
  return this;
}

// ~vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> @ 14f3d4b60

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::
~vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *pvVar1;
  
  this->m_size = 0;
  pvVar1 = *(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
            &this->field_0x100;
  if ((pvVar1 != (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0)
     && (pvVar1 != this)) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar1);
  }
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  return;
}

// ~vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> @ 14f3d4bc0

void __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::
~vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *pvVar1;
  
  *(undefined8 *)&this->field_0x110 = 0;
  pvVar1 = *(vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
            &this->field_0x100;
  if ((pvVar1 != (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0)
     && (pvVar1 != this)) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar1);
  }
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  return;
}

// ~vector_st<unsigned___int64,32> @ 14f3d4c20

void __thiscall
oo2::vector_st<unsigned___int64,32>::~vector_st<unsigned___int64,32>
          (vector_st<unsigned___int64,32> *this)

{
  vector_st<unsigned___int64,32> *pvVar1;
  
  *(undefined8 *)&this->field_0x110 = 0;
  pvVar1 = *(vector_st<unsigned___int64,32> **)&this->field_0x100;
  if ((pvVar1 != (vector_st<unsigned___int64,32> *)0x0) && (pvVar1 != this)) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar1);
  }
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  return;
}

// ~vector_storage_st<unsigned___int64,32> @ 14f3d4c80

void __thiscall
oo2::vector_storage_st<unsigned___int64,32>::~vector_storage_st<unsigned___int64,32>
          (vector_storage_st<unsigned___int64,32> *this)

{
  vector_storage_st<unsigned___int64,32> *pvVar1;
  
  pvVar1 = (vector_storage_st<unsigned___int64,32> *)this->m_begin;
  if ((pvVar1 != (vector_storage_st<unsigned___int64,32> *)0x0) && (pvVar1 != this)) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar1);
  }
  this->m_begin = (ulong64 *)0x0;
  this->m_capacity = 0;
  return;
}

// ~OodleJobWaitSet @ 14f3d4ce0

void __thiscall oo2::OodleJobWaitSet::~OodleJobWaitSet(OodleJobWaitSet *this)

{
  undefined1 *puVar1;
  
  *(undefined8 *)&(this->m_all_handles).field_0x110 = 0;
  puVar1 = *(undefined1 **)&(this->m_all_handles).field_0x100;
  if ((puVar1 != (undefined1 *)0x0) &&
     ((vector_st<unsigned___int64,32> *)puVar1 != &this->m_all_handles)) {
    (*g_fp_OodleCore_Plugin_Free)(puVar1);
  }
  *(undefined8 *)&(this->m_all_handles).field_0x100 = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x108 = 0;
  return;
}

// operator[] @ 14f3d4d40

ulong64 * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::operator[]
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this,
          ulong64 param_1)

{
  return (ulong64 *)(*(longlong *)&this->field_0x100 + param_1 * 8);
}

// OodleFree @ 14f3d4d60

void __cdecl oo2::OodleFree(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3d4d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleFreeSized @ 14f3d4d70

void __cdecl oo2::OodleFreeSized(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f3d4d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// OodleJobWaitSet_Create @ 14f3d4d80

OodleJobWaitSet * __cdecl oo2::OodleJobWaitSet_Create(ulong64 *param_1,long64 param_2,void *param_3)

{
  OodleJobWaitSet *this;
  
  this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x140,0x10);
  if (this == (OodleJobWaitSet *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x140);
  }
  memset(&this->_padding_,0,0x128);
  this->m_parent = (OodleJobWaitSet *)0x0;
  this->m_user_ptr = (void *)0x0;
  this->m_nhandles = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x100 = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x108 = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x110 = 0;
  OodleJobWaitSet::init(this,(OodleJobWaitSet *)0x0,param_1,param_2,param_3);
  return this;
}

// OodleJobWaitSet_CreateChained @ 14f3d4e40

OodleJobWaitSet * __cdecl
oo2::OodleJobWaitSet_CreateChained
          (OodleJobWaitSet *param_1,ulong64 *param_2,long64 param_3,void *param_4)

{
  OodleJobWaitSet *this;
  
  this = (*g_fp_OodleCore_Plugin_MallocAligned)(0x140,0x10);
  if (this == (OodleJobWaitSet *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(0x140);
  }
  memset(&this->_padding_,0,0x128);
  this->m_parent = (OodleJobWaitSet *)0x0;
  this->m_user_ptr = (void *)0x0;
  this->m_nhandles = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x100 = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x108 = 0;
  *(undefined8 *)&(this->m_all_handles).field_0x110 = 0;
  OodleJobWaitSet::init(this,param_1,param_2,param_3,param_4);
  return this;
}

// OodleJobWaitSet_RootHandle @ 14f3d4f10

ulong64 __cdecl oo2::OodleJobWaitSet_RootHandle(OodleJobWaitSet *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(param_1->m_all_handles).field_0x110;
  if (lVar1 != 0) {
    return *(ulong64 *)(*(longlong *)&(param_1->m_all_handles).field_0x100 + -8 + lVar1 * 8);
  }
  return 0;
}

// OodleJobWaitSet_WaitAndDestroy @ 14f3d4f40

void __cdecl oo2::OodleJobWaitSet_WaitAndDestroy(OodleJobWaitSet *param_1)

{
  OodleJobWaitSet *pOVar1;
  undefined1 *puVar2;
  
  while (param_1 != (OodleJobWaitSet *)0x0) {
    pOVar1 = param_1->m_parent;
    OodleJobWaitSet::wait(param_1);
    *(undefined8 *)&(param_1->m_all_handles).field_0x110 = 0;
    puVar2 = *(undefined1 **)&(param_1->m_all_handles).field_0x100;
    if ((puVar2 != (undefined1 *)0x0) &&
       ((vector_st<unsigned___int64,32> *)puVar2 != &param_1->m_all_handles)) {
      (*g_fp_OodleCore_Plugin_Free)(puVar2);
    }
    *(undefined8 *)&(param_1->m_all_handles).field_0x100 = 0;
    *(undefined8 *)&(param_1->m_all_handles).field_0x108 = 0;
    (*g_fp_OodleCore_Plugin_Free)(param_1);
    param_1 = pOVar1;
  }
  return;
}

// OodleJob_Run @ 14f3d4fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
oo2::OodleJob_Run(_func___cdecl_void_void_ptr *param_1,void *param_2,ulong64 *param_3,int param_4,
                 void *param_5)

{
  ulong64 uVar1;
  int iVar2;
  ulong64 *puVar3;
  ulonglong uVar4;
  undefined1 auStackY_68 [32];
  ulong64 local_38 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar4 = (ulonglong)(uint)param_4;
  iVar2 = 0;
  if (0 < param_4) {
    puVar3 = local_38;
    do {
      if (*param_3 != 0) {
        iVar2 = iVar2 + 1;
        *puVar3 = *param_3;
        puVar3 = puVar3 + 1;
      }
      param_3 = param_3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar1 = (*g_fp_OodleCore_Plugin_RunJob)(param_1,param_2,local_38,iVar2,param_5);
  return uVar1;
}

// OodleJob_Wait @ 14f3d5060

void __cdecl oo2::OodleJob_Wait(ulong64 param_1,void *param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3d5065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_WaitJob)(param_1,param_2);
    return;
  }
  return;
}

// OodleJob_WaitAll @ 14f3d5080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl oo2::OodleJob_WaitAll(ulong64 *param_1,long64 param_2,void *param_3)

{
  undefined1 auStackY_198 [32];
  undefined1 local_158 [288];
  undefined1 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_158._0_8_ = (OodleJobWaitSet *)0x0;
  local_158._8_8_ = (void *)0x0;
  local_158._16_8_ = 0;
  local_38 = (undefined1 *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  OodleJobWaitSet::init((OodleJobWaitSet *)local_158,(OodleJobWaitSet *)0x0,param_1,param_2,param_3)
  ;
  OodleJobWaitSet::wait((OodleJobWaitSet *)local_158);
  local_28 = 0;
  if ((local_38 != (undefined1 *)0x0) && (local_38 != local_158 + 0x20)) {
    (*g_fp_OodleCore_Plugin_Free)(local_38);
  }
  return;
}

// OodleMalloc @ 14f3d5140

void * __cdecl oo2::OodleMalloc(long64 param_1)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// OodleMallocAligned @ 14f3d5190

void * __cdecl oo2::OodleMallocAligned(long64 param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = (*g_fp_OodleCore_Plugin_MallocAligned)(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed(param_1);
  }
  return pvVar1;
}

// Oodle_Null_Job_Func @ 14f3d51d0

void __cdecl oo2::Oodle_Null_Job_Func(void *param_1)

{
  return;
}

// StartOodleJobBase @ 14f3d51e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
oo2::StartOodleJobBase
          (OodleJobBase *param_1,void *param_2,bool param_3,ulong64 *param_4,int param_5)

{
  ulong64 uVar1;
  ulong64 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStackY_68 [32];
  ulong64 local_38 [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_68;
  iVar4 = 0;
  if (0 < param_5) {
    puVar2 = local_38;
    uVar3 = (ulonglong)(uint)param_5;
    do {
      if (*param_4 != 0) {
        iVar4 = iVar4 + 1;
        *puVar2 = *param_4;
        puVar2 = puVar2 + 1;
      }
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar1 = (*g_fp_OodleCore_Plugin_RunJob)(StartOodleJobBase_Job,param_1,local_38,iVar4,param_2);
  return uVar1;
}

// StartOodleJobBase_Job @ 14f3d5270

void __cdecl oo2::StartOodleJobBase_Job(void *param_1)

{
  (**(code **)(*(longlong *)param_1 + 8))();
  (*(code *)**(undefined8 **)param_1)(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014f3d5291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*g_fp_OodleCore_Plugin_Free)(param_1);
  return;
}

// ThreadProfiler_Pop @ 14f3d52a0

void __cdecl oo2::ThreadProfiler_Pop(ulong64 param_1)

{
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3d52ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Pop)(param_1);
    return;
  }
  return;
}

// ThreadProfiler_Push @ 14f3d52c0

ulong64 __cdecl oo2::ThreadProfiler_Push(char *param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  if (fp_ThreadProfiler_Push != (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3d52cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*fp_ThreadProfiler_Push)(param_1,param_2);
    return uVar1;
  }
  return 0xffffffffffffffff;
}

// ThreadProfiler_Tag @ 14f3d52e0

void __cdecl oo2::ThreadProfiler_Tag(char *param_1,ulong64 param_2)

{
  if (fp_ThreadProfiler_Tag != (_func___cdecl_void_char_ptr_ulong64 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f3d52ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*fp_ThreadProfiler_Tag)(param_1,param_2);
    return;
  }
  return;
}

// at @ 14f3d5300

ulong64 * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::at
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this,
          ulong64 param_1)

{
  return (ulong64 *)(*(longlong *)&this->field_0x100 + param_1 * 8);
}

// at @ 14f3d5320

ulong64 * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::at
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this,
          ulong64 param_1)

{
  return (ulong64 *)(*(longlong *)&this->field_0x100 + param_1 * 8);
}

// back @ 14f3d5340

ulong64 * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::back
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return (ulong64 *)(*(longlong *)&this->field_0x100 + *(longlong *)&this->field_0x110 * 8 + -8);
}

// begin @ 14f3d5360

ulong64 * __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::begin
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return *(ulong64 **)&this->field_0x100;
}

// begin @ 14f3d5370

ulong64 * __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::begin
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return *(ulong64 **)&this->field_0x100;
}

// begin @ 14f3d5380

ulong64 * __thiscall
oo2::vector_storage_st<unsigned___int64,32>::begin(vector_storage_st<unsigned___int64,32> *this)

{
  return this->m_begin;
}

// begin @ 14f3d5390

ulong64 * __thiscall
oo2::vector_storage_st<unsigned___int64,32>::begin(vector_storage_st<unsigned___int64,32> *this)

{
  return this->m_begin;
}

// capacity @ 14f3d53a0

ulong64 __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::capacity
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return *(ulong64 *)&this->field_0x108;
}

// capacity @ 14f3d53b0

ulong64 __thiscall
oo2::vector_storage_st<unsigned___int64,32>::capacity(vector_storage_st<unsigned___int64,32> *this)

{
  return this->m_capacity;
}

// data @ 14f3d53c0

ulong64 * __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::data
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  if (*(longlong *)&this->field_0x110 == 0) {
    return (ulong64 *)0x0;
  }
  return *(ulong64 **)&this->field_0x100;
}

// empty @ 14f3d53e0

bool __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::empty
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return *(longlong *)&this->field_0x110 == 0;
}

// extend_default @ 14f3d5400

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::extend_default
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this,
          ulong64 param_1)

{
  ulonglong uVar1;
  vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  uint uVar6;
  
  uVar5 = this->m_size;
  uVar1 = uVar5 + param_1;
  if (uVar1 <= *(ulonglong *)&this->field_0x108) {
    this->m_size = this->m_size + param_1;
    return;
  }
  if ((uVar1 < 0x21) &&
     ((*(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
        &this->field_0x100 ==
       (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0 ||
      (*(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
        &this->field_0x100 == this)))) {
    *(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
     &this->field_0x100 = this;
    *(undefined8 *)&this->field_0x108 = 0x20;
    this->m_size = this->m_size + param_1;
    return;
  }
  pvVar2 = *(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
            &this->field_0x100;
  uVar6 = (int)uVar1 * 8;
  puVar3 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)uVar6,0x10);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed((ulonglong)uVar6);
  }
  if (uVar5 != 0) {
    puVar4 = puVar3;
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *(undefined8 *)(((longlong)pvVar2 - (longlong)puVar3) + (longlong)puVar4);
      }
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(undefined8 **)&this->field_0x100 = puVar3;
  *(ulonglong *)&this->field_0x108 = uVar1;
  if ((pvVar2 != (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0)
     && (pvVar2 != this)) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar2);
  }
  this->m_size = this->m_size + param_1;
  return;
}

// init @ 14f3d5540

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::init
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  this->m_size = 0;
  return;
}

// init @ 14f3d5560

void __thiscall
oo2::vector_storage_st<unsigned___int64,32>::init(vector_storage_st<unsigned___int64,32> *this)

{
  this->m_begin = (ulong64 *)0x0;
  this->m_capacity = 0;
  return;
}

// init @ 14f3d5580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
oo2::OodleJobWaitSet::init
          (OodleJobWaitSet *this,OodleJobWaitSet *param_1,ulong64 *param_2,long64 param_3,
          void *param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulong64 *puVar5;
  ulong64 uVar6;
  ulong64 *puVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  ulong64 uVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  int iVar14;
  ulong64 uVar15;
  ulong64 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStackY_98 [32];
  ulong64 local_68 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_98;
  uVar10 = 0;
  uVar11 = uVar10;
  uVar15 = uVar10;
  if (((0 < param_3) && (uVar11 = 0, uVar15 = 0, 3 < (ulonglong)param_3)) && (1 < __isa_available))
  {
    lVar17 = 0;
    lVar18 = 0;
    lVar2 = 0;
    lVar3 = 0;
    uVar15 = uVar10;
    do {
      lVar17 = lVar17 + (~-(ulonglong)(param_2[uVar15] == 0) &
                         ___xmm_ffffffffffffffffffffffffffffffff &
                        ___xmm_00000000000000010000000000000001);
      lVar18 = lVar18 + (~-(ulonglong)((param_2 + uVar15)[1] == 0) & _UNK_15060db28 & _UNK_15071d228
                        );
      lVar4 = uVar15 + 2;
      uVar15 = uVar15 + 4;
      lVar2 = lVar2 + (~-(ulonglong)(param_2[lVar4] == 0) & ___xmm_ffffffffffffffffffffffffffffffff
                      & ___xmm_00000000000000010000000000000001);
      lVar3 = lVar3 + (~-(ulonglong)((param_2 + lVar4)[1] == 0) & _UNK_15060db28 & _UNK_15071d228);
    } while ((longlong)uVar15 < (longlong)(param_3 & 0xfffffffffffffffcU));
    auVar1._8_4_ = (int)(lVar3 + lVar18);
    auVar1._0_8_ = lVar2 + lVar17;
    auVar1._12_4_ = (int)((ulonglong)(lVar3 + lVar18) >> 0x20);
    uVar11 = lVar2 + lVar17 + auVar1._8_8_;
  }
  if (param_3 <= (longlong)uVar15) goto LAB_14f3d56ad;
  uVar6 = uVar10;
  uVar8 = uVar10;
  if ((longlong)(param_3 - uVar15) < 2) {
LAB_14f3d5699:
    uVar11 = uVar11 + (param_2[uVar15] != 0);
  }
  else {
    do {
      uVar6 = uVar6 + (param_2[uVar15] != 0);
      lVar2 = uVar15 + 1;
      uVar15 = uVar15 + 2;
      uVar8 = uVar8 + (param_2[lVar2] != 0);
    } while ((longlong)uVar15 < param_3 + -1);
    if ((longlong)uVar15 < param_3) goto LAB_14f3d5699;
  }
  uVar11 = uVar11 + uVar8 + uVar6;
LAB_14f3d56ad:
  this->m_parent = param_1;
  this->m_user_ptr = param_4;
  this->m_nhandles = uVar11;
  uVar15 = uVar11;
  uVar6 = uVar10;
  if ((longlong)uVar11 < 2) {
    vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::resize
              ((vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)
               &this->m_all_handles,uVar11);
    if ((uVar11 == 1) && (**(undefined8 **)&(this->m_all_handles).field_0x100 = 0, 0 < param_3)) {
      do {
        if (param_2[uVar10] != 0) {
          **(ulong64 **)&(this->m_all_handles).field_0x100 = param_2[uVar10];
          return;
        }
        uVar10 = uVar10 + 1;
      } while ((longlong)uVar10 < param_3);
    }
  }
  else {
    do {
      uVar15 = (longlong)(uVar15 + 3 + (ulonglong)((uint)((longlong)(uVar15 + 3) >> 0x3f) & 3)) >> 2
      ;
      uVar6 = uVar6 + uVar15;
    } while (1 < (longlong)uVar15);
    vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::resize
              ((vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)
               &this->m_all_handles,uVar6 + uVar11);
    uVar15 = uVar10;
    uVar6 = uVar10;
    if (0 < param_3) {
      do {
        if (param_2[uVar15] != 0) {
          *(ulong64 *)(uVar6 + *(longlong *)&(this->m_all_handles).field_0x100) = param_2[uVar15];
          uVar6 = uVar6 + 8;
        }
        uVar15 = uVar15 + 1;
      } while ((longlong)uVar15 < param_3);
    }
    uVar6 = uVar11;
    uVar8 = uVar10;
    uVar15 = uVar10;
    if (*(longlong *)&(this->m_all_handles).field_0x110 != 0) {
      uVar15 = *(ulong64 *)&(this->m_all_handles).field_0x100;
    }
    do {
      uVar12 = uVar6;
      puVar16 = (ulong64 *)(uVar15 + uVar8 * 8);
      uVar6 = uVar12;
      do {
        iVar14 = 0;
        uVar9 = 4;
        if (uVar11 < 4) {
          uVar9 = uVar11;
        }
        if (0 < (int)uVar9) {
          puVar7 = local_68;
          uVar13 = uVar9 & 0xffffffff;
          puVar5 = puVar16;
          uVar8 = uVar10;
          do {
            if (*puVar5 != 0) {
              uVar8 = (ulong64)((int)uVar8 + 1);
              *puVar7 = *puVar5;
              puVar7 = puVar7 + 1;
            }
            iVar14 = (int)uVar8;
            puVar5 = puVar5 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        uVar8 = (*g_fp_OodleCore_Plugin_RunJob)
                          (Oodle_Null_Job_Func,(void *)0x0,local_68,iVar14,param_4);
        *(ulong64 *)(uVar15 + uVar6 * 8) = uVar8;
        puVar16 = puVar16 + uVar9;
        uVar6 = uVar6 + 1;
        uVar11 = uVar11 - uVar9;
      } while (0 < (longlong)uVar11);
      uVar11 = uVar6 - uVar12;
      uVar8 = uVar12;
    } while (1 < (longlong)uVar11);
  }
  return;
}

// makefit1 @ 14f3d5860

ulong64 * __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::makefit1
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this,
          ulong64 param_1)

{
  undefined1 *puVar1;
  vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *pvVar2;
  vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *pvVar3;
  ulong64 uVar4;
  uint uVar5;
  ulong64 *puVar6;
  
  uVar4 = this->m_size;
  puVar1 = &this->field_0x100;
  if ((param_1 < 0x21) &&
     ((*(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)puVar1 ==
       (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0 ||
      (*(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)puVar1 ==
       this)))) {
    puVar6 = (ulong64 *)0x0;
    param_1 = 0x20;
    pvVar2 = this;
  }
  else {
    puVar6 = *(ulong64 **)puVar1;
    uVar5 = (int)param_1 * 8;
    pvVar2 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)uVar5,0x10);
    if (pvVar2 == (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      Oodle_Core_Malloc_Failed((ulonglong)uVar5);
    }
    if (uVar4 != 0) {
      pvVar3 = pvVar2;
      do {
        if (pvVar3 != (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)
                      0x0) {
          *(undefined8 *)pvVar3 =
               *(undefined8 *)(((longlong)puVar6 - (longlong)pvVar2) + (longlong)pvVar3);
        }
        pvVar3 = (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)
                 &pvVar3->field_0x8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  *(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)puVar1 = pvVar2;
  *(ulong64 *)&this->field_0x108 = param_1;
  return puVar6;
}

// makefit1 @ 14f3d5940

ulong64 * __thiscall
oo2::vector_storage_st<unsigned___int64,32>::makefit1
          (vector_storage_st<unsigned___int64,32> *this,ulong64 param_1,ulong64 param_2)

{
  ulong64 *puVar1;
  ulong64 *puVar2;
  ulong64 *puVar3;
  uint uVar4;
  
  if ((param_1 < 0x21) &&
     (((vector_storage_st<unsigned___int64,32> *)this->m_begin ==
       (vector_storage_st<unsigned___int64,32> *)0x0 ||
      ((vector_storage_st<unsigned___int64,32> *)this->m_begin == this)))) {
    this->m_begin = (ulong64 *)this;
    this->m_capacity = 0x20;
    return (ulong64 *)0x0;
  }
  uVar4 = (int)param_1 * 8;
  puVar1 = this->m_begin;
  puVar2 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)uVar4,0x10);
  if (puVar2 == (ulong64 *)0x0) {
                    /* WARNING: Subroutine does not return */
    Oodle_Core_Malloc_Failed((ulonglong)uVar4);
  }
  if (param_2 != 0) {
    puVar3 = puVar2;
    do {
      if (puVar3 != (ulong64 *)0x0) {
        *puVar3 = *(ulong64 *)(((longlong)puVar1 - (longlong)puVar2) + (longlong)puVar3);
      }
      puVar3 = puVar3 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  this->m_begin = puVar2;
  this->m_capacity = param_1;
  return puVar1;
}

// makefit2 @ 14f3d5a20

void __thiscall
oo2::vector_storage_st<unsigned___int64,32>::makefit2
          (vector_storage_st<unsigned___int64,32> *this,ulong64 *param_1,ulong64 param_2,
          ulong64 param_3)

{
  if ((param_1 != (ulong64 *)0x0) && ((vector_storage_st<unsigned___int64,32> *)param_1 != this)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3d5a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*g_fp_OodleCore_Plugin_Free)(param_1);
    return;
  }
  return;
}

// needmakefit @ 14f3d5a40

bool __thiscall
oo2::vector_storage_st<unsigned___int64,32>::needmakefit
          (vector_storage_st<unsigned___int64,32> *this,ulong64 param_1)

{
  return this->m_capacity < param_1;
}

// release @ 14f3d5a60

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::release
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *pvVar1;
  
  this->m_size = 0;
  pvVar1 = *(vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
            &this->field_0x100;
  if ((pvVar1 != (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0)
     && (pvVar1 != this)) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar1);
  }
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  return;
}

// release @ 14f3d5ac0

void __thiscall
oo2::vector_storage_st<unsigned___int64,32>::release(vector_storage_st<unsigned___int64,32> *this)

{
  vector_storage_st<unsigned___int64,32> *pvVar1;
  
  pvVar1 = (vector_storage_st<unsigned___int64,32> *)this->m_begin;
  if ((pvVar1 != (vector_storage_st<unsigned___int64,32> *)0x0) && (pvVar1 != this)) {
    (*g_fp_OodleCore_Plugin_Free)(pvVar1);
  }
  this->m_begin = (ulong64 *)0x0;
  this->m_capacity = 0;
  return;
}

// resize @ 14f3d5b20

void __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::resize
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this,
          ulong64 param_1)

{
  vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar4 = *(ulonglong *)&this->field_0x110;
  if (param_1 < uVar4) {
    *(ulong64 *)&this->field_0x110 = param_1;
    return;
  }
  lVar5 = param_1 - uVar4;
  if (*(ulonglong *)&this->field_0x108 < param_1) {
    if ((param_1 < 0x21) &&
       ((*(vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
          &this->field_0x100 ==
         (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)0x0 ||
        (*(vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
          &this->field_0x100 == this)))) {
      *(vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
       &this->field_0x100 = this;
      *(undefined8 *)&this->field_0x108 = 0x20;
    }
    else {
      pvVar1 = *(vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> **)
                &this->field_0x100;
      uVar6 = (int)param_1 * 8;
      puVar2 = (*g_fp_OodleCore_Plugin_MallocAligned)((long64)uVar6,0x10);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        Oodle_Core_Malloc_Failed((ulonglong)uVar6);
      }
      if (uVar4 != 0) {
        puVar3 = puVar2;
        do {
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = *(undefined8 *)(((longlong)pvVar1 - (longlong)puVar2) + (longlong)puVar3);
          }
          puVar3 = puVar3 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      *(undefined8 **)&this->field_0x100 = puVar2;
      *(ulong64 *)&this->field_0x108 = param_1;
      if ((pvVar1 != (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *)
                     0x0) && (pvVar1 != this)) {
        (*g_fp_OodleCore_Plugin_Free)(pvVar1);
      }
    }
  }
  *(longlong *)&this->field_0x110 = *(longlong *)&this->field_0x110 + lVar5;
  return;
}

// root_handle @ 14f3d5c50

ulong64 __thiscall oo2::OodleJobWaitSet::root_handle(OodleJobWaitSet *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&(this->m_all_handles).field_0x110;
  if (lVar1 != 0) {
    return *(ulong64 *)(*(longlong *)&(this->m_all_handles).field_0x100 + -8 + lVar1 * 8);
  }
  return 0;
}

// run @ 14f3d5c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
oo2::OodleJob::run(OodleJob *this,_func___cdecl_void_void_ptr *param_1,void *param_2,void *param_3,
                  bool param_4,ulong64 param_5,ulong64 param_6)

{
  ulonglong uVar1;
  ulong64 uVar2;
  uint uVar3;
  ulong64 *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStackY_98 [32];
  ulong64 local_68 [4];
  ulong64 local_48 [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_4) {
    if (param_5 != 0) {
      local_68[0] = param_5;
    }
    uVar1 = 0;
    iVar5 = 0;
    uVar3 = (uint)(param_5 != 0);
    if (param_6 != 0) {
      uVar3 = uVar3 + 1;
      local_68[param_5 != 0] = param_6;
    }
    if (uVar3 != 0) {
      puVar4 = local_48;
      uVar6 = uVar1;
      do {
        if (local_68[uVar1] != 0) {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          *puVar4 = local_68[uVar1];
          puVar4 = puVar4 + 1;
        }
        iVar5 = (int)uVar6;
        uVar1 = uVar1 + 1;
      } while ((longlong)uVar1 < (longlong)(ulonglong)uVar3);
    }
    uVar2 = (*g_fp_OodleCore_Plugin_RunJob)(param_1,param_2,local_48,iVar5,param_3);
    this->handle = uVar2;
  }
  else {
    (*param_1)(param_2);
  }
  return;
}

// shrink @ 14f3d5d60

void __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::shrink
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this,
          ulong64 param_1)

{
  this->m_size = param_1;
  return;
}

// size @ 14f3d5d70

ulong64 __thiscall
oo2::vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::size
          (vector_base<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return this->m_size;
}

// size @ 14f3d5d80

ulong64 __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::size
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return *(ulong64 *)&this->field_0x110;
}

// sizea @ 14f3d5d90

long64 __thiscall
oo2::vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_>::sizea
          (vector_flex<unsigned___int64,oo2::vector_storage_st<unsigned___int64,32>_> *this)

{
  return *(long64 *)&this->field_0x110;
}

// wait @ 14f3d5da0

void __thiscall oo2::OodleJobWaitSet::wait(OodleJobWaitSet *this)

{
  longlong lVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  
  if (fp_ThreadProfiler_Push == (_func___cdecl_ulong64_char_ptr_ulong64 *)0x0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = (*fp_ThreadProfiler_Push)("OodleJobWaitSet::wait",0);
  }
  lVar1 = *(longlong *)&(this->m_all_handles).field_0x110;
  while (lVar1 = lVar1 + -1, -1 < lVar1) {
    if ((lVar1 < this->m_nhandles) &&
       (fp_ThreadProfiler_Tag != (_func___cdecl_void_char_ptr_ulong64 *)0x0)) {
      (*fp_ThreadProfiler_Tag)
                ("wait",*(ulong64 *)(*(longlong *)&(this->m_all_handles).field_0x100 + lVar1 * 8));
    }
    uVar2 = *(ulong64 *)(*(longlong *)&(this->m_all_handles).field_0x100 + lVar1 * 8);
    if (uVar2 != 0) {
      (*g_fp_OodleCore_Plugin_WaitJob)(uVar2,this->m_user_ptr);
    }
  }
  if (fp_ThreadProfiler_Pop != (_func___cdecl_void_ulong64 *)0x0) {
    (*fp_ThreadProfiler_Pop)(uVar3);
  }
  return;
}

// dtor$0 @ 150285520

void `oo2::OodleJob_WaitAll'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::OodleJobWaitSet::~OodleJobWaitSet((OodleJobWaitSet *)(param_2 + 0x40));
  return;
}

// dtor$0 @ 150285540

void `oo2::OodleJobWaitSet::wait'::__l1::dtor_0(undefined8 param_1,longlong param_2)

{
  oo2::ThreadProfileScope::~ThreadProfileScope((ThreadProfileScope *)(param_2 + 0x40));
  return;
}

