// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 3

// ~TValueOrError<FString,FString> @ 14a740550

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
TValueOrError<FString,FString>::~TValueOrError<FString,FString>
          (TValueOrError<FString,FString> *this)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  FLowLevelMemTracker *this_00;
  FText *pFVar13;
  byte *pbVar14;
  void *pvVar15;
  undefined2 uVar16;
  char *in_RDX;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar18;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar17;
  
  bVar3 = (this->Variant).TypeIndex;
  if (2 < (ulonglong)bVar3) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pbVar14 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3];
  cVar17 = (char)((ulonglong)in_RDX >> 8);
  uVar16 = SUB82(in_RDX,0);
  cVar11 = (char)((ulonglong)pbVar14 >> 8);
  bVar10 = (byte)pbVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    pvVar15 = (void *)(this->Variant)._padding_;
    if (pvVar15 == (void *)0x0) {
      return;
    }
    break;
  case 1:
    pvVar15 = (void *)(this->Variant)._padding_;
    if (pvVar15 == (void *)0x0) {
      return;
    }
    break;
  case 2:
    return;
  case 3:
    return;
  case 4:
    plVar6 = (longlong *)(this->Variant)._padding_;
    if (plVar6 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014a746adb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))();
    return;
  case 5:
    return;
  case 6:
    return;
  case 7:
    plVar6 = (longlong *)(this->Variant)._padding_;
    if (plVar6 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014a746b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))();
    return;
  case 8:
    return;
  case 9:
    *(char *)&(this->Variant)._padding_ = (char)*(longlong *)in_RDX;
    return;
  case 10:
    (this->Variant)._padding_ = 0;
    (this->Variant)._padding_ = *(longlong *)in_RDX;
    *(longlong *)in_RDX = 0;
    *(int *)&(this->Variant)._padding_ = (int)*(longlong *)((longlong)in_RDX + 8);
    pFVar13 = FText::GetEmpty();
    pIVar4 = *(ITextData **)in_RDX;
    pIVar5 = (pFVar13->TextData).Reference;
    if (pIVar4 != pIVar5) {
      *(ITextData **)in_RDX = pIVar5;
      if (pIVar5 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&stack0x00000008);
      }
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      }
    }
    *(undefined4 *)((longlong)in_RDX + 8) = 0;
    return;
  case 0xb:
    return;
  case 0xc:
    return;
  case 0xd:
    plVar6 = (longlong *)(this->Variant)._padding_;
    if (plVar6 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014a746bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))();
    return;
  case 0xe:
    return;
  case 0xf:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar16);
    pcVar1 = (char *)((longlong)pbVar14 * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar17;
    *(char *)&(this->Variant)._padding_ =
         (char)(this->Variant)._padding_ + (char)((ulonglong)this >> 8);
    out(unaff_RSI[1],uVar16);
    *unaff_RBP = *unaff_RBP + cVar11;
    *pbVar14 = *pbVar14 & bVar10;
    *pbVar14 = *pbVar14 + cVar11;
    *unaff_RBX = *unaff_RBX + cVar11;
    *unaff_RDI = *unaff_RDI + cVar11;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)pbVar14 * 2);
    *pcVar1 = *pcVar1 + cVar11;
    pcVar1 = (char *)((longlong)pbVar14 * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar11;
    *in_RDX = (char)*(longlong *)in_RDX + cVar17;
    uVar12 = *(int *)pbVar14 * 0x67006e;
    *(byte *)(ulonglong)uVar12 = *(byte *)(ulonglong)uVar12 & (byte)uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar16);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar16);
    cVar11 = in(uVar16);
    *unaff_RDI = cVar11;
    *pbVar14 = *pbVar14 + bVar10;
    *pbVar14 = *pbVar14 + bVar10;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x11:
    bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
    if ((byte)unaff_RBX < bVar3) {
      cVar11 = in(uVar16);
      *unaff_RDI = cVar11;
      out(*unaff_RSI,uVar16);
      unaff_RSI = unaff_RSI + 1;
      unaff_RDI = unaff_RDI + 1;
    }
    puVar18 = (undefined4 *)(unaff_RSI + 1);
    out(*unaff_RSI,uVar16);
    lVar7 = (longlong)*(int *)(longlong)((int)puVar18 + 0x65) * 0x756f535c;
    if ((int)lVar7 != lVar7) {
      *in_RDX = (char)*(longlong *)in_RDX + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char **)(*unaff_retaddr + -8) = in_RDX;
    if ((byte)unaff_RBX == bVar3) {
      pbVar14 = (byte *)0x0;
    }
    else {
      *pbVar14 = *pbVar14 + bVar10;
    }
    cVar11 = (char)pbVar14;
    *pbVar14 = *pbVar14 + cVar11;
    *pbVar14 = *pbVar14 + cVar11;
    pcVar1 = unaff_RBX + 0x6f;
    *pcVar1 = *pcVar1 + cVar11;
    if (*pcVar1 == '\0') {
      cVar11 = in(uVar16);
      *unaff_RDI = cVar11;
      unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
      cVar11 = in(uVar16);
      unaff_RDI[1] = cVar11;
      cVar11 = in(uVar16);
      unaff_RDI[2] = cVar11;
      out(*puVar18,uVar16);
      puVar18 = (undefined4 *)(unaff_RSI + 9);
      out(*(undefined4 *)(unaff_RSI + 5),uVar16);
    }
    out(*(undefined1 *)puVar18,uVar16);
    *(char *)((longlong)puVar18 + 1) = *(char *)((longlong)puVar18 + 1) + cVar17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pvVar15 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar15,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar15);
  }
  return;
}

// StealError @ 14a7602f0

FString * __thiscall
TValueOrError<FString,FString>::StealError
          (TValueOrError<FString,FString> *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  ulonglong uVar4;
  
  if ((this->Variant).TypeIndex != '\x01') {
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
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)(this->Variant)._padding_;
  (this->Variant)._padding_ = 0;
  (__return_storage_ptr__->Data).ArrayNum = (int)(this->Variant)._padding_;
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)&(this->Variant)._padding_ + 4);
  (this->Variant)._padding_ = 0;
  uVar4 = (ulonglong)(this->Variant).TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(this);
  (this->Variant).TypeIndex = '\x02';
  return __return_storage_ptr__;
}

// StealValue @ 14a7603b0

FString * __thiscall
TValueOrError<FString,FString>::StealValue
          (TValueOrError<FString,FString> *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  ulonglong uVar4;
  
  if ((this->Variant).TypeIndex != '\0') {
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
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)(this->Variant)._padding_;
  (this->Variant)._padding_ = 0;
  (__return_storage_ptr__->Data).ArrayNum = (int)(this->Variant)._padding_;
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)&(this->Variant)._padding_ + 4);
  (this->Variant)._padding_ = 0;
  uVar4 = (ulonglong)(this->Variant).TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(this);
  (this->Variant).TypeIndex = '\x02';
  return __return_storage_ptr__;
}

