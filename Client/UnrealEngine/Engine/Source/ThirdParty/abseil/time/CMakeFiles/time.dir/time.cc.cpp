// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 164

// duration<__int64,std::ratio<1,10000000>_><int,0> @ 14f8ff3a0

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >::duration<__int64,struct std::ratio<1,10000000> ><int,0>(int const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,10000000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,10000000>_>::
duration<__int64,std::ratio<1,10000000>_><int,0>
          (duration<__int64,std::ratio<1,10000000>_> *this,int *param_1)

{
  this->_MyRep = (longlong)*param_1;
  return this;
}

// civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag><absl::lts_20240722::time_internal::cctz::detail::day_tag> @ 14f8ff3b0

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag><struct
   absl::lts_20240722::time_internal::cctz::detail::day_tag>(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::day_tag> const & __ptr64,void * __ptr64) __ptr64
    */

civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag><absl::lts_20240722::time_internal::cctz::detail::day_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *param_1,
          void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  (this->f_).y = *(long64 *)param_1;
  (this->f_).m = (char)uVar1;
  (this->f_).d = (char)((ulonglong)uVar1 >> 8);
  (this->f_).hh = (char)((ulonglong)uVar1 >> 0x10);
  (this->f_).mm = (char)((ulonglong)uVar1 >> 0x18);
  (this->f_).ss = (char)((ulonglong)uVar1 >> 0x20);
  *(int3 *)&(this->f_).field_0xd = (int3)((ulonglong)uVar1 >> 0x28);
  return this;
}

// civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag><absl::lts_20240722::time_internal::cctz::detail::second_tag> @ 14f8ff3c0

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::day_tag>::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::day_tag><struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64,void * __ptr64)
   __ptr64 */

civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>::
civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag><absl::lts_20240722::time_internal::cctz::detail::second_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *this,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1,
          void *param_2)

{
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar1;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar2;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar3;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar4;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar5;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar6;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar7;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar8;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar9;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> cVar10;
  
  cVar1 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)&(param_1->f_).y;
  cVar2 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)
           ((longlong)&(param_1->f_).y + 1);
  cVar3 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)
           ((longlong)&(param_1->f_).y + 2);
  cVar4 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)
           ((longlong)&(param_1->f_).y + 3);
  cVar5 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)
           ((longlong)&(param_1->f_).y + 4);
  cVar6 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)
           ((longlong)&(param_1->f_).y + 5);
  cVar7 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)
           ((longlong)&(param_1->f_).y + 6);
  cVar8 = *(civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *)
           ((longlong)&(param_1->f_).y + 7);
  cVar9 = (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>)(param_1->f_).m;
  cVar10 = (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>)(param_1->f_).d;
  *(undefined2 *)(this + 10) = 0;
  this[0xc] = (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>)0x0;
  *this = cVar1;
  this[1] = cVar2;
  this[2] = cVar3;
  this[3] = cVar4;
  this[4] = cVar5;
  this[5] = cVar6;
  this[6] = cVar7;
  this[7] = cVar8;
  this[8] = cVar9;
  this[9] = cVar10;
  return this;
}

// civil_time<absl::lts_20240722::time_internal::second_tag><absl::lts_20240722::time_internal::cctz::detail::second_tag> @ 14f8ff3f0

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::second_tag><struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64,void * __ptr64)
   __ptr64 */

civil_time<absl::lts_20240722::time_internal::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::
civil_time<absl::lts_20240722::time_internal::second_tag><absl::lts_20240722::time_internal::cctz::detail::second_tag>
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1,
          void *param_2)

{
  schar sVar1;
  schar sVar2;
  schar sVar3;
  schar sVar4;
  schar sVar5;
  undefined3 uVar6;
  
  sVar1 = (param_1->f_).m;
  sVar2 = (param_1->f_).d;
  sVar3 = (param_1->f_).hh;
  sVar4 = (param_1->f_).mm;
  sVar5 = (param_1->f_).ss;
  uVar6 = *(undefined3 *)&(param_1->f_).field_0xd;
  (this->f_).y = (param_1->f_).y;
  (this->f_).m = sVar1;
  (this->f_).d = sVar2;
  (this->f_).hh = sVar3;
  (this->f_).mm = sVar4;
  (this->f_).ss = sVar5;
  *(undefined3 *)&(this->f_).field_0xd = uVar6;
  return this;
}

// civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag><absl::lts_20240722::time_internal::second_tag> @ 14f8ff400

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag><struct
   absl::lts_20240722::time_internal::second_tag>(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag> const & __ptr64,void * __ptr64) __ptr64 */

civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag><absl::lts_20240722::time_internal::second_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this,
          civil_time<absl::lts_20240722::time_internal::second_tag> *param_1,void *param_2)

{
  schar sVar1;
  schar sVar2;
  schar sVar3;
  schar sVar4;
  schar sVar5;
  undefined3 uVar6;
  
  sVar1 = (param_1->f_).m;
  sVar2 = (param_1->f_).d;
  sVar3 = (param_1->f_).hh;
  sVar4 = (param_1->f_).mm;
  sVar5 = (param_1->f_).ss;
  uVar6 = *(undefined3 *)&(param_1->f_).field_0xd;
  (this->f_).y = (param_1->f_).y;
  (this->f_).m = sVar1;
  (this->f_).d = sVar2;
  (this->f_).hh = sVar3;
  (this->f_).mm = sVar4;
  (this->f_).ss = sVar5;
  *(undefined3 *)&(this->f_).field_0xd = uVar6;
  return this;
}

// duration<__int64,std::ratio<1,1>_><__int64,0> @ 14f8ff410

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,1> >::duration<__int64,struct
   std::ratio<1,1> ><__int64,0>(__int64 const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,1>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,1>_>::duration<__int64,std::ratio<1,1>_><__int64,0>
          (duration<__int64,std::ratio<1,1>_> *this,__int64 *param_1)

{
  this->_MyRep = *param_1;
  return this;
}

// duration<__int64,std::ratio<1,1000000000>_><__int64,0> @ 14f8ff420

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,1000000000>
   >::duration<__int64,struct std::ratio<1,1000000000> ><__int64,0>(__int64 const & __ptr64) __ptr64
    */

duration<__int64,std::ratio<1,1000000000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,1000000000>_>::
duration<__int64,std::ratio<1,1000000000>_><__int64,0>
          (duration<__int64,std::ratio<1,1000000000>_> *this,__int64 *param_1)

{
  this->_MyRep = *param_1;
  return this;
}

// duration<__int64,std::ratio<1,10000000>_><__int64,0> @ 14f8ff430

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >::duration<__int64,struct std::ratio<1,10000000> ><__int64,0>(__int64 const & __ptr64) __ptr64
    */

duration<__int64,std::ratio<1,10000000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,10000000>_>::
duration<__int64,std::ratio<1,10000000>_><__int64,0>
          (duration<__int64,std::ratio<1,10000000>_> *this,__int64 *param_1)

{
  this->_MyRep = *param_1;
  return this;
}

// duration<__int64,std::ratio<1,10000000>_><__int64,std::ratio<1,1>,0> @ 14f8ff440

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >::duration<__int64,struct std::ratio<1,10000000> ><__int64,struct std::ratio<1,1>,0>(class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,10000000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,10000000>_>::
duration<__int64,std::ratio<1,10000000>_><__int64,std::ratio<1,1>,0>
          (duration<__int64,std::ratio<1,10000000>_> *this,
          duration<__int64,std::ratio<1,1>_> *param_1)

{
  this->_MyRep = param_1->_MyRep * 10000000;
  return this;
}

// duration<__int64,std::ratio<1,1000000000>_><__int64,std::ratio<1,10000000>,0> @ 14f8ff460

/* public: __cdecl std::chrono::duration<__int64,struct std::ratio<1,1000000000>
   >::duration<__int64,struct std::ratio<1,1000000000> ><__int64,struct
   std::ratio<1,10000000>,0>(class std::chrono::duration<__int64,struct std::ratio<1,10000000> >
   const & __ptr64) __ptr64 */

duration<__int64,std::ratio<1,1000000000>_> * __thiscall
std::chrono::duration<__int64,std::ratio<1,1000000000>_>::
duration<__int64,std::ratio<1,1000000000>_><__int64,std::ratio<1,10000000>,0>
          (duration<__int64,std::ratio<1,1000000000>_> *this,
          duration<__int64,std::ratio<1,10000000>_> *param_1)

{
  this->_MyRep = param_1->_MyRep * 100;
  return this;
}

// operator==<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>,std::chrono::duration<__int64,struct_std::ratio<1,1>_>_> @ 14f8ff480

/* bool __cdecl std::chrono::operator==<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> >,class std::chrono::duration<__int64,struct
   std::ratio<1,1> > >(class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64) */

bool __cdecl
std::chrono::
operator==<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>,std::chrono::duration<__int64,struct_std::ratio<1,1>_>_>
          (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
           *param_1,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_2)

{
  return (param_1->_MyDur)._MyRep == (param_2->_MyDur)._MyRep;
}

// operator==<__int64,std::ratio<1,1>,__int64,std::ratio<1,1>_> @ 14f8ff490

/* bool __cdecl std::chrono::operator==<__int64,struct std::ratio<1,1>,__int64,struct
   std::ratio<1,1> >(class std::chrono::duration<__int64,struct std::ratio<1,1> > const &
   __ptr64,class std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) */

bool __cdecl
std::chrono::operator==<__int64,std::ratio<1,1>,__int64,std::ratio<1,1>_>
          (duration<__int64,std::ratio<1,1>_> *param_1,duration<__int64,std::ratio<1,1>_> *param_2)

{
  return param_1->_MyRep == param_2->_MyRep;
}

// operator*<int> @ 14f8ff4a0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator*<int>(int,class
   absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::operator*<int>(Duration *__return_storage_ptr__,int param_1,Duration *param_2)

{
  uint uVar1;
  Duration *pDVar2;
  
  pDVar2 = Duration::operator*=(param_2,(longlong)param_1);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator*<double> @ 14f8ff4e0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator*<double>(double,class
   absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::operator*<double>
          (Duration *__return_storage_ptr__,double param_1,Duration *param_2)

{
  uint uVar1;
  Duration *pDVar2;
  
  pDVar2 = Duration::operator*=(param_2,param_1);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator*<__int64> @ 14f8ff510

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator*<__int64>(class
   absl::lts_20240722::Duration,__int64) */

Duration * __cdecl
absl::lts_20240722::operator*<__int64>
          (Duration *__return_storage_ptr__,Duration *param_1,__int64 param_2)

{
  uint uVar1;
  Duration *pDVar2;
  
  pDVar2 = Duration::operator*=(param_1,param_2);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator-<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>,std::chrono::duration<__int64,struct_std::ratio<1,1>_>_> @ 14f8ff550

/* class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::operator-<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> >,class std::chrono::duration<__int64,struct
   std::ratio<1,1> > >(class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64,class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > const & __ptr64) */

duration<__int64,std::ratio<1,1>_> __cdecl
std::chrono::
operator-<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>,std::chrono::duration<__int64,struct_std::ratio<1,1>_>_>
          (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
           *param_1,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          *param_2)

{
  longlong *in_R8;
  
  (param_1->_MyDur)._MyRep = (param_2->_MyDur)._MyRep - *in_R8;
  return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
}

// operator-<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,std::chrono::duration<__int64,struct_std::ratio<1,10000000>_>_> @ 14f8ff570

/* class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::operator-<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> >,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > >(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > const & __ptr64,class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > const & __ptr64) */

duration<__int64,std::ratio<1,10000000>_> __cdecl
std::chrono::
operator-<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,std::chrono::duration<__int64,struct_std::ratio<1,10000000>_>_>
          (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
           *param_1,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          *param_2)

{
  longlong *in_R8;
  
  (param_1->_MyDur)._MyRep = (param_2->_MyDur)._MyRep - *in_R8;
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
}

// operator-<__int64,std::ratio<1,1>,__int64,std::ratio<1,1>_> @ 14f8ff590

/* class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::operator-<__int64,struct std::ratio<1,1>,__int64,struct std::ratio<1,1> >(class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) */

duration<__int64,std::ratio<1,1>_> __cdecl
std::chrono::operator-<__int64,std::ratio<1,1>,__int64,std::ratio<1,1>_>
          (duration<__int64,struct_std::ratio<1,1>_> *param_1,
          duration<__int64,struct_std::ratio<1,1>_> *param_2)

{
  longlong *in_R8;
  
  *(longlong *)param_1 = *(longlong *)param_2 - *in_R8;
  return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
}

// operator-<__int64,std::ratio<1,10000000>,__int64,std::ratio<1,10000000>_> @ 14f8ff5b0

/* class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::operator-<__int64,struct std::ratio<1,10000000>,__int64,struct
   std::ratio<1,10000000> >(class std::chrono::duration<__int64,struct std::ratio<1,10000000> >
   const & __ptr64,class std::chrono::duration<__int64,struct std::ratio<1,10000000> > const &
   __ptr64) */

duration<__int64,std::ratio<1,10000000>_> __cdecl
std::chrono::operator-<__int64,std::ratio<1,10000000>,__int64,std::ratio<1,10000000>_>
          (duration<__int64,struct_std::ratio<1,10000000>_> *param_1,
          duration<__int64,struct_std::ratio<1,10000000>_> *param_2)

{
  longlong *in_R8;
  
  *(longlong *)param_1 = *(longlong *)param_2 - *in_R8;
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
}

// operator+<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>,__int64,std::ratio<1,1>_> @ 14f8ff5d0

/* class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > __cdecl std::chrono::operator+<struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,1>
   >,__int64,struct std::ratio<1,1> >(class std::chrono::time_point<struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,1> > > const &
   __ptr64,class std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> __cdecl
std::chrono::
operator+<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>,__int64,std::ratio<1,1>_>
          (time_point<struct_std::chrono::system_clock,class_std::chrono::duration<__int64,struct_std::ratio<1,1>_>_>
           *param_1,duration<__int64,std::ratio<1,1>_> *param_2)

{
  longlong *in_R8;
  
  *(long64 *)param_1 = param_2->_MyRep + *in_R8;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>)
         (duration<__int64,std::ratio<1,1>_>)param_1;
}

// operator+<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,10000000>_> @ 14f8ff5f0

/* class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > __cdecl
   std::chrono::operator+<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> >,__int64,struct
   std::ratio<1,10000000> >(class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > const & __ptr64,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > const & __ptr64) */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
__cdecl std::chrono::
        operator+<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,10000000>_>
                  (time_point<struct_std::chrono::system_clock,class_std::chrono::duration<__int64,struct_std::ratio<1,10000000>_>_>
                   *param_1,duration<__int64,std::ratio<1,10000000>_> *param_2)

{
  longlong *in_R8;
  
  *(long64 *)param_1 = param_2->_MyRep + *in_R8;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          )(duration<__int64,std::ratio<1,10000000>_>)param_1;
}

// operator+<__int64,std::ratio<1,1>,__int64,std::ratio<1,1>_> @ 14f8ff610

/* class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::operator+<__int64,struct std::ratio<1,1>,__int64,struct std::ratio<1,1> >(class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) */

duration<__int64,std::ratio<1,1>_> __cdecl
std::chrono::operator+<__int64,std::ratio<1,1>,__int64,std::ratio<1,1>_>
          (duration<__int64,struct_std::ratio<1,1>_> *param_1,
          duration<__int64,struct_std::ratio<1,1>_> *param_2)

{
  longlong *in_R8;
  
  *(longlong *)param_1 = *(longlong *)param_2 + *in_R8;
  return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
}

// operator+<__int64,std::ratio<1,10000000>,__int64,std::ratio<1,10000000>_> @ 14f8ff630

/* class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::operator+<__int64,struct std::ratio<1,10000000>,__int64,struct
   std::ratio<1,10000000> >(class std::chrono::duration<__int64,struct std::ratio<1,10000000> >
   const & __ptr64,class std::chrono::duration<__int64,struct std::ratio<1,10000000> > const &
   __ptr64) */

duration<__int64,std::ratio<1,10000000>_> __cdecl
std::chrono::operator+<__int64,std::ratio<1,10000000>,__int64,std::ratio<1,10000000>_>
          (duration<__int64,struct_std::ratio<1,10000000>_> *param_1,
          duration<__int64,struct_std::ratio<1,10000000>_> *param_2)

{
  longlong *in_R8;
  
  *(longlong *)param_1 = *(longlong *)param_2 + *in_R8;
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
}

// operator/<__int64> @ 14f8ff650

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator/<__int64>(class
   absl::lts_20240722::Duration,__int64) */

Duration * __cdecl
absl::lts_20240722::operator/<__int64>
          (Duration *__return_storage_ptr__,Duration *param_1,__int64 param_2)

{
  uint uVar1;
  Duration *pDVar2;
  
  pDVar2 = Duration::operator/=(param_1,param_2);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator<<absl::lts_20240722::time_internal::cctz::detail::second_tag,absl::lts_20240722::time_internal::cctz::detail::second_tag> @ 14f8ff690

/* bool __cdecl absl::lts_20240722::time_internal::cctz::detail::operator<<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag,struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64,class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64) */

bool __cdecl
absl::lts_20240722::time_internal::cctz::detail::
operator<<absl::lts_20240722::time_internal::cctz::detail::second_tag,absl::lts_20240722::time_internal::cctz::detail::second_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (param_1->f_).y;
  lVar4 = (param_2->f_).y;
  if ((lVar4 <= lVar3) &&
     ((lVar3 != lVar4 ||
      ((cVar1 = (param_1->f_).m, cVar2 = (param_2->f_).m, cVar2 <= cVar1 &&
       ((cVar1 != cVar2 ||
        ((cVar1 = (param_1->f_).d, cVar2 = (param_2->f_).d, cVar2 <= cVar1 &&
         ((cVar1 != cVar2 ||
          ((cVar1 = (param_1->f_).hh, cVar2 = (param_2->f_).hh, cVar2 <= cVar1 &&
           ((cVar1 != cVar2 ||
            ((cVar1 = (param_1->f_).mm, cVar2 = (param_2->f_).mm, cVar2 <= cVar1 &&
             ((cVar1 != cVar2 || ((param_2->f_).ss <= (param_1->f_).ss)))))))))))))))))))) {
    return false;
  }
  return true;
}

// operator><absl::lts_20240722::time_internal::cctz::detail::second_tag,absl::lts_20240722::time_internal::cctz::detail::second_tag> @ 14f8ff6e0

/* bool __cdecl absl::lts_20240722::time_internal::cctz::detail::operator><struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag,struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64,class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64) */

bool __cdecl
absl::lts_20240722::time_internal::cctz::detail::
operator><absl::lts_20240722::time_internal::cctz::detail::second_tag,absl::lts_20240722::time_internal::cctz::detail::second_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1,
          civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (param_2->f_).y;
  lVar4 = (param_1->f_).y;
  if ((lVar4 <= lVar3) &&
     ((lVar3 != lVar4 ||
      ((cVar1 = (param_2->f_).m, cVar2 = (param_1->f_).m, cVar2 <= cVar1 &&
       ((cVar1 != cVar2 ||
        ((cVar1 = (param_2->f_).d, cVar2 = (param_1->f_).d, cVar2 <= cVar1 &&
         ((cVar1 != cVar2 ||
          ((cVar1 = (param_2->f_).hh, cVar2 = (param_1->f_).hh, cVar2 <= cVar1 &&
           ((cVar1 != cVar2 ||
            ((cVar1 = (param_2->f_).mm, cVar2 = (param_1->f_).mm, cVar2 <= cVar1 &&
             ((cVar1 != cVar2 || ((param_1->f_).ss <= (param_2->f_).ss)))))))))))))))))))) {
    return false;
  }
  return true;
}

// operator*=<int,0> @ 14f8ff730

/* public: class absl::lts_20240722::Duration & __ptr64 __cdecl
   absl::lts_20240722::Duration::operator*=<int,0>(int) __ptr64 */

Duration * __thiscall absl::lts_20240722::Duration::operator*=<int,0>(Duration *this,int param_1)

{
  Duration *pDVar1;
  
  pDVar1 = operator*=(this,(longlong)param_1);
  return pDVar1;
}

// FromChrono<__int64,std::ratio<1,1000000000>_> @ 14f8ff740

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromChrono<__int64,struct std::ratio<1,1000000000> >(class
   std::chrono::duration<__int64,struct std::ratio<1,1000000000> > const & __ptr64) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromChrono<__int64,std::ratio<1,1000000000>_>
          (Duration *__return_storage_ptr__,duration<__int64,std::ratio<1,1000000000>_> *param_1)

{
  FromInt64<1000000000>(__return_storage_ptr__,param_1->_MyRep,(ratio<1,1000000000>)0x0);
  return __return_storage_ptr__;
}

// FromChrono<__int64,std::ratio<1,10000000>_> @ 14f8ff770

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromChrono<__int64,struct std::ratio<1,10000000> >(class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > const & __ptr64) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromChrono<__int64,std::ratio<1,10000000>_>
          (Duration *__return_storage_ptr__,duration<__int64,std::ratio<1,10000000>_> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  HiRep local_18;
  uint local_10;
  
  lVar2 = param_1->_MyRep;
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8) + lVar2;
  local_18 = (HiRep)((lVar1 >> 0x17) - (lVar1 >> 0x3f));
  lVar2 = (lVar2 + (longlong)local_18 * -10000000) * 400;
  local_10 = (uint)lVar2;
  if (lVar2 < 0) {
    local_18 = (HiRep)((longlong)local_18 + -1);
    local_10 = local_10 + 4000000000;
  }
  __return_storage_ptr__->rep_hi_ = local_18;
  __return_storage_ptr__->rep_lo_ = local_10;
  return __return_storage_ptr__;
}

// FromInt64<1000000000> @ 14f8ff810

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromInt64<1000000000>(__int64,struct std::ratio<1,1000000000>)
    */

Duration * __cdecl
absl::lts_20240722::time_internal::FromInt64<1000000000>
          (Duration *__return_storage_ptr__,__int64 param_1,ratio<1,1000000000> param_2)

{
  longlong lVar1;
  HiRep local_18;
  uint local_10;
  
  local_18 = (HiRep)(param_1 / 1000000000);
  lVar1 = (param_1 % 1000000000) * 4;
  local_10 = (uint)lVar1;
  if (lVar1 < 0) {
    local_18 = (HiRep)((longlong)local_18 + -1);
    local_10 = local_10 + 4000000000;
  }
  __return_storage_ptr__->rep_hi_ = local_18;
  __return_storage_ptr__->rep_lo_ = local_10;
  return __return_storage_ptr__;
}

// FromInt64<1000> @ 14f8ff8a0

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromInt64<1000>(__int64,struct std::ratio<1,1000>) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromInt64<1000>
          (Duration *__return_storage_ptr__,__int64 param_1,ratio<1,1000> param_2)

{
  longlong lVar1;
  HiRep local_18;
  uint local_10;
  
  local_18 = (HiRep)(param_1 / 1000);
  lVar1 = (param_1 % 1000) * 4000000;
  local_10 = (uint)lVar1;
  if (lVar1 < 0) {
    local_18 = (HiRep)((longlong)local_18 + -1);
    local_10 = local_10 + 4000000000;
  }
  __return_storage_ptr__->rep_hi_ = local_18;
  __return_storage_ptr__->rep_lo_ = local_10;
  return __return_storage_ptr__;
}

// FromInt64<10000000> @ 14f8ff930

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromInt64<10000000>(__int64,struct std::ratio<1,10000000>) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromInt64<10000000>
          (Duration *__return_storage_ptr__,__int64 param_1,ratio<1,10000000> param_2)

{
  longlong lVar1;
  HiRep local_18;
  uint local_10;
  
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_1),8) + param_1;
  local_18 = (HiRep)((lVar1 >> 0x17) - (lVar1 >> 0x3f));
  lVar1 = (param_1 + (longlong)local_18 * -10000000) * 400;
  local_10 = (uint)lVar1;
  if (lVar1 < 0) {
    local_18 = (HiRep)((longlong)local_18 + -1);
    local_10 = local_10 + 4000000000;
  }
  __return_storage_ptr__->rep_hi_ = local_18;
  __return_storage_ptr__->rep_lo_ = local_10;
  return __return_storage_ptr__;
}

// FromInt64<1000000> @ 14f8ff9d0

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::FromInt64<1000000>(__int64,struct std::ratio<1,1000000>) */

Duration * __cdecl
absl::lts_20240722::time_internal::FromInt64<1000000>
          (Duration *__return_storage_ptr__,__int64 param_1,ratio<1,1000000> param_2)

{
  longlong lVar1;
  HiRep local_18;
  uint local_10;
  
  local_18 = (HiRep)(param_1 / 1000000);
  lVar1 = (param_1 % 1000000) * 4000;
  local_10 = (uint)lVar1;
  if (lVar1 < 0) {
    local_18 = (HiRep)((longlong)local_18 + -1);
    local_10 = local_10 + 4000000000;
  }
  __return_storage_ptr__->rep_hi_ = local_18;
  __return_storage_ptr__->rep_lo_ = local_10;
  return __return_storage_ptr__;
}

// Microseconds<int,0> @ 14f8ffa60

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Microseconds<int,0>(int) */

Duration * __cdecl
absl::lts_20240722::Microseconds<int,0>(Duration *__return_storage_ptr__,int param_1)

{
  time_internal::FromInt64<1000000>(__return_storage_ptr__,(longlong)param_1,(ratio<1,1000000>)0x0);
  return __return_storage_ptr__;
}

// Milliseconds<int,0> @ 14f8ffa90

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Milliseconds<int,0>(int) */

Duration * __cdecl
absl::lts_20240722::Milliseconds<int,0>(Duration *__return_storage_ptr__,int param_1)

{
  time_internal::FromInt64<1000>(__return_storage_ptr__,(longlong)param_1,(ratio<1,1000>)0x0);
  return __return_storage_ptr__;
}

// Milliseconds<double,0> @ 14f8ffac0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Milliseconds<double,0>(double) */

Duration * __cdecl
absl::lts_20240722::Milliseconds<double,0>(Duration *__return_storage_ptr__,double param_1)

{
  uint uVar1;
  Duration *pDVar2;
  Duration local_18;
  
  local_18.rep_lo_ = 4000000;
  local_18.rep_hi_.lo_ = 0;
  local_18.rep_hi_.hi_ = 0;
  pDVar2 = Duration::operator*=(&local_18,param_1);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// Nanoseconds<int,0> @ 14f8ffb10

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Nanoseconds<int,0>(int) */

Duration * __cdecl
absl::lts_20240722::Nanoseconds<int,0>(Duration *__return_storage_ptr__,int param_1)

{
  time_internal::FromInt64<1000000000>
            (__return_storage_ptr__,(longlong)param_1,(ratio<1,1000000000>)0x0);
  return __return_storage_ptr__;
}

// Nanoseconds<__int64,0> @ 14f8ffb40

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::Nanoseconds<__int64,0>(__int64) */

Duration * __cdecl
absl::lts_20240722::Nanoseconds<__int64,0>(Duration *__return_storage_ptr__,__int64 param_1)

{
  time_internal::FromInt64<1000000000>(__return_storage_ptr__,param_1,(ratio<1,1000000000>)0x0);
  return __return_storage_ptr__;
}

// ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,10000000>_>_> @ 14f8ffb60

/* WARNING: Removing unreachable block (ram,0x00014f8ffbc8) */
/* class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   absl::lts_20240722::time_internal::ToChronoDuration<class std::chrono::duration<__int64,struct
   std::ratio<1,10000000> > >(class absl::lts_20240722::Duration) */

duration<__int64,std::ratio<1,10000000>_> __cdecl
absl::lts_20240722::time_internal::
ToChronoDuration<std::chrono::duration<__int64,std::ratio<1,10000000>_>_>(Duration *param_1)

{
  byte bVar1;
  Duration *pDVar2;
  HiRep HVar3;
  HiRep *in_RDX;
  Duration local_38;
  Duration local_28;
  Duration local_18;
  
  local_38.rep_hi_ = *in_RDX;
  if (in_RDX[1].lo_ != 0xffffffff) {
    local_38.rep_lo_ = in_RDX[1].lo_;
    local_18.rep_hi_ = local_38.rep_hi_;
    pDVar2 = Duration::operator*=(&local_38,10000000);
    local_28.rep_hi_ = pDVar2->rep_hi_;
    local_28.rep_lo_ = pDVar2->rep_lo_;
    pDVar2 = Duration::operator/=(&local_28,1);
    local_18.rep_hi_ = pDVar2->rep_hi_;
    local_18.rep_lo_ = pDVar2->rep_lo_;
    HVar3 = (HiRep)ToInt64Seconds(&local_18);
    param_1->rep_hi_ = HVar3;
    return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
  }
  if (local_38.rep_hi_ == (HiRep)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = local_38.rep_hi_.hi_._3_1_ >> 7;
  }
  param_1->rep_hi_ = (HiRep)((ulonglong)bVar1 + 0x7fffffffffffffff);
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
}

// ToInt64<std::ratio<1,10000000>_> @ 14f8ffc60

/* __int64 __cdecl absl::lts_20240722::time_internal::ToInt64<struct std::ratio<1,10000000> >(class
   absl::lts_20240722::Duration,struct std::ratio<1,10000000>) */

__int64 __cdecl
absl::lts_20240722::time_internal::ToInt64<std::ratio<1,10000000>_>
          (Duration *param_1,ratio<1,10000000> param_2)

{
  Duration *pDVar1;
  __int64 _Var2;
  Duration local_38;
  Duration local_28;
  Duration local_18 [2];
  
  local_38.rep_hi_ = param_1->rep_hi_;
  local_38.rep_lo_ = param_1->rep_lo_;
  pDVar1 = Duration::operator*=(&local_38,10000000);
  local_28.rep_hi_ = pDVar1->rep_hi_;
  local_28.rep_lo_ = pDVar1->rep_lo_;
  pDVar1 = Duration::operator/=(&local_28,1);
  local_18[0].rep_hi_ = pDVar1->rep_hi_;
  local_18[0].rep_lo_ = pDVar1->rep_lo_;
  _Var2 = ToInt64Seconds(local_18);
  return _Var2;
}

// duration_cast<std::chrono::duration<__int64,std::ratio<1,1>_>,__int64,std::ratio<1,10000000>,0> @ 14f8ffcd0

/* class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::duration_cast<class std::chrono::duration<__int64,struct std::ratio<1,1>
   >,__int64,struct std::ratio<1,10000000>,0>(class std::chrono::duration<__int64,struct
   std::ratio<1,10000000> > const & __ptr64) */

duration<__int64,std::ratio<1,1>_> __cdecl
std::chrono::
duration_cast<std::chrono::duration<__int64,std::ratio<1,1>_>,__int64,std::ratio<1,10000000>,0>
          (duration<__int64,std::ratio<1,10000000>_> *param_1)

{
  longlong *in_RDX;
  longlong lVar1;
  
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*in_RDX),8) + *in_RDX;
  param_1->_MyRep = (lVar1 >> 0x17) - (lVar1 >> 0x3f);
  return (duration<__int64,std::ratio<1,1>_>)(long64)param_1;
}

