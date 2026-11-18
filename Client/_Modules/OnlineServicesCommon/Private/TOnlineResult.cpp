// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 8

// TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> @ 14ee09ce0

TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> * __thiscall
UE::Online::TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
          (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *this,
          FOnlineError *param_1)

{
  FOnlineError *pFVar1;
  
  *(undefined ***)this =
       &
       ___7__TResult_UResult_FLobbyClientDataPrepareClientChanges_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  *(IOnlineErrorDetails **)&this->field_0x8 = (param_1->Details).Object;
  *(TReferenceControllerBase<1> **)&this->field_0x10 =
       (param_1->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (param_1->Inner).Object;
  (param_1->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&this->field_0x18 = pFVar1;
  *(TReferenceControllerBase<1> **)&this->field_0x20 =
       (param_1->Inner).SharedReferenceCount.ReferenceController;
  (param_1->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&this->field_0x28 = param_1->ErrorCode;
  *(undefined ***)this =
       &___7__TOnlineResult_UFLobbyClientDataPrepareClientChanges_Online_UE___Online_UE__6B_;
  this->field_0x160 = 1;
  return this;
}

// TOnlineResult<UE::Online::FQueryPresence> @ 14ee09d40

TOnlineResult<UE::Online::FQueryPresence> * __thiscall
UE::Online::TOnlineResult<UE::Online::FQueryPresence>::TOnlineResult<UE::Online::FQueryPresence>
          (TOnlineResult<UE::Online::FQueryPresence> *this,
          TOnlineResult<UE::Online::FQueryPresence> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TOnlineResult<UE::Online::FQueryPresence> *pTVar4;
  
  *(undefined ***)this =
       &___7__TResult_UResult_FQueryPresence_Online_UE__VFOnlineError_34__Online_UE__6B_;
  bVar1 = param_1->field_0x30;
  this->field_0x30 = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOnlineResult<UE::Online::FQueryPresence> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(&this->field_0x8,&param_1->field_0x8);
  *(undefined ***)this = &___7__TOnlineResult_UFQueryPresence_Online_UE___Online_UE__6B_;
  return this;
}

// TOnlineResult<UE::Online::FUpdatePresence> @ 14ee09de0

TOnlineResult<UE::Online::FUpdatePresence> * __thiscall
UE::Online::TOnlineResult<UE::Online::FUpdatePresence>::TOnlineResult<UE::Online::FUpdatePresence>
          (TOnlineResult<UE::Online::FUpdatePresence> *this,
          TOnlineResult<UE::Online::FUpdatePresence> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TOnlineResult<UE::Online::FUpdatePresence> *pTVar4;
  
  *(undefined ***)this =
       &___7__TResult_UResult_FUpdatePresence_Online_UE__VFOnlineError_34__Online_UE__6B_;
  bVar1 = param_1->field_0x30;
  this->field_0x30 = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOnlineResult<UE::Online::FUpdatePresence> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(&this->field_0x8,&param_1->field_0x8);
  *(undefined ***)this = &___7__TOnlineResult_UFUpdatePresence_Online_UE___Online_UE__6B_;
  return this;
}

// ~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> @ 14ee1c7c0

void __thiscall
UE::Online::TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>
          (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->field_0xa8;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    break;
  default:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 2:
    return;
  }
  *(undefined4 *)&this->field_0xa0 = 0;
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x58);
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  return;
}

// ~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> @ 14ee1c830

void __thiscall
UE::Online::TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>::
~TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>
          (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->field_0x30;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  }
}

// TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> @ 14efe2ed0

TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> * __thiscall
UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>::
TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>
          (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> *this,
          TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> *pTVar4;
  
  *(undefined ***)this =
       &
       ___7__TResult_UResult_FFunctionalTestLogoutUser_Private_Online_UE__VFOnlineError_45__Online_UE__6B_
  ;
  bVar1 = param_1->field_0x30;
  this->field_0x30 = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<UE::Online::Private::FFunctionalTestLogoutUser::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(&this->field_0x8,&param_1->field_0x8);
  *(undefined ***)this =
       &___7__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__6B_;
  return this;
}

