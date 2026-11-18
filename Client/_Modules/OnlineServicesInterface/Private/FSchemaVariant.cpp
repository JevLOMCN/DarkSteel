// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 15

// FSchemaVariant @ 14ec22d70

FSchemaVariant * __thiscall
UE::Online::FSchemaVariant::FSchemaVariant(FSchemaVariant *this,FSchemaVariant *param_1)

{
  (this->VariantData)._padding_ = 0;
  (this->VariantData)._padding_ = 0;
  (this->VariantData).TypeIndex = '\0';
  this->VariantType = None;
  TVariant<FString,__int64,double,bool>::operator=(&this->VariantData,&param_1->VariantData);
  this->VariantType = param_1->VariantType;
  param_1->VariantType = None;
  return this;
}

// ~FSchemaVariant @ 14ec242f0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */

void __thiscall UE::Online::FSchemaVariant::~FSchemaVariant(FSchemaVariant *this)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  void *pvVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  FLowLevelMemTracker *this_00;
  byte *pbVar11;
  undefined2 uVar12;
  char *in_RDX;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar14;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar13;
  
  bVar3 = (this->VariantData).TypeIndex;
  if (3 < (ulonglong)bVar3) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar11 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3];
  cVar13 = (char)((ulonglong)in_RDX >> 8);
  uVar12 = SUB82(in_RDX,0);
  cVar9 = (char)((ulonglong)pbVar11 >> 8);
  bVar8 = (byte)pbVar11;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    pvVar4 = (void *)(this->VariantData)._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    if (pvVar4 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
    }
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar12);
    pcVar1 = (char *)((longlong)pbVar11 * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar13;
    *(char *)&(this->VariantData)._padding_ =
         (char)(this->VariantData)._padding_ + (char)((ulonglong)this >> 8);
    out(unaff_RSI[1],uVar12);
    *unaff_RBP = *unaff_RBP + cVar9;
    *pbVar11 = *pbVar11 & bVar8;
    *pbVar11 = *pbVar11 + cVar9;
    *unaff_RBX = *unaff_RBX + cVar9;
    *unaff_RDI = *unaff_RDI + cVar9;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)pbVar11 * 2);
    *pcVar1 = *pcVar1 + cVar9;
    pcVar1 = (char *)((longlong)pbVar11 * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar9;
    *in_RDX = *in_RDX + cVar13;
    uVar10 = *(int *)pbVar11 * 0x67006e;
    *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 & (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar12);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar12);
    cVar9 = in(uVar12);
    *unaff_RDI = cVar9;
    *pbVar11 = *pbVar11 + bVar8;
    *pbVar11 = *pbVar11 + bVar8;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar3) {
    cVar9 = in(uVar12);
    *unaff_RDI = cVar9;
    out(*unaff_RSI,uVar12);
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar14 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar12);
  lVar5 = (longlong)*(int *)(longlong)((int)puVar14 + 0x65) * 0x756f535c;
  if ((int)lVar5 != lVar5) {
    *in_RDX = *in_RDX + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(*unaff_retaddr + -8) = in_RDX;
  if ((byte)unaff_RBX == bVar3) {
    pbVar11 = (byte *)0x0;
  }
  else {
    *pbVar11 = *pbVar11 + bVar8;
  }
  cVar9 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar9;
  *pbVar11 = *pbVar11 + cVar9;
  pcVar1 = unaff_RBX + 0x6f;
  *pcVar1 = *pcVar1 + cVar9;
  if (*pcVar1 == '\0') {
    cVar9 = in(uVar12);
    *unaff_RDI = cVar9;
    unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
    cVar9 = in(uVar12);
    unaff_RDI[1] = cVar9;
    cVar9 = in(uVar12);
    unaff_RDI[2] = cVar9;
    out(*puVar14,uVar12);
    puVar14 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar12);
  }
  out(*(undefined1 *)puVar14,uVar12);
  *(char *)((longlong)puVar14 + 1) = *(char *)((longlong)puVar14 + 1) + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// operator= @ 14ec244b0

FSchemaVariant * __thiscall
UE::Online::FSchemaVariant::operator=(FSchemaVariant *this,FSchemaVariant *param_1)

{
  TVariant<FString,__int64,double,bool>::operator=(&this->VariantData,&param_1->VariantData);
  this->VariantType = param_1->VariantType;
  param_1->VariantType = None;
  return this;
}

// operator== @ 14ec244f0