// duration_cast<std::chrono::duration<__int64,std::ratio<1,1000000000>_>,__int64,std::ratio<1,10000000>,0> @ 14f8ffd00

/* class std::chrono::duration<__int64,struct std::ratio<1,1000000000> > __cdecl
   std::chrono::duration_cast<class std::chrono::duration<__int64,struct std::ratio<1,1000000000>
   >,__int64,struct std::ratio<1,10000000>,0>(class std::chrono::duration<__int64,struct
   std::ratio<1,10000000> > const & __ptr64) */

duration<__int64,std::ratio<1,1000000000>_> __cdecl
std::chrono::
duration_cast<std::chrono::duration<__int64,std::ratio<1,1000000000>_>,__int64,std::ratio<1,10000000>,0>
          (duration<__int64,std::ratio<1,10000000>_> *param_1)

{
  longlong *in_RDX;
  
  param_1->_MyRep = *in_RDX * 100;
  return (duration<__int64,std::ratio<1,1000000000>_>)(long64)param_1;
}

// duration_cast<std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,1>,0> @ 14f8ffd20

/* class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::duration_cast<class std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >,__int64,struct std::ratio<1,1>,0>(class std::chrono::duration<__int64,struct std::ratio<1,1> >
   const & __ptr64) */

duration<__int64,std::ratio<1,10000000>_> __cdecl
std::chrono::
duration_cast<std::chrono::duration<__int64,std::ratio<1,10000000>_>,__int64,std::ratio<1,1>,0>
          (duration<__int64,std::ratio<1,1>_> *param_1)

{
  longlong *in_RDX;
  
  param_1->_MyRep = *in_RDX * 10000000;
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)param_1;
}

// time_point_cast<std::chrono::duration<__int64,std::ratio<1,1>_>,std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,0> @ 14f8ffd40

/* class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > __cdecl
   std::chrono::time_point_cast<class std::chrono::duration<__int64,struct std::ratio<1,1> >,struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >,0>(class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > const & __ptr64) */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> __cdecl
std::chrono::
time_point_cast<std::chrono::duration<__int64,std::ratio<1,1>_>,std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>,0>
          (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
           *param_1)

{
  longlong *in_RDX;
  longlong lVar1;
  
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*in_RDX),8) + *in_RDX;
  (param_1->_MyDur)._MyRep = (lVar1 >> 0x17) - (lVar1 >> 0x3f);
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>)
         (duration<__int64,std::ratio<1,1>_>)param_1;
}

// civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> @ 14f8ffd70

/* private: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::day_tag>::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::day_tag>(struct
   absl::lts_20240722::time_internal::cctz::detail::fields) __ptr64 */

civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>::
civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag> *this,
          fields *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long64 lVar3;
  
  uVar1 = param_1->m;
  uVar2 = param_1->d;
  lVar3 = param_1->y;
  this[8] = (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>)uVar1;
  this[9] = (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>)uVar2;
  *(long64 *)this = lVar3;
  *(undefined2 *)(this + 10) = 0;
  this[0xc] = (civil_time<absl::lts_20240722::time_internal::cctz::detail::day_tag>)0x0;
  return this;
}

// civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> @ 14f8ffda0

/* private: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>(struct
   absl::lts_20240722::time_internal::cctz::detail::fields) __ptr64 */

civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this,
          fields *param_1)

{
  schar sVar1;
  schar sVar2;
  schar sVar3;
  schar sVar4;
  schar sVar5;
  undefined3 uVar6;
  
  sVar1 = param_1->m;
  sVar2 = param_1->d;
  sVar3 = param_1->hh;
  sVar4 = param_1->mm;
  sVar5 = param_1->ss;
  uVar6 = *(undefined3 *)&param_1->field_0xd;
  (this->f_).y = param_1->y;
  (this->f_).m = sVar1;
  (this->f_).d = sVar2;
  (this->f_).hh = sVar3;
  (this->f_).mm = sVar4;
  (this->f_).ss = sVar5;
  *(undefined3 *)&(this->f_).field_0xd = uVar6;
  return this;
}

// civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> @ 14f8ffdb0

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>(void) __ptr64 */

civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this)

{
  (this->f_).y = 0x7b2;
  (this->f_).m = '\x01';
  (this->f_).d = '\x01';
  (this->f_).hh = '\0';
  (this->f_).mm = '\0';
  (this->f_).ss = '\0';
  return this;
}

// civil_time<absl::lts_20240722::time_internal::second_tag> @ 14f8ffdd0

/* private: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>(struct
   absl::lts_20240722::time_internal::cctz::detail::fields) __ptr64 */

civil_time<absl::lts_20240722::time_internal::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::
civil_time<absl::lts_20240722::time_internal::second_tag>
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this,fields *param_1)

{
  schar sVar1;
  schar sVar2;
  schar sVar3;
  schar sVar4;
  schar sVar5;
  undefined3 uVar6;
  
  sVar1 = param_1->m;
  sVar2 = param_1->d;
  sVar3 = param_1->hh;
  sVar4 = param_1->mm;
  sVar5 = param_1->ss;
  uVar6 = *(undefined3 *)&param_1->field_0xd;
  (this->f_).y = param_1->y;
  (this->f_).m = sVar1;
  (this->f_).d = sVar2;
  (this->f_).hh = sVar3;
  (this->f_).mm = sVar4;
  (this->f_).ss = sVar5;
  *(undefined3 *)&(this->f_).field_0xd = uVar6;
  return this;
}

// civil_time<absl::lts_20240722::time_internal::second_tag> @ 14f8ffde0

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>(void) __ptr64 */

civil_time<absl::lts_20240722::time_internal::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::
civil_time<absl::lts_20240722::time_internal::second_tag>
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this)

{
  (this->f_).y = 0x7b2;
  (this->f_).m = '\x01';
  (this->f_).d = '\x01';
  (this->f_).hh = '\0';
  (this->f_).mm = '\0';
  (this->f_).ss = '\0';
  return this;
}

// civil_time<absl::lts_20240722::time_internal::second_tag> @ 14f8ffe00

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>(__int64,__int64,__int64,__int64,__int64,__int64)
   __ptr64 */

civil_time<absl::lts_20240722::time_internal::second_tag> * __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::
civil_time<absl::lts_20240722::time_internal::second_tag>
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this,__int64 param_1,
          __int64 param_2,__int64 param_3,__int64 param_4,__int64 param_5,__int64 param_6)

{
  schar sVar1;
  schar sVar2;
  schar sVar3;
  schar sVar4;
  schar sVar5;
  undefined3 uVar6;
  fields *pfVar7;
  fields local_18;
  
  pfVar7 = impl::n_sec(&local_18,param_1,param_2,param_3,param_4,param_5,param_6);
  sVar1 = pfVar7->m;
  sVar2 = pfVar7->d;
  sVar3 = pfVar7->hh;
  sVar4 = pfVar7->mm;
  sVar5 = pfVar7->ss;
  uVar6 = *(undefined3 *)&pfVar7->field_0xd;
  (this->f_).y = pfVar7->y;
  (this->f_).m = sVar1;
  (this->f_).d = sVar2;
  (this->f_).hh = sVar3;
  (this->f_).mm = sVar4;
  (this->f_).ss = sVar5;
  *(undefined3 *)&(this->f_).field_0xd = uVar6;
  return this;
}

