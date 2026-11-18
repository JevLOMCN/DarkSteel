// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 3

// ~TResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError> @ 14ec551b0

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

void __thiscall
UE::Online::
TResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::
~TResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>
          (TResult<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>
           *this)

{
  TVariant<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>
  *pTVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
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
  
  bVar4 = (this->Storage).TypeIndex;
  pTVar1 = &this->Storage;
  if (1 < (ulonglong)bVar4) {
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
  pbVar11 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByOnlineAccountId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar4];
  cVar13 = (char)((ulonglong)in_RDX >> 8);
  uVar12 = SUB82(in_RDX,0);
  cVar9 = (char)((ulonglong)pbVar11 >> 8);
  bVar8 = (byte)pbVar11;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Storage)._padding_);
    return;
  case 1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Storage)._padding_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Storage)._padding_);
    return;
  case 2:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar12);
    pcVar2 = (char *)((longlong)pbVar11 * 2 + 0x61);
    *pcVar2 = *pcVar2 + cVar13;
    *(char *)&pTVar1->_padding_ = (char)pTVar1->_padding_ + (char)((ulonglong)pTVar1 >> 8);
    out(unaff_RSI[1],uVar12);
    *unaff_RBP = *unaff_RBP + cVar9;
    *pbVar11 = *pbVar11 & bVar8;
    *pbVar11 = *pbVar11 + cVar9;
    *unaff_RBX = *unaff_RBX + cVar9;
    *unaff_RDI = *unaff_RDI + cVar9;
    pcVar2 = (char *)((longlong)&FiberData + (longlong)pbVar11 * 2);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((longlong)pbVar11 * 2 + 0x75);
    *pcVar2 = *pcVar2 + cVar9;
    *in_RDX = *in_RDX + cVar13;
    uVar10 = *(int *)pbVar11 * 0x67006e;
    *(byte *)(ulonglong)uVar10 = *(byte *)(ulonglong)uVar10 & (byte)uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar12);
    pbVar3 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar12);
    cVar9 = in(uVar12);
    *unaff_RDI = cVar9;
    *pbVar11 = *pbVar11 + bVar8;
    *pbVar11 = *pbVar11 + bVar8;
    *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar4) {
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
  if ((byte)unaff_RBX == bVar4) {
    pbVar11 = (byte *)0x0;
  }
  else {
    *pbVar11 = *pbVar11 + bVar8;
  }
  cVar9 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar9;
  *pbVar11 = *pbVar11 + cVar9;
  pcVar2 = unaff_RBX + 0x6f;
  *pcVar2 = *pcVar2 + cVar9;
  if (*pcVar2 == '\0') {
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

// ~TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError> @ 14ec55210

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

void __thiscall
UE::Online::
TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::
~TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
          (TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
           *this)

{
  TVariant<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
  *pTVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
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
  
  bVar4 = (this->Storage).TypeIndex;
  pTVar1 = &this->Storage;
  if (1 < (ulonglong)bVar4) {
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
  pbVar11 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar4];
  cVar13 = (char)((ulonglong)in_RDX >> 8);
  uVar12 = SUB82(in_RDX,0);
  cVar9 = (char)((ulonglong)pbVar11 >> 8);
  bVar8 = (byte)pbVar11;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Storage)._padding_);
    return;
  default:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Storage)._padding_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Storage)._padding_);
    return;
  case 2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Storage)._padding_);
    return;
  case 4:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar12);
    pcVar2 = (char *)((longlong)pbVar11 * 2 + 0x61);
    *pcVar2 = *pcVar2 + cVar13;
    *(char *)&pTVar1->_padding_ = (char)pTVar1->_padding_ + (char)((ulonglong)pTVar1 >> 8);
    out(unaff_RSI[1],uVar12);
    *unaff_RBP = *unaff_RBP + cVar9;
    *pbVar11 = *pbVar11 & bVar8;
    *pbVar11 = *pbVar11 + cVar9;
    *unaff_RBX = *unaff_RBX + cVar9;
    *unaff_RDI = *unaff_RDI + cVar9;
    pcVar2 = (char *)((longlong)&FiberData + (longlong)pbVar11 * 2);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)((longlong)pbVar11 * 2 + 0x75);
    *pcVar2 = *pcVar2 + cVar9;
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
    pbVar3 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar12);
    cVar9 = in(uVar12);
    *unaff_RDI = cVar9;
    *pbVar11 = *pbVar11 + bVar8;
    *pbVar11 = *pbVar11 + bVar8;
    *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    break;
  }
  bVar4 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar4) {
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
  if ((byte)unaff_RBX == bVar4) {
    pbVar11 = (byte *)0x0;
  }
  else {
    *pbVar11 = *pbVar11 + bVar8;
  }
  cVar9 = (char)pbVar11;
  *pbVar11 = *pbVar11 + cVar9;
  *pbVar11 = *pbVar11 + cVar9;
  pcVar2 = unaff_RBX + 0x6f;
  *pcVar2 = *pcVar2 + cVar9;
  if (*pcVar2 == '\0') {
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

// GetOkValue @ 14ec76340

Result * __thiscall
UE::Online::
TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::
GetOkValue(TResult<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>
           *this)

{
  code *pcVar1;
  bool bVar2;
  Result *pRVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pRVar3 = (Result *)(*pcVar1)();
      return pRVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FAuthGetLocalOnlineUserByPlatformUserId::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Public\\Online\\OnlineResult.h"
                       ,0x7e,
                       L"It is an error to call GetOkValue() on a TResult that does not hold an ok value. Please either check IsOk() or use TryGetOkValue"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pRVar3 = (Result *)(*pcVar1)();
      return pRVar3;
    }
  }
  if ((this->Storage).TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pRVar3 = (Result *)(*pcVar1)();
      return pRVar3;
    }
  }
  return (Result *)&this->Storage;
}

