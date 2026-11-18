// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// ~FSchemaServiceAttributeData @ 14ec24200

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
UE::Online::FSchemaServiceAttributeData::~FSchemaServiceAttributeData
          (FSchemaServiceAttributeData *this)

{
  FSchemaVariant *pFVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  void *pvVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  FLowLevelMemTracker *this_00;
  byte *pbVar12;
  undefined2 uVar13;
  char *in_RDX;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar15;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar14;
  
  bVar4 = (this->Value).VariantData.TypeIndex;
  pFVar1 = &this->Value;
  if (3 < (ulonglong)bVar4) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pbVar12 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar4];
  cVar14 = (char)((ulonglong)in_RDX >> 8);
  uVar13 = SUB82(in_RDX,0);
  cVar10 = (char)((ulonglong)pbVar12 >> 8);
  bVar9 = (byte)pbVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    pvVar5 = (void *)(pFVar1->VariantData)._padding_;
    if (pvVar5 == (void *)0x0) {
      return;
    }
    if (pvVar5 != (void *)0x0) {
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar5,FMalloc,true);
      }
      if (UE::Private::GMalloc == (FMalloc *)0x0) {
        FMemory::GCreateMalloc();
      }
      else {
        DoGamethreadHook(2);
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar5);
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
    out(*unaff_RSI,uVar13);
    pcVar2 = (char *)((longlong)pbVar12 * 2 + 0x61);
    *pcVar2 = *pcVar2 + cVar14;
    *(char *)&(pFVar1->VariantData)._padding_ =
         (char)(pFVar1->VariantData)._padding_ + (char)((ulonglong)pFVar1 >> 8);
    out(unaff_RSI[1],uVar13);
    *unaff_RBP = *unaff_RBP + cVar10;
    *pbVar12 = *pbVar12 & bVar9;
    *pbVar12 = *pbVar12 + cVar10;
    *unaff_RBX = *unaff_RBX + cVar10;
    *unaff_RDI = *unaff_RDI + cVar10;
    pcVar2 = (char *)((longlong)&FiberData + (longlong)pbVar12 * 2);
    *pcVar2 = *pcVar2 + cVar10;
    pcVar2 = (char *)((longlong)pbVar12 * 2 + 0x75);
    *pcVar2 = *pcVar2 + cVar10;
    *in_RDX = *in_RDX + cVar14;
    uVar11 = *(int *)pbVar12 * 0x67006e;
    *(byte *)(ulonglong)uVar11 = *(byte *)(ulonglong)uVar11 & (byte)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar13);
    pbVar3 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar13);
    cVar10 = in(uVar13);
    *unaff_RDI = cVar10;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar3 = *pbVar3 >> 1 | *pbVar3 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = unaff_R15[in_R10 * 2 + 0x6f];
  if ((byte)unaff_RBX < bVar4) {
    cVar10 = in(uVar13);
    *unaff_RDI = cVar10;
    out(*unaff_RSI,uVar13);
    unaff_RSI = unaff_RSI + 1;
    unaff_RDI = unaff_RDI + 1;
  }
  puVar15 = (undefined4 *)(unaff_RSI + 1);
  out(*unaff_RSI,uVar13);
  lVar6 = (longlong)*(int *)(longlong)((int)puVar15 + 0x65) * 0x756f535c;
  if ((int)lVar6 != lVar6) {
    *in_RDX = *in_RDX + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char **)(*unaff_retaddr + -8) = in_RDX;
  if ((byte)unaff_RBX == bVar4) {
    pbVar12 = (byte *)0x0;
  }
  else {
    *pbVar12 = *pbVar12 + bVar9;
  }
  cVar10 = (char)pbVar12;
  *pbVar12 = *pbVar12 + cVar10;
  *pbVar12 = *pbVar12 + cVar10;
  pcVar2 = unaff_RBX + 0x6f;
  *pcVar2 = *pcVar2 + cVar10;
  if (*pcVar2 == '\0') {
    cVar10 = in(uVar13);
    *unaff_RDI = cVar10;
    unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
    cVar10 = in(uVar13);
    unaff_RDI[1] = cVar10;
    cVar10 = in(uVar13);
    unaff_RDI[2] = cVar10;
    out(*puVar15,uVar13);
    puVar15 = (undefined4 *)(unaff_RSI + 9);
    out(*(undefined4 *)(unaff_RSI + 5),uVar13);
  }
  out(*(undefined1 *)puVar15,uVar13);
  *(char *)((longlong)puVar15 + 1) = *(char *)((longlong)puVar15 + 1) + cVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