// time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> @ 14f8ffe50

/* public: __cdecl std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > >::time_point<struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,1> > >(class
   std::chrono::duration<__int64,struct std::ratio<1,1> > const & __ptr64) __ptr64 */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> * __thiscall
std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
          (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
           *this,duration<__int64,std::ratio<1,1>_> *param_1)

{
  (this->_MyDur)._MyRep = param_1->_MyRep;
  return this;
}

// time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_> @ 14f8ffe60

/* public: __cdecl std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > >::time_point<struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,10000000> >
   >(class std::chrono::duration<__int64,struct std::ratio<1,10000000> > const & __ptr64) __ptr64 */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_> *
__thiscall
std::chrono::
time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>::
time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
           *this,duration<__int64,std::ratio<1,10000000>_> *param_1)

{
  (this->_MyDur)._MyRep = param_1->_MyRep;
  return this;
}

// Breakdown @ 14f8ffe70

/* public: __cdecl absl::lts_20240722::Time::Breakdown::Breakdown(void) __ptr64 */

Breakdown * __thiscall absl::lts_20240722::Time::Breakdown::Breakdown(Breakdown *this)

{
  (this->subsecond).rep_hi_.lo_ = 0;
  (this->subsecond).rep_hi_.hi_ = 0;
  (this->subsecond).rep_lo_ = 0;
  return this;
}

// CivilInfo @ 14f8ffe90

/* public: __cdecl absl::lts_20240722::TimeZone::CivilInfo::CivilInfo(void) __ptr64 */

CivilInfo * __thiscall absl::lts_20240722::TimeZone::CivilInfo::CivilInfo(CivilInfo *this)

{
  (this->cs).f_.y = 0x7b2;
  (this->subsecond).rep_hi_.lo_ = 0;
  (this->subsecond).rep_hi_.hi_ = 0;
  (this->subsecond).rep_lo_ = 0;
  (this->cs).f_.m = '\x01';
  (this->cs).f_.d = '\x01';
  (this->cs).f_.hh = '\0';
  (this->cs).f_.mm = '\0';
  (this->cs).f_.ss = '\0';
  return this;
}

// Duration @ 14f8ffec0

/* private: __cdecl absl::lts_20240722::Duration::Duration(__int64,unsigned int) __ptr64 */

Duration * __thiscall
absl::lts_20240722::Duration::Duration(Duration *this,__int64 param_1,uint param_2)

{
  (this->rep_hi_).lo_ = (int)param_1;
  (this->rep_hi_).hi_ = (int)((ulonglong)param_1 >> 0x20);
  this->rep_lo_ = param_2;
  return this;
}

// Time @ 14f8ffee0

/* private: __cdecl absl::lts_20240722::Time::Time(class absl::lts_20240722::Duration) __ptr64 */

Time * __thiscall absl::lts_20240722::Time::Time(Time *this,Duration *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->rep_lo_;
  (this->rep_).rep_hi_ = param_1->rep_hi_;
  (this->rep_).rep_lo_ = uVar1;
  return this;
}

// TimeConversion @ 14f8fff00

/* public: __cdecl absl::lts_20240722::TimeConversion::TimeConversion(void) __ptr64 */

TimeConversion * __thiscall absl::lts_20240722::TimeConversion::TimeConversion(TimeConversion *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return this;
}

// TimeInfo @ 14f8fff20

/* public: __cdecl absl::lts_20240722::TimeZone::TimeInfo::TimeInfo(void) __ptr64 */

TimeInfo * __thiscall absl::lts_20240722::TimeZone::TimeInfo::TimeInfo(TimeInfo *this)

{
  (this->pre).rep_.rep_hi_.lo_ = 0;
  (this->pre).rep_.rep_hi_.hi_ = 0;
  *(undefined8 *)&(this->pre).rep_.rep_lo_ = 0;
  *(undefined8 *)&(this->trans).rep_.rep_hi_.hi_ = 0;
  (this->post).rep_.rep_hi_.lo_ = 0;
  (this->post).rep_.rep_hi_.hi_ = 0;
  (this->post).rep_.rep_lo_ = 0;
  return this;
}

// civil_transition @ 14f8fff40

/* public: __cdecl
   absl::lts_20240722::time_internal::cctz::time_zone::civil_transition::civil_transition(void)
   __ptr64 */

civil_transition * __thiscall
absl::lts_20240722::time_internal::cctz::time_zone::civil_transition::civil_transition
          (civil_transition *this)

{
  (this->from).f_.y = 0x7b2;
  (this->from).f_.m = '\x01';
  (this->from).f_.d = '\x01';
  (this->from).f_.hh = '\0';
  (this->from).f_.mm = '\0';
  (this->from).f_.ss = '\0';
  (this->to).f_.y = 0x7b2;
  (this->to).f_.m = '\x01';
  (this->to).f_.d = '\x01';
  (this->to).f_.hh = '\0';
  (this->to).f_.mm = '\0';
  (this->to).f_.ss = '\0';
  return this;
}

// fields @ 14f8fff70

/* public: __cdecl absl::lts_20240722::time_internal::cctz::detail::fields::fields(__int64,signed
   char,signed char,signed char,signed char,signed char) __ptr64 */

fields * __thiscall
absl::lts_20240722::time_internal::cctz::detail::fields::fields
          (fields *this,__int64 param_1,char param_2,char param_3,char param_4,char param_5,
          char param_6)

{
  this->hh = param_4;
  this->mm = param_5;
  this->ss = param_6;
  this->y = param_1;
  this->m = param_2;
  this->d = param_3;
  return this;
}

// operator== @ 14f8fffa0

/* bool __cdecl absl::lts_20240722::operator==(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration) */

bool __cdecl absl::lts_20240722::operator==(Duration *param_1,Duration *param_2)

{
  if ((param_1->rep_hi_ == param_2->rep_hi_) && (param_1->rep_lo_ == param_2->rep_lo_)) {
    return true;
  }
  return false;
}

// operator== @ 14f900010

/* bool __cdecl absl::lts_20240722::operator==(class absl::lts_20240722::Time,class
   absl::lts_20240722::Time) */

bool __cdecl absl::lts_20240722::operator==(Time *param_1,Time *param_2)

{
  if (((param_1->rep_).rep_hi_ == (param_2->rep_).rep_hi_) &&
     ((param_1->rep_).rep_lo_ == (param_2->rep_).rep_lo_)) {
    return true;
  }
  return false;
}

// operator_class_absl::lts_20240722::time_internal::cctz::time_zone @ 14f900080

/* public: __cdecl absl::lts_20240722::TimeZone::operator class
   absl::lts_20240722::time_internal::cctz::time_zone(void)const __ptr64 */

time_zone __thiscall
absl::lts_20240722::TimeZone::operator_class_absl__lts_20240722__time_internal__cctz__time_zone
          (TimeZone *this)

{
  Impl *in_RDX;
  
  *(Impl **)in_RDX = (this->cz_).impl_;
  return (time_zone)in_RDX;
}

// operator- @ 14f900090

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator-(class
   absl::lts_20240722::Duration,class absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::operator-(Duration *__return_storage_ptr__,Duration *param_1,Duration *param_2)

{
  uint uVar1;
  Duration *pDVar2;
  Duration local_18;
  
  local_18.rep_hi_ = param_2->rep_hi_;
  local_18.rep_lo_ = param_2->rep_lo_;
  pDVar2 = Duration::operator-=(param_1,&local_18);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator- @ 14f9000e0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator-(class
   absl::lts_20240722::Duration) */

Duration * __cdecl absl::lts_20240722::operator-(Duration *__return_storage_ptr__,Duration *param_1)

{
  uint uVar1;
  HiRep *pHVar2;
  HiRep *pHVar3;
  HiRep local_38;
  int local_30;
  HiRep local_28;
  uint local_20;
  HiRep local_18;
  uint local_10;
  
  local_18 = param_1->rep_hi_;
  if (param_1->rep_lo_ == 0) {
    if (local_18 == (HiRep)0x8000000000000000) {
      local_38.lo_ = 0xffffffff;
      local_38.hi_ = 0x7fffffff;
      local_30 = 0xffffffff;
    }
    else {
      local_30 = 0;
      local_38 = (HiRep)-(longlong)local_18;
    }
    local_20 = local_30;
    pHVar3 = &local_28;
    local_28 = local_38;
  }
  else {
    local_20 = param_1->rep_lo_;
    local_28 = local_18;
    if (param_1->rep_lo_ == 0xffffffff) {
      local_30 = 0xffffffff;
      if ((longlong)local_18 < 0) {
        local_38.lo_ = 0xffffffff;
        local_38.hi_ = 0x7fffffff;
      }
      else {
        local_38.lo_ = 0;
        local_38.hi_ = 0x80000000;
      }
      local_20 = 0xffffffff;
      pHVar2 = &local_28;
      local_28 = local_38;
    }
    else {
      local_38 = (HiRep)~(ulonglong)local_18;
      local_30 = -0x1194d800 - param_1->rep_lo_;
      pHVar2 = &local_38;
    }
    local_10 = pHVar2[1].lo_;
    pHVar3 = &local_18;
    local_18 = *pHVar2;
  }
  uVar1 = pHVar3[1].lo_;
  __return_storage_ptr__->rep_hi_ = *pHVar3;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator- @ 14f900250

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::operator-(class
   absl::lts_20240722::Time,class absl::lts_20240722::Time) */

Duration * __cdecl
absl::lts_20240722::operator-(Duration *__return_storage_ptr__,Time *param_1,Time *param_2)

{
  uint uVar1;
  Duration *pDVar2;
  Duration local_28;
  Duration local_18;
  
  local_18.rep_hi_ = (param_1->rep_).rep_hi_;
  local_18.rep_lo_ = (param_1->rep_).rep_lo_;
  local_28.rep_hi_ = (param_2->rep_).rep_hi_;
  local_28.rep_lo_ = (param_2->rep_).rep_lo_;
  pDVar2 = Duration::operator-=(&local_18,&local_28);
  uVar1 = pDVar2->rep_lo_;
  __return_storage_ptr__->rep_hi_ = pDVar2->rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator+ @ 14f9002b0

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::operator+(class
   absl::lts_20240722::Time,class absl::lts_20240722::Duration) */

Time * __cdecl
absl::lts_20240722::operator+(Time *__return_storage_ptr__,Time *param_1,Duration *param_2)

{
  uint uVar1;
  Duration local_18;
  
  local_18.rep_hi_ = param_2->rep_hi_;
  local_18.rep_lo_ = param_2->rep_lo_;
  Duration::operator+=(&param_1->rep_,&local_18);
  uVar1 = (param_1->rep_).rep_lo_;
  (__return_storage_ptr__->rep_).rep_hi_ = (param_1->rep_).rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// operator< @ 14f900310

/* bool __cdecl absl::lts_20240722::operator<(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration) */

bool __cdecl absl::lts_20240722::operator<(Duration *param_1,Duration *param_2)

{
  if (param_1->rep_hi_ != param_2->rep_hi_) {
    return (longlong)param_1->rep_hi_ < (longlong)param_2->rep_hi_;
  }
  if (param_1->rep_hi_ == (HiRep)0x8000000000000000) {
    return param_1->rep_lo_ + 1 < param_2->rep_lo_ + 1;
  }
  return param_1->rep_lo_ < param_2->rep_lo_;
}

// operator>= @ 14f9003f0

/* bool __cdecl absl::lts_20240722::operator>=(class absl::lts_20240722::Duration,class
   absl::lts_20240722::Duration) */

bool __cdecl absl::lts_20240722::operator>=(Duration *param_1,Duration *param_2)

{
  if (param_1->rep_hi_ != param_2->rep_hi_) {
    return (longlong)param_2->rep_hi_ <= (longlong)param_1->rep_hi_;
  }
  if (param_1->rep_hi_ == (HiRep)0x8000000000000000) {
    return param_2->rep_lo_ + 1 <= param_1->rep_lo_ + 1;
  }
  return param_2->rep_lo_ <= param_1->rep_lo_;
}

// operator+= @ 14f9004d0

/* public: class absl::lts_20240722::Time & __ptr64 __cdecl
   absl::lts_20240722::Time::operator+=(class absl::lts_20240722::Duration) __ptr64 */

Time * __thiscall absl::lts_20240722::Time::operator+=(Time *this,Duration *param_1)

{
  Duration local_18;
  
  local_18.rep_hi_ = param_1->rep_hi_;
  local_18.rep_lo_ = param_1->rep_lo_;
  Duration::operator+=(&this->rep_,&local_18);
  return this;
}

// At @ 14f900510

/* public: struct absl::lts_20240722::TimeZone::CivilInfo __cdecl
   absl::lts_20240722::TimeZone::At(class absl::lts_20240722::Time)const __ptr64 */

CivilInfo * __thiscall
absl::lts_20240722::TimeZone::At(TimeZone *this,CivilInfo *__return_storage_ptr__,Time *param_1)

{
  uint uVar1;
  uint uVar2;
  Duration *pDVar3;
  uint uVar4;
  HiRep local_res18 [2];
  Duration local_98;
  fields local_88 [2];
  uint local_68;
  uint uStack_64;
  uint local_58;
  undefined4 uStack_54;
  absolute_lookup local_48;
  uint local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  Duration local_18;
  
  local_98.rep_lo_ = (param_1->rep_).rep_lo_;
  local_98.rep_hi_ = (param_1->rep_).rep_hi_;
  if ((local_98.rep_hi_ == (HiRep)0x7fffffffffffffff) && ((param_1->rep_).rep_lo_ == 0xffffffff)) {
    time_internal::cctz::detail::impl::n_day(local_88,0x7fffffffffffffff,'\f',0x1f,0,'\x17',';',';')
    ;
    (__return_storage_ptr__->cs).f_.y = local_88[0].y;
    (__return_storage_ptr__->cs).f_.m = (char)local_88[0]._8_4_;
    (__return_storage_ptr__->cs).f_.d = SUB41(local_88[0]._8_4_,1);
    (__return_storage_ptr__->cs).f_.hh = SUB41(local_88[0]._8_4_,2);
    (__return_storage_ptr__->cs).f_.mm = SUB41(local_88[0]._8_4_,3);
    (__return_storage_ptr__->cs).f_.ss = (char)local_88[0]._12_4_;
    *(int3 *)&(__return_storage_ptr__->cs).f_.field_0xd = SUB43(local_88[0]._12_4_,1);
    local_68 = 0xffffffff;
    uStack_64 = 0x7fffffff;
    uVar4 = 0xffffffff;
    local_48.offset = 0;
    local_28 = local_28 & 0xffffff00;
    uStack_20 = 0x53537278;
    uStack_1c = 1;
  }
  else {
    local_98.rep_lo_ = (param_1->rep_).rep_lo_;
    if (((param_1->rep_).rep_hi_ == (HiRep)0x8000000000000000) &&
       ((param_1->rep_).rep_lo_ == 0xffffffff)) {
      local_88[0].y = -0x8000000000000000;
      local_88[0].m = '\x01';
      local_88[0].d = '\x01';
      local_88[0].hh = '\0';
      local_88[0].mm = '\0';
      local_88[0]._12_4_ = local_88[0]._12_4_ & 0xffffff00;
      local_98.rep_hi_.lo_ = 0xffffffff;
      local_98.rep_hi_.hi_ = 0x7fffffff;
      local_98.rep_lo_ = 0xffffffff;
      pDVar3 = lts_20240722::operator-(&local_18,&local_98);
      uVar1 = (pDVar3->rep_hi_).lo_;
      uVar2 = (pDVar3->rep_hi_).hi_;
      uVar4 = pDVar3->rep_lo_;
      (__return_storage_ptr__->cs).f_.y = local_88[0].y;
      (__return_storage_ptr__->cs).f_.m = (char)local_88[0]._8_4_;
      (__return_storage_ptr__->cs).f_.d = SUB41(local_88[0]._8_4_,1);
      (__return_storage_ptr__->cs).f_.hh = SUB41(local_88[0]._8_4_,2);
      (__return_storage_ptr__->cs).f_.mm = SUB41(local_88[0]._8_4_,3);
      (__return_storage_ptr__->cs).f_.ss = (char)local_88[0]._12_4_;
      *(int3 *)&(__return_storage_ptr__->cs).f_.field_0xd = SUB43(local_88[0]._12_4_,1);
      (__return_storage_ptr__->subsecond).rep_hi_.lo_ = uVar1;
      (__return_storage_ptr__->subsecond).rep_hi_.hi_ = uVar2;
      (__return_storage_ptr__->subsecond).rep_lo_ = uVar4;
      __return_storage_ptr__->offset = 0;
      *(ulonglong *)&__return_storage_ptr__->is_dst =
           CONCAT44(uStack_54,local_58) & 0xffffffffffffff00;
      __return_storage_ptr__->zone_abbr = "-00";
      return __return_storage_ptr__;
    }
    local_res18[0] = (param_1->rep_).rep_hi_;
    local_98.rep_hi_ = local_res18[0];
    time_internal::cctz::time_zone::lookup
              (&this->cz_,&local_48,
               (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
                *)local_res18);
    uVar4 = (param_1->rep_).rep_lo_;
    local_58 = CONCAT31(local_58._1_3_,local_48.is_dst);
    local_68 = 0;
    uStack_64 = 0;
    (__return_storage_ptr__->cs).f_.y = local_48.cs.f_.y;
    (__return_storage_ptr__->cs).f_.m = local_48.cs.f_.m;
    (__return_storage_ptr__->cs).f_.d = local_48.cs.f_.d;
    (__return_storage_ptr__->cs).f_.hh = local_48.cs.f_.hh;
    (__return_storage_ptr__->cs).f_.mm = local_48.cs.f_.mm;
    (__return_storage_ptr__->cs).f_.ss = local_48.cs.f_.ss;
    *(undefined3 *)&(__return_storage_ptr__->cs).f_.field_0xd = local_48.cs.f_._13_3_;
    local_28 = local_58;
    uStack_24 = uStack_54;
    uStack_20 = local_48.abbr._0_4_;
    uStack_1c = local_48.abbr._4_4_;
  }
  (__return_storage_ptr__->subsecond).rep_hi_.lo_ = local_68;
  (__return_storage_ptr__->subsecond).rep_hi_.hi_ = uStack_64;
  (__return_storage_ptr__->subsecond).rep_lo_ = uVar4;
  __return_storage_ptr__->offset = local_48.offset;
  *(uint *)&__return_storage_ptr__->is_dst = local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = uStack_24;
  *(undefined4 *)&__return_storage_ptr__->zone_abbr = uStack_20;
  *(undefined4 *)((longlong)&__return_storage_ptr__->zone_abbr + 4) = uStack_1c;
  return __return_storage_ptr__;
}

// At @ 14f900700

/* public: struct absl::lts_20240722::TimeZone::TimeInfo __cdecl
   absl::lts_20240722::TimeZone::At(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>)const __ptr64 */

TimeInfo * __thiscall
absl::lts_20240722::TimeZone::At
          (TimeZone *this,TimeInfo *__return_storage_ptr__,
          civil_time<absl::lts_20240722::time_internal::second_tag> *param_1)

{
  HiRep HVar1;
  HiRep HVar2;
  HiRep HVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> local_res8;
  time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> local_res10
  ;
  uint local_a8;
  uint uStack_a4;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> local_98;
  civil_lookup local_88;
  absolute_lookup local_68;
  absolute_lookup local_48;
  
  local_98.f_.y = (param_1->f_).y;
  local_98.f_.m = (param_1->f_).m;
  local_98.f_.d = (param_1->f_).d;
  local_98.f_.hh = (param_1->f_).hh;
  local_98.f_.mm = (param_1->f_).mm;
  local_98.f_.ss = (param_1->f_).ss;
  local_98.f_._13_3_ = *(undefined3 *)&(param_1->f_).field_0xd;
  time_internal::cctz::time_zone::lookup(&this->cz_,&local_88,&local_98);
  (__return_storage_ptr__->pre).rep_.rep_hi_.lo_ = 0;
  (__return_storage_ptr__->pre).rep_.rep_hi_.hi_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->pre).rep_.rep_lo_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->trans).rep_.rep_hi_.hi_ = 0;
  (__return_storage_ptr__->post).rep_.rep_hi_.lo_ = 0;
  (__return_storage_ptr__->post).rep_.rep_hi_.hi_ = 0;
  (__return_storage_ptr__->post).rep_.rep_lo_ = 0;
  if (local_88.kind == UNIQUE) {
    __return_storage_ptr__->kind = UNIQUE;
  }
  else if (local_88.kind == SKIPPED) {
    __return_storage_ptr__->kind = SKIPPED;
  }
  else if (local_88.kind == REPEATED) {
    __return_storage_ptr__->kind = REPEATED;
  }
  local_res10._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)0x7fffffffffffffff;
  local_res8._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)-0x8000000000000000;
  uVar5 = 0xffffffff;
  uVar4 = 0;
  if (local_88.pre._MyDur._MyRep == 0x7fffffffffffffff) {
    time_internal::cctz::time_zone::lookup(&this->cz_,&local_68,&local_res10);
    if (local_98.f_.y <= local_68.cs.f_.y) {
      if (local_68.cs.f_.y == local_98.f_.y) {
        if (local_68.cs.f_.m < local_98.f_.m) goto LAB_14f900adc;
        if (local_68.cs.f_.m == local_98.f_.m) {
          if (local_68.cs.f_.d < local_98.f_.d) goto LAB_14f900adc;
          if (local_68.cs.f_.d == local_98.f_.d) {
            if (local_68.cs.f_.hh < local_98.f_.hh) goto LAB_14f900adc;
            if (local_68.cs.f_.hh == local_98.f_.hh) {
              if ((local_68.cs.f_.mm < local_98.f_.mm) ||
                 ((local_68.cs.f_.mm == local_98.f_.mm && (local_68.cs.f_.ss < local_98.f_.ss))))
              goto LAB_14f900adc;
            }
          }
        }
      }
      goto LAB_14f900812;
    }
LAB_14f900adc:
    uVar6 = 0xffffffff;
    local_a8 = 0xffffffff;
    uStack_a4 = 0x7fffffff;
  }
  else {
LAB_14f900812:
    if (local_88.pre._MyDur._MyRep == local_res8._MyDur._MyRep) {
      time_internal::cctz::time_zone::lookup(&this->cz_,&local_48,&local_res8);
      if (local_98.f_.y < local_48.cs.f_.y) {
LAB_14f900aed:
        local_a8 = 0;
        uVar6 = 0xffffffff;
        uStack_a4 = 0x80000000;
        goto LAB_14f900891;
      }
      if (local_98.f_.y == local_48.cs.f_.y) {
        if (local_98.f_.m < local_48.cs.f_.m) goto LAB_14f900aed;
        if (local_98.f_.m == local_48.cs.f_.m) {
          if (local_98.f_.d < local_48.cs.f_.d) goto LAB_14f900aed;
          if (local_98.f_.d == local_48.cs.f_.d) {
            if (local_98.f_.hh < local_48.cs.f_.hh) goto LAB_14f900aed;
            if (local_98.f_.hh == local_48.cs.f_.hh) {
              if ((local_98.f_.mm < local_48.cs.f_.mm) ||
                 ((local_98.f_.mm == local_48.cs.f_.mm && (local_98.f_.ss < local_48.cs.f_.ss))))
              goto LAB_14f900aed;
            }
          }
        }
      }
    }
    local_a8 = SUB84(local_88.pre._MyDur._MyRep,0);
    uStack_a4 = (uint)((ulonglong)local_88.pre._MyDur._MyRep >> 0x20);
    uVar6 = uVar4;
  }
LAB_14f900891:
  HVar1.hi_ = uStack_a4;
  HVar1.lo_ = local_a8;
  (__return_storage_ptr__->pre).rep_.rep_hi_ = HVar1;
  (__return_storage_ptr__->pre).rep_.rep_lo_ = uVar6;
  local_res10._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)0x7fffffffffffffff;
  local_res8._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)-0x8000000000000000;
  if (local_88.trans._MyDur._MyRep == 0x7fffffffffffffff) {
    time_internal::cctz::time_zone::lookup(&this->cz_,&local_48,&local_res10);
    if (local_98.f_.y <= local_48.cs.f_.y) {
      if (local_48.cs.f_.y == local_98.f_.y) {
        if (local_48.cs.f_.m < local_98.f_.m) goto LAB_14f900aff;
        if (local_48.cs.f_.m == local_98.f_.m) {
          if (local_48.cs.f_.d < local_98.f_.d) goto LAB_14f900aff;
          if (local_48.cs.f_.d == local_98.f_.d) {
            if (local_48.cs.f_.hh < local_98.f_.hh) goto LAB_14f900aff;
            if (local_48.cs.f_.hh == local_98.f_.hh) {
              if ((local_48.cs.f_.mm < local_98.f_.mm) ||
                 ((local_48.cs.f_.mm == local_98.f_.mm && (local_48.cs.f_.ss < local_98.f_.ss))))
              goto LAB_14f900aff;
            }
          }
        }
      }
      goto LAB_14f900923;
    }
LAB_14f900aff:
    local_a8 = 0xffffffff;
    uVar6 = 0xffffffff;
    uStack_a4 = 0x7fffffff;
  }
  else {
LAB_14f900923:
    if (local_88.trans._MyDur._MyRep == local_res8._MyDur._MyRep) {
      time_internal::cctz::time_zone::lookup(&this->cz_,&local_68,&local_res8);
      if (local_98.f_.y < local_68.cs.f_.y) {
LAB_14f900b10:
        local_a8 = 0;
        uVar6 = 0xffffffff;
        uStack_a4 = 0x80000000;
        goto LAB_14f9009a2;
      }
      if (local_98.f_.y == local_68.cs.f_.y) {
        if (local_98.f_.m < local_68.cs.f_.m) goto LAB_14f900b10;
        if (local_98.f_.m == local_68.cs.f_.m) {
          if (local_98.f_.d < local_68.cs.f_.d) goto LAB_14f900b10;
          if (local_98.f_.d == local_68.cs.f_.d) {
            if (local_98.f_.hh < local_68.cs.f_.hh) goto LAB_14f900b10;
            if (local_98.f_.hh == local_68.cs.f_.hh) {
              if ((local_98.f_.mm < local_68.cs.f_.mm) ||
                 ((local_98.f_.mm == local_68.cs.f_.mm && (local_98.f_.ss < local_68.cs.f_.ss))))
              goto LAB_14f900b10;
            }
          }
        }
      }
    }
    local_a8 = SUB84(local_88.trans._MyDur._MyRep,0);
    uStack_a4 = (uint)((ulonglong)local_88.trans._MyDur._MyRep >> 0x20);
    uVar6 = uVar4;
  }
