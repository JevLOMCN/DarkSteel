// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 17

// OnToggle @ 14145c950

bool __thiscall UE::Trace::FChannel::OnToggle(FChannel *this,bool param_1,wchar_t **param_2)

{
  return true;
}

// OnToggled @ 14145c960

void __thiscall UE::Trace::FChannel::OnToggled(FChannel *this,bool param_1)

{
  return;
}

// ~Iter @ 14145d7c0

void __thiscall UE::Trace::FChannel::Iter::~Iter(Iter *this)

{
  void *pvVar1;
  FChannel *pFVar2;
  bool bVar3;
  
  pvVar1 = this->Inner[2];
  if (pvVar1 != (void *)0x0) {
    do {
      pFVar2 = GHeadChannel;
      *(FChannel **)((longlong)pvVar1 + 8) = GHeadChannel;
      LOCK();
      bVar3 = pFVar2 != GHeadChannel;
      pFVar2 = this->Inner[1];
      if (bVar3) {
        pFVar2 = GHeadChannel;
      }
      GHeadChannel = pFVar2;
      UNLOCK();
    } while (bVar3);
  }
  return;
}

// Announce @ 14145d800

void __thiscall UE::Trace::FChannel::Announce(FChannel *this)

{
  char *_Str;
  uchar *puVar1;
  uint uVar2;
  longlong lVar4;
  FImportantLogScope local_18;
  size_t sVar3;
  
  if (-1 < TraceLogChannel->Enabled) {
    Trace::Private::FImportantLogScope::Enter<UE::Trace::FTraceChannelAnnounceFields>
              (&local_18,(this->Name).Len);
    puVar1 = local_18.Ptr;
    *(uint *)local_18.Ptr = (this->Name).Hash;
    *(byte *)((longlong)local_18.Ptr + 4) = (byte)((uint)this->Enabled >> 0x1f) ^ 1;
    *(bool *)((longlong)local_18.Ptr + 5) = (this->Args).bReadOnly;
    uVar2 = (this->Name).Len;
    _Str = (this->Name).Ptr;
    if ((int)uVar2 < 0) {
      sVar3 = strlen(_Str);
      uVar2 = (uint)sVar3;
    }
    lVar4 = (longlong)local_18.AuxCursor;
    *(uint *)(lVar4 + (longlong)puVar1) = uVar2 << 0xd | 0x300;
    *(undefined1 *)(lVar4 + (longlong)puVar1) = 1;
    memcpy((void *)(lVar4 + 4 + (longlong)puVar1),_Str,(longlong)(int)uVar2);
    *(undefined1 *)((longlong)(int)(local_18.AuxCursor + uVar2) + 4 + (longlong)puVar1) = 3;
    LOCK();
    *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) =
         *(int *)((longlong)local_18.BufferOffset + (longlong)local_18.Ptr) + 1;
    UNLOCK();
  }
  return;
}

// EnumerateChannels @ 14145e0a0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Trace::FChannel::EnumerateChannels
          (_func___cdecl_bool_FChannelInfo_ptr_void_ptr *param_1,void *param_2)

{
  FChannel *pFVar1;
  bool bVar2;
  FChannel **ppFVar3;
  FChannel *local_38;
  FChannel *local_30;
  FChannelInfo local_28;
  
  ppFVar3 = &local_38;
  local_38 = GNewChannelList;
  local_30 = GHeadChannel;
  do {
    for (pFVar1 = *ppFVar3; pFVar1 != (FChannel *)0x0; pFVar1 = pFVar1->Next) {
      local_28.Name = (pFVar1->Name).Ptr;
      local_28.Desc = (pFVar1->Args).Desc;
      local_28.bIsEnabled = (bool)((byte)((uint)pFVar1->Enabled >> 0x1f) ^ 1);
      local_28.bIsReadOnly = (pFVar1->Args).bReadOnly;
      local_28.Id = (pFVar1->Name).Hash;
      bVar2 = (*param_1)(&local_28,param_2);
      if (!bVar2) {
        return;
      }
    }
    ppFVar3 = ppFVar3 + 1;
  } while ((FChannelInfo *)ppFVar3 != &local_28);
  return;
}

// FindChannel @ 14145e480

FChannel * __cdecl UE::Trace::FChannel::FindChannel(uint param_1)

