// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 66

// operator<<<char_[62]> @ 14f92e240

/* class absl::lts_20240722::log_internal::NullStream & __ptr64 __cdecl
   absl::lts_20240722::log_internal::operator<<<char [62]>(class
   absl::lts_20240722::log_internal::NullStream & __ptr64,char const (& __ptr64)[62]) */

NullStream * __cdecl
absl::lts_20240722::log_internal::operator<<<char_[62]>(NullStream *param_1,char *param_2)

{
  return param_1;
}

// AddInternal<void*___ptr64_(__cdecl*)(google::protobuf::Arena*___ptr64)> @ 14f92e250

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AddInternal<void * __ptr64 (__cdecl*)(class
   google::protobuf::Arena * __ptr64)>(void * __ptr64 (__cdecl*)(class google::protobuf::Arena *
   __ptr64)) __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
AddInternal<void*___ptr64_(__cdecl*)(google::protobuf::Arena*___ptr64)>
          (RepeatedPtrFieldBase *this,_func_void_ptr_Arena_ptr *param_1)

{
  int iVar1;
  Arena *pAVar2;
  int iVar3;
  void *pvVar4;
  void **ppvVar5;
  int *piVar6;
  
  pvVar4 = this->tagged_rep_or_elem_;
  pAVar2 = this->arena_;
  if (pvVar4 == (void *)0x0) {
    this->current_size_ = 1;
    pvVar4 = (*param_1)(pAVar2);
    this->tagged_rep_or_elem_ = pvVar4;
    return pvVar4;
  }
  if ((~(byte)pvVar4 & 1) == 0) {
    iVar1 = this->current_size_;
    piVar6 = (int *)((longlong)pvVar4 + -1);
    if (iVar1 < this->capacity_proxy_ + 1) {
      iVar3 = *piVar6;
      if (iVar1 != iVar3) {
        this->current_size_ = iVar1 + 1;
        return *(void **)((longlong)pvVar4 + (longlong)iVar1 * 8 + 7);
      }
    }
    else {
      InternalExtend(this,1);
      piVar6 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
      iVar3 = *piVar6;
    }
    *piVar6 = iVar3 + 1;
    iVar1 = this->current_size_;
    this->current_size_ = iVar1 + 1;
    pvVar4 = (*param_1)(pAVar2);
    *(void **)(piVar6 + (longlong)iVar1 * 2 + 2) = pvVar4;
    return pvVar4;
  }
  if (this->current_size_ != 0) {
    ppvVar5 = InternalExtend(this,1);
    pvVar4 = (*param_1)(pAVar2);
    *ppvVar5 = pvVar4;
    *(undefined4 *)((longlong)this->tagged_rep_or_elem_ + -1) = 2;
    this->current_size_ = 2;
    return *ppvVar5;
  }
  this->current_size_ = 1;
  return pvVar4;
}

// FUN_14f92e360 @ 14f92e360

MessageLite * FUN_14f92e360(RepeatedPtrFieldBase *param_1,MessageLite *param_2)

{
  int iVar1;
  Arena *pAVar2;
  int iVar3;
  MessageLite *pMVar4;
  void **ppvVar5;
  int *piVar6;
  
  pMVar4 = param_1->tagged_rep_or_elem_;
  pAVar2 = param_1->arena_;
  if (pMVar4 == (MessageLite *)0x0) {
    param_1->current_size_ = 1;
    pMVar4 = google::protobuf::MessageLite::New(param_2,pAVar2);
    param_1->tagged_rep_or_elem_ = pMVar4;
    return pMVar4;
  }
  if ((~(byte)pMVar4 & 1) == 0) {
    iVar1 = param_1->current_size_;
    piVar6 = (int *)((longlong)&pMVar4[-1]._internal_metadata_.ptr_ + 7);
    if (iVar1 < param_1->capacity_proxy_ + 1) {
      iVar3 = *piVar6;
      if (iVar1 != iVar3) {
        param_1->current_size_ = iVar1 + 1;
        return *(MessageLite **)((longlong)&pMVar4->_padding_ + (longlong)iVar1 * 8 + 7);
      }
    }
    else {
      google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(param_1,1);
      piVar6 = (int *)((longlong)param_1->tagged_rep_or_elem_ + -1);
      iVar3 = *piVar6;
    }
    *piVar6 = iVar3 + 1;
    iVar1 = param_1->current_size_;
    param_1->current_size_ = iVar1 + 1;
    pMVar4 = google::protobuf::MessageLite::New(param_2,pAVar2);
    *(MessageLite **)(piVar6 + (longlong)iVar1 * 2 + 2) = pMVar4;
    return pMVar4;
  }
  if (param_1->current_size_ != 0) {
    ppvVar5 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(param_1,1);
    pMVar4 = google::protobuf::MessageLite::New(param_2,pAVar2);
    *ppvVar5 = pMVar4;
    *(undefined4 *)((longlong)param_1->tagged_rep_or_elem_ + -1) = 2;
    param_1->current_size_ = 2;
    return *ppvVar5;
  }
  param_1->current_size_ = 1;
  return pMVar4;
}

// FUN_14f92e480 @ 14f92e480

undefined8 * FUN_14f92e480(RepeatedPtrFieldBase *param_1)

{
  int iVar1;
  ThreadSafeArena *this;
  int iVar2;
  undefined8 *puVar3;
  void **ppvVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  puVar3 = param_1->tagged_rep_or_elem_;
  puVar5 = (undefined8 *)0x0;
  this = &param_1->arena_->impl_;
  if (puVar3 == (undefined8 *)0x0) {
    param_1->current_size_ = 1;
    if (this == (ThreadSafeArena *)0x0) {
      puVar3 = operator_new(0x20);
      if (puVar3 == (undefined8 *)0x0) {
        param_1->tagged_rep_or_elem_ = (void *)0x0;
        return (undefined8 *)0x0;
      }
    }
    else {
      puVar3 = google::protobuf::internal::ThreadSafeArena::AllocateFromStringBlock(this);
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    *(undefined1 *)puVar3 = 0;
    param_1->tagged_rep_or_elem_ = puVar3;
    return puVar3;
  }
  iVar1 = param_1->current_size_;
  if ((~(byte)puVar3 & 1) == 0) {
    piVar6 = (int *)((longlong)puVar3 + -1);
    if (iVar1 < param_1->capacity_proxy_ + 1) {
      iVar2 = *piVar6;
      if (iVar1 != iVar2) {
        param_1->current_size_ = iVar1 + 1;
        return *(undefined8 **)((longlong)puVar3 + (longlong)iVar1 * 8 + 7);
      }
    }
    else {
      google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(param_1,1);
      piVar6 = (int *)((longlong)param_1->tagged_rep_or_elem_ + -1);
      iVar2 = *piVar6;
    }
    *piVar6 = iVar2 + 1;
    iVar1 = param_1->current_size_;
    param_1->current_size_ = iVar1 + 1;
    if (this == (ThreadSafeArena *)0x0) {
      puVar3 = operator_new(0x20);
      if (puVar3 == (undefined8 *)0x0) goto LAB_14f92e62f;
    }
    else {
      puVar3 = google::protobuf::internal::ThreadSafeArena::AllocateFromStringBlock(this);
    }
    puVar5 = puVar3;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0xf;
    *(undefined1 *)puVar5 = 0;
LAB_14f92e62f:
    *(undefined8 **)(piVar6 + (longlong)iVar1 * 2 + 2) = puVar5;
    return puVar5;
  }
  if (iVar1 == 0) {
    param_1->current_size_ = 1;
    return puVar3;
  }
  ppvVar4 = google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(param_1,1);
  if (this == (ThreadSafeArena *)0x0) {
    puVar3 = operator_new(0x20);
    if (puVar3 == (undefined8 *)0x0) goto LAB_14f92e577;
  }
  else {
    puVar3 = google::protobuf::internal::ThreadSafeArena::AllocateFromStringBlock(this);
  }
  puVar5 = puVar3;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
LAB_14f92e577:
  *ppvVar4 = puVar5;
  *(undefined4 *)((longlong)param_1->tagged_rep_or_elem_ + -1) = 2;
  param_1->current_size_ = 2;
  return *ppvVar4;
}

// CalculateReserveSize<void*___ptr64,8> @ 14f92e650

/* int __cdecl google::protobuf::internal::CalculateReserveSize<void * __ptr64,8>(int,int) */

int __cdecl
google::protobuf::internal::CalculateReserveSize<void*___ptr64,8>(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    return 1;
  }
  if (0x3ffffffb < param_1) {
    return 0x7fffffff;
  }
  iVar1 = param_1 * 2 + 1;
  if (iVar1 < param_2) {
    iVar1 = param_2;
  }
  return iVar1;
}

// Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64> @ 14f92e680

/* public: static class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > * __ptr64 __cdecl google::protobuf::Arena::Create<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &
   __ptr64>(class google::protobuf::Arena * __ptr64,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > & __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::Arena::
Create<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>&___ptr64>
          (Arena *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 == (Arena *)0x0) {
    this = ::operator_new(0x20);
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    if (this != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               param_2);
    }
    return pbVar1;
  }
  pbVar1 = internal::ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (pbVar1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             param_2);
  return pbVar1;
}

// CreateArray<char> @ 14f92e6d0

/* public: static char * __ptr64 __cdecl google::protobuf::Arena::CreateArray<char>(class
   google::protobuf::Arena * __ptr64,unsigned __int64) */

char * __cdecl google::protobuf::Arena::CreateArray<char>(Arena *param_1,__uint64 param_2)

{
  char *pcVar1;
  
  if (param_1 == (Arena *)0x0) {
    pcVar1 = operator_new__(param_2);
    return pcVar1;
  }
  pcVar1 = AllocateForArray(param_1,param_2 + 7 & 0xfffffffffffffff8);
  return pcVar1;
}

// Delete<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_> @ 14f92e6f0

/* private: static void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Delete<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::MessageLite> >(void *
   __ptr64,class google::protobuf::Arena * __ptr64) */

void __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
Delete<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
          (void *param_1,Arena *param_2)

{
  if ((param_2 == (Arena *)0x0) && (param_1 != (void *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f92e702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)param_1)(param_1,1);
    return;
  }
  return;
}

// Destroy<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_> @ 14f92e710

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Destroy<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::MessageLite> >(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
Destroy<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>
          (RepeatedPtrFieldBase *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrFieldBase *pRVar4;
  
  lVar3 = 0;
  if (this->arena_ == (Arena *)0x0) {
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      uVar2 = *(uint *)((longlong)this->tagged_rep_or_elem_ + -1);
      pRVar4 = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
    }
    else {
      uVar2 = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
      pRVar4 = this;
    }
    if (0 < (int)uVar2) {
      do {
        puVar1 = (&pRVar4->tagged_rep_or_elem_)[lVar3];
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)uVar2);
    }
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      ::operator_delete((void *)((longlong)this->tagged_rep_or_elem_ + -1),
                        (longlong)(this->capacity_proxy_ + 1) * 8 + 8);
    }
  }
  return;
}

// MergeFrom<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 14f92e7b0

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(class
   google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::
MergeFrom<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ThreadSafeArena *this_00;
  ulonglong uVar3;
  undefined8 uVar4;
  void **ppvVar5;
  _Compressed_pair<std::allocator<char>,std::_String_val<std::_Simple_types<char>_>,1> *p_Var6;
  int iVar7;
  void **ppvVar8;
  int *piVar9;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this_01;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  void *pvVar13;
  void *pvVar14;
  uint uVar15;
  RepeatedPtrFieldBase *pRVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  undefined8 *_Src;
  int local_48 [4];
  
  piVar1 = &param_1->current_size_;
  iVar19 = *piVar1;
  iVar20 = this->current_size_;
  iVar22 = iVar20 + iVar19;
  iVar7 = this->capacity_proxy_ + 1;
  if (iVar7 < iVar22) {
    ppvVar8 = InternalExtend(this,iVar22 - iVar7);
    iVar19 = *piVar1;
    bVar17 = *(byte *)&this->tagged_rep_or_elem_;
    iVar20 = this->current_size_;
  }
  else {
    pvVar14 = (void *)(ulonglong)*(byte *)&this->tagged_rep_or_elem_;
    pRVar16 = this;
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      pvVar14 = this->tagged_rep_or_elem_;
      pRVar16 = (RepeatedPtrFieldBase *)((longlong)pvVar14 + 7);
    }
    bVar17 = (byte)pvVar14;
    ppvVar8 = &pRVar16->tagged_rep_or_elem_ + iVar20;
  }
  if ((~*(byte *)&param_1->tagged_rep_or_elem_ & 1) == 0) {
    param_1 = (RepeatedPtrFieldBase *)((longlong)param_1->tagged_rep_or_elem_ + 7);
  }
  pRVar16 = (RepeatedPtrFieldBase *)(&param_1->tagged_rep_or_elem_ + iVar19);
  if ((~bVar17 & 1) == 0) {
    uVar15 = *(uint *)((longlong)this->tagged_rep_or_elem_ + -1);
  }
  else {
    uVar15 = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
  }
  local_48[0] = uVar15 - iVar20;
  piVar9 = local_48;
  if (iVar19 < (int)(uVar15 - iVar20)) {
    piVar9 = piVar1;
  }
  iVar19 = *piVar9;
  ppvVar5 = &param_1->tagged_rep_or_elem_;
  for (; param_1 < (RepeatedPtrFieldBase *)(ppvVar5 + iVar19);
      param_1 = (RepeatedPtrFieldBase *)&param_1->current_size_) {
    pbVar10 = param_1->tagged_rep_or_elem_;
    if (*ppvVar8 != pbVar10) {
      p_Var6 = &pbVar10->_Mypair;
      if (0xf < (pbVar10->_Mypair)._Myval2._Myres) {
        pbVar10 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                  (pbVar10->_Mypair)._Myval2._Bx._Ptr;
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (*ppvVar8,(char *)pbVar10,(p_Var6->_Myval2)._Mysize);
    }
    ppvVar8 = ppvVar8 + 1;
  }
  this_00 = &this->arena_->impl_;
  if (param_1 < pRVar16) {
    if (this_00 == (ThreadSafeArena *)0x0) {
      do {
        puVar11 = ::operator_new(0x20);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          _Src = param_1->tagged_rep_or_elem_;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          uVar3 = _Src[2];
          if (0xf < (ulonglong)_Src[3]) {
            _Src = (undefined8 *)*_Src;
          }
          if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
            std::_Xlen_string();
          }
          puVar11[3] = 0xf;
          if (uVar3 < 0x10) {
            puVar11[2] = uVar3;
            uVar4 = _Src[1];
            *puVar11 = *_Src;
            puVar11[1] = uVar4;
          }
          else {
            uVar18 = uVar3 | 0xf;
            if (uVar18 < 0x8000000000000000) {
              if (uVar18 < 0x16) {
                uVar18 = 0x16;
              }
              uVar2 = uVar18 + 1;
              if (0xfff < uVar2) {
                uVar12 = uVar18 + 0x28;
                if (uVar12 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                  std::_Throw_bad_array_new_length();
                }
                goto LAB_14f92e999;
              }
              pvVar14 = (void *)0x0;
              if (uVar2 != 0) {
                pvVar14 = ::operator_new(uVar2);
              }
            }
            else {
              uVar18 = 0x7fffffffffffffff;
              uVar12 = 0x8000000000000027;
LAB_14f92e999:
              pvVar13 = ::operator_new(uVar12);
              if (pvVar13 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              pvVar14 = (void *)((longlong)pvVar13 + 0x27U & 0xffffffffffffffe0);
              *(void **)((longlong)pvVar14 - 8) = pvVar13;
            }
            *puVar11 = pvVar14;
            puVar11[2] = uVar3;
            puVar11[3] = uVar18;
            memcpy(pvVar14,_Src,uVar3 + 1);
          }
        }
        *ppvVar8 = puVar11;
        ppvVar8 = ppvVar8 + 1;
        param_1 = (RepeatedPtrFieldBase *)&param_1->current_size_;
      } while (param_1 < pRVar16);
    }
    else {
      lVar21 = (longlong)ppvVar8 - (longlong)param_1;
      do {
        pbVar10 = param_1->tagged_rep_or_elem_;
        this_01 = ThreadSafeArena::AllocateFromStringBlock(this_00);
        pbVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                  basic_string<char,std::char_traits<char>,std::allocator<char>_>(this_01,pbVar10);
        *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
         (lVar21 + (longlong)param_1) = pbVar10;
        param_1 = (RepeatedPtrFieldBase *)&param_1->current_size_;
      } while (param_1 < pRVar16);
    }
  }
  this->current_size_ = iVar22;
  pvVar14 = this->tagged_rep_or_elem_;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    uVar15 = *(uint *)((longlong)pvVar14 + -1);
  }
  else {
    uVar15 = (uint)(pvVar14 != (void *)0x0);
  }
  if ((int)uVar15 < iVar22) {
    *(int *)((longlong)pvVar14 + -1) = iVar22;
  }
  return;
}