LAB_14f9009a2:
  HVar2.hi_ = uStack_a4;
  HVar2.lo_ = local_a8;
  (__return_storage_ptr__->trans).rep_.rep_hi_ = HVar2;
  (__return_storage_ptr__->trans).rep_.rep_lo_ = uVar6;
  local_res10._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)0x7fffffffffffffff;
  local_res8._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)-0x8000000000000000;
  if (local_88.post._MyDur._MyRep == 0x7fffffffffffffff) {
    time_internal::cctz::time_zone::lookup(&this->cz_,&local_48,&local_res10);
    if (local_48.cs.f_.y < local_98.f_.y) {
LAB_14f900b22:
      local_a8 = 0xffffffff;
      uStack_a4 = 0x7fffffff;
      goto LAB_14f900ab0;
    }
    if (local_48.cs.f_.y == local_98.f_.y) {
      if (local_48.cs.f_.m < local_98.f_.m) goto LAB_14f900b22;
      if (local_48.cs.f_.m == local_98.f_.m) {
        if (local_48.cs.f_.d < local_98.f_.d) goto LAB_14f900b22;
        if (local_48.cs.f_.d == local_98.f_.d) {
          if (local_48.cs.f_.hh < local_98.f_.hh) goto LAB_14f900b22;
          if (local_48.cs.f_.hh == local_98.f_.hh) {
            if ((local_48.cs.f_.mm < local_98.f_.mm) ||
               ((local_48.cs.f_.mm == local_98.f_.mm && (local_48.cs.f_.ss < local_98.f_.ss))))
            goto LAB_14f900b22;
          }
        }
      }
    }
  }
  if (local_88.post._MyDur._MyRep == local_res8._MyDur._MyRep) {
    time_internal::cctz::time_zone::lookup(&this->cz_,&local_68,&local_res8);
    if (local_98.f_.y < local_68.cs.f_.y) {
LAB_14f900b2e:
      local_a8 = 0;
      uStack_a4 = 0x80000000;
      goto LAB_14f900ab0;
    }
    if (local_98.f_.y == local_68.cs.f_.y) {
      if (local_98.f_.m < local_68.cs.f_.m) goto LAB_14f900b2e;
      if (local_98.f_.m == local_68.cs.f_.m) {
        if (local_98.f_.d < local_68.cs.f_.d) goto LAB_14f900b2e;
        if (local_98.f_.d == local_68.cs.f_.d) {
          if (local_98.f_.hh < local_68.cs.f_.hh) goto LAB_14f900b2e;
          if (local_98.f_.hh == local_68.cs.f_.hh) {
            if ((local_98.f_.mm < local_68.cs.f_.mm) ||
               ((local_98.f_.mm == local_68.cs.f_.mm && (local_98.f_.ss < local_68.cs.f_.ss))))
            goto LAB_14f900b2e;
          }
        }
      }
    }
  }
  local_a8 = SUB84(local_88.post._MyDur._MyRep,0);
  uStack_a4 = (uint)((ulonglong)local_88.post._MyDur._MyRep >> 0x20);
  uVar5 = uVar4;
LAB_14f900ab0:
  HVar3.hi_ = uStack_a4;
  HVar3.lo_ = local_a8;
  (__return_storage_ptr__->post).rep_.rep_hi_ = HVar3;
  (__return_storage_ptr__->post).rep_.rep_lo_ = uVar5;
  return __return_storage_ptr__;
}

// ConvertDateTime @ 14f900b50

/* struct absl::lts_20240722::TimeConversion __cdecl
   absl::lts_20240722::ConvertDateTime(__int64,int,int,int,int,int,class
   absl::lts_20240722::TimeZone) */

__int64 __cdecl
absl::lts_20240722::ConvertDateTime
          (__int64 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          TimeZone param_7)

{
  fields *pfVar1;
  undefined4 in_register_00000014;
  longlong lVar2;
  fields local_58;
  longlong local_48;
  undefined8 uStack_40;
  TimeInfo local_38;
  
  lVar2 = CONCAT44(in_register_00000014,param_2);
  if (lVar2 < 0x45d964b801) {
    if (lVar2 < -300000000000) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0xffffffff80000000;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      pfVar1 = time_internal::cctz::detail::impl::n_sec
                         (&local_58,lVar2,(longlong)param_3,(longlong)param_4,(longlong)param_5,
                          (longlong)param_6,(longlong)(int)param_7.cz_.impl_);
      local_58.y = pfVar1->y;
      local_58.m = pfVar1->m;
      local_58.d = pfVar1->d;
      local_58.hh = pfVar1->hh;
      local_58.mm = pfVar1->mm;
      local_58.ss = pfVar1->ss;
      local_58._13_3_ = *(undefined3 *)&pfVar1->field_0xd;
      local_48 = local_58.y;
      uStack_40 = local_58._8_8_;
      TimeZone::At((TimeZone *)&stack0x00000040,&local_38,
                   (civil_time<absl::lts_20240722::time_internal::second_tag> *)&local_58);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x1c) = 0;
      *(HiRep *)param_1 = local_38.pre.rep_.rep_hi_;
      *(HiRep *)(param_1 + 0xc) = local_38.trans.rep_.rep_hi_;
      *(uint *)(param_1 + 8) = local_38.pre.rep_.rep_lo_;
      *(uint *)(param_1 + 0x14) = local_38.trans.rep_.rep_lo_;
      *(HiRep *)(param_1 + 0x18) = local_38.post.rep_.rep_hi_;
      *(uint *)(param_1 + 0x20) = local_38.post.rep_.rep_lo_;
      if (local_38.kind == UNIQUE) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      else if (local_38.kind == SKIPPED) {
        *(undefined4 *)(param_1 + 0x24) = 1;
      }
      else if (local_38.kind == REPEATED) {
        *(undefined4 *)(param_1 + 0x24) = 2;
      }
      *(undefined1 *)(param_1 + 0x28) = 0;
      if ((((lVar2 == local_48) && (param_3 == (char)uStack_40)) && (param_4 == SUB81(uStack_40,1)))
         && (((param_5 == SUB81(uStack_40,2) && (param_6 == SUB81(uStack_40,3))) &&
             ((int)param_7.cz_.impl_ == SUB81(uStack_40,4))))) {
        return param_1;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  return param_1;
}

// FUN_14f900d70 @ 14f900d70

undefined1 FUN_14f900d70(undefined8 param_1,code *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  local_res10[0] = *param_3;
  local_28 = 0x7b2;
  uStack_20 = 0x101;
  uStack_1c = uStack_1c & 0xffffff00;
  local_18 = 0x7b2;
  uStack_10 = 0x101;
  uStack_c = uStack_c & 0xffffff00;
  cVar1 = (*param_2)((int)local_res10[0],local_res10,&local_28);
  if (cVar1 == '\0') {
    return 0;
  }
  *param_4 = local_28;
  param_4[1] = CONCAT44(uStack_1c,uStack_20);
  param_4[2] = local_18;
  param_4[3] = CONCAT44(uStack_c,uStack_10);
  return 1;
}

// FUN_14f900e10 @ 14f900e10

__int64 FUN_14f900e10(HiRep *param_1,HiRep *param_2)

{
  __int64 _Var1;
  Duration local_38;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_hi_ = *param_2;
  local_18[0].rep_hi_ = *param_1;
  local_38.rep_hi_.lo_ = 0;
  local_38.rep_hi_.hi_ = 0;
  local_38.rep_lo_ = 0;
  local_28.rep_lo_ = param_2[1].lo_;
  local_18[0].rep_lo_ = param_1[1].lo_;
  _Var1 = absl::lts_20240722::IDivDuration(local_18,&local_28,&local_38);
  if ((((_Var1 < 1) && (local_38.rep_hi_ != (HiRep)0x0)) && ((longlong)local_38.rep_hi_ < 0)) &&
     (_Var1 != -0x8000000000000000)) {
    _Var1 = _Var1 + -1;
  }
  return _Var1;
}

// FromChrono @ 14f900ea0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::FromChrono(class
   std::chrono::duration<__int64,struct std::ratio<1,1000000000> > const & __ptr64) */

Duration * __cdecl
absl::lts_20240722::FromChrono
          (Duration *__return_storage_ptr__,duration<__int64,std::ratio<1,1000000000>_> *param_1)

{
  time_internal::FromInt64<1000000000>
            (__return_storage_ptr__,param_1->_MyRep,(ratio<1,1000000000>)0x0);
  return __return_storage_ptr__;
}

// FromChrono @ 14f900ed0

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::FromChrono(class
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > const & __ptr64) */

Time * __cdecl
absl::lts_20240722::FromChrono
          (Time *__return_storage_ptr__,
          time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          *param_1)

{
  longlong lVar1;
  longlong lVar2;
  HiRep local_18;
  uint local_10;
  
  lVar2 = (param_1->_MyDur)._MyRep;
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8) + lVar2;
  local_18 = (HiRep)((lVar1 >> 0x17) - (lVar1 >> 0x3f));
  lVar2 = (lVar2 + (longlong)local_18 * -10000000) * 400;
  local_10 = (uint)lVar2;
  if (lVar2 < 0) {
    local_18 = (HiRep)((longlong)local_18 + -1);
    local_10 = local_10 + 4000000000;
  }
  (__return_storage_ptr__->rep_).rep_hi_ = local_18;
  (__return_storage_ptr__->rep_).rep_lo_ = local_10;
  return __return_storage_ptr__;
}

// FromTM @ 14f900f70

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::FromTM(struct tm const & __ptr64,class
   absl::lts_20240722::TimeZone) */

Time * __cdecl absl::lts_20240722::FromTM(Time *__return_storage_ptr__,tm *param_1,TimeZone param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  fields *pfVar4;
  Time *pTVar5;
  longlong lVar6;
  TimeZone local_res18 [2];
  fields local_58;
  TimeInfo local_48;
  
  iVar1 = param_1->tm_mon;
  iVar3 = 0x7ffffff3;
  if (iVar1 != 0x7fffffff) {
    iVar3 = iVar1;
  }
  lVar6 = (longlong)param_1->tm_year + 1;
  if (iVar1 != 0x7fffffff) {
    lVar6 = (longlong)param_1->tm_year;
  }
  local_res18[0].cz_.impl_ = param_2.cz_.impl_;
  pfVar4 = time_internal::cctz::detail::impl::n_sec
                     (&local_58,lVar6 + 0x76c,(longlong)iVar3 + 1,(longlong)param_1->tm_mday,
                      (longlong)param_1->tm_hour,(longlong)param_1->tm_min,(longlong)param_1->tm_sec
                     );
  local_58.y = pfVar4->y;
  local_58.m = pfVar4->m;
  local_58.d = pfVar4->d;
  local_58.hh = pfVar4->hh;
  local_58.mm = pfVar4->mm;
  local_58.ss = pfVar4->ss;
  local_58._13_3_ = *(undefined3 *)&pfVar4->field_0xd;
  TimeZone::At(local_res18,&local_48,
               (civil_time<absl::lts_20240722::time_internal::second_tag> *)&local_58);
  pTVar5 = &local_48.post;
  if (param_1->tm_isdst != 0) {
    pTVar5 = &local_48.pre;
  }
  uVar2 = (pTVar5->rep_).rep_lo_;
  (__return_storage_ptr__->rep_).rep_hi_ = (pTVar5->rep_).rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = uVar2;
  return __return_storage_ptr__;
}