{
  FChannel *pFVar1;
  longlong *plVar2;
  longlong local_18;
  FChannel *local_10;
  longlong local_8;
  
  plVar2 = &local_18;
  local_10 = GHeadChannel;
  pFVar1 = GNewChannelList;
  while( true ) {
    for (; pFVar1 != (FChannel *)0x0; pFVar1 = pFVar1->Next) {
      if ((pFVar1->Name).Hash == param_1) {
        return pFVar1;
      }
    }
    plVar2 = plVar2 + 1;
    if (plVar2 == &local_8) break;
    pFVar1 = (FChannel *)*plVar2;
  }
  return (FChannel *)0x0;
}

// FindChannel @ 14145e4e0

FChannel * __cdecl UE::Trace::FChannel::FindChannel(char *param_1)

{
  char cVar1;
  FChannel *pFVar2;
  int iVar3;
  size_t sVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_18;
  FChannel *local_10;
  
  sVar4 = strlen(param_1);
  uVar8 = sVar4 & 0xffffffff;
  if ((7 < uVar8) && (iVar3 = strcmp(param_1 + (uVar8 - 7),"Channel"), iVar3 == 0)) {
    uVar8 = uVar8 - 7;
  }
  iVar3 = (int)uVar8;
  if (0 < iVar3) {
    uVar8 = uVar8 & 0xffffffff;
    if ((byte)(param_1[(longlong)iVar3 + -1] | 0x20U) == 0x73) {
      uVar8 = (ulonglong)(iVar3 - 1);
    }
  }
  uVar6 = 0x811c9dc5;
  uVar7 = (uint)uVar8;
  while (uVar7 != 0) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar6 = (((int)cVar1 | 0x20U) ^ uVar6) * 0x1000193;
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
  }
  local_10 = GHeadChannel;
  plVar5 = &local_18;
  pFVar2 = GNewChannelList;
  while( true ) {
    for (; pFVar2 != (FChannel *)0x0; pFVar2 = pFVar2->Next) {
      if ((pFVar2->Name).Hash == uVar6) {
        return pFVar2;
      }
    }
    plVar5 = plVar5 + 1;
    if (plVar5 == (longlong *)&stack0xfffffffffffffff8) break;
    pFVar2 = (FChannel *)*plVar5;
  }
  return (FChannel *)0x0;
}

// GetNext @ 14145e820

FChannel * __thiscall UE::Trace::FChannel::Iter::GetNext(Iter *this)

{
  FChannel *pFVar1;
  FChannel *pFVar2;
  
  pFVar1 = this->Inner[0];
  if (pFVar1 != (FChannel *)0x0) {
    pFVar2 = pFVar1->Next;
    this->Inner[0] = pFVar2;
    if (pFVar2 != (FChannel *)0x0) {
      this->Inner[2] = pFVar2;
    }
  }
  return pFVar1;
}

// Initialize @ 14145f2e0

void __cdecl UE::Trace::FChannel::Initialize(void)

{
  ToggleAllInternal(false,false);
  GChannelsInitialized = true;
  return;
}

// PanicDisableAll @ 14146a210

void __cdecl UE::Trace::FChannel::PanicDisableAll(void)

{
  longlong lVar1;
  FChannel **ppFVar2;
  FChannel *local_18;
  FChannel *local_10;
  longlong local_8;
  
  ppFVar2 = &local_18;
  local_18 = GNewChannelList;
  local_10 = GHeadChannel;
  do {
    for (lVar1 = (longlong)*ppFVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
    }
    ppFVar2 = ppFVar2 + 1;
  } while (ppFVar2 != (FChannel **)&local_8);
  return;
}

// ReadNew @ 14146a2a0

/* WARNING: Removing unreachable block (ram,0x00014146a2c3) */
/* WARNING: Removing unreachable block (ram,0x00014146a2d0) */

Iter * __cdecl UE::Trace::FChannel::ReadNew(Iter *__return_storage_ptr__)