// MergeFrom<google::protobuf::MessageLite> @ 14f92ea60

/* public: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<class
   google::protobuf::MessageLite>(class google::protobuf::internal::RepeatedPtrFieldBase const &
   __ptr64) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::MessageLite>
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  MessageLite *this_00;
  Arena *pAVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void **ppvVar6;
  MessageLite *this_01;
  void *pvVar7;
  RepeatedPtrFieldBase *pRVar8;
  int iVar9;
  longlong lVar10;
  void *pvVar11;
  int iVar12;
  
  iVar12 = param_1->current_size_;
  iVar5 = this->current_size_;
  iVar9 = iVar5 + iVar12;
  iVar3 = this->capacity_proxy_ + 1;
  if (iVar3 < iVar9) {
    ppvVar6 = InternalExtend(this,iVar9 - iVar3);
    iVar12 = param_1->current_size_;
    pvVar7 = (void *)(ulonglong)*(byte *)&this->tagged_rep_or_elem_;
    pvVar11 = this->tagged_rep_or_elem_;
    iVar5 = this->current_size_;
  }
  else {
    pvVar7 = (void *)(ulonglong)*(byte *)&this->tagged_rep_or_elem_;
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      pvVar7 = this->tagged_rep_or_elem_;
      ppvVar6 = (void **)((longlong)pvVar7 + (longlong)iVar5 * 8 + 7);
      pvVar11 = pvVar7;
    }
    else {
      ppvVar6 = &this->tagged_rep_or_elem_ + iVar5;
      pvVar11 = this->tagged_rep_or_elem_;
    }
  }
  pRVar8 = param_1;
  if ((~*(byte *)&param_1->tagged_rep_or_elem_ & 1) == 0) {
    pRVar8 = (RepeatedPtrFieldBase *)((longlong)param_1->tagged_rep_or_elem_ + 7);
  }
  this_00 = pRVar8->tagged_rep_or_elem_;
  ppvVar2 = &pRVar8->tagged_rep_or_elem_;
  if ((~(byte)pvVar7 & 1) == 0) {
    uVar4 = *(uint *)((longlong)pvVar11 + -1);
  }
  else {
    uVar4 = (uint)(pvVar11 != (void *)0x0);
  }
  if (0 < (int)(uVar4 - iVar5)) {
    iVar5 = MergeIntoClearedMessages(this,param_1);
    ppvVar6 = ppvVar6 + iVar5;
    pRVar8 = (RepeatedPtrFieldBase *)(&pRVar8->tagged_rep_or_elem_ + iVar5);
  }
  pAVar1 = this->arena_;
  if (pRVar8 < (RepeatedPtrFieldBase *)(ppvVar2 + iVar12)) {
    lVar10 = (longlong)ppvVar6 - (longlong)pRVar8;
    do {
      this_01 = MessageLite::New(this_00,pAVar1);
      *(MessageLite **)(lVar10 + (longlong)pRVar8) = this_01;
      MessageLite::CheckTypeAndMergeFrom(this_01,pRVar8->tagged_rep_or_elem_);
      pRVar8 = (RepeatedPtrFieldBase *)&pRVar8->current_size_;
    } while (pRVar8 < (RepeatedPtrFieldBase *)(ppvVar2 + iVar12));
  }
  this->current_size_ = iVar9;
  pvVar7 = this->tagged_rep_or_elem_;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    uVar4 = *(uint *)((longlong)pvVar7 + -1);
  }
  else {
    uVar4 = (uint)(pvVar7 != (void *)0x0);
  }
  if ((int)uVar4 < iVar9) {
    *(int *)((longlong)pvVar7 + -1) = iVar9;
  }
  return;
}

// _Adl_verify_range<char*___ptr64,char*___ptr64> @ 14f92ebc0

/* void __cdecl std::_Adl_verify_range<char * __ptr64,char * __ptr64>(char * __ptr64 const &
   __ptr64,char * __ptr64 const & __ptr64) */

void __cdecl std::_Adl_verify_range<char*___ptr64,char*___ptr64>(char **param_1,char **param_2)

{
  return;
}

// _Adl_verify_range<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64> @ 14f92ebd0

/* void __cdecl std::_Adl_verify_range<struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64>(struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 const &
   __ptr64,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 const &
   __ptr64) */

void __cdecl
std::
_Adl_verify_range<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64>
          (CachedBlock ***param_1,CachedBlock ***param_2)

{
  return;
}

// _Copy_unchecked<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64> @ 14f92ebe0

/* struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 __cdecl
   std::_Copy_unchecked<struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64,struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64>(struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64,struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64,struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64) */

