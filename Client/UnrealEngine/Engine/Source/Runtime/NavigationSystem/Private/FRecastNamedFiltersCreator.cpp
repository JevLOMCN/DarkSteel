// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FRecastNamedFiltersCreator @ 146dd7630

FRecastNamedFiltersCreator * __thiscall
FNavMeshConfig::FRecastNamedFiltersCreator::FRecastNamedFiltersCreator
          (FRecastNamedFiltersCreator *this,bool param_1)

{
  double dVar1;
  longlong lVar2;
  
  dVar1 = __real_47efffffe0000000;
  NavLinkFlag = 0x8000;
  ERecastNamedFilter::FilterOutNavLinksImpl._1058_2_ = 0x8000;
  ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1058_2_ = 0x8000;
  lVar2 = 8;
  ERecastNamedFilter::FilterOutNavLinksImpl._1064_1_ = param_1;
  ERecastNamedFilter::FilterOutAreasImpl._1064_1_ = param_1;
  ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1064_1_ = param_1;
  do {
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x8 + lVar2) = 0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x8 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x10 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x10 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x18 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x18 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x20 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x20 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x28 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x28 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x30 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x30 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x38 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x38 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x40 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x40 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x48 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x48 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x50 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x50 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x58 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x58 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x60 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x60 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x68 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x68 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x70 + lVar2) = 0x47efffffe0000000
    ;
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x70 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x78 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x78 + lVar2) =
         0x47efffffe0000000;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutAreasImpl.field_0x80 + lVar2) = 0x47efffffe0000000
    ;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = dVar1;
    }
    *(undefined8 *)(&ERecastNamedFilter::FilterOutNavLinksAndAreasImpl.field_0x80 + lVar2) =
         0x47efffffe0000000;
    lVar2 = lVar2 + 0x80;
    if (dVar1 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_) {
      ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = dVar1;
    }
  } while (lVar2 < 0x208);
  if (__real_3ff0000000000000 <= (double)ERecastNamedFilter::FilterOutAreasImpl._1048_8_) {
    ERecastNamedFilter::FilterOutAreasImpl._1048_8_ = __real_3ff0000000000000;
  }
  if (__real_3ff0000000000000 <= (double)ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_)
  {
    ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._1048_8_ = __real_3ff0000000000000;
  }
  ERecastNamedFilter::FilterOutAreasImpl._520_8_ = __real_3ff0000000000000;
  ERecastNamedFilter::FilterOutNavLinksAndAreasImpl._520_8_ = __real_3ff0000000000000;
  return this;
}