{
  FChannel *pFVar1;
  
  pFVar1 = GNewChannelList;
  if (GNewChannelList != (FChannel *)0x0) {
    LOCK();
    GNewChannelList = (FChannel *)0x0;
    UNLOCK();
    __return_storage_ptr__->Inner[0] = pFVar1;
    __return_storage_ptr__->Inner[1] = pFVar1;
    __return_storage_ptr__->Inner[2] = pFVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Inner[0] = (void *)0x0;
  __return_storage_ptr__->Inner[1] = (void *)0x0;
  __return_storage_ptr__->Inner[2] = (void *)0x0;
  return __return_storage_ptr__;
}

// Setup @ 14146a540

void __thiscall UE::Trace::FChannel::Setup(FChannel *this,char *param_1,InitArgs *param_2)

{
  char cVar1;
  undefined7 uVar2;
  FChannel *pFVar3;
  int iVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  
  (this->Name).Ptr = param_1;
  sVar5 = strlen(param_1);
  uVar8 = sVar5 & 0xffffffff;
  if ((7 < uVar8) && (iVar4 = strcmp(param_1 + (uVar8 - 7),"Channel"), iVar4 == 0)) {
    uVar8 = uVar8 - 7;
  }
  uVar6 = (uint)uVar8;
  (this->Name).Len = uVar6;
  if (0 < (int)uVar6) {
    uVar8 = uVar8 & 0xffffffff;
    if ((byte)(param_1[(longlong)(int)uVar6 + -1] | 0x20U) == 0x73) {
      uVar8 = (ulonglong)(uVar6 - 1);
    }
  }
  uVar6 = 0x811c9dc5;
  uVar7 = (uint)uVar8;
  while (uVar7 != 0) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar6 = (((int)cVar1 | 0x20U) ^ uVar6) * 0x1000193;
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
  }
  (this->Name).Hash = uVar6;
  bVar9 = param_2->bReadOnly;
  uVar2 = *(undefined7 *)&param_2->field_0x9;
  (this->Args).Desc = param_2->Desc;
  (this->Args).bReadOnly = bVar9;
  *(undefined7 *)&(this->Args).field_0x9 = uVar2;
  do {
    pFVar3 = GNewChannelList;
    this->Next = GNewChannelList;
    LOCK();
    bVar9 = pFVar3 != GNewChannelList;
    pFVar3 = this;
    if (bVar9) {
      pFVar3 = GNewChannelList;
    }
    GNewChannelList = pFVar3;
    UNLOCK();
  } while (bVar9);
  if (GChannelsInitialized != false) {
    this->Enabled = -1;
  }
  return;
}

// Toggle @ 14146aef0

bool __thiscall UE::Trace::FChannel::Toggle(FChannel *this,bool param_1,wchar_t **param_2)

{
  bool bVar1;
  
  bVar1 = ToggleInternal(this,param_1,true,param_2);
  return bVar1;
}

// Toggle @ 14146af10

bool __cdecl UE::Trace::FChannel::Toggle(char *param_1,bool param_2)

{
  bool bVar1;
  FChannel *this;
  
  this = FindChannel(param_1);
  if (this != (FChannel *)0x0) {
    bVar1 = ToggleInternal(this,param_2,true,(wchar_t **)0x0);
    return bVar1;
  }
  return false;
}

// ToggleAll @ 14146af50

void __cdecl UE::Trace::FChannel::ToggleAll(bool param_1)

{
  ToggleAllInternal(param_1,true);
  return;
}

// ToggleAllInternal @ 14146af60

void __cdecl UE::Trace::FChannel::ToggleAllInternal(bool param_1,bool param_2)