bool __thiscall UE::Online::FSchemaVariant::operator==(FSchemaVariant *this,FSchemaVariant *param_1)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  long64 *plVar10;
  FString *pFVar11;
  FString *pFVar12;
  
  if ((this->VariantData).TypeIndex != (param_1->VariantData).TypeIndex) {
    return false;
  }
  if ((this->VariantType != param_1->VariantType) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("VariantType == Other.VariantType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                         ,0x17b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  uVar1 = (this->VariantData).TypeIndex;
  if (uVar1 == '\0') {
    pFVar11 = TVariant<FString,__int64,double,bool>::Get<FString>(&param_1->VariantData);
    pFVar12 = TVariant<FString,__int64,double,bool>::Get<FString>(&this->VariantData);
    iVar7 = (pFVar11->Data).ArrayNum;
    iVar2 = (pFVar12->Data).ArrayNum;
    if (iVar2 != iVar7) {
      return iVar7 + iVar2 == 1;
    }
    if (1 < iVar2) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                         (wchar_t *)(pFVar11->Data).AllocatorInstance.Data);
      return iVar7 == 0;
    }
  }
  else {
    if (uVar1 == '\x01') {
      plVar10 = TVariant<FString,__int64,double,bool>::Get<__int64>(&this->VariantData);
      lVar4 = *plVar10;
      plVar10 = TVariant<FString,__int64,double,bool>::Get<__int64>(&param_1->VariantData);
      return lVar4 == *plVar10;
    }
    if (uVar1 != '\x02') {
      if ((uVar1 != '\x03') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                             ,0x183,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((this->VariantData).TypeIndex != '\x03') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      lVar4 = (this->VariantData)._padding_;
      if (((param_1->VariantData).TypeIndex != '\x03') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      return (char)lVar4 == (char)(param_1->VariantData)._padding_;
    }
    pdVar8 = TVariant<FString,__int64,double,bool>::Get<double>(&this->VariantData);
    pdVar9 = TVariant<FString,__int64,double,bool>::Get<double>(&param_1->VariantData);
    if (*pdVar9 != *pdVar8) {
      return false;
    }
  }
  return true;
}

// GetBoolean @ 14ec28e80

bool __thiscall UE::Online::FSchemaVariant::GetBoolean(FSchemaVariant *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->VariantType == Bool) {
    if ((this->VariantData).TypeIndex != '\x03') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)(char)(this->VariantData)._padding_;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8840320508068102468>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                     ,0x144,"VariantType == ESchemaAttributeType::Bool");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetDouble @ 14ec29210

double __thiscall UE::Online::FSchemaVariant::GetDouble(FSchemaVariant *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (this->VariantType == Double) {
    if ((this->VariantData).TypeIndex != '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar3 = (double)(*pcVar1)();
        return dVar3;
      }
    }
    return (double)(this->VariantData)._padding_;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8840320508068102456>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                     ,0x138,"VariantType == ESchemaAttributeType::Double");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return 0.0;
}

// GetInt64 @ 14ec29420

long64 __thiscall UE::Online::FSchemaVariant::GetInt64(FSchemaVariant *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if (this->VariantType == Int64) {
    if ((this->VariantData).TypeIndex != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
    }
    return (this->VariantData)._padding_;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8840320508068102444>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                     ,300,"VariantType == ESchemaAttributeType::Int64");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return 0;
}

// GetString @ 14ec29880

FString * __thiscall UE::Online::FSchemaVariant::GetString(FSchemaVariant *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->VariantType == String) {
    if ((this->VariantData).TypeIndex != '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    return (FString *)this;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8840320508068102480>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                     ,0x150,"VariantType == ESchemaAttributeType::String");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Online::FSchemaVariant::GetString'::__l7::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyString;
}

// Set @ 14ec37ba0

void __thiscall UE::Online::FSchemaVariant::Set(FSchemaVariant *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->VariantData).TypeIndex;
  if (3 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])();
  (this->VariantData)._padding_ = 0;
  (this->VariantData)._padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&(this->VariantData)._padding_ = (param_1->Data).ArrayNum;
  *(int *)((longlong)&(this->VariantData)._padding_ + 4) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->VariantData).TypeIndex = '\0';
  this->VariantType = String;
  return;
}

// Set @ 14ec37c30

void __thiscall UE::Online::FSchemaVariant::Set(FSchemaVariant *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->VariantData).TypeIndex;
  if (3 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(this);
  ::FString::FString((FString *)this,param_1);
  (this->VariantData).TypeIndex = '\0';
  this->VariantType = String;
  return;
}

// Set @ 14ec37cb0