CachedBlock ** __cdecl
std::
_Copy_unchecked<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64>
          (CachedBlock **param_1,CachedBlock **param_2,CachedBlock **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (CachedBlock **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Get_unwrapped<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64&___ptr64> @ 14f92ec20

/* UNKNOWN __cdecl std::_Get_unwrapped<struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64 & __ptr64>(struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64 & __ptr64) */

CachedBlock ** __cdecl
std::_Get_unwrapped<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64&___ptr64>
          (CachedBlock ***param_1)

{
  return *param_1;
}

// _Get_unwrapped<char*___ptr64_const&___ptr64> @ 14f92ec30

/* UNKNOWN __cdecl std::_Get_unwrapped<char * __ptr64 const & __ptr64>(char * __ptr64 const &
   __ptr64) */

char * __cdecl std::_Get_unwrapped<char*___ptr64_const&___ptr64>(char **param_1)

{
  return *param_1;
}

// _Get_unwrapped<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64_const&___ptr64> @ 14f92ec40

/* UNKNOWN __cdecl std::_Get_unwrapped<struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64 const & __ptr64>(struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64 const & __ptr64) */

CachedBlock ** __cdecl
std::
_Get_unwrapped<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64_const&___ptr64>
          (CachedBlock ***param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64&___ptr64,__int64> @ 14f92ec50

/* UNKNOWN __cdecl std::_Get_unwrapped_n<struct google::protobuf::internal::SerialArena::CachedBlock
   * __ptr64 * __ptr64 & __ptr64,__int64>(struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 & __ptr64,__int64) */

CachedBlock ** __cdecl
std::
_Get_unwrapped_n<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64&___ptr64,__int64>
          (CachedBlock ***param_1,__int64 param_2)

{
  return *param_1;
}

// _Idl_distance<char*___ptr64,char*___ptr64> @ 14f92ec60

/* UNKNOWN __cdecl std::_Idl_distance<char * __ptr64,char * __ptr64>(char * __ptr64 const &
   __ptr64,char * __ptr64 const & __ptr64) */

longlong __cdecl std::_Idl_distance<char*___ptr64,char*___ptr64>(char **param_1,char **param_2)

{
  return (longlong)*param_2 - (longlong)*param_1;
}

// _Idl_distance<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64> @ 14f92ec70

/* UNKNOWN __cdecl std::_Idl_distance<struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64>(struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 const &
   __ptr64,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 const &
   __ptr64) */

longlong __cdecl
std::
_Idl_distance<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64>
          (CachedBlock ***param_1,CachedBlock ***param_2)

{
  return (longlong)*param_2 - (longlong)*param_1 >> 3;
}

// _Seek_wrapped<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64> @ 14f92ec90

/* void __cdecl std::_Seek_wrapped<struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64>(struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 &
   __ptr64,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 &&
   __ptr64) */

void __cdecl
std::
_Seek_wrapped<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64>
          (CachedBlock ***param_1,CachedBlock ***param_2)

{
  *param_1 = *param_2;
  return;
}

// _Swap_ranges_unchecked<char*___ptr64,char*___ptr64> @ 14f92eca0

/* char * __ptr64 __cdecl std::_Swap_ranges_unchecked<char * __ptr64,char * __ptr64>(char *
   __ptr64,char * __ptr64 const,char * __ptr64) */

char * __cdecl
std::_Swap_ranges_unchecked<char*___ptr64,char*___ptr64>(char *param_1,char *param_2,char *param_3)

{
  __std_swap_ranges_trivially_swappable_noalias(param_1,param_2,param_3);
  return param_3 + ((longlong)param_2 - (longlong)param_1);
}

// _To_address<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64> @ 14f92ece0

/* UNKNOWN __cdecl std::_To_address<struct google::protobuf::internal::SerialArena::CachedBlock *
   __ptr64 * __ptr64>(struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64 const & __ptr64) */

CachedBlock ** __cdecl
std::_To_address<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64>
          (CachedBlock ***param_1)

{
  return *param_1;
}

// _Verify_ranges_do_not_overlap<char*___ptr64,char*___ptr64,char*___ptr64> @ 14f92ecf0

/* void __cdecl std::_Verify_ranges_do_not_overlap<char * __ptr64,char * __ptr64,char *
   __ptr64>(char * __ptr64 const & __ptr64,char * __ptr64 const & __ptr64,char * __ptr64 const &
   __ptr64) */

void __cdecl
std::_Verify_ranges_do_not_overlap<char*___ptr64,char*___ptr64,char*___ptr64>
          (char **param_1,char **param_2,char **param_3)

{
  return;
}

// cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_> @ 14f92ed00

/* private: static class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::cast<class
   google::protobuf::internal::GenericTypeHandler<class google::protobuf::MessageLite> >(void *
   __ptr64) */

MessageLite * __cdecl
google::protobuf::internal::RepeatedPtrFieldBase::
cast<google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>_>(void *param_1)

{
  return param_1;
}

// copy<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64> @ 14f92ed10

/* struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 __cdecl
   std::copy<struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64,struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64>(struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64,struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64,struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64) */

CachedBlock ** __cdecl
std::
copy<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64>
          (CachedBlock **param_1,CachedBlock **param_2,CachedBlock **param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (CachedBlock **)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// exchange<int,int&___ptr64> @ 14f92ed50

/* int __cdecl std::exchange<int,int & __ptr64>(int & __ptr64,int & __ptr64) */

int __cdecl std::exchange<int,int&___ptr64>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  return iVar1;
}

// fill<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,std::nullptr_t> @ 14f92ed60

/* void __cdecl std::fill<struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64,std::nullptr_t>(struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64 const,struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64
   const,std::nullptr_t const & __ptr64) */

void __cdecl
std::fill<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64,std::nullptr_t>
          (CachedBlock **param_1,CachedBlock **param_2,std__nullptr_t *param_3)

{
  memset(param_1,0,(longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8);
  return;
}

// forward<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64> @ 14f92ed80

/* struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 && __ptr64
   __cdecl std::forward<struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 *
   __ptr64>(struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 &
   __ptr64) */

CachedBlock *** __cdecl
std::forward<google::protobuf::internal::SerialArena::CachedBlock*___ptr64*___ptr64>
          (CachedBlock ***param_1)

{
  return param_1;
}

// memswap<16> @ 14f92ed90

/* void __cdecl google::protobuf::internal::memswap<16>(char * __ptr64,char * __ptr64) */

void __cdecl google::protobuf::internal::memswap<16>(char *param_1,char *param_2)

{
  __std_swap_ranges_trivially_swappable_noalias(param_1,param_1 + 0x10,param_2);
  return;
}

// swap_ranges<char*___ptr64,char*___ptr64> @ 14f92edb0

/* char * __ptr64 __cdecl std::swap_ranges<char * __ptr64,char * __ptr64>(char * __ptr64 const,char
   * __ptr64 const,char * __ptr64) */

char * __cdecl
std::swap_ranges<char*___ptr64,char*___ptr64>(char *param_1,char *param_2,char *param_3)

{
  __std_swap_ranges_trivially_swappable_noalias(param_1,param_2,param_3);
  return param_3 + ((longlong)param_2 - (longlong)param_1);
}

// to_address<google::protobuf::internal::SerialArena::CachedBlock*___ptr64> @ 14f92edf0

/* struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 __cdecl
   std::to_address<struct google::protobuf::internal::SerialArena::CachedBlock * __ptr64>(struct
   google::protobuf::internal::SerialArena::CachedBlock * __ptr64 * __ptr64 const) */

CachedBlock ** __cdecl
std::to_address<google::protobuf::internal::SerialArena::CachedBlock*___ptr64>
          (CachedBlock **param_1)

{
  return param_1;
}

// FUN_14f92ee20 @ 14f92ee20

void FUN_14f92ee20(undefined8 param_1,ThreadSafeArena *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (ThreadSafeArena *)0x0) {
    puVar1 = operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
  }
  else {
    puVar1 = google::protobuf::internal::ThreadSafeArena::AllocateFromStringBlock(param_2);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return;
}

// AddMessage @ 14f92ee70

/* public: class google::protobuf::MessageLite * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AddMessage(class google::protobuf::MessageLite
   const * __ptr64) __ptr64 */

MessageLite * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::AddMessage
          (RepeatedPtrFieldBase *this,MessageLite *param_1)

{
  int iVar1;
  Arena *pAVar2;
  int iVar3;
  MessageLite *pMVar4;
  void **ppvVar5;
  int *piVar6;
  
  pMVar4 = this->tagged_rep_or_elem_;
  pAVar2 = this->arena_;
  if (pMVar4 == (MessageLite *)0x0) {
    this->current_size_ = 1;
    pMVar4 = MessageLite::New(param_1,pAVar2);
    this->tagged_rep_or_elem_ = pMVar4;
    return pMVar4;
  }
  if ((~(byte)pMVar4 & 1) == 0) {
    iVar1 = this->current_size_;
    piVar6 = (int *)((longlong)&pMVar4[-1]._internal_metadata_.ptr_ + 7);
    if (iVar1 < this->capacity_proxy_ + 1) {
      iVar3 = *piVar6;
      if (iVar1 != iVar3) {
        this->current_size_ = iVar1 + 1;
        return *(MessageLite **)((longlong)&pMVar4->_padding_ + (longlong)iVar1 * 8 + 7);
      }
    }
    else {
      InternalExtend(this,1);
      piVar6 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
      iVar3 = *piVar6;
    }
    *piVar6 = iVar3 + 1;
    iVar1 = this->current_size_;
    this->current_size_ = iVar1 + 1;
    pMVar4 = MessageLite::New(param_1,pAVar2);
    *(MessageLite **)(piVar6 + (longlong)iVar1 * 2 + 2) = pMVar4;
    return pMVar4;
  }
  if (this->current_size_ != 0) {
    ppvVar5 = InternalExtend(this,1);
    pMVar4 = MessageLite::New(param_1,pAVar2);
    *ppvVar5 = pMVar4;
    *(undefined4 *)((longlong)this->tagged_rep_or_elem_ + -1) = 2;
    this->current_size_ = 2;
    return *ppvVar5;
  }
  this->current_size_ = 1;
  return pMVar4;
}

// AddMessageLite @ 14f92ef90

/* private: void * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite(void * __ptr64 (__cdecl*)(class
   google::protobuf::Arena * __ptr64)) __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::AddMessageLite
          (RepeatedPtrFieldBase *this,_func_void_ptr_Arena_ptr *param_1)

{
  int iVar1;
  Arena *pAVar2;
  int iVar3;
  void *pvVar4;
  void **ppvVar5;
  int *piVar6;
  
  pvVar4 = this->tagged_rep_or_elem_;
  pAVar2 = this->arena_;
  if (pvVar4 == (void *)0x0) {
    this->current_size_ = 1;
    pvVar4 = (*param_1)(pAVar2);
    this->tagged_rep_or_elem_ = pvVar4;
    return pvVar4;
  }
  if ((~(byte)pvVar4 & 1) == 0) {
    iVar1 = this->current_size_;
    piVar6 = (int *)((longlong)pvVar4 + -1);
    if (iVar1 < this->capacity_proxy_ + 1) {
      iVar3 = *piVar6;
      if (iVar1 != iVar3) {
        this->current_size_ = iVar1 + 1;
        return *(void **)((longlong)pvVar4 + (longlong)iVar1 * 8 + 7);
      }
    }
    else {
      InternalExtend(this,1);
      piVar6 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
      iVar3 = *piVar6;
    }
    *piVar6 = iVar3 + 1;
    iVar1 = this->current_size_;
    this->current_size_ = iVar1 + 1;
    pvVar4 = (*param_1)(pAVar2);
    *(void **)(piVar6 + (longlong)iVar1 * 2 + 2) = pvVar4;
    return pvVar4;
  }
  if (this->current_size_ != 0) {
    ppvVar5 = InternalExtend(this,1);
    pvVar4 = (*param_1)(pAVar2);
    *ppvVar5 = pvVar4;
    *(undefined4 *)((longlong)this->tagged_rep_or_elem_ + -1) = 2;
    this->current_size_ = 2;
    return *ppvVar5;
  }
  this->current_size_ = 1;
  return pvVar4;
}

// AddString @ 14f92f0a0

/* private: void * __ptr64 __cdecl google::protobuf::internal::RepeatedPtrFieldBase::AddString(void)
   __ptr64 */

void * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::AddString(RepeatedPtrFieldBase *this)

{
  void *pvVar1;
  undefined1 local_res10;
  
  pvVar1 = (void *)FUN_14f92e480(this,local_res10);
  return pvVar1;
}

// AllocateAlignedForArray @ 14f92f0b0

/* private: void * __ptr64 __cdecl google::protobuf::Arena::AllocateAlignedForArray(unsigned
   __int64,unsigned __int64) __ptr64 */

void * __thiscall
google::protobuf::Arena::AllocateAlignedForArray(Arena *this,__uint64 param_1,__uint64 param_2)

{
  void *pvVar1;
  
  if (param_2 < 9) {
    pvVar1 = AllocateForArray(this,param_1 + 7 & 0xfffffffffffffff8);
    return pvVar1;
  }
  pvVar1 = AllocateForArray(this,(param_1 - 8) + param_2);
  return (void *)((longlong)pvVar1 + (param_2 - 1) & ~(param_2 - 1));
}

// Capacity @ 14f92f100

/* protected: int __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Capacity(void)const
   __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::Capacity(RepeatedPtrFieldBase *this)

{
  return this->capacity_proxy_ + 1;
}

// ClearedCount @ 14f92f110

/* protected: int __cdecl google::protobuf::internal::RepeatedPtrFieldBase::ClearedCount(void)const
   __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::ClearedCount(RepeatedPtrFieldBase *this)

{
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return (uint)(this->tagged_rep_or_elem_ != (void *)0x0) - this->current_size_;
  }
  return *(int *)((longlong)this->tagged_rep_or_elem_ + -1) - this->current_size_;
}

// CloneSlow @ 14f92f140

/* class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * __ptr64
   __cdecl google::protobuf::internal::CloneSlow(class google::protobuf::Arena * __ptr64,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
google::protobuf::internal::CloneSlow
          (Arena *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  if (param_1 == (Arena *)0x0) {
    this = ::operator_new(0x20);
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
    if (this != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
               basic_string<char,std::char_traits<char>,std::allocator<char>_>
                         (this,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                               param_2);
    }
    return pbVar1;
  }
  pbVar1 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  pbVar1 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
           basic_string<char,std::char_traits<char>,std::allocator<char>_>
                     (pbVar1,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                             param_2);
  return pbVar1;
}

// CloneSlow @ 14f92f190

/* class google::protobuf::MessageLite * __ptr64 __cdecl google::protobuf::internal::CloneSlow(class
   google::protobuf::Arena * __ptr64,class google::protobuf::MessageLite const & __ptr64) */

MessageLite * __cdecl google::protobuf::internal::CloneSlow(Arena *param_1,MessageLite *param_2)

{
  MessageLite *this;
  
  this = MessageLite::New(param_2,param_1);
  MessageLite::CheckTypeAndMergeFrom(this,param_2);
  return this;
}

// CloseGap @ 14f92f1d0

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::CloseGap(int,int)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::CloseGap
          (RepeatedPtrFieldBase *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    iVar3 = param_1 + param_2;
    piVar4 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
    iVar1 = *piVar4;
    if (iVar3 < iVar1) {
      piVar2 = piVar4 + ((longlong)iVar3 + 1) * 2;
      do {
        iVar3 = iVar3 + 1;
        *(undefined8 *)(piVar2 + (longlong)param_2 * -2) = *(undefined8 *)piVar2;
        piVar2 = piVar2 + 2;
        iVar1 = *piVar4;
      } while (iVar3 < iVar1);
    }
    *piVar4 = iVar1 - param_2;
  }
  else if (param_1 == 0) {
    this->current_size_ = this->current_size_ - param_2;
    if (param_2 != 1) {
      return;
    }
    this->tagged_rep_or_elem_ = (void *)0x0;
    return;
  }
  this->current_size_ = this->current_size_ - param_2;
  return;
}

// Delete @ 14f92f250

/* public: static void __cdecl google::protobuf::internal::GenericTypeHandler<class
   google::protobuf::MessageLite>::Delete(class google::protobuf::MessageLite * __ptr64,class
   google::protobuf::Arena * __ptr64) */

void __cdecl
google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Delete
          (MessageLite *param_1,Arena *param_2)

{
  if ((param_2 == (Arena *)0x0) && (param_1 != (MessageLite *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f92f262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1->_padding_)(param_1,1);
    return;
  }
  return;
}

// DestroyProtos @ 14f92f270

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos(void)
   __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::DestroyProtos(RepeatedPtrFieldBase *this)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  RepeatedPtrFieldBase *pRVar4;
  
  lVar3 = 0;
  if (this->arena_ != (Arena *)0x0) {
    this->tagged_rep_or_elem_ = (void *)0x0;
    return;
  }
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    uVar2 = *(uint *)((longlong)this->tagged_rep_or_elem_ + -1);
    pRVar4 = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
  }
  else {
    uVar2 = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
    pRVar4 = this;
  }
  if (0 < (int)uVar2) {
    do {
      puVar1 = (&pRVar4->tagged_rep_or_elem_)[lVar3];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)uVar2);
  }
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    ::operator_delete((void *)((longlong)this->tagged_rep_or_elem_ + -1),
                      (longlong)(this->capacity_proxy_ + 1) * 8 + 8);
  }
  this->tagged_rep_or_elem_ = (void *)0x0;
  return;
}