{
  FChannel *pFVar1;
  double dVar2;
  unkuint9 Var3;
  double dVar4;
  void *pvVar5;
  char cVar6;
  FChannel **ppFVar7;
  ulonglong uVar8;
  bool bVar9;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  FImportantLogScope local_90;
  FChannel *local_80;
  FChannel *local_78;
  FChannel *local_70 [7];
  
  pvVar5 = ThreadLocalStoragePointer;
  dVar4 = __real_3ff0000000000000;
  ppFVar7 = &local_80;
  uVar8 = (ulonglong)_tls_index;
  local_80 = GNewChannelList;
  local_78 = GHeadChannel;
  do {
    for (pFVar1 = *ppFVar7; pFVar1 != (FChannel *)0x0; pFVar1 = pFVar1->Next) {
      QueryPerformanceFrequency(&local_res20);
      QueryPerformanceCounter(&local_a8);
      dVar2 = (double)(ulonglong)local_res20.QuadPart;
      Var3 = (unkuint9)(ulonglong)local_a8.QuadPart;
      do {
        LOCK();
        bVar9 = pFVar1->Lock == '\0';
        if (bVar9) {
          pFVar1->Lock = '\x01';
        }
        UNLOCK();
        if (bVar9) break;
        Sleep(0);
        QueryPerformanceCounter(&local_a0);
      } while ((double)(ulonglong)local_a0.QuadPart / dVar2 - (double)(unkint9)Var3 / dVar2 <= dVar4
              );
      QueryPerformanceCounter(&local_98);
      if (((double)(ulonglong)local_98.QuadPart / dVar2 - (double)(unkint9)Var3 / dVar2 <= dVar4) &&
         ((!param_2 || (cVar6 = (**(code **)pFVar1->_padding_)(pFVar1,param_1,0), cVar6 != '\0'))))
      {
        pFVar1->Enabled = (uint)param_1 * 2 + -1;
        if (-1 < TraceLogChannel->Enabled) {
          if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar8 * 8) + 0x9d4c) <
               `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
            ::__l2::Uid = FTraceChannelToggleFields::Initialize();
            _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          Trace::Private::FImportantLogScope::EnterImpl
                    (&local_90,
                     `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                     ::__l2::Uid >> 1,5);
          *(uint *)local_90.Ptr = (pFVar1->Name).Hash;
          *(byte *)((longlong)local_90.Ptr + 4) = (byte)((uint)pFVar1->Enabled >> 0x1f) ^ 1;
          LOCK();
          *(int *)((longlong)local_90.Ptr + (longlong)local_90.BufferOffset) =
               *(int *)((longlong)local_90.Ptr + (longlong)local_90.BufferOffset) + 1;
          UNLOCK();
        }
        (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1);
      }
      LOCK();
      pFVar1->Lock = '\0';
      UNLOCK();
    }
    ppFVar7 = ppFVar7 + 1;
    if (ppFVar7 == local_70) {
      return;
    }
  } while( true );
}

// ToggleInternal @ 14146b350

bool __thiscall
UE::Trace::FChannel::ToggleInternal(FChannel *this,bool param_1,bool param_2,wchar_t **param_3)

{
  double dVar1;
  unkuint9 Var2;
  double dVar3;
  char cVar4;
  bool bVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_58;
  int local_50;
  
  QueryPerformanceFrequency(&local_res8);
  QueryPerformanceCounter(&local_58);
  dVar3 = __real_3ff0000000000000;
  dVar1 = (double)(ulonglong)local_res8.QuadPart;
  Var2 = (unkuint9)(ulonglong)local_58.QuadPart;
  do {
    LOCK();
    bVar5 = this->Lock == '\0';
    if (bVar5) {
      this->Lock = '\x01';
    }
    UNLOCK();
    if (bVar5) break;
    Sleep(0);
    QueryPerformanceCounter(&local_58);
  } while ((double)(ulonglong)local_58.QuadPart / dVar1 - (double)(unkint9)Var2 / dVar1 <= dVar3);
  QueryPerformanceCounter(&local_res8);
  if ((double)(ulonglong)local_res8.QuadPart / dVar1 - (double)(unkint9)Var2 / dVar1 <= dVar3) {
    if ((!param_2) || (cVar4 = (**(code **)this->_padding_)(this,param_1,param_3), cVar4 != '\0')) {
      this->Enabled = (uint)param_1 * 2 + -1;
      if (-1 < TraceLogChannel->Enabled) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'::
          __l2::Uid = FTraceChannelToggleFields::Initialize();
          _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        Trace::Private::FImportantLogScope::EnterImpl
                  ((FImportantLogScope *)&local_58.s,
                   `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                   ::__l2::Uid >> 1,5);
        *(uint *)local_58 = (this->Name).Hash;
        *(byte *)(local_58.QuadPart + 4) = (byte)((uint)this->Enabled >> 0x1f) ^ 1;
        LOCK();
        *(int *)(local_50 + local_58.QuadPart) = *(int *)(local_50 + local_58.QuadPart) + 1;
        UNLOCK();
      }
      (**(code **)(this->_padding_ + 8))(this,param_1);
    }
  }
  else if (param_3 != (wchar_t **)0x0) {
    *param_3 = TimedOutError;
  }
  LOCK();
  this->Lock = '\0';
  UNLOCK();
  return (bool)((byte)((uint)this->Enabled >> 0x1f) ^ 1);
}