// FromUDate @ 14f901050

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::FromUDate(double) */

Time * __cdecl absl::lts_20240722::FromUDate(Time *__return_storage_ptr__,double param_1)

{
  uint uVar1;
  Duration *pDVar2;
  Duration local_18;
  
  local_18.rep_lo_ = 4000000;
  local_18.rep_hi_.lo_ = 0;
  local_18.rep_hi_.hi_ = 0;
  pDVar2 = Duration::operator*=(&local_18,param_1);
  uVar1 = pDVar2->rep_lo_;
  (__return_storage_ptr__->rep_).rep_hi_ = pDVar2->rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// FromUniversal @ 14f9010a0

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::FromUniversal(__int64) */

Time * __cdecl absl::lts_20240722::FromUniversal(Time *__return_storage_ptr__,__int64 param_1)

{
  Duration *pDVar1;
  longlong lVar2;
  Duration local_38;
  Duration local_28;
  Duration local_18;
  
  local_38.rep_hi_ = (HiRep)(param_1 / 1000000000);
  lVar2 = (param_1 % 1000000000) * 4;
  local_38.rep_lo_ = (uint)lVar2;
  if (lVar2 < 0) {
    local_38.rep_hi_ = (HiRep)((longlong)local_38.rep_hi_ + -1);
    local_38.rep_lo_ = local_38.rep_lo_ + 4000000000;
  }
  local_28.rep_hi_ = local_38.rep_hi_;
  local_28.rep_lo_ = local_38.rep_lo_;
  pDVar1 = Duration::operator*=(&local_28,100);
  local_18.rep_lo_ = pDVar1->rep_lo_;
  local_18.rep_hi_ = pDVar1->rep_hi_;
  local_38.rep_hi_.lo_ = 0x886e0900;
  local_38.rep_hi_.hi_ = 0xfffffff1;
  local_38.rep_lo_ = 0;
  Duration::operator+=(&local_38,&local_18);
  (__return_storage_ptr__->rep_).rep_hi_ = local_38.rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = local_38.rep_lo_;
  return __return_storage_ptr__;
}

// FromUnixDuration @ 14f901190

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::time_internal::FromUnixDuration(class
   absl::lts_20240722::Duration) */

Time * __cdecl
absl::lts_20240722::time_internal::FromUnixDuration(Time *__return_storage_ptr__,Duration *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->rep_lo_;
  (__return_storage_ptr__->rep_).rep_hi_ = param_1->rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// Get @ 14f9011b0

/* public: __int64 __cdecl absl::lts_20240722::Duration::HiRep::Get(void)const __ptr64 */

__int64 __thiscall absl::lts_20240722::Duration::HiRep::Get(HiRep *this)

{
  return (__int64)*this;
}

// GetRepHi @ 14f9011d0

/* __int64 __cdecl absl::lts_20240722::time_internal::GetRepHi(class absl::lts_20240722::Duration)
    */

__int64 __cdecl absl::lts_20240722::time_internal::GetRepHi(Duration *param_1)

{
  return (__int64)param_1->rep_hi_;
}

// GetRepLo @ 14f9011f0

/* unsigned int __cdecl absl::lts_20240722::time_internal::GetRepLo(class
   absl::lts_20240722::Duration) */

uint __cdecl absl::lts_20240722::time_internal::GetRepLo(Duration *param_1)

{
  return param_1->rep_lo_;
}

// GetWeekday @ 14f901200

/* enum absl::lts_20240722::time_internal::cctz::detail::weekday __cdecl
   absl::lts_20240722::GetWeekday(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>) */

weekday __cdecl
absl::lts_20240722::GetWeekday(civil_time<absl::lts_20240722::time_internal::second_tag> *param_1)

{
  weekday wVar1;
  civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> local_18;
  
  local_18.f_.y = (param_1->f_).y;
  local_18.f_.m = (param_1->f_).m;
  local_18.f_.d = (param_1->f_).d;
  local_18.f_.hh = (param_1->f_).hh;
  local_18.f_.mm = (param_1->f_).mm;
  local_18.f_.ss = (param_1->f_).ss;
  local_18.f_._13_3_ = *(undefined3 *)&(param_1->f_).field_0xd;
  wVar1 = time_internal::cctz::detail::get_weekday(&local_18);
  return wVar1;
}

// GetYearDay @ 14f901230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl absl::lts_20240722::GetYearDay(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>) */

int __cdecl
absl::lts_20240722::GetYearDay(civil_time<absl::lts_20240722::time_internal::second_tag> *param_1)

{
  fields fVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar2 = (param_1->f_).m;
  local_28 = 0x14e;
  fVar1 = param_1->f_;
  local_58 = ___xmm_0000003b0000001f00000000ffffffff;
  uStack_50 = _UNK_153537308;
  local_38 = ___xmm_0000013000000111000000f3000000d4;
  uStack_30 = _UNK_153537328;
  local_48 = ___xmm_000000b500000097000000780000005a;
  uStack_40 = _UNK_153537318;
  if ('\x02' < (char)uVar2) {
    bVar3 = time_internal::cctz::detail::impl::is_leap_year(fVar1.y);
    if (bVar3) {
      iVar4 = 1;
      goto LAB_14f9012a1;
    }
  }
  iVar4 = 0;
LAB_14f9012a1:
  return *(int *)((longlong)&local_58 + (longlong)(char)uVar2 * 4) + (int)fVar1.d + iVar4;
}

// In @ 14f9012e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: struct absl::lts_20240722::Time::Breakdown __cdecl absl::lts_20240722::Time::In(class
   absl::lts_20240722::TimeZone)const __ptr64 */

Breakdown * __thiscall
absl::lts_20240722::Time::In(Time *this,Breakdown *__return_storage_ptr__,TimeZone param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  weekday wVar7;
  Duration *pDVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  Duration local_f8;
  uint uStack_ec;
  HiRep local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  uint local_b4;
  HiRep local_a8 [2];
  civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> local_98;
  absolute_lookup local_88;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  uVar4 = _UNK_1535372f8;
  uVar12 = ___xmm_0000003b000000170000001f0000000c;
  local_30 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (((this->rep_).rep_hi_ == (HiRep)0x7fffffffffffffff) && ((this->rep_).rep_lo_ == 0xffffffff)) {
    __return_storage_ptr__->year = 0x7fffffffffffffff;
    uVar5 = ___xmm_0000003b000000170000001f0000000c;
    ___xmm_0000003b000000170000001f0000000c = (undefined4)uVar12;
    _UNK_1535372f4 = SUB84(uVar12,4);
    uVar3 = _UNK_1535372f4;
    __return_storage_ptr__->month = ___xmm_0000003b000000170000001f0000000c;
    ___xmm_0000003b000000170000001f0000000c = uVar5;
    uVar12 = _UNK_1535372f8;
    __return_storage_ptr__->day = uVar3;
    _UNK_1535372f8 = (undefined4)uVar4;
    _UNK_1535372fc = SUB84(uVar4,4);
    uVar3 = _UNK_1535372fc;
    __return_storage_ptr__->hour = _UNK_1535372f8;
    _UNK_1535372f8 = uVar12;
    __return_storage_ptr__->minute = uVar3;
    __return_storage_ptr__->second = 0x3b;
    (__return_storage_ptr__->subsecond).rep_hi_.lo_ = 0xffffffff;
    uVar12 = 0xffffffff7fffffff;
    puVar13 = (undefined1 *)0x16d00000004;
    local_b4 = local_b4 & 0xffffff00;
    lVar14 = (ulonglong)local_b4 << 0x20;
    local_88.abbr = "-00";
  }
  else if (((this->rep_).rep_hi_ == (HiRep)0x8000000000000000) &&
          ((this->rep_).rep_lo_ == 0xffffffff)) {
    local_e8.lo_ = 0;
    local_e8.hi_ = 0x80000000;
    iStack_d0 = 0;
    uStack_e0 = ___xmm_00000000000000000000000100000001;
    uStack_d8 = _UNK_150744118;
    local_f8.rep_hi_.lo_ = 0xffffffff;
    local_f8.rep_hi_.hi_ = 0x7fffffff;
    local_f8.rep_lo_._0_1_ = 0xff;
    local_f8.rep_lo_._1_1_ = 0xff;
    local_f8.rep_lo_._2_2_ = 0xffff;
    pDVar8 = lts_20240722::operator-((Duration *)&local_98,&local_f8);
    local_b4 = local_b4 & 0xffffff00;
    uVar1 = pDVar8->rep_lo_;
    uStack_cc = (pDVar8->rep_hi_).lo_;
    uStack_c8 = (pDVar8->rep_hi_).hi_;
    __return_storage_ptr__->year = (long64)local_e8;
    __return_storage_ptr__->month = (undefined4)uStack_e0;
    __return_storage_ptr__->day = uStack_e0._4_4_;
    uVar12 = CONCAT44(uVar1,uStack_c8);
    puVar13 = &DAT_100000007;
    __return_storage_ptr__->hour = (undefined4)uStack_d8;
    __return_storage_ptr__->minute = uStack_d8._4_4_;
    __return_storage_ptr__->second = iStack_d0;
    (__return_storage_ptr__->subsecond).rep_hi_.lo_ = uStack_cc;
    lVar14 = (ulonglong)local_b4 << 0x20;
    local_88.abbr = "-00";
  }
  else {
    uVar1 = (this->rep_).rep_lo_;
    local_a8[0] = (this->rep_).rep_hi_;
    local_f8.rep_lo_._0_1_ = (char)uVar1;
    local_f8.rep_lo_._1_1_ = (char)(uVar1 >> 8);
    local_f8.rep_lo_._2_2_ = (undefined2)(uVar1 >> 0x10);
    local_f8.rep_hi_ = (HiRep)param_1.cz_.impl_;
    time_internal::cctz::time_zone::lookup
              ((time_zone *)&local_f8,&local_88,
               (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
                *)local_a8);
    uVar1 = uStack_ec;
    cVar11 = local_88.cs.f_.m;
    cVar10 = local_88.cs.f_.d;
    uStack_e0 = CONCAT44((int)cVar10,(int)cVar11);
    uStack_d8 = CONCAT44((int)local_88.cs.f_.mm,(int)local_88.cs.f_.hh);
    iStack_d0 = (int)local_88.cs.f_.ss;
    uStack_c4 = (this->rep_).rep_lo_;
    local_f8.rep_hi_.lo_ = (undefined4)local_88.cs.f_.y;
    local_f8.rep_hi_.hi_ = local_88.cs.f_.y._4_4_;
    local_f8.rep_lo_._2_2_ = 0;
    uStack_ec = uStack_ec & 0xffffff00;
    local_98.f_._8_8_ = CONCAT44(uVar1,(uint)local_88.cs.f_._8_2_) & 0xffffff00ffffffff;
    uStack_cc = 0;
    uStack_c8 = 0;
    local_e8.lo_ = (undefined4)local_88.cs.f_.y;
    local_e8.hi_ = local_88.cs.f_.y._4_4_;
    local_98.f_.y = local_88.cs.f_.y;
    local_f8.rep_lo_._0_1_ = cVar11;
    local_f8.rep_lo_._1_1_ = cVar10;
    wVar7 = time_internal::cctz::detail::get_weekday(&local_98);
    iVar9 = 1;
    switch(wVar7) {
    default:
      uStack_c0 = 1;
      break;
    case 1:
      uStack_c0 = 2;
      break;
    case 2:
      uStack_c0 = 3;
      break;
    case 3:
      uStack_c0 = 4;
      break;
    case 4:
      uStack_c0 = 5;
      break;
    case 5:
      uStack_c0 = 6;
      break;
    case 6:
      uStack_c0 = 7;
    }
    local_38 = 0x14e;
    local_68 = ___xmm_0000003b0000001f00000000ffffffff;
    uStack_60 = _UNK_153537308;
    local_48 = ___xmm_0000013000000111000000f3000000d4;
    uStack_40 = _UNK_153537328;
    local_58 = ___xmm_000000b500000097000000780000005a;
    uStack_50 = _UNK_153537318;
    if ((cVar11 < '\x03') ||
       (bVar6 = time_internal::cctz::detail::impl::is_leap_year(local_88.cs.f_.y), !bVar6)) {
      iVar9 = 0;
    }
    iVar2 = *(int *)((longlong)&local_68 + (longlong)cVar11 * 4);
    local_b4 = CONCAT31(local_b4._1_3_,local_88.is_dst);
    __return_storage_ptr__->year = (long64)local_e8;
    __return_storage_ptr__->month = (undefined4)uStack_e0;
    __return_storage_ptr__->day = uStack_e0._4_4_;
    uVar12 = CONCAT44(uStack_c4,uStack_c8);
    puVar13 = (undefined1 *)CONCAT44(iVar2 + cVar10 + iVar9,uStack_c0);
    __return_storage_ptr__->hour = (undefined4)uStack_d8;
    __return_storage_ptr__->minute = uStack_d8._4_4_;
    __return_storage_ptr__->second = iStack_d0;
    (__return_storage_ptr__->subsecond).rep_hi_.lo_ = uStack_cc;
    lVar14 = CONCAT44(local_b4,local_88.offset);
  }
  *(undefined8 *)&(__return_storage_ptr__->subsecond).rep_hi_.hi_ = uVar12;
  *(undefined1 **)&__return_storage_ptr__->weekday = puVar13;
  __return_storage_ptr__->offset = (int)lVar14;
  __return_storage_ptr__->is_dst = (bool)(char)((ulonglong)lVar14 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0x35 = (int3)((ulonglong)lVar14 >> 0x28);
  __return_storage_ptr__->zone_abbr = local_88.abbr;
  return __return_storage_ptr__;
}

// InfiniteDuration @ 14f9016b0

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::InfiniteDuration(void) */

Duration * __cdecl absl::lts_20240722::InfiniteDuration(Duration *__return_storage_ptr__)

{
  (__return_storage_ptr__->rep_hi_).hi_ = 0x7fffffff;
  (__return_storage_ptr__->rep_hi_).lo_ = 0xffffffff;
  __return_storage_ptr__->rep_lo_ = 0xffffffff;
  return __return_storage_ptr__;
}

// InfiniteFuture @ 14f9016d0

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::InfiniteFuture(void) */

Time * __cdecl absl::lts_20240722::InfiniteFuture(Time *__return_storage_ptr__)

{
  (__return_storage_ptr__->rep_).rep_hi_.lo_ = 0xffffffff;
  (__return_storage_ptr__->rep_).rep_hi_.hi_ = 0x7fffffff;
  (__return_storage_ptr__->rep_).rep_lo_ = 0xffffffff;
  return __return_storage_ptr__;
}

// FUN_14f901760 @ 14f901760

long64 * FUN_14f901760(long64 *param_1)

{
  fields local_18;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  absl::lts_20240722::time_internal::cctz::detail::impl::n_day
            (&local_18,0x7fffffffffffffff,'\f',0x1f,0,'\x17',';',';');
  *param_1 = local_18.y;
  param_1[1] = local_18._8_8_;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[5] = (long64)"-00";
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}

// InfinitePast @ 14f901840

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::InfinitePast(void) */

Time * __cdecl absl::lts_20240722::InfinitePast(Time *__return_storage_ptr__)

{
  (__return_storage_ptr__->rep_).rep_hi_.lo_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->rep_).rep_hi_.hi_ = 0xffffffff80000000;
  return __return_storage_ptr__;
}

// FUN_14f901860 @ 14f901860

undefined8 * FUN_14f901860(undefined8 *param_1)

{
  Duration *pDVar1;
  Duration local_28;
  Duration local_18;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = 0x8000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 1;
  local_28.rep_hi_.lo_ = 0xffffffff;
  local_28.rep_hi_.hi_ = 0x7fffffff;
  local_28.rep_lo_ = 0xffffffff;
  pDVar1 = absl::lts_20240722::operator-(&local_18,&local_28);
  *(HiRep *)((longlong)param_1 + 0x1c) = pDVar1->rep_hi_;
  *(uint *)((longlong)param_1 + 0x24) = pDVar1->rep_lo_;
  param_1[7] = "-00";
  *(undefined4 *)(param_1 + 5) = 7;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return param_1;
}

// FUN_14f901900 @ 14f901900

undefined8 * FUN_14f901900(undefined8 *param_1)

{
  Duration *pDVar1;
  Duration local_28;
  Duration local_18;
  uint uStack_c;
  
  local_18.rep_lo_ = 0x101;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  local_18.rep_hi_.lo_ = 0;
  local_18.rep_hi_.hi_ = 0x80000000;
  uStack_c = uStack_c & 0xffffff00;
  local_28.rep_hi_.lo_ = 0xffffffff;
  local_28.rep_hi_.hi_ = 0x7fffffff;
  *param_1 = 0x8000000000000000;
  param_1[1] = CONCAT44(uStack_c,0x101);
  local_28.rep_lo_ = 0xffffffff;
  pDVar1 = absl::lts_20240722::operator-(&local_18,&local_28);
  *(HiRep *)(param_1 + 2) = pDVar1->rep_hi_;
  *(uint *)(param_1 + 3) = pDVar1->rep_lo_;
  param_1[5] = "-00";
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}

// IsInfiniteDuration @ 14f9019e0

/* bool __cdecl absl::lts_20240722::time_internal::IsInfiniteDuration(class
   absl::lts_20240722::Duration) */

bool __cdecl absl::lts_20240722::time_internal::IsInfiniteDuration(Duration *param_1)

{
  return param_1->rep_lo_ == 0xffffffff;
}

// MakeDuration @ 14f901a00

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::MakeDuration(__int64,__int64) */

Duration * __cdecl
absl::lts_20240722::time_internal::MakeDuration
          (Duration *__return_storage_ptr__,__int64 param_1,__int64 param_2)

{
  (__return_storage_ptr__->rep_hi_).lo_ = (int)param_1;
  (__return_storage_ptr__->rep_hi_).hi_ = (int)((ulonglong)param_1 >> 0x20);
  __return_storage_ptr__->rep_lo_ = (uint)param_2;
  return __return_storage_ptr__;
}

// MakeDuration @ 14f901a20

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::MakeDuration(__int64,unsigned int) */

Duration * __cdecl
absl::lts_20240722::time_internal::MakeDuration
          (Duration *__return_storage_ptr__,__int64 param_1,uint param_2)

{
  (__return_storage_ptr__->rep_hi_).lo_ = (int)param_1;
  (__return_storage_ptr__->rep_hi_).hi_ = (int)((ulonglong)param_1 >> 0x20);
  __return_storage_ptr__->rep_lo_ = param_2;
  return __return_storage_ptr__;
}

// MakeNormalizedDuration @ 14f901a40

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::MakeNormalizedDuration(__int64,__int64) */

Duration * __cdecl
absl::lts_20240722::time_internal::MakeNormalizedDuration
          (Duration *__return_storage_ptr__,__int64 param_1,__int64 param_2)

{
  HiRep HVar1;
  uint uStack_14;
  uint local_10;
  
  local_10 = (uint)param_2;
  if (param_2 < 0) {
    param_1 = param_1 + -1;
    uStack_14 = (uint)((ulonglong)param_1 >> 0x20);
    local_10 = local_10 + 4000000000;
  }
  else {
    uStack_14 = (uint)((ulonglong)param_1 >> 0x20);
  }
  HVar1.hi_ = uStack_14;
  HVar1.lo_ = (uint)param_1;
  __return_storage_ptr__->rep_hi_ = HVar1;
  __return_storage_ptr__->rep_lo_ = local_10;
  return __return_storage_ptr__;
}

// FUN_14f901aa0 @ 14f901aa0

undefined4 *
FUN_14f901aa0(undefined4 *param_1,longlong *param_2,longlong *param_3,time_zone *param_4,
             undefined1 *param_5)

{
  longlong lVar1;
  time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> local_res10
  ;
  time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_> local_38;
  absolute_lookup local_30;
  
  local_res10._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)-0x8000000000000000;
  local_38._MyDur._MyRep = (duration<__int64,std::ratio<1,1>_>)0x7fffffffffffffff;
  if (*param_2 == 0x7fffffffffffffff) {
    absl::lts_20240722::time_internal::cctz::time_zone::lookup(param_4,&local_30,&local_38);
    if ((local_30.cs.f_.y < *param_3) ||
       ((local_30.cs.f_.y == *param_3 &&
        ((local_30.cs.f_.m < (char)param_3[1] ||
         ((local_30.cs.f_.m == (char)param_3[1] &&
          ((local_30.cs.f_.d < *(char *)((longlong)param_3 + 9) ||
           ((local_30.cs.f_.d == *(char *)((longlong)param_3 + 9) &&
            ((local_30.cs.f_.hh < *(char *)((longlong)param_3 + 10) ||
             ((local_30.cs.f_.hh == *(char *)((longlong)param_3 + 10) &&
              ((local_30.cs.f_.mm < *(char *)((longlong)param_3 + 0xb) ||
               ((local_30.cs.f_.mm == *(char *)((longlong)param_3 + 0xb) &&
                (local_30.cs.f_.ss < *(char *)((longlong)param_3 + 0xc))))))))))))))))))))) {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      *param_1 = 0xffffffff;
      param_1[1] = 0x7fffffff;
      param_1[2] = 0xffffffff;
      return param_1;
    }
  }
  if ((duration<__int64,std::ratio<1,1>_>)*param_2 == local_res10._MyDur._MyRep) {
    absl::lts_20240722::time_internal::cctz::time_zone::lookup(param_4,&local_30,&local_res10);
    if ((*param_3 < local_30.cs.f_.y) ||
       ((*param_3 == local_30.cs.f_.y &&
        (((char)param_3[1] < local_30.cs.f_.m ||
         (((char)param_3[1] == local_30.cs.f_.m &&
          ((*(char *)((longlong)param_3 + 9) < local_30.cs.f_.d ||
           ((*(char *)((longlong)param_3 + 9) == local_30.cs.f_.d &&
            ((*(char *)((longlong)param_3 + 10) < local_30.cs.f_.hh ||
             ((*(char *)((longlong)param_3 + 10) == local_30.cs.f_.hh &&
              ((*(char *)((longlong)param_3 + 0xb) < local_30.cs.f_.mm ||
               ((*(char *)((longlong)param_3 + 0xb) == local_30.cs.f_.mm &&
                (*(char *)((longlong)param_3 + 0xc) < local_30.cs.f_.ss)))))))))))))))))))) {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      *param_1 = 0;
      *(undefined8 *)(param_1 + 1) = 0xffffffff80000000;
      return param_1;
    }
  }
  lVar1 = *param_2;
  *param_1 = (int)lVar1;
  param_1[1] = (int)((ulonglong)lVar1 >> 0x20);
  param_1[2] = 0;
  return param_1;
}