// ExchangeCurrentSize @ 14f92f330

/* private: int __cdecl google::protobuf::internal::RepeatedPtrFieldBase::ExchangeCurrentSize(int)
   __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::ExchangeCurrentSize
          (RepeatedPtrFieldBase *this,int param_1)

{
  int iVar1;
  
  iVar1 = this->current_size_;
  this->current_size_ = param_1;
  return iVar1;
}

// GetArena @ 14f92f340

/* protected: class google::protobuf::Arena * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::GetArena(void)const __ptr64 */

Arena * __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::GetArena(RepeatedPtrFieldBase *this)

{
  return this->arena_;
}

// InternalExtend @ 14f92f350

/* private: void * __ptr64 * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend(int) __ptr64 */

void ** __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::InternalExtend
          (RepeatedPtrFieldBase *this,int param_1)

{
  ulong64 uVar1;
  Arena *this_00;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  uint *_Dst;
  ulonglong uVar5;
  int iVar6;
  int *_Src_00;
  ulonglong uVar7;
  int iVar8;
  undefined1 uVar9;
  
  this_00 = this->arena_;
  iVar8 = this->capacity_proxy_ + 1;
  iVar4 = iVar8 + param_1;
  if (iVar4 < 1) {
    iVar6 = 1;
  }
  else if (iVar8 < 0x3ffffffc) {
    iVar6 = iVar8 * 2 + 1;
    if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
  }
  else {
    iVar6 = 0x7fffffff;
  }
  uVar1 = (longlong)iVar6 * 8 + 8;
  if (this_00 == (Arena *)0x0) {
    _Dst = ::operator_new(uVar1);
  }
  else {
    _Dst = Arena::AllocateForArray(this_00,uVar1);
  }
  this->capacity_proxy_ = iVar6 + -1;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    _Src_00 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
    memcpy(_Dst,_Src_00,(longlong)*_Src_00 * 8 + 8);
    uVar7 = (longlong)iVar8 * 8 + 8;
    if (this_00 == (Arena *)0x0) {
      ::operator_delete(_Src_00,uVar7);
    }
    else {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar2 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(ulong64 *)(lVar2 + 0x9d08) == (this_00->impl_).tag_and_id_) {
        lVar2 = *(longlong *)(lVar2 + 0x9d10);
        if (__isa_available < 5) {
          lVar3 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          if (uVar7 != 0) {
            iVar4 = 0x3f - (int)lVar3;
          }
          else {
            iVar4 = 0x40;
          }
        }
        else {
          iVar4 = (int)LZCOUNT(uVar7);
        }
        _Src = *(void **)(lVar2 + 0x70);
        uVar5 = (ulonglong)(0x3b - iVar4);
        if (uVar5 < *(byte *)(lVar2 + 0x68)) {
          *(undefined8 *)_Src_00 = *(undefined8 *)((longlong)_Src + uVar5 * 8);
          *(int **)((longlong)_Src + uVar5 * 8) = _Src_00;
        }
        else {
          uVar7 = uVar7 >> 3;
          memmove(_Src_00,_Src,(ulonglong)*(byte *)(lVar2 + 0x68) * 8);
          memset(_Src_00 + (ulonglong)*(byte *)(lVar2 + 0x68) * 2,0,
                 (longlong)_Src_00 +
                 (uVar7 * 8 - (longlong)(_Src_00 + (ulonglong)*(byte *)(lVar2 + 0x68) * 2)) &
                 0xfffffffffffffff8);
          *(int **)(lVar2 + 0x70) = _Src_00;
          uVar9 = 0x40;
          if (uVar7 < 0x40) {
            uVar9 = (undefined1)uVar7;
          }
          *(undefined1 *)(lVar2 + 0x68) = uVar9;
        }
      }
    }
  }
  else {
    *_Dst = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
    *(void **)(_Dst + 2) = this->tagged_rep_or_elem_;
  }
  this->tagged_rep_or_elem_ = (void *)((longlong)_Dst + 1);
  return (void **)(_Dst + ((longlong)this->current_size_ + 1) * 2);
}