void __thiscall UE::Online::FSchemaVariant::Set(FSchemaVariant *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->VariantData).TypeIndex;
  if (3 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(this);
  (this->VariantData)._padding_ = (longlong)param_1;
  (this->VariantData).TypeIndex = '\x02';
  this->VariantType = Double;
  return;
}

// Set @ 14ec37d30

void __thiscall UE::Online::FSchemaVariant::Set(FSchemaVariant *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->VariantData).TypeIndex;
  if (3 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(this);
  ::FString::FString((FString *)this,param_1);
  (this->VariantData).TypeIndex = '\0';
  this->VariantType = String;
  return;
}

// Set @ 14ec37db0

void __thiscall UE::Online::FSchemaVariant::Set(FSchemaVariant *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->VariantData).TypeIndex;
  if (3 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(this);
  (this->VariantData)._padding_ = param_1;
  (this->VariantData).TypeIndex = '\x01';
  this->VariantType = Int64;
  return;
}

// Set @ 14ec37e30

void __thiscall UE::Online::FSchemaVariant::Set(FSchemaVariant *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->VariantData).TypeIndex;
  if (3 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(this);
  *(bool *)&(this->VariantData)._padding_ = param_1;
  (this->VariantData).TypeIndex = '\x03';
  this->VariantType = Bool;
  return;
}

// ToLogString @ 14ec382e0

FString * __thiscall
UE::Online::FSchemaVariant::ToLogString(FSchemaVariant *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  FString *pFVar6;
  bool *pbVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  undefined1 local_58 [16];
  FString local_48;
  FString local_38;
  FString local_28;
  
  uVar9 = (ulonglong)(this->VariantData).TypeIndex;
  local_58._0_8_ = (FScriptContainerElement *)0x0;
  local_58._8_8_ = 0;
  if ((3 < uVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar4)();
    return pFVar6;
  }
  bVar1 = (this->VariantData).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<__int64,FString,__int64,double,bool>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9 + 4) == '\0') {
    if ((3 < (ulonglong)bVar1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    bVar2 = (this->VariantData).TypeIndex;
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<__int64,FString,__int64,double,bool>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
      if ((3 < (ulonglong)bVar2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,FString,__int64,double,bool>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + (ulonglong)bVar2 + 4) == '\0') {
        uVar9 = (ulonglong)(this->VariantData).TypeIndex;
        if ((3 < uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar4)();
          return pFVar6;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<double,FString,__int64,double,bool>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar9) == '\0') goto LAB_14ec3857b;
        TVariant<FString,__int64,double,bool>::Get<double>(&this->VariantData);
        ::FString::PrintfImpl(&local_28,L"%.3f");
        if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_58._0_8_);
        }
        local_58._0_8_ = local_28.Data.AllocatorInstance.Data;
        local_48.Data.ArrayMax = local_28.Data.ArrayMax;
        local_48.Data.ArrayNum = local_28.Data.ArrayNum;
      }
      else {
        pbVar7 = TVariant<FString,__int64,double,bool>::Get<bool>(&this->VariantData);
        pwVar8 = L"true";
        if (*pbVar7 == false) {
          pwVar8 = L"false";
        }
        ::FString::FString(&local_38,pwVar8);
        if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_58._0_8_);
        }
        local_58._0_8_ = local_38.Data.AllocatorInstance.Data;
        local_48.Data.ArrayMax = local_38.Data.ArrayMax;
        local_48.Data.ArrayNum = local_38.Data.ArrayNum;
      }
    }
    else {
      if ((bVar2 != 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar4)();
        return pFVar6;
      }
      ::FString::PrintfImpl(&local_48,L"%lld");
      if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_58._0_8_);
      }
      local_58._0_8_ = local_48.Data.AllocatorInstance.Data;
    }
    local_58._12_4_ = local_48.Data.ArrayMax;
    local_58._8_4_ = local_48.Data.ArrayNum;
  }
  else {
    if ((bVar1 != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar4)();
      return pFVar6;
    }
    if ((FSchemaVariant *)local_58 != this) {
      iVar3 = (int)(this->VariantData)._padding_;
      _Src = (void *)(this->VariantData)._padding_;
      local_58._8_4_ = iVar3;
      if (((iVar3 != 0) || (local_58._12_4_ != 0)) &&
         (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,local_58._12_4_,(ForAnyElementType *)local_58,iVar3,
                     (int *)(local_58 + 0xc)), iVar3 != 0)) {
        memcpy((void *)local_58._0_8_,_Src,(longlong)iVar3 * 2);
      }
    }
  }
LAB_14ec3857b:
  Online::LexToString(this->VariantType);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%s");
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  return __return_storage_ptr__;
}