// NegateAndSubtractOne @ 14f901cb0

/* __int64 __cdecl absl::lts_20240722::time_internal::NegateAndSubtractOne(__int64) */

__int64 __cdecl absl::lts_20240722::time_internal::NegateAndSubtractOne(__int64 param_1)

{
  return ~param_1;
}

// NextTransition @ 14f901cc0

/* public: bool __cdecl absl::lts_20240722::TimeZone::NextTransition(class
   absl::lts_20240722::Time,struct absl::lts_20240722::TimeZone::CivilTransition * __ptr64)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::TimeZone::NextTransition(TimeZone *this,Time *param_1,CivilTransition *param_2)

{
  bool bVar1;
  HiRep local_res8 [4];
  civil_transition local_28;
  
  local_res8[0] = (param_1->rep_).rep_hi_;
  local_28.from.f_.y = 0x7b2;
  local_28.from.f_.m = '\x01';
  local_28.from.f_.d = '\x01';
  local_28.from.f_.hh = '\0';
  local_28.from.f_.mm = '\0';
  local_28.from.f_._12_4_ = local_28.from.f_._12_4_ & 0xffffff00;
  local_28.to.f_.y = 0x7b2;
  local_28.to.f_.m = '\x01';
  local_28.to.f_.d = '\x01';
  local_28.to.f_.hh = '\0';
  local_28.to.f_.mm = '\0';
  local_28.to.f_._12_4_ = local_28.to.f_._12_4_ & 0xffffff00;
  bVar1 = time_internal::cctz::time_zone::next_transition
                    (&this->cz_,
                     (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
                      *)local_res8,&local_28);
  if (!bVar1) {
    return false;
  }
  (param_2->from).f_.y = local_28.from.f_.y;
  (param_2->from).f_.m = local_28.from.f_.m;
  (param_2->from).f_.d = local_28.from.f_.d;
  (param_2->from).f_.hh = local_28.from.f_.hh;
  (param_2->from).f_.mm = local_28.from.f_.mm;
  (param_2->from).f_.ss = local_28.from.f_.ss;
  *(int3 *)&(param_2->from).f_.field_0xd = local_28.from.f_._13_3_;
  (param_2->to).f_.y = local_28.to.f_.y;
  (param_2->to).f_.m = local_28.to.f_.m;
  (param_2->to).f_.d = local_28.to.f_.d;
  (param_2->to).f_.hh = local_28.to.f_.hh;
  (param_2->to).f_.mm = local_28.to.f_.mm;
  (param_2->to).f_.ss = local_28.to.f_.ss;
  *(int3 *)&(param_2->to).f_.field_0xd = local_28.to.f_._13_3_;
  return true;
}

// OppositeInfinity @ 14f901d60

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::OppositeInfinity(class absl::lts_20240722::Duration) */

Duration * __cdecl
absl::lts_20240722::time_internal::OppositeInfinity
          (Duration *__return_storage_ptr__,Duration *param_1)

{
  HiRep local_18;
  
  if ((longlong)param_1->rep_hi_ < 0) {
    local_18.lo_ = 0xffffffff;
    local_18.hi_ = 0x7fffffff;
  }
  else {
    local_18.lo_ = 0;
    local_18.hi_ = 0x80000000;
  }
  __return_storage_ptr__->rep_hi_ = local_18;
  __return_storage_ptr__->rep_lo_ = 0xffffffff;
  return __return_storage_ptr__;
}

// PrevTransition @ 14f901de0

/* public: bool __cdecl absl::lts_20240722::TimeZone::PrevTransition(class
   absl::lts_20240722::Time,struct absl::lts_20240722::TimeZone::CivilTransition * __ptr64)const
   __ptr64 */

bool __thiscall
absl::lts_20240722::TimeZone::PrevTransition(TimeZone *this,Time *param_1,CivilTransition *param_2)

{
  bool bVar1;
  HiRep local_res8 [4];
  civil_transition local_28;
  
  local_res8[0] = (param_1->rep_).rep_hi_;
  local_28.from.f_.y = 0x7b2;
  local_28.from.f_.m = '\x01';
  local_28.from.f_.d = '\x01';
  local_28.from.f_.hh = '\0';
  local_28.from.f_.mm = '\0';
  local_28.from.f_._12_4_ = local_28.from.f_._12_4_ & 0xffffff00;
  local_28.to.f_.y = 0x7b2;
  local_28.to.f_.m = '\x01';
  local_28.to.f_.d = '\x01';
  local_28.to.f_.hh = '\0';
  local_28.to.f_.mm = '\0';
  local_28.to.f_._12_4_ = local_28.to.f_._12_4_ & 0xffffff00;
  bVar1 = time_internal::cctz::time_zone::prev_transition
                    (&this->cz_,
                     (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
                      *)local_res8,&local_28);
  if (!bVar1) {
    return false;
  }
  (param_2->from).f_.y = local_28.from.f_.y;
  (param_2->from).f_.m = local_28.from.f_.m;
  (param_2->from).f_.d = local_28.from.f_.d;
  (param_2->from).f_.hh = local_28.from.f_.hh;
  (param_2->from).f_.mm = local_28.from.f_.mm;
  (param_2->from).f_.ss = local_28.from.f_.ss;
  *(int3 *)&(param_2->from).f_.field_0xd = local_28.from.f_._13_3_;
  (param_2->to).f_.y = local_28.to.f_.y;
  (param_2->to).f_.m = local_28.to.f_.m;
  (param_2->to).f_.d = local_28.to.f_.d;
  (param_2->to).f_.hh = local_28.to.f_.hh;
  (param_2->to).f_.mm = local_28.to.f_.mm;
  (param_2->to).f_.ss = local_28.to.f_.ss;
  *(int3 *)&(param_2->to).f_.field_0xd = local_28.to.f_._13_3_;
  return true;
}

// TimeFromTimespec @ 14f901e80

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::TimeFromTimespec(struct timespec) */

Time * __cdecl absl::lts_20240722::TimeFromTimespec(Time *__return_storage_ptr__,timespec *param_1)

{
  uint uVar1;
  Duration *pDVar2;
  Duration local_28;
  timespec local_18;
  
  local_18.tv_sec = param_1->tv_sec;
  local_18.tv_nsec = param_1->tv_nsec;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pDVar2 = DurationFromTimespec(&local_28,&local_18);
  uVar1 = pDVar2->rep_lo_;
  (__return_storage_ptr__->rep_).rep_hi_ = pDVar2->rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// TimeFromTimeval @ 14f901ec0

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::TimeFromTimeval(struct timeval) */

Time * __cdecl absl::lts_20240722::TimeFromTimeval(Time *__return_storage_ptr__,timeval param_1)

{
  uint uVar1;
  Duration *pDVar2;
  Duration local_18;
  
  pDVar2 = DurationFromTimeval(&local_18,param_1);
  uVar1 = pDVar2->rep_lo_;
  (__return_storage_ptr__->rep_).rep_hi_ = pDVar2->rep_hi_;
  (__return_storage_ptr__->rep_).rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// ToChronoTime @ 14f901ef0

/* WARNING: Removing unreachable block (ram,0x00014f901f65) */
/* class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > __cdecl
   absl::lts_20240722::ToChronoTime(class absl::lts_20240722::Time) */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
__cdecl absl::lts_20240722::ToChronoTime(Time *param_1)

{
  byte bVar1;
  Duration *pDVar2;
  HiRep HVar3;
  ulonglong uVar4;
  HiRep *in_RDX;
  Duration local_48;
  Duration local_38;
  Duration local_28;
  Duration local_18;
  
  local_28.rep_hi_ = *in_RDX;
  local_28.rep_lo_ = in_RDX[1].lo_;
  if (local_28.rep_hi_ == (HiRep)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = local_28.rep_hi_.hi_._3_1_ >> 7;
  }
  local_48.rep_hi_ = local_28.rep_hi_;
  local_48.rep_lo_ = local_28.rep_lo_;
  if (bVar1 != 0) {
    local_48.rep_hi_.lo_ = 0;
    local_48.rep_hi_.hi_ = 0;
    local_48.rep_lo_ = 400;
    local_38.rep_hi_ = local_28.rep_hi_;
    local_38.rep_lo_ = local_28.rep_lo_;
    pDVar2 = Floor(&local_18,&local_38,&local_48);
    local_28.rep_hi_ = pDVar2->rep_hi_;
    local_28.rep_lo_ = pDVar2->rep_lo_;
  }
  if (local_28.rep_lo_ == 0xffffffff) {
    if (local_28.rep_hi_ == (HiRep)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulonglong)local_28.rep_hi_ >> 0x3f;
    }
    HVar3 = (HiRep)(uVar4 + 0x7fffffffffffffff);
  }
  else {
    pDVar2 = Duration::operator*=(&local_28,10000000);
    local_38.rep_hi_ = pDVar2->rep_hi_;
    local_38.rep_lo_ = pDVar2->rep_lo_;
    pDVar2 = Duration::operator/=(&local_38,1);
    local_48.rep_hi_ = pDVar2->rep_hi_;
    local_48.rep_lo_ = pDVar2->rep_lo_;
    HVar3 = (HiRep)ToInt64Seconds(&local_48);
  }
  (param_1->rep_).rep_hi_ = HVar3;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          )(duration<__int64,std::ratio<1,10000000>_>)param_1;
}

// ToTM @ 14f902060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct tm __cdecl absl::lts_20240722::ToTM(class absl::lts_20240722::Time,class
   absl::lts_20240722::TimeZone) */

tm * __cdecl absl::lts_20240722::ToTM(tm *__return_storage_ptr__,Time *param_1,TimeZone param_2)

{
  __int64 _Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  weekday wVar6;
  Duration *pDVar7;
  char cVar8;
  int iVar9;
  char cVar10;
  time_zone local_res18 [2];
  undefined1 auStackY_148 [32];
  Duration local_108;
  fields local_f8;
  absolute_lookup local_e8;
  undefined1 local_c8;
  char *pcStack_c0;
  HiRep local_b8;
  int local_b0;
  undefined4 uStack_ac;
  char cStack_a7;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 local_80;
  undefined8 uStack_78;
  HiRep local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  char *pcStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  __return_storage_ptr__->tm_sec = 0;
  __return_storage_ptr__->tm_min = 0;
  __return_storage_ptr__->tm_hour = 0;
  __return_storage_ptr__->tm_mday = 0;
  __return_storage_ptr__->tm_mon = 0;
  __return_storage_ptr__->tm_year = 0;
  __return_storage_ptr__->tm_wday = 0;
  __return_storage_ptr__->tm_yday = 0;
  __return_storage_ptr__->tm_isdst = 0;
  local_108.rep_hi_ = (param_1->rep_).rep_hi_;
  local_108.rep_lo_ = (param_1->rep_).rep_lo_;
  local_res18[0] = param_2.cz_.impl_;
  if ((local_108.rep_hi_ == (HiRep)0x7fffffffffffffff) && ((param_1->rep_).rep_lo_ == 0xffffffff)) {
    time_internal::cctz::detail::impl::n_day
              (&local_f8,0x7fffffffffffffff,'\f',0x1f,0,'\x17',';',';');
    local_c8 = 0;
    pcStack_c0 = "-00";
    local_e8.offset = -1;
    local_e8.is_dst = true;
    local_e8._21_3_ = 0x7fffff;
    local_e8.abbr._0_4_ = 0xffffffff;
    cVar10 = '\0';
  }
  else {
    local_108.rep_lo_ = (param_1->rep_).rep_lo_;
    if (((param_1->rep_).rep_hi_ == (HiRep)0x8000000000000000) &&
       ((param_1->rep_).rep_lo_ == 0xffffffff)) {
      local_f8.y = -0x8000000000000000;
      local_f8.m = '\x01';
      local_f8.d = '\x01';
      local_f8.hh = '\0';
      local_f8.mm = '\0';
      local_f8._12_4_ = local_f8._12_4_ & 0xffffff00;
      uVar4 = local_f8._12_4_;
      local_f8.y._0_4_ = 0;
      iVar9 = (int)local_f8.y;
      local_f8.y._4_4_ = 0x80000000;
      uVar3 = local_f8.y._4_4_;
      uVar2._0_1_ = '\x01';
      uVar2._1_1_ = '\x01';
      uVar2._2_1_ = '\0';
      uVar2._3_1_ = '\0';
      local_108.rep_hi_.lo_ = 0xffffffff;
      local_108.rep_hi_.hi_ = 0x7fffffff;
      local_108.rep_lo_ = 0xffffffff;
      pDVar7 = operator-((Duration *)&local_f8,&local_108);
      local_60 = local_60 & 0xffffffffffffff00;
      local_70 = pDVar7->rep_hi_;
      pcStack_58 = "-00";
      uStack_68 = (ulonglong)pDVar7->rep_lo_;
      local_e8.cs.f_.y._0_4_ = iVar9;
      local_e8.cs.f_.y._4_4_ = uVar3;
      local_e8.cs.f_._8_4_ = uVar2;
      local_e8.cs.f_._12_4_ = uVar4;
    }
    else {
      local_108.rep_hi_ = (param_1->rep_).rep_hi_;
      local_b8 = local_108.rep_hi_;
      time_internal::cctz::time_zone::lookup
                (local_res18,&local_e8,
                 (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
                  *)&local_b8);
      uStack_68 = CONCAT44(local_e8.offset,(param_1->rep_).rep_lo_);
      local_60 = CONCAT71(local_60._1_7_,local_e8.is_dst);
      pcStack_58 = (char *)CONCAT44(local_e8.abbr._4_4_,local_e8.abbr._0_4_);
      local_70.lo_ = 0;
      local_70.hi_ = 0;
    }
    local_f8.y._0_4_ = (int)local_e8.cs.f_.y;
    local_f8.y._4_4_ = local_e8.cs.f_.y._4_4_;
    local_f8._8_4_ = local_e8.cs.f_._8_4_;
    local_f8._12_4_ = local_e8.cs.f_._12_4_;
    cVar10 = (char)local_60;
  }
  _Var1 = CONCAT44(local_f8.y._4_4_,(int)local_f8.y);
  __return_storage_ptr__->tm_sec = (int)(char)local_f8._12_4_;
  __return_storage_ptr__->tm_min = (int)local_f8.mm;
  __return_storage_ptr__->tm_hour = (int)local_f8.hh;
  __return_storage_ptr__->tm_mday = (int)local_f8.d;
  cVar8 = local_f8.m;
  __return_storage_ptr__->tm_mon = cVar8 + -1;
  if (_Var1 < -0x7ffff894) {
    __return_storage_ptr__->tm_year = -0x80000000;
  }
  else if (_Var1 < 0x80000000) {
    __return_storage_ptr__->tm_year = (int)local_f8.y + -0x76c;
  }
  else {
    __return_storage_ptr__->tm_year = 0x7ffff893;
  }
  local_b0 = (int)local_f8.y;
  uStack_ac = local_f8.y._4_4_;
  uStack_a8 = local_f8._8_4_;
  uStack_a4 = local_f8._12_4_;
  wVar6 = time_internal::cctz::detail::get_weekday
                    ((civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *)
                     &local_f8);
  switch(wVar6) {
  case 0:
    __return_storage_ptr__->tm_wday = 1;
    break;
  case 1:
    __return_storage_ptr__->tm_wday = 2;
    break;
  case 2:
    __return_storage_ptr__->tm_wday = 3;
    break;
  case 3:
    __return_storage_ptr__->tm_wday = 4;
    break;
  case 4:
    __return_storage_ptr__->tm_wday = 5;
    break;
  case 5:
    __return_storage_ptr__->tm_wday = 6;
    break;
  case 6:
    __return_storage_ptr__->tm_wday = 0;
  }
  local_50 = 0x14e;
  local_80 = ___xmm_0000003b0000001f00000000ffffffff;
  uStack_78 = _UNK_153537308;
  local_60 = ___xmm_0000013000000111000000f3000000d4;
  pcStack_58 = (char *)_UNK_153537328;
  local_70.lo_ = ___xmm_000000b500000097000000780000005a;
  local_70.hi_ = _UNK_153537314;
  uStack_68 = _UNK_153537318;
  if ('\x02' < cVar8) {
    bVar5 = time_internal::cctz::detail::impl::is_leap_year(_Var1);
    iVar9 = 0;
    if (bVar5) goto LAB_14f902380;
  }
  iVar9 = -1;
LAB_14f902380:
  __return_storage_ptr__->tm_yday =
       *(int *)((longlong)&local_80 + (longlong)cVar8 * 4) + (int)cStack_a7 + iVar9;
  __return_storage_ptr__->tm_isdst = (uint)(cVar10 != '\0');
  return __return_storage_ptr__;
}