// InternalOutOfLineDeleteMessageLite @ 14f92f540

/* void __cdecl google::protobuf::internal::InternalOutOfLineDeleteMessageLite(class
   google::protobuf::MessageLite * __ptr64) */

void __cdecl google::protobuf::internal::InternalOutOfLineDeleteMessageLite(MessageLite *param_1)

{
  if (param_1 != (MessageLite *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f92f54d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1->_padding_)(param_1,1);
    return;
  }
  return;
}

// InternalReserve @ 14f92f560

/* private: void * __ptr64 * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::InternalReserve(int) __ptr64 */

void ** __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::InternalReserve
          (RepeatedPtrFieldBase *this,int param_1)

{
  int iVar1;
  void **ppvVar2;
  
  iVar1 = this->capacity_proxy_ + 1;
  if (iVar1 < param_1) {
    ppvVar2 = InternalExtend(this,param_1 - iVar1);
    return ppvVar2;
  }
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return &this->tagged_rep_or_elem_ + this->current_size_;
  }
  return (void **)((longlong)this->tagged_rep_or_elem_ + (longlong)this->current_size_ * 8 + 7);
}

// MergeFromConcreteMessage @ 14f92f5a0

/* private: void __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage(class
   google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64,void * __ptr64 (__cdecl*)(class
   google::protobuf::Arena * __ptr64,void const * __ptr64)) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::MergeFromConcreteMessage
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1,
          _func_void_ptr_Arena_ptr_void_ptr *param_2)

{
  RepeatedPtrFieldBase *pRVar1;
  Arena *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void **ppvVar6;
  void *pvVar7;
  RepeatedPtrFieldBase *pRVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar5 = param_1->current_size_;
  iVar10 = this->current_size_;
  iVar11 = iVar10 + iVar5;
  iVar3 = this->capacity_proxy_ + 1;
  if (iVar3 < iVar11) {
    ppvVar6 = InternalExtend(this,iVar11 - iVar3);
    iVar5 = param_1->current_size_;
    pvVar7 = (void *)(ulonglong)*(byte *)&this->tagged_rep_or_elem_;
    pvVar9 = this->tagged_rep_or_elem_;
    iVar10 = this->current_size_;
  }
  else {
    pvVar7 = (void *)(ulonglong)*(byte *)&this->tagged_rep_or_elem_;
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      pvVar7 = this->tagged_rep_or_elem_;
      ppvVar6 = (void **)((longlong)pvVar7 + (longlong)iVar10 * 8 + 7);
      pvVar9 = pvVar7;
    }
    else {
      ppvVar6 = &this->tagged_rep_or_elem_ + iVar10;
      pvVar9 = this->tagged_rep_or_elem_;
    }
  }
  pRVar8 = param_1;
  if ((~*(byte *)&param_1->tagged_rep_or_elem_ & 1) == 0) {
    pRVar8 = (RepeatedPtrFieldBase *)((longlong)param_1->tagged_rep_or_elem_ + 7);
  }
  pRVar1 = (RepeatedPtrFieldBase *)(&pRVar8->tagged_rep_or_elem_ + iVar5);
  if ((~(byte)pvVar7 & 1) == 0) {
    uVar4 = *(uint *)((longlong)pvVar9 + -1);
  }
  else {
    uVar4 = (uint)(pvVar9 != (void *)0x0);
  }
  if (0 < (int)(uVar4 - iVar10)) {
    iVar5 = MergeIntoClearedMessages(this,param_1);
    ppvVar6 = ppvVar6 + iVar5;
    pRVar8 = (RepeatedPtrFieldBase *)(&pRVar8->tagged_rep_or_elem_ + iVar5);
  }
  pAVar2 = this->arena_;
  if (0 < param_1->current_size_) {
    for (; pRVar8 < &pRVar1[-1].arena_; pRVar8 = (RepeatedPtrFieldBase *)&pRVar8->current_size_) {
      pvVar7 = (*param_2)(pAVar2,pRVar8->tagged_rep_or_elem_);
      *ppvVar6 = pvVar7;
      ppvVar6 = ppvVar6 + 1;
    }
  }
  if (pRVar8 < pRVar1) {
    lVar12 = (longlong)ppvVar6 - (longlong)pRVar8;
    do {
      pvVar7 = (*param_2)(pAVar2,pRVar8->tagged_rep_or_elem_);
      *(void **)(lVar12 + (longlong)pRVar8) = pvVar7;
      pRVar8 = (RepeatedPtrFieldBase *)&pRVar8->current_size_;
    } while (pRVar8 < pRVar1);
  }
  this->current_size_ = iVar11;
  pvVar7 = this->tagged_rep_or_elem_;
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
    uVar4 = *(uint *)((longlong)pvVar7 + -1);
  }
  else {
    uVar4 = (uint)(pvVar7 != (void *)0x0);
  }
  if ((int)uVar4 < iVar11) {
    *(int *)((longlong)pvVar7 + -1) = iVar11;
  }
  return;
}

// MergeIntoClearedMessages @ 14f92f740

/* private: int __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::MergeIntoClearedMessages(class
   google::protobuf::internal::RepeatedPtrFieldBase const & __ptr64) __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::MergeIntoClearedMessages
          (RepeatedPtrFieldBase *this,RepeatedPtrFieldBase *param_1)

{
  int iVar1;
  int *piVar2;
  void **ppvVar3;
  longlong lVar4;
  RepeatedPtrFieldBase *pRVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int local_res8 [2];
  
  bVar7 = ~*(byte *)&this->tagged_rep_or_elem_ & 1;
  pRVar5 = this;
  if (bVar7 == 0) {
    pRVar5 = (RepeatedPtrFieldBase *)((longlong)this->tagged_rep_or_elem_ + 7);
  }
  ppvVar3 = &pRVar5->tagged_rep_or_elem_ + this->current_size_;
  pRVar5 = param_1;
  if ((~*(byte *)&param_1->tagged_rep_or_elem_ & 1) == 0) {
    pRVar5 = (RepeatedPtrFieldBase *)((longlong)param_1->tagged_rep_or_elem_ + 7);
  }
  if (bVar7 == 0) {
    uVar8 = *(uint *)((longlong)this->tagged_rep_or_elem_ + -1);
  }
  else {
    uVar8 = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
  }
  local_res8[0] = uVar8 - this->current_size_;
  piVar2 = local_res8;
  if (param_1->current_size_ < local_res8[0]) {
    piVar2 = &param_1->current_size_;
  }
  iVar1 = *piVar2;
  lVar4 = (longlong)iVar1;
  if (0 < iVar1) {
    lVar6 = (longlong)pRVar5 - (longlong)ppvVar3;
    do {
      MessageLite::CheckTypeAndMergeFrom(*ppvVar3,*(MessageLite **)(lVar6 + (longlong)ppvVar3));
      ppvVar3 = ppvVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return iVar1;
}

// NewStringElement @ 14f92f810

/* void * __ptr64 __cdecl google::protobuf::internal::NewStringElement(class google::protobuf::Arena
   * __ptr64) */

