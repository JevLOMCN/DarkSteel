// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface> @ 14ae5be40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000150610aa9) overlaps instruction at (ram,0x000150610aa7)
    */
/* WARNING: Removing unreachable block (ram,0x000150610aa4) */
/* WARNING: Removing unreachable block (ram,0x00015061372a) */
/* WARNING: Removing unreachable block (ram,0x0001506109c9) */
/* WARNING: Removing unreachable block (ram,0x000150613725) */
/* WARNING: Removing unreachable block (ram,0x000150613776) */
/* WARNING: Removing unreachable block (ram,0x000150613728) */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,FMetasoundFrontendInterface>
           *this)

{
  undefined1 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  char cVar15;
  FLowLevelMemTracker *this_00;
  void *pvVar16;
  undefined2 uVar17;
  char *pcVar18;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *puVar20;
  undefined1 *unaff_RDI;
  longlong in_R8;
  char in_R10B;
  undefined7 in_register_00000091;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  byte *pbVar14;
  char cVar19;
  
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  pcVar18 = (char *)(ulonglong)*(uint *)&this->field_0x28;
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)&this->field_0x20,*(uint *)&this->field_0x28);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  bVar3 = this->field_0x10;
  if (3 < (ulonglong)bVar3) {
    in_R8 = 0xd4;
    pcVar18 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                        ,0xd4,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar14 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3];
  cVar19 = (char)((ulonglong)pcVar18 >> 8);
  cVar15 = (char)((ulonglong)pbVar14 >> 8);
  uVar17 = SUB82(pcVar18,0);
  bVar12 = (byte)pbVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    pvVar16 = *(void **)this;
    if (pvVar16 == (void *)0x0) {
      return;
    }
    break;
  case 3:
    return;
  case 4:
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).ArrayNum;
    iVar9 = (((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).ArrayMax;
    *(FScriptContainerElement **)this =
         (((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).AllocatorInstance.Data;
    *(int *)&this->field_0x8 = iVar4;
    *(int *)&this->field_0xc = iVar9;
    return;
  case 5:
    *(undefined1 *)this =
         *(undefined1 *)
          &(((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).AllocatorInstance.Data;
    uVar7 = *(undefined8 *)&(((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).ArrayMax;
    *(undefined8 *)&this->field_0x4 =
         *(undefined8 *)
          ((longlong)&(((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).AllocatorInstance.Data
          + 4);
    *(undefined8 *)&this->field_0xc = uVar7;
    *(undefined8 *)&this->field_0x14 =
         *(undefined8 *)
          ((longlong)
           &(((FMetasoundFrontendClassInterface *)pcVar18)->Outputs).AllocatorInstance.Data + 4);
    this->field_0x1c = (char)(((FMetasoundFrontendClassInterface *)pcVar18)->Outputs).ArrayMax;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).ArrayNum;
    iVar9 = (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).ArrayMax;
    *(FScriptContainerElement **)&this->field_0x20 =
         (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x28 = iVar4;
    *(int *)&this->field_0x2c = iVar9;
    uVar13 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).B;
    uVar8 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).C;
    uVar10 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).D;
    *(uint *)&this->field_0x30 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).A;
    *(uint *)&this->field_0x34 = uVar13;
    *(uint *)&this->field_0x38 = uVar8;
    *(uint *)&this->field_0x3c = uVar10;
    *(FScriptContainerElement **)&this->field_0x40 =
         (((FMetasoundFrontendClassInterface *)((longlong)pcVar18 + 0x40))->Inputs).
         AllocatorInstance.Data;
    iVar4 = (((FMetasoundFrontendClassInterface *)((longlong)pcVar18 + 0x40))->Inputs).ArrayMax;
    *(int *)&this->field_0x48 =
         (((FMetasoundFrontendClassInterface *)((longlong)pcVar18 + 0x40))->Inputs).ArrayNum;
    *(int *)&this->field_0x4c = iVar4;
    return;
  case 6:
    *(undefined ***)this = &___7FMetasoundFrontendClass__6B_;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).ArrayMax;
    pFVar6 = (((FMetasoundFrontendClassInterface *)pcVar18)->Outputs).AllocatorInstance.Data;
    *(int *)&this->field_0x8 = (((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).ArrayNum;
    *(int *)&this->field_0xc = iVar4;
    *(FScriptContainerElement **)&this->field_0x10 = pFVar6;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar18)->Outputs).ArrayMax;
    pFVar6 = (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x18 = (((FMetasoundFrontendClassInterface *)pcVar18)->Outputs).ArrayNum;
    *(int *)&this->field_0x1c = iVar4;
    *(FScriptContainerElement **)&this->field_0x20 = pFVar6;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).ArrayMax;
    uVar13 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).A;
    uVar8 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).B;
    *(int *)&this->field_0x28 =
         (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).ArrayNum;
    *(int *)&this->field_0x2c = iVar4;
    *(uint *)&this->field_0x30 = uVar13;
    *(uint *)&this->field_0x34 = uVar8;
    uVar13 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).D;
    pFVar6 = (((FMetasoundFrontendClassInterface *)((longlong)pcVar18 + 0x40))->Inputs).
             AllocatorInstance.Data;
    *(uint *)&this->field_0x38 = (((FMetasoundFrontendClassInterface *)pcVar18)->ChangeID).C;
    *(uint *)&this->field_0x3c = uVar13;
    *(FScriptContainerElement **)&this->field_0x40 = pFVar6;
    *(int *)&this->field_0x48 =
         (((FMetasoundFrontendClassInterface *)((longlong)pcVar18 + 0x40))->Inputs).ArrayNum;
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)&this->field_0x50,
               (FMetasoundFrontendClassInterface *)
               &((FMetasoundFrontendClassInterface *)((longlong)pcVar18 + 0x40))->Outputs);
    return;
  case 7:
    *(undefined1 *)this =
         *(undefined1 *)
          &(((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).AllocatorInstance.Data;
    ::FString::FString((FString *)&this->field_0x8,
                       (FString *)&(((FMetasoundFrontendClassInterface *)pcVar18)->Inputs).ArrayNum)
    ;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar18)->Outputs).ArrayMax;
    pFVar6 = (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x18 = (((FMetasoundFrontendClassInterface *)pcVar18)->Outputs).ArrayNum;
    *(int *)&this->field_0x1c = iVar4;
    *(FScriptContainerElement **)&this->field_0x20 = pFVar6;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).ArrayMax;
    *(int *)&this->field_0x28 =
         (((FMetasoundFrontendClassInterface *)pcVar18)->Environment).ArrayNum;
    *(int *)&this->field_0x2c = iVar4;
    return;
  case 8:
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)this,(FMetasoundFrontendClassInterface *)pcVar18)
    ;
    FMetasoundFrontendInterfaceMetadata::FMetasoundFrontendInterfaceMetadata
              ((FMetasoundFrontendInterfaceMetadata *)&this->field_0x40,
               (FMetasoundFrontendInterfaceMetadata *)((longlong)pcVar18 + 0x40));
    return;
  case 9:
    return;
  case 10:
    return;
  case 0xb:
    if (*(void **)&this->field_0x70 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x70);
    }
    if (*(void **)&this->field_0x60 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x60);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              (*(FMetasoundFrontendClassInput **)&this->field_0x50,*(int *)&this->field_0x58);
    if (*(void **)&this->field_0x50 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)&this->field_0x50);
    return;
  case 0xc:
    pvVar16 = *(void **)&this->field_0x8;
    if (pvVar16 == (void *)0x0) {
      return;
    }
    break;
  case 0xd:
    if (*(void **)&this->field_0x50 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x50);
    }
    if (*(void **)&this->field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x20);
    }
    if (*(void **)&this->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x10);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              (*(FMetasoundFrontendClassInput **)this,*(int *)&this->field_0x8);
    if (*(void **)this == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)this);
    return;
  case 0xe:
    *(char *)CONCAT71(in_register_00000091,in_R10B) =
         *(char *)CONCAT71(in_register_00000091,in_R10B) + (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    puVar20 = unaff_RSI;
    if (&stack0x00000000 == &DAT_00000008) {
      unaff_RBX[0xff00000000] = unaff_RBX[0xff00000000] + cVar19;
      *pbVar14 = *pbVar14 & bVar12;
      puVar20 = unaff_RSI + 1;
      out(*unaff_RSI,uVar17);
    }
    *pbVar14 = *pbVar14 + cVar15;
    *(char *)this = *(char *)this + cVar15;
    *pbVar14 = *pbVar14 & bVar12;
    uVar13 = *(int *)pbVar14 * 0x770065;
    pbVar14 = (byte *)(ulonglong)uVar13;
    *pbVar14 = *pbVar14 & (byte)uVar13;
    out(*puVar20,uVar17);
    *(char *)(puVar20 + 1) = *(char *)(puVar20 + 1) + (char)(uVar13 >> 8);
    *pbVar14 = *pbVar14 & (byte)uVar13;
    *unaff_RBP = *unaff_RBP + cVar19;
    *(undefined1 *)(ulonglong)(uVar13 & 0x6c006c00) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    bVar3 = *(byte *)(unaff_R15 + 0x6f + CONCAT71(in_register_00000091,in_R10B) * 2);
    if ((byte)unaff_RBX < bVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((byte)unaff_RBX != bVar3) {
      pbVar14[in_R8 + 0x61] = pbVar14[in_R8 + 0x61] + in_R10B;
      *unaff_RBX = *unaff_RBX + cVar19;
      iVar4 = *(int *)pbVar14;
      pcVar18 = (char *)((ulonglong)(uint)(iVar4 * 0x73) * 2 + 0x6f);
      *pcVar18 = *pcVar18 + (char)this;
      *unaff_RBX = *unaff_RBX + (char)((uint)(iVar4 * 0x73) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = in(uVar17);
    *unaff_RDI = uVar1;
    *unaff_RBP = *unaff_RBP + cVar15;
    uVar2 = in(uVar17);
    *(undefined4 *)(unaff_RDI + 1) = uVar2;
    *unaff_RBP = *unaff_RBP + cVar15;
    out(*(undefined1 *)unaff_RSI,uVar17);
    pcVar18 = (char *)((longlong)pbVar14 * 2 + 0x73);
    *pcVar18 = *pcVar18 + cVar19;
    *pbVar14 = *pbVar14 + cVar15;
    pcVar18 = (char *)((longlong)pbVar14 * 2 + 0x6f);
    *pcVar18 = *pcVar18 + cVar19;
    *pbVar14 = *pbVar14 + cVar15;
    *(char *)this = *(char *)this + cVar15;
    pcVar18 = (char *)(in_FS_OFFSET + (longlong)pbVar14 * 2 + 0x20);
    *pcVar18 = *pcVar18 + cVar15;
    pcVar18 = (char *)((longlong)pbVar14 * 2 + 0x6f);
    *pcVar18 = *pcVar18 + cVar19;
    *pbVar14 = *pbVar14 + cVar15;
    pcVar18 = (char *)((longlong)pbVar14 * 2 + 0x68);
    *pcVar18 = *pcVar18 + cVar19;
    *(char *)this = *(char *)this + (char)((ulonglong)this >> 8);
    *pbVar14 = *pbVar14 & bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pvVar16 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar16,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar16);
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 14ae5bef0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000150610aa9) overlaps instruction at (ram,0x000150610aa7)
    */
/* WARNING: Removing unreachable block (ram,0x000150610aa4) */
/* WARNING: Removing unreachable block (ram,0x00015061372a) */
/* WARNING: Removing unreachable block (ram,0x0001506109c9) */
/* WARNING: Removing unreachable block (ram,0x000150613725) */
/* WARNING: Removing unreachable block (ram,0x000150613776) */
/* WARNING: Removing unreachable block (ram,0x000150613728) */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<Metasound::FFrontendQueryEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
           *this)

{
  undefined1 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  char cVar15;
  FLowLevelMemTracker *this_00;
  void *pvVar16;
  FFrontendQueryEntry *pFVar17;
  undefined2 uVar18;
  char *pcVar19;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *puVar21;
  undefined1 *unaff_RDI;
  longlong in_R8;
  char in_R10B;
  undefined7 in_register_00000091;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  byte *pbVar14;
  char cVar20;
  
  pcVar19 = (char *)(ulonglong)*(uint *)&this->field_0xd8;
  pFVar17 = *(FFrontendQueryEntry **)&this->field_0xd0;
  if (*(FFrontendQueryEntry **)&this->field_0xd0 == (FFrontendQueryEntry *)0x0) {
    pFVar17 = (FFrontendQueryEntry *)&this->field_0x20;
  }
  DestructItems<Metasound::FFrontendQueryEntry,int>(pFVar17,*(uint *)&this->field_0xd8);
  if (*(void **)&this->field_0xd0 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xd0);
  }
  bVar3 = this->field_0x10;
  if (3 < (ulonglong)bVar3) {
    in_R8 = 0xd4;
    pcVar19 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                        ,0xd4,L"");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar14 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3];
  cVar20 = (char)((ulonglong)pcVar19 >> 8);
  cVar15 = (char)((ulonglong)pbVar14 >> 8);
  uVar18 = SUB82(pcVar19,0);
  bVar12 = (byte)pbVar14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    pvVar16 = *(void **)this;
    if (pvVar16 == (void *)0x0) {
      return;
    }
    break;
  case 3:
    return;
  case 4:
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).ArrayNum;
    iVar9 = (((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).ArrayMax;
    *(FScriptContainerElement **)this =
         (((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).AllocatorInstance.Data;
    *(int *)&this->field_0x8 = iVar4;
    *(int *)&this->field_0xc = iVar9;
    return;
  case 5:
    *(undefined1 *)this =
         *(undefined1 *)
          &(((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).AllocatorInstance.Data;
    uVar7 = *(undefined8 *)&(((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).ArrayMax;
    *(undefined8 *)&this->field_0x4 =
         *(undefined8 *)
          ((longlong)&(((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).AllocatorInstance.Data
          + 4);
    *(undefined8 *)&this->field_0xc = uVar7;
    *(undefined8 *)&this->field_0x14 =
         *(undefined8 *)
          ((longlong)
           &(((FMetasoundFrontendClassInterface *)pcVar19)->Outputs).AllocatorInstance.Data + 4);
    this->field_0x1c = (char)(((FMetasoundFrontendClassInterface *)pcVar19)->Outputs).ArrayMax;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).ArrayNum;
    iVar9 = (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).ArrayMax;
    *(FScriptContainerElement **)&this->field_0x20 =
         (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x28 = iVar4;
    *(int *)&this->field_0x2c = iVar9;
    uVar13 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).B;
    uVar8 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).C;
    uVar10 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).D;
    *(uint *)&this->field_0x30 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).A;
    *(uint *)&this->field_0x34 = uVar13;
    *(uint *)&this->field_0x38 = uVar8;
    *(uint *)&this->field_0x3c = uVar10;
    *(FScriptContainerElement **)&this->field_0x40 =
         (((FMetasoundFrontendClassInterface *)((longlong)pcVar19 + 0x40))->Inputs).
         AllocatorInstance.Data;
    iVar4 = (((FMetasoundFrontendClassInterface *)((longlong)pcVar19 + 0x40))->Inputs).ArrayMax;
    *(int *)&this->field_0x48 =
         (((FMetasoundFrontendClassInterface *)((longlong)pcVar19 + 0x40))->Inputs).ArrayNum;
    *(int *)&this->field_0x4c = iVar4;
    return;
  case 6:
    *(undefined ***)this = &___7FMetasoundFrontendClass__6B_;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).ArrayMax;
    pFVar6 = (((FMetasoundFrontendClassInterface *)pcVar19)->Outputs).AllocatorInstance.Data;
    *(int *)&this->field_0x8 = (((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).ArrayNum;
    *(int *)&this->field_0xc = iVar4;
    *(FScriptContainerElement **)&this->field_0x10 = pFVar6;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar19)->Outputs).ArrayMax;
    pFVar6 = (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x18 = (((FMetasoundFrontendClassInterface *)pcVar19)->Outputs).ArrayNum;
    *(int *)&this->field_0x1c = iVar4;
    *(FScriptContainerElement **)&this->field_0x20 = pFVar6;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).ArrayMax;
    uVar13 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).A;
    uVar8 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).B;
    *(int *)&this->field_0x28 =
         (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).ArrayNum;
    *(int *)&this->field_0x2c = iVar4;
    *(uint *)&this->field_0x30 = uVar13;
    *(uint *)&this->field_0x34 = uVar8;
    uVar13 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).D;
    pFVar6 = (((FMetasoundFrontendClassInterface *)((longlong)pcVar19 + 0x40))->Inputs).
             AllocatorInstance.Data;
    *(uint *)&this->field_0x38 = (((FMetasoundFrontendClassInterface *)pcVar19)->ChangeID).C;
    *(uint *)&this->field_0x3c = uVar13;
    *(FScriptContainerElement **)&this->field_0x40 = pFVar6;
    *(int *)&this->field_0x48 =
         (((FMetasoundFrontendClassInterface *)((longlong)pcVar19 + 0x40))->Inputs).ArrayNum;
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)&this->field_0x50,
               (FMetasoundFrontendClassInterface *)
               &((FMetasoundFrontendClassInterface *)((longlong)pcVar19 + 0x40))->Outputs);
    return;
  case 7:
    *(undefined1 *)this =
         *(undefined1 *)
          &(((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).AllocatorInstance.Data;
    ::FString::FString((FString *)&this->field_0x8,
                       (FString *)&(((FMetasoundFrontendClassInterface *)pcVar19)->Inputs).ArrayNum)
    ;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar19)->Outputs).ArrayMax;
    pFVar6 = (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x18 = (((FMetasoundFrontendClassInterface *)pcVar19)->Outputs).ArrayNum;
    *(int *)&this->field_0x1c = iVar4;
    *(FScriptContainerElement **)&this->field_0x20 = pFVar6;
    iVar4 = (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).ArrayMax;
    *(int *)&this->field_0x28 =
         (((FMetasoundFrontendClassInterface *)pcVar19)->Environment).ArrayNum;
    *(int *)&this->field_0x2c = iVar4;
    return;
  case 8:
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)this,(FMetasoundFrontendClassInterface *)pcVar19)
    ;
    FMetasoundFrontendInterfaceMetadata::FMetasoundFrontendInterfaceMetadata
              ((FMetasoundFrontendInterfaceMetadata *)&this->field_0x40,
               (FMetasoundFrontendInterfaceMetadata *)((longlong)pcVar19 + 0x40));
    return;
  case 9:
    return;
  case 10:
    return;
  case 0xb:
    if (*(void **)&this->field_0x70 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x70);
    }
    if (*(void **)&this->field_0x60 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x60);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              (*(FMetasoundFrontendClassInput **)&this->field_0x50,*(int *)&this->field_0x58);
    if (*(void **)&this->field_0x50 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)&this->field_0x50);
    return;
  case 0xc:
    pvVar16 = *(void **)&this->field_0x8;
    if (pvVar16 == (void *)0x0) {
      return;
    }
    break;
  case 0xd:
    if (*(void **)&this->field_0x50 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x50);
    }
    if (*(void **)&this->field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x20);
    }
    if (*(void **)&this->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x10);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              (*(FMetasoundFrontendClassInput **)this,*(int *)&this->field_0x8);
    if (*(void **)this == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)this);
    return;
  case 0xe:
    *(char *)CONCAT71(in_register_00000091,in_R10B) =
         *(char *)CONCAT71(in_register_00000091,in_R10B) + (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    puVar21 = unaff_RSI;
    if (&stack0x00000000 == &DAT_00000008) {
      unaff_RBX[0xff00000000] = unaff_RBX[0xff00000000] + cVar20;
      *pbVar14 = *pbVar14 & bVar12;
      puVar21 = unaff_RSI + 1;
      out(*unaff_RSI,uVar18);
    }
    *pbVar14 = *pbVar14 + cVar15;
    *(char *)this = *(char *)this + cVar15;
    *pbVar14 = *pbVar14 & bVar12;
    uVar13 = *(int *)pbVar14 * 0x770065;
    pbVar14 = (byte *)(ulonglong)uVar13;
    *pbVar14 = *pbVar14 & (byte)uVar13;
    out(*puVar21,uVar18);
    *(char *)(puVar21 + 1) = *(char *)(puVar21 + 1) + (char)(uVar13 >> 8);
    *pbVar14 = *pbVar14 & (byte)uVar13;
    *unaff_RBP = *unaff_RBP + cVar20;
    *(undefined1 *)(ulonglong)(uVar13 & 0x6c006c00) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    bVar3 = *(byte *)(unaff_R15 + 0x6f + CONCAT71(in_register_00000091,in_R10B) * 2);
    if ((byte)unaff_RBX < bVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((byte)unaff_RBX != bVar3) {
      pbVar14[in_R8 + 0x61] = pbVar14[in_R8 + 0x61] + in_R10B;
      *unaff_RBX = *unaff_RBX + cVar20;
      iVar4 = *(int *)pbVar14;
      pcVar19 = (char *)((ulonglong)(uint)(iVar4 * 0x73) * 2 + 0x6f);
      *pcVar19 = *pcVar19 + (char)this;
      *unaff_RBX = *unaff_RBX + (char)((uint)(iVar4 * 0x73) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = in(uVar18);
    *unaff_RDI = uVar1;
    *unaff_RBP = *unaff_RBP + cVar15;
    uVar2 = in(uVar18);
    *(undefined4 *)(unaff_RDI + 1) = uVar2;
    *unaff_RBP = *unaff_RBP + cVar15;
    out(*(undefined1 *)unaff_RSI,uVar18);
    pcVar19 = (char *)((longlong)pbVar14 * 2 + 0x73);
    *pcVar19 = *pcVar19 + cVar20;
    *pbVar14 = *pbVar14 + cVar15;
    pcVar19 = (char *)((longlong)pbVar14 * 2 + 0x6f);
    *pcVar19 = *pcVar19 + cVar20;
    *pbVar14 = *pbVar14 + cVar15;
    *(char *)this = *(char *)this + cVar15;
    pcVar19 = (char *)(in_FS_OFFSET + (longlong)pbVar14 * 2 + 0x20);
    *pcVar19 = *pcVar19 + cVar15;
    pcVar19 = (char *)((longlong)pbVar14 * 2 + 0x6f);
    *pcVar19 = *pcVar19 + cVar20;
    *pbVar14 = *pbVar14 + cVar15;
    pcVar19 = (char *)((longlong)pbVar14 * 2 + 0x68);
    *pcVar19 = *pcVar19 + cVar20;
    *(char *)this = *(char *)this + (char)((ulonglong)this >> 8);
    *pbVar14 = *pbVar14 & bVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pvVar16 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar16,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar16);
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_> @ 14ae5bf80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000150610aa9) overlaps instruction at (ram,0x000150610aa7)
    */
/* WARNING: Removing unreachable block (ram,0x000150610aa4) */
/* WARNING: Removing unreachable block (ram,0x00015061372a) */
/* WARNING: Removing unreachable block (ram,0x0001506109c9) */
/* WARNING: Removing unreachable block (ram,0x000150613725) */
/* WARNING: Removing unreachable block (ram,0x000150613776) */
/* WARNING: Removing unreachable block (ram,0x000150613728) */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,Metasound::FFrontendQueryKey,TArray<FMetasoundFrontendVersion,TSizedDefaultAllocator<32>_>_>
           *this)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  uint uVar14;
  char cVar16;
  FLowLevelMemTracker *this_00;
  void *pvVar17;
  undefined2 uVar18;
  char *in_RDX;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *puVar20;
  undefined1 *unaff_RDI;
  longlong in_R8;
  char in_R10B;
  undefined7 in_register_00000091;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  byte *pbVar15;
  char cVar19;
  
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  bVar4 = this->field_0x10;
  if (3 < (ulonglong)bVar4) {
    in_R8 = 0xd4;
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                        ,0xd4,L"");
    if (bVar12) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar15 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FFrontendQueryKey::FNull,int,FString,FName>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar4];
  cVar19 = (char)((ulonglong)in_RDX >> 8);
  cVar16 = (char)((ulonglong)pbVar15 >> 8);
  uVar18 = SUB82(in_RDX,0);
  bVar13 = (byte)pbVar15;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar4) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    pvVar17 = *(void **)this;
    if (pvVar17 == (void *)0x0) {
      return;
    }
    break;
  case 3:
    return;
  case 4:
    iVar5 = (((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).ArrayNum;
    iVar10 = (((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).ArrayMax;
    *(FScriptContainerElement **)this =
         (((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).AllocatorInstance.Data;
    *(int *)&this->field_0x8 = iVar5;
    *(int *)&this->field_0xc = iVar10;
    return;
  case 5:
    *(undefined1 *)this =
         *(undefined1 *)
          &(((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).AllocatorInstance.Data;
    uVar8 = *(undefined8 *)&(((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).ArrayMax;
    *(undefined8 *)&this->field_0x4 =
         *(undefined8 *)
          ((longlong)&(((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).AllocatorInstance.Data
          + 4);
    *(undefined8 *)&this->field_0xc = uVar8;
    *(undefined8 *)&this->field_0x14 =
         *(undefined8 *)
          ((longlong)&(((FMetasoundFrontendClassInterface *)in_RDX)->Outputs).AllocatorInstance.Data
          + 4);
    this->field_0x1c = (char)(((FMetasoundFrontendClassInterface *)in_RDX)->Outputs).ArrayMax;
    iVar5 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).ArrayNum;
    iVar10 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).ArrayMax;
    *(FScriptContainerElement **)&this->field_0x20 =
         (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x28 = iVar5;
    *(int *)&this->field_0x2c = iVar10;
    uVar14 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).B;
    uVar9 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).C;
    uVar11 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).D;
    *(uint *)&this[1].field_0x0 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).A;
    *(uint *)&this[1].field_0x4 = uVar14;
    *(uint *)&this[1].field_0x8 = uVar9;
    *(uint *)&this[1].field_0xc = uVar11;
    *(FScriptContainerElement **)&this[1].field_0x10 =
         (((FMetasoundFrontendClassInterface *)((longlong)in_RDX + 0x40))->Inputs).AllocatorInstance
         .Data;
    iVar5 = (((FMetasoundFrontendClassInterface *)((longlong)in_RDX + 0x40))->Inputs).ArrayMax;
    *(int *)&this[1].field_0x18 =
         (((FMetasoundFrontendClassInterface *)((longlong)in_RDX + 0x40))->Inputs).ArrayNum;
    *(int *)&this[1].field_0x1c = iVar5;
    return;
  case 6:
    *(undefined ***)this = &___7FMetasoundFrontendClass__6B_;
    iVar5 = (((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).ArrayMax;
    pFVar7 = (((FMetasoundFrontendClassInterface *)in_RDX)->Outputs).AllocatorInstance.Data;
    *(int *)&this->field_0x8 = (((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).ArrayNum;
    *(int *)&this->field_0xc = iVar5;
    *(FScriptContainerElement **)&this->field_0x10 = pFVar7;
    iVar5 = (((FMetasoundFrontendClassInterface *)in_RDX)->Outputs).ArrayMax;
    pFVar7 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x18 = (((FMetasoundFrontendClassInterface *)in_RDX)->Outputs).ArrayNum;
    *(int *)&this->field_0x1c = iVar5;
    *(FScriptContainerElement **)&this->field_0x20 = pFVar7;
    iVar5 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).ArrayMax;
    uVar14 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).A;
    uVar9 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).B;
    *(int *)&this->field_0x28 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).ArrayNum
    ;
    *(int *)&this->field_0x2c = iVar5;
    *(uint *)&this[1].field_0x0 = uVar14;
    *(uint *)&this[1].field_0x4 = uVar9;
    uVar14 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).D;
    pFVar7 = (((FMetasoundFrontendClassInterface *)((longlong)in_RDX + 0x40))->Inputs).
             AllocatorInstance.Data;
    *(uint *)&this[1].field_0x8 = (((FMetasoundFrontendClassInterface *)in_RDX)->ChangeID).C;
    *(uint *)&this[1].field_0xc = uVar14;
    *(FScriptContainerElement **)&this[1].field_0x10 = pFVar7;
    *(int *)&this[1].field_0x18 =
         (((FMetasoundFrontendClassInterface *)((longlong)in_RDX + 0x40))->Inputs).ArrayNum;
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)&this[1].field_0x20,
               (FMetasoundFrontendClassInterface *)
               &((FMetasoundFrontendClassInterface *)((longlong)in_RDX + 0x40))->Outputs);
    return;
  case 7:
    *(undefined1 *)this =
         *(undefined1 *)
          &(((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).AllocatorInstance.Data;
    ::FString::FString((FString *)&this->field_0x8,
                       (FString *)&(((FMetasoundFrontendClassInterface *)in_RDX)->Inputs).ArrayNum);
    iVar5 = (((FMetasoundFrontendClassInterface *)in_RDX)->Outputs).ArrayMax;
    pFVar7 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).AllocatorInstance.Data;
    *(int *)&this->field_0x18 = (((FMetasoundFrontendClassInterface *)in_RDX)->Outputs).ArrayNum;
    *(int *)&this->field_0x1c = iVar5;
    *(FScriptContainerElement **)&this->field_0x20 = pFVar7;
    iVar5 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).ArrayMax;
    *(int *)&this->field_0x28 = (((FMetasoundFrontendClassInterface *)in_RDX)->Environment).ArrayNum
    ;
    *(int *)&this->field_0x2c = iVar5;
    return;
  case 8:
    FMetasoundFrontendClassInterface::FMetasoundFrontendClassInterface
              ((FMetasoundFrontendClassInterface *)this,(FMetasoundFrontendClassInterface *)in_RDX);
    FMetasoundFrontendInterfaceMetadata::FMetasoundFrontendInterfaceMetadata
              ((FMetasoundFrontendInterfaceMetadata *)&this[1].field_0x10,
               (FMetasoundFrontendInterfaceMetadata *)((longlong)in_RDX + 0x40));
    return;
  case 9:
    return;
  case 10:
    return;
  case 0xb:
    if (*(void **)&this[2].field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&this[2].field_0x10);
    }
    if (*(void **)(this + 2) != (void *)0x0) {
      FMemory::Free(*(void **)(this + 2));
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              (*(FMetasoundFrontendClassInput **)&this[1].field_0x20,*(int *)&this[1].field_0x28);
    if (*(void **)&this[1].field_0x20 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)&this[1].field_0x20);
    return;
  case 0xc:
    pvVar17 = *(void **)&this->field_0x8;
    if (pvVar17 == (void *)0x0) {
      return;
    }
    break;
  case 0xd:
    if (*(void **)&this[1].field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&this[1].field_0x20);
    }
    if (*(void **)&this->field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x20);
    }
    if (*(void **)&this->field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x10);
    }
    DestructItems<FMetasoundFrontendClassInput,int>
              (*(FMetasoundFrontendClassInput **)this,*(int *)&this->field_0x8);
    if (*(void **)this == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)this);
    return;
  case 0xe:
    *(char *)CONCAT71(in_register_00000091,in_R10B) =
         *(char *)CONCAT71(in_register_00000091,in_R10B) + (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
    puVar20 = unaff_RSI;
    if (&stack0x00000000 == &DAT_00000008) {
      unaff_RBX[0xff00000000] = unaff_RBX[0xff00000000] + cVar19;
      *pbVar15 = *pbVar15 & bVar13;
      puVar20 = unaff_RSI + 1;
      out(*unaff_RSI,uVar18);
    }
    *pbVar15 = *pbVar15 + cVar16;
    *(char *)this = *(char *)this + cVar16;
    *pbVar15 = *pbVar15 & bVar13;
    uVar14 = *(int *)pbVar15 * 0x770065;
    pbVar15 = (byte *)(ulonglong)uVar14;
    *pbVar15 = *pbVar15 & (byte)uVar14;
    out(*puVar20,uVar18);
    *(char *)(puVar20 + 1) = *(char *)(puVar20 + 1) + (char)(uVar14 >> 8);
    *pbVar15 = *pbVar15 & (byte)uVar14;
    *unaff_RBP = *unaff_RBP + cVar19;
    *(undefined1 *)(ulonglong)(uVar14 & 0x6c006c00) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x10:
    bVar4 = *(byte *)(unaff_R15 + 0x6f + CONCAT71(in_register_00000091,in_R10B) * 2);
    if ((byte)unaff_RBX < bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((byte)unaff_RBX != bVar4) {
      pbVar15[in_R8 + 0x61] = pbVar15[in_R8 + 0x61] + in_R10B;
      *unaff_RBX = *unaff_RBX + cVar19;
      iVar5 = *(int *)pbVar15;
      pcVar1 = (char *)((ulonglong)(uint)(iVar5 * 0x73) * 2 + 0x6f);
      *pcVar1 = *pcVar1 + (char)this;
      *unaff_RBX = *unaff_RBX + (char)((uint)(iVar5 * 0x73) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar2 = in(uVar18);
    *unaff_RDI = uVar2;
    *unaff_RBP = *unaff_RBP + cVar16;
    uVar3 = in(uVar18);
    *(undefined4 *)(unaff_RDI + 1) = uVar3;
    *unaff_RBP = *unaff_RBP + cVar16;
    out(*(undefined1 *)unaff_RSI,uVar18);
    pcVar1 = (char *)((longlong)pbVar15 * 2 + 0x73);
    *pcVar1 = *pcVar1 + cVar19;
    *pbVar15 = *pbVar15 + cVar16;
    pcVar1 = (char *)((longlong)pbVar15 * 2 + 0x6f);
    *pcVar1 = *pcVar1 + cVar19;
    *pbVar15 = *pbVar15 + cVar16;
    *(char *)this = *(char *)this + cVar16;
    pcVar1 = (char *)(in_FS_OFFSET + (longlong)pbVar15 * 2 + 0x20);
    *pcVar1 = *pcVar1 + cVar16;
    pcVar1 = (char *)((longlong)pbVar15 * 2 + 0x6f);
    *pcVar1 = *pcVar1 + cVar19;
    *pbVar15 = *pbVar15 + cVar16;
    pcVar1 = (char *)((longlong)pbVar15 * 2 + 0x68);
    *pcVar1 = *pcVar1 + cVar19;
    *(char *)this = *(char *)this + (char)((ulonglong)this >> 8);
    *pbVar15 = *pbVar15 & bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (pvVar17 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar17,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar17);
  }
  return;
}