// ToTimeT @ 14f902400

/* __int64 __cdecl absl::lts_20240722::ToTimeT(class absl::lts_20240722::Time) */

__int64 __cdecl absl::lts_20240722::ToTimeT(Time *param_1)

{
  timespec *ptVar1;
  Time local_28;
  timespec local_18;
  
  local_28.rep_.rep_hi_ = (param_1->rep_).rep_hi_;
  local_28.rep_.rep_lo_ = (param_1->rep_).rep_lo_;
  ptVar1 = ToTimespec(&local_18,&local_28);
  return ptVar1->tv_sec;
}

// ToTimespec @ 14f902440

/* WARNING: Removing unreachable block (ram,0x00014f9024ec) */
/* struct timespec __cdecl absl::lts_20240722::ToTimespec(class absl::lts_20240722::Time) */

timespec * __cdecl absl::lts_20240722::ToTimespec(timespec *__return_storage_ptr__,Time *param_1)

{
  HiRep HVar1;
  byte bVar2;
  
  if ((param_1->rep_).rep_lo_ != 0xffffffff) {
    __return_storage_ptr__->tv_sec = (long64)(param_1->rep_).rep_hi_;
    __return_storage_ptr__->tv_nsec = (param_1->rep_).rep_lo_ >> 2;
    return __return_storage_ptr__;
  }
  HVar1 = (param_1->rep_).rep_hi_;
  if (HVar1 == (HiRep)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = HVar1.hi_._3_1_ >> 7;
  }
  if (bVar2 == 0) {
    __return_storage_ptr__->tv_nsec = 999999999;
    __return_storage_ptr__->tv_sec = 0x7fffffffffffffff;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->tv_nsec = 0;
  __return_storage_ptr__->tv_sec = -0x8000000000000000;
  return __return_storage_ptr__;
}

// ToTimeval @ 14f902540

/* struct timeval __cdecl absl::lts_20240722::ToTimeval(class absl::lts_20240722::Time) */

timeval __cdecl absl::lts_20240722::ToTimeval(Time *param_1)

{
  ulonglong uVar1;
  timespec *ptVar2;
  timeval tVar3;
  Time local_28;
  timespec local_18;
  
  local_28.rep_.rep_hi_ = (param_1->rep_).rep_hi_;
  local_28.rep_.rep_lo_ = (param_1->rep_).rep_lo_;
  ptVar2 = ToTimespec(&local_18,&local_28);
  uVar1 = ptVar2->tv_sec;
  if ((longlong)(int)uVar1 != uVar1) {
    tVar3.tv_sec = 0x7fffffff;
    tVar3.tv_usec = 999999;
    if ((longlong)uVar1 < 0) {
      tVar3.tv_sec = -0x80000000;
      tVar3.tv_usec = 0;
    }
    return tVar3;
  }
  return (timeval)((ulonglong)(uint)((int)*(undefined8 *)&ptVar2->tv_nsec / 1000) << 0x20 |
                  uVar1 & 0xffffffff);
}

// ToUDate @ 14f9025c0

/* double __cdecl absl::lts_20240722::ToUDate(class absl::lts_20240722::Time) */

double __cdecl absl::lts_20240722::ToUDate(Time *param_1)

{
  double dVar1;
  Duration local_28;
  Duration local_18 [2];
  
  local_28.rep_lo_ = 4000000;
  local_18[0].rep_lo_ = (param_1->rep_).rep_lo_;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_18[0].rep_hi_ = (param_1->rep_).rep_hi_;
  dVar1 = FDivDuration(local_18,&local_28);
  return dVar1;
}

// ToUniversal @ 14f902610

/* __int64 __cdecl absl::lts_20240722::ToUniversal(class absl::lts_20240722::Time) */

__int64 __cdecl absl::lts_20240722::ToUniversal(Time *param_1)

{
  Duration *pDVar1;
  __int64 _Var2;
  Duration local_48;
  Duration local_38;
  Duration local_28;
  Duration local_18 [2];
  
  local_18[0].rep_hi_ = (param_1->rep_).rep_hi_;
  local_18[0].rep_lo_ = (param_1->rep_).rep_lo_;
  local_38.rep_lo_ = 0;
  local_48.rep_hi_.lo_ = 0;
  local_48.rep_hi_.hi_ = 0;
  local_48.rep_lo_ = 0;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_38.rep_hi_.lo_ = 0x886e0900;
  local_38.rep_hi_.hi_ = 0xfffffff1;
  local_28.rep_lo_ = 400;
  pDVar1 = Duration::operator-=(local_18,&local_38);
  local_38.rep_hi_ = pDVar1->rep_hi_;
  local_38.rep_lo_ = pDVar1->rep_lo_;
  _Var2 = IDivDuration(&local_38,&local_28,&local_48);
  if ((((_Var2 < 1) && (local_48.rep_hi_ != (HiRep)0x0)) && ((longlong)local_48.rep_hi_ < 0)) &&
     (_Var2 != -0x8000000000000000)) {
    _Var2 = _Var2 + -1;
  }
  return _Var2;
}

// ToUnixDuration @ 14f9026e0

/* class absl::lts_20240722::Duration __cdecl
   absl::lts_20240722::time_internal::ToUnixDuration(class absl::lts_20240722::Time) */

Duration * __cdecl
absl::lts_20240722::time_internal::ToUnixDuration(Duration *__return_storage_ptr__,Time *param_1)

{
  uint uVar1;
  
  uVar1 = (param_1->rep_).rep_lo_;
  __return_storage_ptr__->rep_hi_ = (param_1->rep_).rep_hi_;
  __return_storage_ptr__->rep_lo_ = uVar1;
  return __return_storage_ptr__;
}

// ToUnixMicros @ 14f902700

/* __int64 __cdecl absl::lts_20240722::ToUnixMicros(class absl::lts_20240722::Time) */

__int64 __cdecl absl::lts_20240722::ToUnixMicros(Time *param_1)

{
  HiRep HVar1;
  __int64 _Var2;
  Duration local_38;
  Duration local_28;
  Duration local_18;
  
  HVar1 = (param_1->rep_).rep_hi_;
  if (-1 < (longlong)HVar1) {
    if (((ulonglong)HVar1 & 0xfffff80000000000) == 0) {
      return (ulonglong)(param_1->rep_).rep_lo_ / 4000 + (longlong)HVar1 * 1000000;
    }
  }
  local_28.rep_lo_ = 4000;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_18.rep_hi_ = (param_1->rep_).rep_hi_;
  local_38.rep_hi_.lo_ = 0;
  local_38.rep_hi_.hi_ = 0;
  local_38.rep_lo_ = 0;
  local_18.rep_lo_ = (param_1->rep_).rep_lo_;
  _Var2 = IDivDuration(&local_18,&local_28,&local_38);
  if ((((_Var2 < 1) && (local_38.rep_hi_ != (HiRep)0x0)) && ((longlong)local_38.rep_hi_ < 0)) &&
     (_Var2 != -0x8000000000000000)) {
    _Var2 = _Var2 + -1;
  }
  return _Var2;
}

// ToUnixMillis @ 14f902810

/* __int64 __cdecl absl::lts_20240722::ToUnixMillis(class absl::lts_20240722::Time) */

__int64 __cdecl absl::lts_20240722::ToUnixMillis(Time *param_1)

{
  HiRep HVar1;
  __int64 _Var2;
  Duration local_38;
  Duration local_28;
  Duration local_18;
  
  HVar1 = (param_1->rep_).rep_hi_;
  if (-1 < (longlong)HVar1) {
    if (((ulonglong)HVar1 & 0xffe0000000000000) == 0) {
      return (ulonglong)(param_1->rep_).rep_lo_ / 4000000 + (longlong)HVar1 * 1000;
    }
  }
  local_28.rep_lo_ = 4000000;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_18.rep_hi_ = (param_1->rep_).rep_hi_;
  local_38.rep_hi_.lo_ = 0;
  local_38.rep_hi_.hi_ = 0;
  local_38.rep_lo_ = 0;
  local_18.rep_lo_ = (param_1->rep_).rep_lo_;
  _Var2 = IDivDuration(&local_18,&local_28,&local_38);
  if ((((_Var2 < 1) && (local_38.rep_hi_ != (HiRep)0x0)) && ((longlong)local_38.rep_hi_ < 0)) &&
     (_Var2 != -0x8000000000000000)) {
    _Var2 = _Var2 + -1;
  }
  return _Var2;
}

// ToUnixNanos @ 14f902920

/* __int64 __cdecl absl::lts_20240722::ToUnixNanos(class absl::lts_20240722::Time) */

__int64 __cdecl absl::lts_20240722::ToUnixNanos(Time *param_1)

{
  HiRep HVar1;
  __int64 _Var2;
  Duration local_38;
  Duration local_28;
  Duration local_18;
  
  HVar1 = (param_1->rep_).rep_hi_;
  if (-1 < (longlong)HVar1) {
    if (((ulonglong)HVar1 & 0xfffffffe00000000) == 0) {
      return (longlong)HVar1 * 1000000000 + (ulonglong)((param_1->rep_).rep_lo_ >> 2);
    }
  }
  local_28.rep_lo_ = 4;
  local_28.rep_hi_.lo_ = 0;
  local_28.rep_hi_.hi_ = 0;
  local_18.rep_hi_ = (param_1->rep_).rep_hi_;
  local_38.rep_hi_.lo_ = 0;
  local_38.rep_hi_.hi_ = 0;
  local_38.rep_lo_ = 0;
  local_18.rep_lo_ = (param_1->rep_).rep_lo_;
  _Var2 = IDivDuration(&local_18,&local_28,&local_38);
  if ((((_Var2 < 1) && (local_38.rep_hi_ != (HiRep)0x0)) && ((longlong)local_38.rep_hi_ < 0)) &&
     (_Var2 != -0x8000000000000000)) {
    _Var2 = _Var2 + -1;
  }
  return _Var2;
}

// ToUnixSeconds @ 14f902a30

/* __int64 __cdecl absl::lts_20240722::ToUnixSeconds(class absl::lts_20240722::Time) */

__int64 __cdecl absl::lts_20240722::ToUnixSeconds(Time *param_1)

{
  return (__int64)(param_1->rep_).rep_hi_;
}

// UniversalEpoch @ 14f902a70

/* class absl::lts_20240722::Time __cdecl absl::lts_20240722::UniversalEpoch(void) */

Time * __cdecl absl::lts_20240722::UniversalEpoch(Time *__return_storage_ptr__)

{
  (__return_storage_ptr__->rep_).rep_hi_.lo_ = 0x886e0900;
  (__return_storage_ptr__->rep_).rep_hi_.hi_ = 0xfffffff1;
  (__return_storage_ptr__->rep_).rep_lo_ = 0;
  return __return_storage_ptr__;
}

// ZeroDuration @ 14f902a90

/* class absl::lts_20240722::Duration __cdecl absl::lts_20240722::ZeroDuration(void) */

Duration * __cdecl absl::lts_20240722::ZeroDuration(Duration *__return_storage_ptr__)

{
  (__return_storage_ptr__->rep_hi_).lo_ = 0;
  (__return_storage_ptr__->rep_hi_).hi_ = 0;
  __return_storage_ptr__->rep_lo_ = 0;
  return __return_storage_ptr__;
}

// align @ 14f902ab0

/* struct absl::lts_20240722::time_internal::cctz::detail::fields __cdecl
   absl::lts_20240722::time_internal::cctz::detail::align(struct
   absl::lts_20240722::time_internal::cctz::detail::day_tag,struct
   absl::lts_20240722::time_internal::cctz::detail::fields) */

fields * __cdecl
absl::lts_20240722::time_internal::cctz::detail::align
          (fields *__return_storage_ptr__,undefined8 param_2,long64 *param_3)

{
  __return_storage_ptr__->y = *param_3;
  __return_storage_ptr__->m = (schar)param_3[1];
  __return_storage_ptr__->d = *(schar *)((longlong)param_3 + 9);
  __return_storage_ptr__->hh = '\0';
  __return_storage_ptr__->mm = '\0';
  __return_storage_ptr__->ss = '\0';
  return __return_storage_ptr__;
}

// align @ 14f902ae0

/* struct absl::lts_20240722::time_internal::cctz::detail::fields __cdecl
   absl::lts_20240722::time_internal::cctz::detail::align(struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag,struct
   absl::lts_20240722::time_internal::cctz::detail::fields) */

fields * __cdecl
absl::lts_20240722::time_internal::cctz::detail::align
          (fields *__return_storage_ptr__,undefined8 param_2,long64 *param_3)

{
  long64 lVar1;
  
  lVar1 = param_3[1];
  __return_storage_ptr__->y = *param_3;
  __return_storage_ptr__->m = (char)lVar1;
  __return_storage_ptr__->d = (char)((ulonglong)lVar1 >> 8);
  __return_storage_ptr__->hh = (char)((ulonglong)lVar1 >> 0x10);
  __return_storage_ptr__->mm = (char)((ulonglong)lVar1 >> 0x18);
  __return_storage_ptr__->ss = (char)((ulonglong)lVar1 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0xd = (int3)((ulonglong)lVar1 >> 0x28);
  return __return_storage_ptr__;
}

// count @ 14f902b00

/* public: __int64 __cdecl std::chrono::duration<__int64,struct std::ratio<1,1> >::count(void)const
   __ptr64 */

__int64 __thiscall
std::chrono::duration<__int64,std::ratio<1,1>_>::count(duration<__int64,std::ratio<1,1>_> *this)

{
  return this->_MyRep;
}

// count @ 14f902b10

/* public: __int64 __cdecl std::chrono::duration<__int64,struct std::ratio<1,1000000000>
   >::count(void)const __ptr64 */

__int64 __thiscall
std::chrono::duration<__int64,std::ratio<1,1000000000>_>::count
          (duration<__int64,std::ratio<1,1000000000>_> *this)

{
  return this->_MyRep;
}

// count @ 14f902b20

/* public: __int64 __cdecl std::chrono::duration<__int64,struct std::ratio<1,10000000>
   >::count(void)const __ptr64 */

__int64 __thiscall
std::chrono::duration<__int64,std::ratio<1,10000000>_>::count
          (duration<__int64,std::ratio<1,10000000>_> *this)

{
  return this->_MyRep;
}

// day @ 14f902b30

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::day(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::day
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this)

{
  return (int)(this->f_).d;
}

// day @ 14f902b40

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::day(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::day
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this)

{
  return (int)(this->f_).d;
}

// days_per_4years @ 14f902b50

/* int __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::days_per_4years(int) */

int __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::days_per_4years(int param_1)

{
  if (((param_1 != 0) && (param_1 < 0x12d)) && (0x5f < (param_1 + -1) % 100)) {
    return 0x5b4;
  }
  return 0x5b5;
}

// days_per_century @ 14f902b90

/* int __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::days_per_century(int) */

int __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::days_per_century(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (iVar1 = 0x8eac, 300 < param_1)) {
    iVar1 = 0x8ead;
  }
  return iVar1;
}

// days_per_month @ 14f902bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::days_per_month(__int64,signed
   char) */

int __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::days_per_month(__int64 param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = ___xmm_0000001f0000001c0000001fffffffff;
  uStack_40 = _UNK_1535372d8;
  local_18 = 0x1f;
  local_28 = ___xmm_0000001e0000001f0000001e0000001f;
  uStack_20 = _UNK_1535372c8;
  local_38 = ___xmm_0000001f0000001e0000001f0000001e;
  uStack_30 = _UNK_1535372e8;
  if (param_2 == '\x02') {
    bVar1 = is_leap_year(param_1);
    if (bVar1) {
      iVar2 = 1;
      goto LAB_14f902c12;
    }
  }
  iVar2 = 0;
LAB_14f902c12:
  return *(int *)((longlong)&local_48 + (longlong)param_2 * 4) + iVar2;
}

// days_per_year @ 14f902c40

/* int __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::days_per_year(__int64,signed
   char) */

int __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::days_per_year(__int64 param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = is_leap_year((ulonglong)('\x02' < param_2) + param_1);
  return bVar1 + 0x16d;
}

// from_time_t @ 14f902c70

/* public: static class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > > __cdecl
   std::chrono::system_clock::from_time_t(__int64) */

time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
__cdecl std::chrono::system_clock::from_time_t(__int64 param_1)

{
  longlong in_RDX;
  
  *(longlong *)param_1 = in_RDX * 10000000;
  return (time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
          )(duration<__int64,std::ratio<1,10000000>_>)param_1;
}

// get_weekday @ 14f902c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum absl::lts_20240722::time_internal::cctz::detail::weekday __cdecl
   absl::lts_20240722::time_internal::cctz::detail::get_weekday(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64) */

weekday __cdecl
absl::lts_20240722::time_internal::cctz::detail::get_weekday
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)&local_88;
  cVar1 = (param_1->f_).m;
  local_58 = 4;
  lVar3 = (param_1->f_).y;
  local_50 = __xmm_00000003000000020000000100000000;
  uStack_48 = _UNK_150631e08;
  local_20 = 5;
  local_40 = ___xmm_00000000000000060000000500000004;
  uStack_38 = _UNK_153537288;
  local_30 = ___xmm_00000004000000030000000200000001;
  uStack_28 = _UNK_150631e38;
  lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar3),8) + lVar3;
  local_88 = ___xmm_000000020000000300000000ffffffff;
  uStack_80 = _UNK_153537298;
  local_78 = ___xmm_00000005000000030000000000000005;
  uStack_70 = _UNK_1535372b8;
  lVar4 = ((lVar3 + ((lVar2 >> 8) - (lVar2 >> 0x3f)) * -400) - (ulonglong)(cVar1 < '\x03')) + 0x960;
  local_68 = ___xmm_00000002000000060000000400000001;
  uStack_60 = _UNK_1535372a8;
  lVar3 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar4),8) + lVar4;
  lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar4),8) + lVar4;
  return *(weekday *)
          ((longlong)&uStack_38 +
          ((((((lVar3 >> 8) +
              (longlong)(*(int *)((longlong)&local_88 + (longlong)cVar1 * 4) + (int)(param_1->f_).d)
              ) - (lVar3 >> 0x3f)) - ((lVar2 >> 6) - (lVar2 >> 0x3f))) +
           ((longlong)(lVar4 + (ulonglong)((uint)(lVar4 >> 0x3f) & 3)) >> 2) + lVar4) % 7) * 4);
}