void * __cdecl google::protobuf::internal::NewStringElement(Arena *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (Arena *)0x0) {
    puVar1 = ::operator_new(0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    puVar1 = ThreadSafeArena::AllocateFromStringBlock(&param_1->impl_);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xf;
  *(undefined1 *)puVar1 = 0;
  return puVar1;
}

// Prefetch5LinesFrom1Line @ 14f92f860

/* void __cdecl google::protobuf::internal::Prefetch5LinesFrom1Line(void const * __ptr64) */

void __cdecl google::protobuf::internal::Prefetch5LinesFrom1Line(void *param_1)

{
  return;
}

// Reserve @ 14f92f870

/* protected: void __cdecl google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int) __ptr64 */

void __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::Reserve(RepeatedPtrFieldBase *this,int param_1)

{
  ulong64 uVar1;
  Arena *this_00;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  uint *_Dst;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int *_Src_00;
  ulonglong uVar7;
  int iVar8;
  undefined1 uVar9;
  
  iVar5 = (param_1 - this->capacity_proxy_) + -1;
  if (0 < iVar5) {
    this_00 = this->arena_;
    iVar8 = this->capacity_proxy_ + 1;
    iVar5 = iVar8 + iVar5;
    if (iVar5 < 1) {
      iVar6 = 1;
    }
    else if (iVar8 < 0x3ffffffc) {
      iVar6 = iVar8 * 2 + 1;
      if (iVar6 < iVar5) {
        iVar6 = iVar5;
      }
    }
    else {
      iVar6 = 0x7fffffff;
    }
    uVar1 = (longlong)iVar6 * 8 + 8;
    if (this_00 == (Arena *)0x0) {
      _Dst = ::operator_new(uVar1);
    }
    else {
      _Dst = Arena::AllocateForArray(this_00,uVar1);
    }
    this->capacity_proxy_ = iVar6 + -1;
    if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) == 0) {
      _Src_00 = (int *)((longlong)this->tagged_rep_or_elem_ + -1);
      memcpy(_Dst,_Src_00,(longlong)*_Src_00 * 8 + 8);
      uVar7 = (longlong)iVar8 * 8 + 8;
      if (this_00 == (Arena *)0x0) {
        ::operator_delete(_Src_00,uVar7);
      }
      else {
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar2 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        if (*(ulong64 *)(lVar2 + 0x9d08) == (this_00->impl_).tag_and_id_) {
          lVar2 = *(longlong *)(lVar2 + 0x9d10);
          if (__isa_available < 5) {
            lVar3 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
              }
            }
            if (uVar7 != 0) {
              iVar5 = 0x3f - (int)lVar3;
            }
            else {
              iVar5 = 0x40;
            }
          }
          else {
            iVar5 = (int)LZCOUNT(uVar7);
          }
          _Src = *(void **)(lVar2 + 0x70);
          uVar4 = (ulonglong)(0x3b - iVar5);
          if (uVar4 < *(byte *)(lVar2 + 0x68)) {
            *(undefined8 *)_Src_00 = *(undefined8 *)((longlong)_Src + uVar4 * 8);
            *(int **)((longlong)_Src + uVar4 * 8) = _Src_00;
          }
          else {
            uVar7 = uVar7 >> 3;
            memmove(_Src_00,_Src,(ulonglong)*(byte *)(lVar2 + 0x68) * 8);
            memset(_Src_00 + (ulonglong)*(byte *)(lVar2 + 0x68) * 2,0,
                   (longlong)_Src_00 +
                   (uVar7 * 8 - (longlong)(_Src_00 + (ulonglong)*(byte *)(lVar2 + 0x68) * 2)) &
                   0xfffffffffffffff8);
            *(int **)(lVar2 + 0x70) = _Src_00;
            uVar9 = 0x40;
            if (uVar7 < 0x40) {
              uVar9 = (undefined1)uVar7;
            }
            *(undefined1 *)(lVar2 + 0x68) = uVar9;
          }
        }
      }
    }
    else {
      *_Dst = (uint)(this->tagged_rep_or_elem_ != (void *)0x0);
      *(void **)(_Dst + 2) = this->tagged_rep_or_elem_;
    }
    this->tagged_rep_or_elem_ = (void *)((longlong)_Dst + 1);
    return;
  }
  return;
}

