// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 5

// operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_> @ 1501c9a70

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::operator()<enum
   absl::lts_20240722::LogSeverity,char const * __ptr64 const & __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >(enum
   absl::lts_20240722::LogSeverity && __ptr64,char const * __ptr64 const & __ptr64,int &&
   __ptr64,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   && __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::
operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
          (AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
           *this,LogSeverity *param_1,char **param_2,int *param_3,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001501c9a96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1,*param_2,*param_3,param_4);
  return;
}

// Decrement @ 1501c9aa0

/* public: bool __cdecl absl::lts_20240722::cord_internal::RefcountAndFlags::Decrement(void) __ptr64
    */

bool __thiscall
absl::lts_20240722::cord_internal::RefcountAndFlags::Decrement(RefcountAndFlags *this)

{
  atomic<int> aVar1;
  
  if (this->count_ != (atomic<int>)0x2) {
    LOCK();
    aVar1 = this->count_;
    this->count_ = (atomic<int>)((int)this->count_ + -2);
    UNLOCK();
    if (aVar1 != (atomic<int>)0x2) {
      return true;
    }
  }
  return false;
}

// Delete @ 1501c9ad0

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRepExternal::Delete(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordRepExternal::Delete(CordRep *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001501c9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&param_1[1].refcount)();
  return;
}

// Destroy @ 1501c9ae0

/* public: static void __cdecl absl::lts_20240722::cord_internal::CordRep::Destroy(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::CordRep::Destroy(CordRep *param_1)

{
  RefcountAndFlags *pRVar1;
  atomic<int> aVar2;
  uchar uVar3;
  byte bVar4;
  CordRepBtree *pCVar5;
  
  uVar3 = param_1->tag;
  while( true ) {
    if (uVar3 == '\x03') {
      CordRepBtree::Destroy((CordRepBtree *)param_1);
      return;
    }
    bVar4 = *(byte *)((longlong)&((CordRepBtree *)param_1)->_padding_ + 4);
    if (bVar4 == 5) {
                    /* WARNING: Could not recover jumptable at 0x0001501c9bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((CordRepBtree *)param_1)->edges_[1])(param_1);
      return;
    }
    if (bVar4 != 1) break;
    pCVar5 = (CordRepBtree *)((CordRepBtree *)param_1)->edges_[1];
    ::operator_delete(param_1,0x20);
    if (((RefcountAndFlags *)&pCVar5->_padding_)->count_ != (atomic<int>)0x2) {
      LOCK();
      pRVar1 = (RefcountAndFlags *)&pCVar5->_padding_;
      aVar2 = pRVar1->count_;
      pRVar1->count_ = (atomic<int>)((int)pRVar1->count_ + -2);
      UNLOCK();
      if (aVar2 != (atomic<int>)0x2) {
        return;
      }
    }
    uVar3 = *(uchar *)((RefcountAndFlags *)&pCVar5->_padding_ + 1);
    param_1 = (CordRep *)pCVar5;
  }
  if (bVar4 == 2) {
    CordRepCrc::Destroy((CordRepCrc *)param_1);
    return;
  }
  if (0x42 < bVar4) {
    if (0xba < bVar4) {
      ::operator_delete(param_1,(longlong)(int)((bVar4 - 0xb8) * 0x1000));
      return;
    }
    ::operator_delete(param_1,(longlong)(int)((bVar4 - 0x3a) * 0x40));
    return;
  }
  ::operator_delete(param_1,(longlong)(int)((uint)bVar4 * 8 + -0x10));
  return;
}

// LogFatalNodeType @ 1501c9bc0

/* void __cdecl absl::lts_20240722::cord_internal::LogFatalNodeType(struct
   absl::lts_20240722::cord_internal::CordRep * __ptr64) */

void __cdecl absl::lts_20240722::cord_internal::LogFatalNodeType(CordRep *param_1)

{
  code *pcVar1;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar2;
  int local_98 [2];
  char *local_90;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_88;
  AlphaNum local_68;
  AlphaNum local_38;
  
  local_90 = 
  "D:\\fn\\main\\Engine\\Source\\ThirdParty\\abseil\\20240722.0\\src\\absl\\strings\\internal\\cord_internal.cc"
  ;
  AlphaNum::AlphaNum(&local_68,(uint)param_1->tag);
  AlphaNum::AlphaNum(&local_38,"Unexpected node type: ");
  pbVar2 = StrCat(&local_88,&local_38,&local_68);
  local_98[0] = 0x24;
  local_98[1] = 3;
  base_internal::
  AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
  ::
  operator()<absl::lts_20240722::LogSeverity,char_const*___ptr64_const&___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
            (&raw_log_internal::internal_log_function,(LogSeverity *)(local_98 + 1),&local_90,
             local_98,pbVar2);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  ~basic_string<char,std::char_traits<char>,std::allocator<char>_>(&local_88);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