// get_yearday @ 14f902df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __cdecl absl::lts_20240722::time_internal::cctz::detail::get_yearday(class
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag> const & __ptr64) */

int __cdecl
absl::lts_20240722::time_internal::cctz::detail::get_yearday
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = ___xmm_0000003b0000001f00000000ffffffff;
  uStack_40 = _UNK_153537308;
  local_18 = 0x14e;
  local_28 = ___xmm_0000013000000111000000f3000000d4;
  uStack_20 = _UNK_153537328;
  local_38 = ___xmm_000000b500000097000000780000005a;
  uStack_30 = _UNK_153537318;
  if ('\x02' < (param_1->f_).m) {
    bVar1 = impl::is_leap_year((param_1->f_).y);
    if (bVar1) {
      iVar2 = 1;
      goto LAB_14f902e55;
    }
  }
  iVar2 = 0;
LAB_14f902e55:
  return *(int *)((longlong)&local_48 + (longlong)(param_1->f_).m * 4) + (int)(param_1->f_).d +
         iVar2;
}

// hour @ 14f902e80

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::hour(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::hour
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this)

{
  return (int)(this->f_).hh;
}

// hour @ 14f902e90

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::hour(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::hour
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this)

{
  return (int)(this->f_).hh;
}

// is_leap_year @ 14f902ea0

/* bool __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::is_leap_year(__int64) */

bool __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::is_leap_year(__int64 param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (uint)(param_1 >> 0x3f) & 3;
  if ((((int)param_1 + uVar1 & 3) == uVar1) &&
     ((lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1),8) + param_1,
      param_1 != ((lVar2 >> 6) - (lVar2 >> 0x3f)) * 100 ||
      (lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1),8) + param_1,
      param_1 == ((lVar2 >> 8) - (lVar2 >> 0x3f)) * 400)))) {
    return true;
  }
  return false;
}

// lowest @ 14f902f10

/* public: static __int64 __cdecl std::numeric_limits<__int64>::lowest(void) */

__int64 __cdecl std::numeric_limits<__int64>::lowest(void)

{
  return -0x8000000000000000;
}

// max @ 14f902f30

/* public: static class absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag> __cdecl
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::max(void) */

void __cdecl
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::max(void)

{
  long64 *in_RCX;
  fields local_18;
  
  impl::n_day(&local_18,0x7fffffffffffffff,'\f',0x1f,0,'\x17',';',';');
  *in_RCX = local_18.y;
  in_RCX[1] = local_18._8_8_;
  return;
}

// max @ 14f902f90

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1> >::max(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1>_>::max(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7fffffffffffffff;
  return;
}

// max @ 14f902fb0

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,10000000> >::max(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,10000000>_>::max(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7fffffffffffffff;
  return;
}

// max @ 14f902fd0

/* public: static __int64 __cdecl std::chrono::duration_values<__int64>::max(void) */

__int64 __cdecl std::chrono::duration_values<__int64>::max(void)

{
  return 0x7fffffffffffffff;
}

// max @ 14f902ff0

/* public: static long __cdecl std::numeric_limits<long>::max(void) */

long __cdecl std::numeric_limits<long>::max(void)

{
  return 0x7fffffff;
}

// max @ 14f903000

/* public: static class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > __cdecl std::chrono::time_point<struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,1> >
   >::max(void) */

void __cdecl
std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
::max(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x7fffffffffffffff;
  return;
}

// min @ 14f903020

/* public: static class absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag> __cdecl
   absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::min(void) */

void __cdecl
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::min(void)

{
  undefined8 *in_RCX;
  uint uStack_c;
  
  uStack_c = uStack_c & 0xffffff00;
  *in_RCX = 0x8000000000000000;
  in_RCX[1] = CONCAT44(uStack_c,0x101);
  return;
}

// min @ 14f903060

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,1> >::min(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,1>_>::min(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x8000000000000000;
  return;
}

// min @ 14f903080

/* public: static class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::duration<__int64,struct std::ratio<1,10000000> >::min(void) */

void __cdecl std::chrono::duration<__int64,std::ratio<1,10000000>_>::min(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x8000000000000000;
  return;
}

// min @ 14f9030a0

/* public: static __int64 __cdecl std::chrono::duration_values<__int64>::min(void) */

__int64 __cdecl std::chrono::duration_values<__int64>::min(void)

{
  return -0x8000000000000000;
}

// min @ 14f9030c0

/* public: static long __cdecl std::numeric_limits<long>::min(void) */

long __cdecl std::numeric_limits<long>::min(void)

{
  return -0x80000000;
}

// min @ 14f9030d0

/* public: static class std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > > __cdecl std::chrono::time_point<struct
   std::chrono::system_clock,class std::chrono::duration<__int64,struct std::ratio<1,1> >
   >::min(void) */

void __cdecl
std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
::min(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0x8000000000000000;
  return;
}

// minute @ 14f9030f0

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::minute(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::minute
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this)

{
  return (int)(this->f_).mm;
}

// minute @ 14f903100

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::minute(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::minute
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this)

{
  return (int)(this->f_).mm;
}

// month @ 14f903110

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::month(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::month
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this)

{
  return (int)(this->f_).m;
}

// month @ 14f903120

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::month(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::month
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this)

{
  return (int)(this->f_).m;
}

// n_day @ 14f903130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct absl::lts_20240722::time_internal::cctz::detail::fields __cdecl
   absl::lts_20240722::time_internal::cctz::detail::impl::n_day(__int64,signed
   char,__int64,__int64,signed char,signed char,signed char) */

fields * __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::n_day
          (fields *__return_storage_ptr__,__int64 param_1,char param_2,__int64 param_3,
          __int64 param_4,char param_5,char param_6,char param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1),8) + param_1;
  lVar7 = (lVar6 >> 8) - (lVar6 >> 0x3f);
  lVar12 = param_4 % 0x23ab1;
  lVar10 = (param_4 / 0x23ab1) * 400 + lVar7 * -400 + param_1;
  lVar6 = lVar10 + -400;
  if (-1 < lVar12) {
    lVar6 = lVar10;
  }
  lVar6 = lVar6 + (param_3 / 0x23ab1) * 400;
  lVar10 = lVar12 + 0x23ab1;
  if (-1 < lVar12) {
    lVar10 = lVar12;
  }
  lVar10 = lVar10 + (param_3 / 0x23ab1) * -0x23ab1 + param_3;
  if (lVar10 < 1) {
    if (lVar10 < -0x16c) {
      lVar12 = lVar10 + 0x23ab1;
      lVar9 = lVar6 + -400;
    }
    else {
      bVar1 = is_leap_year((ulonglong)('\x02' < param_2) + lVar6 + -1);
      lVar12 = lVar10 + 0x16d + (ulonglong)bVar1;
      lVar9 = lVar6 + -1;
    }
  }
  else {
    lVar12 = lVar10 + -0x23ab1;
    lVar9 = lVar6 + 400;
    if (lVar10 < 0x23ab2) {
      lVar12 = lVar10;
      lVar9 = lVar6;
    }
  }
  if (0x16d < lVar12) {
    uVar13 = (ulonglong)('\x02' < param_2);
    lVar6 = uVar13 + lVar9;
    lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar6),8) + lVar6;
    uVar11 = lVar6 + ((lVar10 >> 8) - (lVar10 >> 0x3f)) * -400;
    iVar3 = (int)uVar11;
    uVar5 = (ulonglong)(iVar3 + 400);
    if (-1 < iVar3) {
      uVar5 = uVar11 & 0xffffffff;
    }
    while( true ) {
      iVar3 = (int)uVar5;
      if ((iVar3 == 0) || (lVar6 = 0x8eac, 300 < iVar3)) {
        lVar6 = 0x8ead;
      }
      if (lVar12 <= lVar6) break;
      lVar12 = lVar12 - lVar6;
      lVar9 = lVar9 + 100;
      iVar2 = -300;
      if (iVar3 + 100 < 400) {
        iVar2 = 100;
      }
      uVar5 = (ulonglong)(uint)(iVar3 + iVar2);
    }
    while( true ) {
      iVar3 = (int)uVar5;
      if (((iVar3 == 0) || (300 < iVar3)) || (lVar6 = 0x5b4, (iVar3 + -1) % 100 < 0x60)) {
        lVar6 = 0x5b5;
      }
      if (lVar12 <= lVar6) break;
      lVar12 = lVar12 - lVar6;
      lVar9 = lVar9 + 4;
      uVar5 = (ulonglong)(iVar3 + 4U);
      if (399 < (int)(iVar3 + 4U)) {
        uVar5 = (ulonglong)(iVar3 - 0x18c);
      }
    }
    bVar1 = is_leap_year(uVar13 + lVar9);
    uVar4 = bVar1 + 0x16d;
    if ((longlong)(ulonglong)uVar4 < lVar12) {
      do {
        lVar9 = lVar9 + 1;
        lVar12 = lVar12 - (ulonglong)uVar4;
        bVar1 = is_leap_year(uVar13 + lVar9);
        uVar4 = bVar1 + 0x16d;
      } while ((longlong)(ulonglong)uVar4 < lVar12);
    }
  }
  if (0x1c < lVar12) {
    while( true ) {
      local_48 = 0x1f;
      local_78 = ___xmm_0000001f0000001c0000001fffffffff;
      uStack_70 = _UNK_1535372d8;
      local_58 = ___xmm_0000001e0000001f0000001e0000001f;
      uStack_50 = _UNK_1535372c8;
      local_68 = ___xmm_0000001f0000001e0000001f0000001e;
      uStack_60 = _UNK_1535372e8;
      if ((param_2 == '\x02') && (bVar1 = is_leap_year(lVar9), bVar1)) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
      lVar6 = (longlong)(*(int *)((longlong)&local_78 + (longlong)param_2 * 4) + iVar3);
      if (lVar12 <= lVar6) break;
      cVar8 = param_2 + '\x01';
      lVar12 = lVar12 - lVar6;
      if ('\f' < cVar8) {
        lVar9 = lVar9 + 1;
      }
      param_2 = '\x01';
      if (cVar8 < '\r') {
        param_2 = cVar8;
      }
    }
  }
  __return_storage_ptr__->m = param_2;
  __return_storage_ptr__->y = lVar7 * 400 + lVar9;
  __return_storage_ptr__->hh = param_5;
  __return_storage_ptr__->mm = param_6;
  __return_storage_ptr__->ss = param_7;
  __return_storage_ptr__->d = (schar)lVar12;
  return __return_storage_ptr__;
}

// n_hour @ 14f903490

/* struct absl::lts_20240722::time_internal::cctz::detail::fields __cdecl
   absl::lts_20240722::time_internal::cctz::detail::impl::n_hour(__int64,__int64,__int64,__int64,__int64,signed
   char,signed char) */

fields * __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::n_hour
          (fields *__return_storage_ptr__,__int64 param_1,__int64 param_2,__int64 param_3,
          __int64 param_4,__int64 param_5,char param_6,char param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_4 + param_5 / 0x18;
  lVar3 = param_5 % 0x18;
  lVar4 = lVar2 + -1;
  if (-1 < lVar3) {
    lVar4 = lVar2;
  }
  cVar1 = (char)lVar3 + '\x18';
  if (-1 < lVar3) {
    cVar1 = (char)lVar3;
  }
  if (param_2 != 0xc) {
    param_1 = param_1 + param_2 / 0xc;
    param_2 = param_2 % 0xc;
    if (param_2 < 1) {
      param_1 = param_1 + -1;
      param_2 = param_2 + 0xc;
    }
  }
  n_day(__return_storage_ptr__,param_1,(char)param_2,param_3,lVar4,cVar1,param_6,param_7);
  return __return_storage_ptr__;
}

// n_min @ 14f903570

/* struct absl::lts_20240722::time_internal::cctz::detail::fields __cdecl
   absl::lts_20240722::time_internal::cctz::detail::impl::n_min(__int64,__int64,__int64,__int64,__int64,__int64,signed
   char) */

fields * __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::n_min
          (fields *__return_storage_ptr__,__int64 param_1,__int64 param_2,__int64 param_3,
          __int64 param_4,__int64 param_5,__int64 param_6,char param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_6),8) + param_6;
  lVar3 = (lVar3 >> 5) - (lVar3 >> 0x3f);
  lVar2 = param_5 + lVar3;
  lVar4 = param_6 + lVar3 * -0x3c;
  lVar3 = lVar2 + -1;
  if (-1 < lVar4) {
    lVar3 = lVar2;
  }
  lVar2 = lVar3 / 6 + (lVar3 >> 0x3f);
  lVar2 = ((lVar2 >> 2) - (lVar2 >> 0x3f)) + param_4 / 0x18;
  cVar1 = (char)lVar4 + '<';
  if (-1 < lVar4) {
    cVar1 = (char)lVar4;
  }
  n_hour(__return_storage_ptr__,param_1,param_2,param_3,lVar2,lVar3 + lVar2 * -0x18 + param_4,cVar1,
         param_7);
  return __return_storage_ptr__;
}

// n_mon @ 14f903680

/* struct absl::lts_20240722::time_internal::cctz::detail::fields __cdecl
   absl::lts_20240722::time_internal::cctz::detail::impl::n_mon(__int64,__int64,__int64,__int64,signed
   char,signed char,signed char) */

fields * __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::n_mon
          (fields *__return_storage_ptr__,__int64 param_1,__int64 param_2,__int64 param_3,
          __int64 param_4,char param_5,char param_6,char param_7)

{
  if (param_2 != 0xc) {
    param_1 = param_1 + param_2 / 0xc;
    param_2 = param_2 % 0xc;
    if (param_2 < 1) {
      param_1 = param_1 + -1;
      param_2 = param_2 + 0xc;
    }
  }
  n_day(__return_storage_ptr__,param_1,(char)param_2,param_3,param_4,param_5,param_6,param_7);
  return __return_storage_ptr__;
}

// n_sec @ 14f903710

/* struct absl::lts_20240722::time_internal::cctz::detail::fields __cdecl
   absl::lts_20240722::time_internal::cctz::detail::impl::n_sec(__int64,__int64,__int64,__int64,__int64,__int64)
    */

fields * __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::n_sec
          (fields *__return_storage_ptr__,__int64 param_1,__int64 param_2,__int64 param_3,
          __int64 param_4,__int64 param_5,__int64 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  if ((ulonglong)param_6 < 0x3c) {
    cVar5 = (char)param_6;
    if ((ulonglong)param_5 < 0x3c) {
      cVar1 = (char)param_5;
      if (0x17 < (ulonglong)param_4) {
        n_hour(__return_storage_ptr__,param_1,param_2,param_3,param_4 / 0x18,param_4 % 0x18,cVar1,
               cVar5);
        return __return_storage_ptr__;
      }
      if ((param_3 - 1U < 0x1c) && (param_2 - 1U < 0xc)) {
        __return_storage_ptr__->y = param_1;
        __return_storage_ptr__->m = (schar)param_2;
        __return_storage_ptr__->d = (schar)param_3;
        __return_storage_ptr__->hh = (char)param_4;
        __return_storage_ptr__->mm = cVar1;
        __return_storage_ptr__->ss = cVar5;
        return __return_storage_ptr__;
      }
      n_mon(__return_storage_ptr__,param_1,param_2,param_3,0,(char)param_4,cVar1,cVar5);
      return __return_storage_ptr__;
    }
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_5),8) + param_5;
    lVar3 = (lVar2 >> 5) - (lVar2 >> 0x3f);
    lVar2 = lVar3 * -0x3c;
  }
  else {
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_6),8) + param_6;
    lVar3 = (lVar2 >> 5) - (lVar2 >> 0x3f);
    lVar6 = param_6 + lVar3 * -0x3c;
    lVar2 = lVar3 + -1;
    if (-1 < lVar6) {
      lVar2 = lVar3;
    }
    lVar3 = lVar2 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8);
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_5),8) + param_5;
    lVar3 = ((lVar4 >> 5) + ((lVar3 >> 5) - (lVar3 >> 0x3f))) - (lVar4 >> 0x3f);
    cVar5 = (char)lVar6 + '<';
    if (-1 < lVar6) {
      cVar5 = (char)lVar6;
    }
    lVar2 = lVar2 + lVar3 * -0x3c;
  }
  n_min(__return_storage_ptr__,param_1,param_2,param_3,param_4,lVar3,param_5 + lVar2,cVar5);
  return __return_storage_ptr__;
}

// second @ 14f903900

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::second(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::second
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this)

{
  return (int)(this->f_).ss;
}

// second @ 14f903910

/* public: int __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::second(void)const __ptr64 */

int __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::second
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this)

{
  return (int)(this->f_).ss;
}

// time_since_epoch @ 14f903920

/* public: class std::chrono::duration<__int64,struct std::ratio<1,1> > __cdecl
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,1> > >::time_since_epoch(void)const __ptr64 */

duration<__int64,std::ratio<1,1>_> __thiscall
std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
::time_since_epoch(time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,1>_>_>
                   *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->_MyDur)._MyRep;
  return (duration<__int64,std::ratio<1,1>_>)(long64)in_RDX;
}

// time_since_epoch @ 14f903930

/* public: class std::chrono::duration<__int64,struct std::ratio<1,10000000> > __cdecl
   std::chrono::time_point<struct std::chrono::system_clock,class
   std::chrono::duration<__int64,struct std::ratio<1,10000000> > >::time_since_epoch(void)const
   __ptr64 */

duration<__int64,std::ratio<1,10000000>_> __thiscall
std::chrono::
time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>::
time_since_epoch(time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>_>_>
                 *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->_MyDur)._MyRep;
  return (duration<__int64,std::ratio<1,10000000>_>)(long64)in_RDX;
}

// year @ 14f903960

/* public: __int64 __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::cctz::detail::second_tag>::year(void)const __ptr64 */

__int64 __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag>::year
          (civil_time<absl::lts_20240722::time_internal::cctz::detail::second_tag> *this)

{
  return (this->f_).y;
}

// year @ 14f903970

/* public: __int64 __cdecl absl::lts_20240722::time_internal::cctz::detail::civil_time<struct
   absl::lts_20240722::time_internal::second_tag>::year(void)const __ptr64 */

__int64 __thiscall
absl::lts_20240722::time_internal::cctz::detail::
civil_time<absl::lts_20240722::time_internal::second_tag>::year
          (civil_time<absl::lts_20240722::time_internal::second_tag> *this)

{
  return (this->f_).y;
}

// year_index @ 14f903980

/* int __cdecl absl::lts_20240722::time_internal::cctz::detail::impl::year_index(__int64,signed
   char) */

int __cdecl
absl::lts_20240722::time_internal::cctz::detail::impl::year_index(__int64 param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)('\x02' < param_2) + param_1;
  lVar2 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar4),8) + lVar4;
  iVar3 = (int)lVar4 + ((int)((ulonglong)lVar2 >> 8) - (int)(lVar2 >> 0x3f)) * -400;
  iVar1 = iVar3 + 400;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  return iVar1;
}

