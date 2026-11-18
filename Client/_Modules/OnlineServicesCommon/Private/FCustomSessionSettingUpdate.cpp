// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~FCustomSessionSettingUpdate @ 14ee24770

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x00015061410c) */
/* WARNING: Removing unreachable block (ram,0x000150614110) */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416d) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */

void __thiscall
UE::Online::FCustomSessionSettingUpdate::~FCustomSessionSettingUpdate
          (FCustomSessionSettingUpdate *this)

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
  ulonglong uVar14;
  undefined4 *puVar15;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar13;
  
  uVar14 = (ulonglong)(this->NewValue).Data.VariantData.TypeIndex;
  if (3 < uVar14) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar14])(&this->NewValue);
  bVar3 = (this->OldValue).Data.VariantData.TypeIndex;
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
    pvVar4 = (void *)(this->OldValue).Data.VariantData._padding_;
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
    *(char *)&(this->OldValue).Data.VariantData._padding_ =
         (char)(this->OldValue).Data.VariantData._padding_ + (char)((ulonglong)this >> 8);
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
    if (&stack0x00000000 == &DAT_00000008) {
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
  puVar15 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar12);
  lVar5 = (longlong)*(int *)(longlong)((int)puVar15 + 0x65) * 0x756f535c;
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
    out(*puVar15,uVar12);
    puVar15 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar12);
  }
  out(*(undefined1 *)puVar15,uVar12);
  *(char *)((longlong)puVar15 + 1) = *(char *)((longlong)puVar15 + 1) + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