// ReturnArrayMemory @ 14f92f890

/* private: void __cdecl google::protobuf::internal::SerialArena::ReturnArrayMemory(void *
   __ptr64,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::internal::SerialArena::ReturnArrayMemory
          (SerialArena *this,void *param_1,__uint64 param_2)

{
  void *_Dst;
  CachedBlock **_Src;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uchar uVar4;
  
  if (__isa_available < 5) {
    lVar1 = 0x3f;
    if (param_2 != 0) {
      for (; param_2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    if (param_2 != 0) {
      iVar2 = 0x3f - (int)lVar1;
    }
    else {
      iVar2 = 0x40;
    }
  }
  else {
    iVar2 = (int)LZCOUNT(param_2);
  }
  _Src = this->cached_blocks_;
  uVar3 = (ulonglong)(0x3b - iVar2);
  if (uVar3 < this->cached_block_length_) {
    *(CachedBlock **)param_1 = _Src[uVar3];
    _Src[uVar3] = param_1;
  }
  else {
    uVar3 = param_2 >> 3;
    memmove(param_1,_Src,(ulonglong)this->cached_block_length_ * 8);
    _Dst = (void *)((longlong)param_1 + (ulonglong)this->cached_block_length_ * 8);
    memset(_Dst,0,(longlong)param_1 + (uVar3 * 8 - (longlong)_Dst) & 0xfffffffffffffff8);
    this->cached_blocks_ = param_1;
    uVar4 = '@';
    if (uVar3 < 0x40) {
      uVar4 = (uchar)uVar3;
    }
    this->cached_block_length_ = uVar4;
  }
  return;
}

// ReturnArrayMemory @ 14f92f960

/* public: void __cdecl google::protobuf::internal::ThreadSafeArena::ReturnArrayMemory(void *
   __ptr64,unsigned __int64) __ptr64 */

void __thiscall
google::protobuf::internal::ThreadSafeArena::ReturnArrayMemory
          (ThreadSafeArena *this,void *param_1,__uint64 param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(ulong64 *)(lVar1 + 0x9d08) == this->tag_and_id_) {
    lVar1 = *(longlong *)(lVar1 + 0x9d10);
    if (__isa_available < 5) {
      lVar3 = 0x3f;
      if (param_2 != 0) {
        for (; param_2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      if (param_2 != 0) {
        iVar4 = 0x3f - (int)lVar3;
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = (int)LZCOUNT(param_2);
    }
    pvVar2 = *(void **)(lVar1 + 0x70);
    uVar5 = (ulonglong)(0x3b - iVar4);
    if (uVar5 < *(byte *)(lVar1 + 0x68)) {
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)pvVar2 + uVar5 * 8);
      *(void **)((longlong)pvVar2 + uVar5 * 8) = param_1;
    }
    else {
      uVar5 = param_2 >> 3;
      memmove(param_1,pvVar2,(ulonglong)*(byte *)(lVar1 + 0x68) * 8);
      pvVar2 = (void *)((longlong)param_1 + (ulonglong)*(byte *)(lVar1 + 0x68) * 8);
      memset(pvVar2,0,(longlong)param_1 + (uVar5 * 8 - (longlong)pvVar2) & 0xfffffffffffffff8);
      *(void **)(lVar1 + 0x70) = param_1;
      uVar6 = 0x40;
      if (uVar5 < 0x40) {
        uVar6 = (undefined1)uVar5;
      }
      *(undefined1 *)(lVar1 + 0x68) = uVar6;
    }
  }
  return;
}

// SizeAtCapacity @ 14f92fa70

/* private: bool __cdecl google::protobuf::internal::RepeatedPtrFieldBase::SizeAtCapacity(void)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::SizeAtCapacity(RepeatedPtrFieldBase *this)

{
  return this->capacity_proxy_ + 1 <= this->current_size_;
}

// allocated_size @ 14f92fa90

/* private: int __cdecl google::protobuf::internal::RepeatedPtrFieldBase::allocated_size(void)const
   __ptr64 */

int __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::allocated_size(RepeatedPtrFieldBase *this)

{
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return (int)(this->tagged_rep_or_elem_ != (void *)0x0);
  }
  return *(int *)((longlong)this->tagged_rep_or_elem_ + -1);
}

// elements @ 14f92fab0

/* private: void * __ptr64 * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::elements(void) __ptr64 */

void ** __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::elements(RepeatedPtrFieldBase *this)

{
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return &this->tagged_rep_or_elem_;
  }
  return (void **)((longlong)this->tagged_rep_or_elem_ + 7);
}

// elements @ 14f92fad0

/* private: void * __ptr64 const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::elements(void)const __ptr64 */

void ** __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::elements(RepeatedPtrFieldBase *this)

{
  if ((~*(byte *)&this->tagged_rep_or_elem_ & 1) != 0) {
    return &this->tagged_rep_or_elem_;
  }
  return (void **)((longlong)this->tagged_rep_or_elem_ + 7);
}

// rep @ 14f92faf0

/* private: struct google::protobuf::internal::RepeatedPtrFieldBase::Rep * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::rep(void) __ptr64 */

Rep * __thiscall google::protobuf::internal::RepeatedPtrFieldBase::rep(RepeatedPtrFieldBase *this)

{
  return (Rep *)((longlong)this->tagged_rep_or_elem_ + -1);
}

// rep @ 14f92fb00

/* private: struct google::protobuf::internal::RepeatedPtrFieldBase::Rep const * __ptr64 __cdecl
   google::protobuf::internal::RepeatedPtrFieldBase::rep(void)const __ptr64 */

Rep * __thiscall google::protobuf::internal::RepeatedPtrFieldBase::rep(RepeatedPtrFieldBase *this)

{
  return (Rep *)((longlong)this->tagged_rep_or_elem_ + -1);
}

// using_sso @ 14f92fb10

/* private: bool __cdecl google::protobuf::internal::RepeatedPtrFieldBase::using_sso(void)const
   __ptr64 */

bool __thiscall
google::protobuf::internal::RepeatedPtrFieldBase::using_sso(RepeatedPtrFieldBase *this)

{
  return (bool)(~*(byte *)&this->tagged_rep_or_elem_ & 1);
}

// FUN_150295b80 @ 150295b80

void FUN_150295b80(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

// FUN_150295bb0 @ 150295bb0

void FUN_150295bb0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x80),0x20);
  return;
}

// FUN_150295be0 @ 150295be0

void FUN_150295be0(undefined8 param_1,longlong param_2)

{
  operator_delete(*(void **)(param_2 + 0x30),0x20);
  return;
}

