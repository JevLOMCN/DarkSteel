// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 19

// _Compressed_pair<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>,std::_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>,1><> @ 150248660

/* public: __cdecl std::_Compressed_pair<class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > >,class std::_Vector_val<struct
   std::_Simple_types<class std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct
   std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> > >
   >,1>::_Compressed_pair<class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > >,class std::_Vector_val<struct
   std::_Simple_types<class std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct
   std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> > > >,1><>(struct
   std::_Zero_then_variadic_args_t) __ptr64 */

_Compressed_pair<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>,std::_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>,1>
* __thiscall
std::
_Compressed_pair<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>,std::_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>,1>
::
_Compressed_pair<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>,std::_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>,1><>
          (_Compressed_pair<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>,std::_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>,1>
           *this,_Zero_then_variadic_args_t param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// _Destroy_range<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_> @ 150248680

/* void __cdecl std::_Destroy_range<class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >(class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > * __ptr64,class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > * __ptr64 const,class std::allocator<class
   std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > & __ptr64) */

void __cdecl
std::
_Destroy_range<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
          (unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
           *param_1,
          unique_ptr<class_absl::lts_20240722::crc_internal::CRCImpl,struct_std::default_delete<class_absl::lts_20240722::crc_internal::CRCImpl>_>
          *param_2,allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
                   *param_3)

{
  undefined8 *puVar1;
  
  for (; param_1 !=
         (unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
          *)param_2; param_1 = param_1 + 8) {
    puVar1 = *(undefined8 **)param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

// _Unfancy<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_> @ 1502486d0

/* class std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct
   std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> > * __ptr64 __cdecl
   std::_Unfancy<class std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct
   std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> > >(class
   std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > * __ptr64) */

unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
* __cdecl std::
          _Unfancy<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
                    (unique_ptr<class_absl::lts_20240722::crc_internal::CRCImpl,struct_std::default_delete<class_absl::lts_20240722::crc_internal::CRCImpl>_>
                     *param_1)

{
  return (unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
          *)param_1;
}

// destroy<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_> @ 1502486e0

/* public: static void __cdecl std::_Default_allocator_traits<class std::allocator<class
   std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >::destroy<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > >(class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > & __ptr64,class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > * __ptr64 const) */

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
::
destroy<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
          (allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
           *param_1,
          unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
          *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_2;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001502486f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// destroy_at<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_> @ 150248700

/* void __cdecl std::destroy_at<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > >(class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > * __ptr64 const) */

void __cdecl
std::
destroy_at<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
          (unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
           *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150248710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// _Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_> @ 150248720

/* public: __cdecl std::_Vector_val<struct std::_Simple_types<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >::_Vector_val<struct std::_Simple_types<class
   std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >(void) __ptr64 */

_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
* __thiscall
std::
_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
::
_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
          (_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_> @ 150248740

/* public: __cdecl std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > >::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > >(void) __ptr64 */

allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
* __thiscall
std::
allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
::
allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
          (allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
           *this)

{
  return this;
}

// vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_> @ 150248750

/* public: __cdecl std::vector<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >,class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >::vector<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >,class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >(void) __ptr64 */

vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
* __thiscall
std::
vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
::
vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
          (vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return this;
}

// ~unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_> @ 150248770

/* public: __cdecl std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct
   std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> >::~unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >(void) __ptr64 */

void __thiscall
std::
unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
::
~unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
          (unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
           *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150248780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// ~vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_> @ 150248790

/* public: __cdecl std::vector<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >,class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >::~vector<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >,class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >(void) __ptr64 */

void __thiscall
std::
vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
::
~vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
          (vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
           *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong64 uVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)this;
  if (plVar6 != (longlong *)0x0) {
    plVar1 = *(longlong **)(this + 8);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      puVar2 = (undefined8 *)*plVar6;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    pvVar3 = *(void **)this;
    uVar5 = *(longlong *)(this + 0x10) - (longlong)pvVar3 & 0xfffffffffffffff8;
    pvVar4 = pvVar3;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar3 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar5);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// operator() @ 150248830

/* public: void __cdecl std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl>::operator()(class
   absl::lts_20240722::crc_internal::CRCImpl * __ptr64)const __ptr64 */

void __thiscall
std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>::operator()
          (default_delete<absl::lts_20240722::crc_internal::CRCImpl> *this,CRCImpl *param_1)

{
  if (param_1 != (CRCImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150248843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)param_1)(param_1,1);
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 150248850

/* public: void * __ptr64 __cdecl std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >::`scalar deleting destructor'(unsigned int) __ptr64
    */

void * __thiscall
std::
unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
::_scalar_deleting_destructor_
          (unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
           *this,uint param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewCRC32AcceleratedX86ARMCombinedAll @ 1502488a0

/* class std::vector<class std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct
   std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> >,class std::allocator<class
   std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > > __cdecl
   absl::lts_20240722::crc_internal::NewCRC32AcceleratedX86ARMCombinedAll(void) */

void __cdecl absl::lts_20240722::crc_internal::NewCRC32AcceleratedX86ARMCombinedAll(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0;
  in_RCX[1] = 0;
  in_RCX[2] = 0;
  return;
}

// TryNewCRC32AcceleratedX86ARMCombined @ 1502488c0

/* class absl::lts_20240722::crc_internal::CRCImpl * __ptr64 __cdecl
   absl::lts_20240722::crc_internal::TryNewCRC32AcceleratedX86ARMCombined(void) */

CRCImpl * __cdecl absl::lts_20240722::crc_internal::TryNewCRC32AcceleratedX86ARMCombined(void)

{
  return (CRCImpl *)0x0;
}

// _Get_first @ 1502488d0

/* public: struct std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> & __ptr64
   __cdecl std::_Compressed_pair<struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl>,class absl::lts_20240722::crc_internal::CRCImpl *
   __ptr64,1>::_Get_first(void) __ptr64 */

default_delete<absl::lts_20240722::crc_internal::CRCImpl> * __thiscall
std::
_Compressed_pair<std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>,absl::lts_20240722::crc_internal::CRCImpl*___ptr64,1>
::_Get_first(_Compressed_pair<std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>,absl::lts_20240722::crc_internal::CRCImpl*___ptr64,1>
             *this)

{
  return (default_delete<absl::lts_20240722::crc_internal::CRCImpl> *)this;
}

// _Get_first @ 1502488e0

/* public: class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > & __ptr64 __cdecl std::_Compressed_pair<class
   std::allocator<class std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct
   std::default_delete<class absl::lts_20240722::crc_internal::CRCImpl> > >,class
   std::_Vector_val<struct std::_Simple_types<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >,1>::_Get_first(void) __ptr64 */

allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
* __thiscall
std::
_Compressed_pair<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>,std::_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>,1>
::_Get_first(_Compressed_pair<std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>,std::_Vector_val<std::_Simple_types<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>,1>
             *this)

{
  return (allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
          *)this;
}

// _Getal @ 1502488f0

/* private: class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > & __ptr64 __cdecl std::vector<class
   std::unique_ptr<class absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >,class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >::_Getal(void) __ptr64 */

allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
* __thiscall
std::
vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
::_Getal(vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
         *this)

{
  return (allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
          *)this;
}

// _Tidy @ 150248900

/* private: void __cdecl std::vector<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> >,class std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > > >::_Tidy(void) __ptr64 */

void __thiscall
std::
vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
::_Tidy(vector<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>,std::allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>_>
        *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong64 uVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)this;
  if (plVar6 != (longlong *)0x0) {
    plVar1 = *(longlong **)(this + 8);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      puVar2 = (undefined8 *)*plVar6;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    pvVar3 = *(void **)this;
    uVar5 = *(longlong *)(this + 0x10) - (longlong)pvVar3 & 0xfffffffffffffff8;
    pvVar4 = pvVar3;
    if (0xfff < uVar5) {
      pvVar4 = *(void **)((longlong)pvVar3 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    ::operator_delete(pvVar4,uVar5);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

// deallocate @ 1502489a0

/* public: void __cdecl std::allocator<class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > >::deallocate(class std::unique_ptr<class
   absl::lts_20240722::crc_internal::CRCImpl,struct std::default_delete<class
   absl::lts_20240722::crc_internal::CRCImpl> > * __ptr64 const,unsigned __int64) __ptr64 */

void __thiscall
std::
allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
::deallocate(allocator<std::unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>_>
             *this,unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
                   *param_1,__uint64 param_2)

{
  unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
  *puVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  puVar1 = param_1;
  if (0xfff < uVar2) {
    puVar1 = *(unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
               **)(param_1 + -8);
    uVar2 = uVar2 + 0x27;
    if ((unique_ptr<absl::lts_20240722::crc_internal::CRCImpl,std::default_delete<absl::lts_20240722::crc_internal::CRCImpl>_>
         *)0x1f < param_1 + (-8 - (longlong)puVar1)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  ::operator_delete(puVar1,uVar2);
  return;
}