// ~TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> @ 14efe5c50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Online::TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>::
~TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges>
          (TOnlineResult<UE::Online::FLobbyClientDataPrepareClientChanges> *this)

{
  byte bVar1;
  undefined1 uVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte bVar18;
  FLowLevelMemTracker *this_00;
  char *pcVar12;
  uint *puVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  undefined1 *puVar19;
  char cVar20;
  undefined2 uVar21;
  char cVar22;
  char *in_RDX;
  byte bVar23;
  char *unaff_RBX;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar27;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar28;
  byte bVar2;
  longlong *plVar17;
  
  puVar19 = &this->field_0x8;
  bVar9 = this->field_0x160;
  if (1 < (ulonglong)bVar9) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar13 = (uint *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FLobbyClientDataPrepareClientChanges::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar9];
  uVar21 = SUB82(in_RDX,0);
  bVar18 = (byte)((ulonglong)puVar13 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar9) {
  case 0:
    *(undefined4 *)&this->field_0x158 = 0;
    if (*(void **)&this->field_0x150 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x150);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->field_0x110);
    *(undefined4 *)&this->field_0x108 = 0;
    if (*(void **)&this->field_0x100 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x100);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->field_0xc0);
    *(undefined4 *)&this->field_0xb8 = 0;
    if (*(void **)&this->field_0xb0 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0xb0);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->field_0x70);
    *(undefined4 *)&this->field_0x68 = 0;
    if (*(void **)&this->field_0x60 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x60);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->field_0x20);
    return;
  default:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 2:
    pvVar4 = *(void **)puVar19;
    if (pvVar4 != (void *)0x0) {
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
    }
    return;
  case 4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 8:
    return;
  case 10:
    DestructItems<TSharedRef<UE::Online::ISession_const_,1>,int>
              (*(TSharedRef<UE::Online::ISession_const_,1> **)puVar19,*(int *)&this->field_0x10);
    if (*(void **)puVar19 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar19);
    return;
  case 0xc:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0xe:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x10:
    return;
  case 0x12:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x14:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x16:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x18:
    return;
  case 0x1a:
    return;
  case 0x1c:
    return;
  case 0x1e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x20:
    DestructItems<TSharedRef<UE::Online::ISessionInvite_const_,1>,int>
              (*(TSharedRef<UE::Online::ISessionInvite_const_,1> **)puVar19,
               *(int *)&this->field_0x10);
    if (*(void **)puVar19 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar19);
    return;
  case 0x22:
    return;
  case 0x24:
    return;
  case 0x26:
    bVar18 = bVar18 & 0x70;
    DAT_1730aa81b = DAT_1730aa81b + bVar18;
    *unaff_RBX = *unaff_RBX + bVar18;
    uVar3 = in(uVar21);
    *unaff_RDI = uVar3;
    *unaff_RBP = *unaff_RBP + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
    break;
  }
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= (byte)unaff_RBX) {
LAB_15309c4c6_3:
    cVar8 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar8;
    pcVar12 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar21);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar19 + (longlong)unaff_RBP * 2 + 0x6f),uVar21);
    cVar8 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar12 = *pcVar12 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar21);
  uVar10 = *(uint *)(unaff_RDI + 0x70);
  puVar19 = (undefined1 *)(ulonglong)uVar10;
  bVar9 = (byte)puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  uVar6 = *puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  if (-1 < (char)(byte)*puVar13) {
    puVar13 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  cVar20 = (char)in_RDX;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1((byte)uVar6,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  pbVar16 = puVar19 + -6;
  bVar23 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  pbVar16 = puVar19 + -6;
  bVar23 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  *in_RDX = *in_RDX + bVar18;
  *(char *)in_R9 = (char)*in_R9 + -8;
  uVar6 = *puVar13;
  puVar13 = (uint *)(ulonglong)uVar6;
  cVar22 = (char)((ulonglong)in_RDX >> 8);
  *in_RDX = *in_RDX + cVar22;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar21);
  *in_RDX = *in_RDX + cVar22;
  *(char *)puVar13 = (char)*puVar13 + (char)uVar6;
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  piVar15 = (int *)(ulonglong)*puVar13;
  bVar23 = (byte)((ulonglong)unaff_RBX >> 8);
  *(byte *)piVar15 = (char)*piVar15 + bVar23;
  iVar11 = *piVar15;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar11 * 0x790072) >> 8);
  uVar6 = *(uint *)(ulonglong)(uint)(iVar11 * 0x790072);
  puVar13 = (uint *)(ulonglong)uVar6;
  pcVar12 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar21);
  *pcVar12 = *pcVar12 + (char)(uVar10 >> 8);
  unaff_RBX[in_FS_OFFSET] = unaff_RBX[in_FS_OFFSET] + cVar22;
  cVar8 = (char)uVar6;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)in_R9 = (char)*in_R9 + -0x20;
  piVar15 = (int *)(ulonglong)*puVar13;
  *(byte *)piVar15 = (char)*piVar15 + bVar23;
  uVar10 = *(int *)(ulonglong)(uint)(*piVar15 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x49] = pbVar14[0x49] + (char)(uVar10 >> 8);
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  cVar8 = (char)(uVar10 >> 8);
  pbVar14[0x14ee549] = pbVar14[0x14ee549] + cVar8;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x14ef312] = pbVar14[0x14ef312] + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = (byte *)(unaff_RBX + 0x3a);
  bVar7 = CARRY1(*pbVar16,bVar18);
  *pbVar16 = *pbVar16 + bVar18;
  puVar24 = &DAT_450064f8;
  puVar26 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar12,uVar21);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar27 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar26,uVar21);
    puVar19 = (undefined1 *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar24 = &DAT_450064f0;
    puVar25 = &DAT_450064f0;
    puVar26 = puVar27;
    _DAT_450064f0 = puVar19;
    if (*pbVar16 != 0) {
      bVar7 = CARRY1(*pbVar14,bVar18);
      *pbVar14 = *pbVar14 + bVar18;
      goto LAB_15309c6e0;
    }
  }
  puVar25 = puVar24;
  puVar27 = puVar26;
  if (*pbVar16 == 0) {
    *(undefined8 *)(puVar24 + -8) = 0x49000000;
    out(*puVar26,uVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar14[1] = (pbVar14[1] - cVar20) - bVar7;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x4f] = pbVar14[0x4f] + cVar8;
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + (char)(uVar10 >> 8);
  pbVar14 = (byte *)in(0x4e);
  *(int *)pbVar14 = *(int *)pbVar14 + (int)pbVar14;
  bVar9 = *pbVar14;
  bVar18 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + cVar20;
  do {
    piVar15 = (int *)in(0x4e);
    *piVar15 = *piVar15 + (int)piVar15;
    bVar28 = SCARRY1((char)*piVar15,(char)piVar15);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    bVar7 = (char)*piVar15 < '\0';
    pbVar16 = (byte *)CONCAT71((int7)((ulonglong)piVar15 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar28 == bVar7);
  *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
  cVar8 = (char)pbVar16;
  *pbVar16 = *pbVar16 + cVar8;
  *pbVar16 = *pbVar16 + cVar8;
  pbVar16[0x14eee7e] = pbVar16[0x14eee7e] + cVar22;
  *pbVar16 = *pbVar16 + cVar8;
  pbVar16 = (byte *)in(0x4e);
  puVar19 = puVar25;
  do {
    iVar11 = (int)pbVar16;
    *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
    bVar9 = *pbVar16;
    bVar18 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar18;
    if (SCARRY1(bVar9,bVar18)) {
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
      unaff_RBX[-0x12] = unaff_RBX[-0x12] + cVar20;
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
      puVar27[(ulonglong)(uint)((int)unaff_RBP + (int)puVar27) * 8 + 0x4e] =
           puVar27[(ulonglong)(uint)((int)unaff_RBP + (int)puVar27) * 8 + 0x4e] + (byte)unaff_RBX;
      *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
      *pbVar16 = *pbVar16 + bVar18;
      *(byte **)(puVar19 + -8) = pbVar16;
LAB_15309c7fc:
      *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
      *pbVar16 = *pbVar16 + bVar18;
      pbVar16[0x5c] = pbVar16[0x5c] + cVar22;
      out(uVar21,bVar18);
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar21,bVar18);
    puVar26 = puVar19;
    do {
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
      *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
      bVar1 = *pbVar16;
      bVar28 = SCARRY1(*pbVar16,bVar18);
      *pbVar16 = *pbVar16 + bVar18;
      bVar9 = *pbVar16;
      bVar2 = *pbVar16;
      puVar25 = puVar26 + -8;
      puVar19 = puVar26 + -8;
      *(byte **)(puVar26 + -8) = pbVar16;
      if ((char)bVar9 < '\0') {
        *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
        bVar9 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar18;
        if (!SCARRY1(bVar9,bVar18)) {
          out(uVar21,bVar18);
          *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
          bVar9 = *pbVar16;
          *pbVar16 = *pbVar16 + bVar18;
          if (SCARRY1(bVar9,bVar18)) {
            *pbVar16 = *pbVar16 + bVar18;
            pbVar16[2] = pbVar16[2] + cVar22;
            out(uVar21,bVar18);
            *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
            *pbVar16 = *pbVar16 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar10 = in(0x4e);
          pbVar16 = (byte *)(ulonglong)uVar10;
          *(uint *)pbVar16 = *(int *)pbVar16 + uVar10;
          bVar9 = *pbVar16;
          bVar18 = (byte)uVar10;
          *pbVar16 = *pbVar16 + bVar18;
          bVar9 = bVar18 << 1 | CARRY1(bVar9,bVar18);
          plVar17 = (longlong *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9);
          out(uVar21,bVar9);
          *plVar17 = *plVar17 + in_R8;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
          in_RDX[0x14eea] = in_RDX[0x14eea] ^ bVar23;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar26 = puVar26 + -8;
    } while (CARRY1(bVar1,bVar18) || bVar2 == 0);
    bVar7 = false;
    if (bVar2 == 0 || bVar28) goto code_r0x00015309c749;
    *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
    *pbVar16 = *pbVar16 + bVar18;
    pbVar14 = (byte *)(in_RDX + -0x1b);
    *pbVar14 = *pbVar14 >> 6 | *pbVar14 << 2;
  } while( true );
}

// ~TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> @ 14efe5cc0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Online::TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot>::
~TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot>
          (TOnlineResult<UE::Online::FLobbyClientDataPrepareServiceSnapshot> *this)

{
  byte bVar1;
  undefined1 uVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  byte bVar18;
  FLowLevelMemTracker *this_00;
  char *pcVar12;
  uint *puVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  undefined1 *puVar19;
  char cVar20;
  undefined2 uVar21;
  char cVar22;
  char *in_RDX;
  byte bVar23;
  char *unaff_RBX;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar27;
  undefined1 *unaff_RDI;
  longlong in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar28;
  byte bVar2;
  longlong *plVar17;
  
  bVar9 = this->field_0x30;
  puVar19 = &this->field_0x8;
  if (1 < (ulonglong)bVar9) {
    in_R9 = L"";
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar13 = (uint *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FLobbyClientDataPrepareServiceSnapshot::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar9];
  uVar21 = SUB82(in_RDX,0);
  bVar18 = (byte)((ulonglong)puVar13 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar9) {
  case 0:
    return;
  default:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 2:
    *(undefined4 *)&this[6].field_0x8 = 0;
    if (*(void **)(this + 6) != (void *)0x0) {
      FMemory::Free(*(void **)(this + 6));
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this[4].field_0x30);
    *(undefined4 *)&this[4].field_0x28 = 0;
    if (*(void **)&this[4].field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&this[4].field_0x20);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this[3].field_0x18);
    *(undefined4 *)&this[3].field_0x10 = 0;
    if (*(void **)&this[3].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this[3].field_0x8);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(this + 2));
    *(undefined4 *)&this[1].field_0x30 = 0;
    if (*(void **)&this[1].field_0x28 != (void *)0x0) {
      FMemory::Free(*(void **)&this[1].field_0x28);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->field_0x20);
    return;
  case 4:
    pvVar4 = *(void **)puVar19;
    if (pvVar4 != (void *)0x0) {
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
    }
    return;
  case 6:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 8:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 10:
    return;
  case 0xc:
    DestructItems<TSharedRef<UE::Online::ISession_const_,1>,int>
              (*(TSharedRef<UE::Online::ISession_const_,1> **)puVar19,*(int *)&this->field_0x10);
    if (*(void **)puVar19 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar19);
    return;
  case 0xe:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x10:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x12:
    return;
  case 0x14:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x16:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x18:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x1a:
    return;
  case 0x1c:
    return;
  case 0x1e:
    return;
  case 0x20:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&this->field_0x10);
    return;
  case 0x22:
    DestructItems<TSharedRef<UE::Online::ISessionInvite_const_,1>,int>
              (*(TSharedRef<UE::Online::ISessionInvite_const_,1> **)puVar19,
               *(int *)&this->field_0x10);
    if (*(void **)puVar19 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar19);
    return;
  case 0x24:
    return;
  case 0x26:
    return;
  case 0x28:
    bVar18 = bVar18 & 0x70;
    DAT_1730aa81b = DAT_1730aa81b + bVar18;
    *unaff_RBX = *unaff_RBX + bVar18;
    uVar3 = in(uVar21);
    *unaff_RDI = uVar3;
    *unaff_RBP = *unaff_RBP + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x29:
    break;
  }
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= (byte)unaff_RBX) {
LAB_15309c4c6_3:
    cVar8 = (char)puVar13;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    *(byte *)puVar13 = (byte)*puVar13 + cVar8;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar8;
    pcVar12 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar21);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar19 + (longlong)unaff_RBP * 2 + 0x6f),uVar21);
    cVar8 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar12 = *pcVar12 + cVar8;
    *pcVar12 = *pcVar12 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar21);
  uVar10 = *(uint *)(unaff_RDI + 0x70);
  puVar19 = (undefined1 *)(ulonglong)uVar10;
  bVar9 = (byte)puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  uVar6 = *puVar13;
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  if (-1 < (char)(byte)*puVar13) {
    puVar13 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  cVar20 = (char)in_RDX;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1((byte)uVar6,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  pbVar16 = puVar19 + -6;
  bVar23 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  pbVar16 = puVar19 + -6;
  bVar23 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar9;
  *(byte *)((longlong)puVar13 + 1) =
       (*(byte *)((longlong)puVar13 + 1) - cVar20) - CARRY1(bVar23,bVar9);
  *(byte *)puVar13 = (byte)*puVar13 + bVar9;
  *in_RDX = *in_RDX + bVar18;
  *(char *)in_R9 = (char)*in_R9 + -8;
  uVar6 = *puVar13;
  puVar13 = (uint *)(ulonglong)uVar6;
  cVar22 = (char)((ulonglong)in_RDX >> 8);
  *in_RDX = *in_RDX + cVar22;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar21);
  *in_RDX = *in_RDX + cVar22;
  *(char *)puVar13 = (char)*puVar13 + (char)uVar6;
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  piVar15 = (int *)(ulonglong)*puVar13;
  bVar23 = (byte)((ulonglong)unaff_RBX >> 8);
  *(byte *)piVar15 = (char)*piVar15 + bVar23;
  iVar11 = *piVar15;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar11 * 0x790072) >> 8);
  uVar6 = *(uint *)(ulonglong)(uint)(iVar11 * 0x790072);
  puVar13 = (uint *)(ulonglong)uVar6;
  pcVar12 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar21);
  *pcVar12 = *pcVar12 + (char)(uVar10 >> 8);
  unaff_RBX[in_FS_OFFSET] = unaff_RBX[in_FS_OFFSET] + cVar22;
  cVar8 = (char)uVar6;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)puVar13 = (char)*puVar13 + cVar8;
  *(char *)in_R9 = (char)*in_R9 + -0x20;
  piVar15 = (int *)(ulonglong)*puVar13;
  *(byte *)piVar15 = (char)*piVar15 + bVar23;
  uVar10 = *(int *)(ulonglong)(uint)(*piVar15 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar10 = *(char *)(ulonglong)uVar10 + (char)uVar10;
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x49] = pbVar14[0x49] + (char)(uVar10 >> 8);
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  cVar8 = (char)(uVar10 >> 8);
  pbVar14[0x14ee549] = pbVar14[0x14ee549] + cVar8;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x14ef312] = pbVar14[0x14ef312] + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = (byte *)(unaff_RBX + 0x3a);
  bVar7 = CARRY1(*pbVar16,bVar18);
  *pbVar16 = *pbVar16 + bVar18;
  puVar24 = &DAT_450064f8;
  puVar26 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar12,uVar21);
  _DAT_450064f8 = unaff_RDI;
  if (bVar7) {
    puVar27 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar26,uVar21);
    puVar19 = (undefined1 *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar24 = &DAT_450064f0;
    puVar25 = &DAT_450064f0;
    puVar26 = puVar27;
    _DAT_450064f0 = puVar19;
    if (*pbVar16 != 0) {
      bVar7 = CARRY1(*pbVar14,bVar18);
      *pbVar14 = *pbVar14 + bVar18;
      goto LAB_15309c6e0;
    }
  }
  puVar25 = puVar24;
  puVar27 = puVar26;
  if (*pbVar16 == 0) {
    *(undefined8 *)(puVar24 + -8) = 0x49000000;
    out(*puVar26,uVar21);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar14[1] = (pbVar14[1] - cVar20) - bVar7;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[0x4f] = pbVar14[0x4f] + cVar8;
  uVar10 = in(0x4e);
  pbVar14 = (byte *)(ulonglong)uVar10;
  *(uint *)pbVar14 = *(int *)pbVar14 + uVar10;
  bVar9 = *pbVar14;
  bVar18 = (byte)uVar10;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + (char)(uVar10 >> 8);
  pbVar14 = (byte *)in(0x4e);
  *(int *)pbVar14 = *(int *)pbVar14 + (int)pbVar14;
  bVar9 = *pbVar14;
  bVar18 = (byte)pbVar14;
  *pbVar14 = *pbVar14 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  pbVar16 = puVar19 + -6;
  bVar9 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar18;
  pbVar14[1] = (pbVar14[1] - cVar20) - CARRY1(bVar9,bVar18);
  *pbVar14 = *pbVar14 + bVar18;
  *pbVar14 = *pbVar14 + cVar20;
  do {
    piVar15 = (int *)in(0x4e);
    *piVar15 = *piVar15 + (int)piVar15;
    bVar28 = SCARRY1((char)*piVar15,(char)piVar15);
    *(char *)piVar15 = (char)*piVar15 + (char)piVar15;
    bVar7 = (char)*piVar15 < '\0';
    pbVar16 = (byte *)CONCAT71((int7)((ulonglong)piVar15 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar28 == bVar7);
  *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
  cVar8 = (char)pbVar16;
  *pbVar16 = *pbVar16 + cVar8;
  *pbVar16 = *pbVar16 + cVar8;
  pbVar16[0x14eee7e] = pbVar16[0x14eee7e] + cVar22;
  *pbVar16 = *pbVar16 + cVar8;
  pbVar16 = (byte *)in(0x4e);
  puVar19 = puVar25;
  do {
    iVar11 = (int)pbVar16;
    *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
    bVar9 = *pbVar16;
    bVar18 = (byte)pbVar16;
    *pbVar16 = *pbVar16 + bVar18;
    if (SCARRY1(bVar9,bVar18)) {
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
      unaff_RBX[-0x12] = unaff_RBX[-0x12] + cVar20;
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
      puVar27[(ulonglong)(uint)((int)unaff_RBP + (int)puVar27) * 8 + 0x4e] =
           puVar27[(ulonglong)(uint)((int)unaff_RBP + (int)puVar27) * 8 + 0x4e] + (byte)unaff_RBX;
      *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
      *pbVar16 = *pbVar16 + bVar18;
      *(byte **)(puVar19 + -8) = pbVar16;
LAB_15309c7fc:
      *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
      *pbVar16 = *pbVar16 + bVar18;
      pbVar16[0x5c] = pbVar16[0x5c] + cVar22;
      out(uVar21,bVar18);
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar21,bVar18);
    puVar26 = puVar19;
    do {
      *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
      *pbVar16 = *pbVar16 + bVar18;
      *(int *)pbVar16 = *(int *)pbVar16 + iVar11;
      bVar1 = *pbVar16;
      bVar28 = SCARRY1(*pbVar16,bVar18);
      *pbVar16 = *pbVar16 + bVar18;
      bVar9 = *pbVar16;
      bVar2 = *pbVar16;
      puVar25 = puVar26 + -8;
      puVar19 = puVar26 + -8;
      *(byte **)(puVar26 + -8) = pbVar16;
      if ((char)bVar9 < '\0') {
        *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
        bVar9 = *pbVar16;
        *pbVar16 = *pbVar16 + bVar18;
        if (!SCARRY1(bVar9,bVar18)) {
          out(uVar21,bVar18);
          *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
          bVar9 = *pbVar16;
          *pbVar16 = *pbVar16 + bVar18;
          if (SCARRY1(bVar9,bVar18)) {
            *pbVar16 = *pbVar16 + bVar18;
            pbVar16[2] = pbVar16[2] + cVar22;
            out(uVar21,bVar18);
            *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
            *pbVar16 = *pbVar16 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar10 = in(0x4e);
          pbVar16 = (byte *)(ulonglong)uVar10;
          *(uint *)pbVar16 = *(int *)pbVar16 + uVar10;
          bVar9 = *pbVar16;
          bVar18 = (byte)uVar10;
          *pbVar16 = *pbVar16 + bVar18;
          bVar9 = bVar18 << 1 | CARRY1(bVar9,bVar18);
          plVar17 = (longlong *)(ulonglong)CONCAT31((int3)(uVar10 >> 8),bVar9);
          out(uVar21,bVar9);
          *plVar17 = *plVar17 + in_R8;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
          in_RDX[0x14eea] = in_RDX[0x14eea] ^ bVar23;
          *(byte *)plVar17 = (char)*plVar17 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar26 = puVar26 + -8;
    } while (CARRY1(bVar1,bVar18) || bVar2 == 0);
    bVar7 = false;
    if (bVar2 == 0 || bVar28) goto code_r0x00015309c749;
    *(longlong *)pbVar16 = *(longlong *)pbVar16 + in_R8;
    *pbVar16 = *pbVar16 + bVar18;
    pbVar14 = (byte *)(in_RDX + -0x1b);
    *pbVar14 = *pbVar14 >> 6 | *pbVar14 << 2;
  } while( true );
}

