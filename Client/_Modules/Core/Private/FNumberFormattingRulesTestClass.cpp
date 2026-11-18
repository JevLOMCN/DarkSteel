// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// NumberFormattingRulesTest @ 141c03590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FNumberFormattingRulesTestClass::NumberFormattingRulesTest(FNumberFormattingRulesTestClass *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  FInternationalization *this_00;
  FText *pFVar14;
  FText *pFVar15;
  FAutomationTestFramework *pFVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  TSharedPtr<FCulture,1> local_158;
  TSharedPtr<FCulture,1> local_148;
  FText local_138;
  undefined1 local_128 [8];
  FSharedReferencer<1> FStack_120;
  int iStack_118;
  int iStack_114;
  FCultureStateSnapshot local_108;
  FText local_d8;
  FText local_c8;
  FText local_b8 [10];
  
  this_00 = FInternationalization::Get();
  local_108.Language.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Language.Data.ArrayNum = 0;
  local_108.Language.Data.ArrayMax = 0;
  local_108.Locale.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Locale.Data.ArrayNum = 0;
  local_108.Locale.Data.ArrayMax = 0;
  local_108.AssetGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.AssetGroups.ArrayNum = 0;
  local_108.AssetGroups.ArrayMax = 0;
  FInternationalization::BackupCultureState(this_00,&local_108);
  ::FString::FString((FString *)&local_158,"en-US");
  bVar13 = FInternationalization::SetCurrentCulture(this_00,(FString *)&local_158);
  if (local_158.Object != (FCulture *)0x0) {
    FMemory::Free(local_158.Object);
  }
  fVar20 = __real_c49a5225;
  dVar7 = __real_c1678c29dcd4fdf4;
  fVar17 = __real_449a5225;
  dVar10 = __real_41678c29dcd4fdf4;
  uVar18 = SUB84(__real_c1678c29dcd4fdf4,0);
  uVar19 = (undefined4)((ulonglong)__real_c1678c29dcd4fdf4 >> 0x20);
  if (bVar13) {
    pFVar14 = FText::FromString(&local_138,L"12,345,678.901");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)&local_148,dVar10,(FNumberFormattingOptions *)0x0,&local_158)
    ;
    Test(this,this,L"Convert a Double to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1,234.567");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,fVar17,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Float to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-12,345,678.901");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Negative Double to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1,234.567");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,fVar20,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Negative Float to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"255");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0xff,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a uint8 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"65,535");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0xffff,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a uint16 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"4,294,967,295");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0xffffffff,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a uint32 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1,844,674,407,370,955,161");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x1999999999999999,(FNumberFormattingOptions *)0x0,
                              &local_158);
    Test(this,this,L"Convert a uint64 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"123");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,'{',(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int8 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"12,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int16 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"12,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int32 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"12,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int64 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-123");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x7b,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Negative int8 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-12,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Negative int16 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-12,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Negative int32 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-12,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Negative int64 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-9,223,372,036,854,775,808");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x8000000000000000,(FNumberFormattingOptions *)0x0,
                              &local_158);
    Test(this,this,L"Convert a Negative int64 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_128);
    local_128[1] = false;
    FStack_120.ReferenceController = ___xmm_00000003000000030000001400000014;
    iStack_118 = _UNK_150744148;
    iStack_114 = _UNK_15074414c;
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000012345678.901");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar10,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Double to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000000001234.567");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,fVar17,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Float to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-00000000000012345678.901");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Negative Double to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-00000000000000001234.567");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,fVar20,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Negative Float to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000000000255.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0xff,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a uint8 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000000065535.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0xffff,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a uint16 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000004294967295.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0xffffffff,(FNumberFormattingOptions *)local_128,&local_158
                             );
    Test(this,this,L"Convert a uint32 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"01844674407370955161.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x1999999999999999,(FNumberFormattingOptions *)local_128,
                              &local_158);
    Test(this,this,L"Convert a uint64 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000000000123.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,'{',(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a int8 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000000012345.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a int16 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000000012345.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a int32 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"00000000000000012345.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a int64 to a number formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-00000000000000000123.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x7b,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Negative int8 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-00000000000000012345.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Negative int16 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-00000000000000012345.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Negative int32 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-00000000000000012345.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a Negative int64 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-09223372036854775808.000");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,-0x8000000000000000,(FNumberFormattingOptions *)local_128,
                              &local_158);
    Test(this,this,L"Convert a Negative int64 to a number formatted correct for en-US",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_128);
    FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x500000005;
    local_128[1] = true;
    pFVar14 = FText::FromString((FText *)&local_148,L"12,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a 5 digit int to 5 grouped integral digits formatted correct for en-US"
         ,pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_128);
    FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x600000006;
    local_128[1] = true;
    pFVar14 = FText::FromString((FText *)&local_148,L"012,345");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0x3039,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Convert a 5 digit int to 6 grouped integral digits formatted correct for en-US"
         ,pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    FNumberFormattingOptions::FNumberFormattingOptions((FNumberFormattingOptions *)local_128);
    local_128[1] = false;
    FStack_120.ReferenceController = ___xmm_00000000000000000000000100000001;
    iStack_118 = _UNK_150744118;
    iStack_114 = _UNK_15074411c;
    local_128._4_4_ = HalfToEven;
    pFVar14 = FText::FromString((FText *)&local_148,L"-2");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_bff8000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    dVar7 = __real_bff0000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_bff0000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    dVar12 = __real_bfe8000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_bfe8000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    dVar9 = __real_bfe0000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_bfe0000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    dVar11 = __real_bfd0000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_bfd0000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    dVar6 = __real_8000000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_8000000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0.0,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    dVar8 = __real_3fd0000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_3fd0000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    dVar5 = __real_3fe0000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_3fe0000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_3fe8000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    dVar4 = __real_3ff0000000000000;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_3ff0000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"2");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_3ff8000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToEven",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    local_128._4_4_ = HalfFromZero;
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar12,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar9,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar11,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar6,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0.0,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar8,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar5,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_3fe8000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar4,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfFromZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    local_128._4_4_ = HalfToZero;
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar12,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar9,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar11,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar6,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0.0,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar8,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar5,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,__real_3fe8000000000000,
                              (FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar4,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using HalfToZero",
         pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    local_128._4_4_ = FromZero;
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using FromZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar9,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using FromZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar6,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using FromZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0.0,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using FromZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar5,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using FromZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar4,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using FromZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    local_128._4_4_ = ToZero;
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using ToZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar9,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using ToZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar6,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using ToZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0.0,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using ToZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar5,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using ToZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar4,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,L"Round a Double to a number formatted correct for en-US using ToZero",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    local_128._4_4_ = ToNegativeInfinity;
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToNegativeInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar9,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToNegativeInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar6,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToNegativeInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0.0,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToNegativeInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar5,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToNegativeInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar4,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToNegativeInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    local_128._4_4_ = ToPositiveInfinity;
    pFVar14 = FText::FromString((FText *)&local_148,L"-1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar7,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToPositiveInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar9,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToPositiveInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"-0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar6,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToPositiveInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"0");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,0.0,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToPositiveInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar5,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToPositiveInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)&local_148,L"1");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber(&local_138,dVar4,(FNumberFormattingOptions *)local_128,&local_158);
    Test(this,this,
         L"Round a Double to a number formatted correct for en-US using ToPositiveInfinity",pFVar15,
         pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    if (local_148.Object != (FCulture *)0x0) {
      (**(code **)((((local_148.Object)->Implementation).Ptr)->ICULocale).language)();
    }
    pFVar14 = FText::FromString((FText *)local_128,L"$12,345,678.90");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency(&local_138,dVar10,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Double to a currency formatted correct for en-US",pFVar15,pFVar14);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$1,234.57");
    fVar17 = __real_449a5225;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,__real_449a5225,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Float to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-$12,345,678.90");
    dVar7 = __real_c1678c29dcd4fdf4;
    uVar18 = SUB84(__real_c1678c29dcd4fdf4,0);
    uVar19 = (undefined4)((ulonglong)__real_c1678c29dcd4fdf4 >> 0x20);
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,__real_c1678c29dcd4fdf4,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Double to a currency formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-$1,234.57");
    fVar20 = __real_c49a5225;
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,__real_c49a5225,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Float to a currency formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$255.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0xff,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint8 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$65,535.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0xffff,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint16 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$4,294,967,295.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0xffffffff,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint32 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$1,844,674,407,370,955,161.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x1999999999999999,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint64 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$123.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,'{',(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int8 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int16 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int32 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"$12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int64 to a currency formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-$123.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x7b,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int8 to a currency formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-$12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int16 to a currency formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-$12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int32 to a currency formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-$12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int64 to a currency formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-$9,223,372,036,854,775,808.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x8000000000000000,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int64 to a currency formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"1,234,567,890%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,dVar10,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Double to a percent formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"123,457%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,fVar17,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Float to a percent formatted correct for en-US",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-1,234,567,890%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,dVar7,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Double to a percent formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-123,457%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,fVar20,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Negative Float to a percent formatted correct for en-US",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar16 = FAutomationTestFramework::Get();
    pFVar1 = pFVar16->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x48);
    ::FString::PrintfImpl
              ((FString *)&local_148,
               L"Internationalization data for %s missing - test is partially disabled.");
    (*pcVar2)(pFVar1,&local_148);
    if (local_148.Object != (FCulture *)0x0) {
      FMemory::Free(local_148.Object);
    }
  }
  ::FString::FString((FString *)&local_148,"hi-IN");
  bVar13 = FInternationalization::SetCurrentCulture(this_00,(FString *)&local_148);
  if (local_148.Object != (FCulture *)0x0) {
    FMemory::Free(local_148.Object);
  }
  if (bVar13) {
    pFVar14 = FText::FromString(&local_138,L"1,23,45,678.901");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,dVar10,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Double to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"1,234.567");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,fVar17,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Float to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-1,23,45,678.901");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,(double)CONCAT44(uVar19,uVar18),
                              (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Double to a number formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-1,234.567");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,fVar20,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Float to a number formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"255");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,0xff,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint8 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"65,535");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,0xffff,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint16 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"4,29,49,67,295");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,0xffffffff,(FNumberFormattingOptions *)0x0,
                              &local_148);
    Test(this,this,L"Convert a uint32 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"18,44,67,44,07,37,09,55,161");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,0x1999999999999999,(FNumberFormattingOptions *)0x0,
                              &local_148);
    Test(this,this,L"Convert a uint64 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"123");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,'{',(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int8 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"12,345");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,0x3039,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int16 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"12,345");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,0x3039,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int32 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"12,345");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,0x3039,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int64 to a number formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-123");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,-0x7b,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int8 to a number formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-12,345");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,-0x3039,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Negative int16 to a number formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-12,345");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,-0x3039,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Negative int32 to a number formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-12,345");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,-0x3039,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Negative int64 to a number formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-92,23,37,20,36,85,47,75,808");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsNumber((FText *)local_128,-0x8000000000000000,(FNumberFormattingOptions *)0x0
                              ,&local_148);
    Test(this,this,L"Convert a Negative int64 to a number formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    TSharedPtr<FCulture,1>::ToSharedRef
              (&this_00->InvariantCulture,(TSharedRef<FCulture,1> *)local_128);
    local_158.Object =
         (FCulture *)
         CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])));
    local_158.SharedReferenceCount.ReferenceController = FStack_120.ReferenceController;
    if (FStack_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_120.ReferenceController);
    pFVar14 = FText::FromString(&local_138,L"12345678.901");
    pFVar15 = FText::AsNumber((FText *)local_128,dVar10,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Double to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"1234.567017");
    pFVar15 = FText::AsNumber((FText *)local_128,fVar17,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a Float to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-12345678.901");
    pFVar15 = FText::AsNumber((FText *)local_128,(double)CONCAT44(uVar19,uVar18),
                              (FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,
         L"Convert a Negative Double to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-1234.567017");
    pFVar15 = FText::AsNumber((FText *)local_128,fVar20,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,
         L"Convert a Negative Float to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"255");
    pFVar15 = FText::AsNumber((FText *)local_128,0xff,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a uint8 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"65535");
    pFVar15 = FText::AsNumber((FText *)local_128,0xffff,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a uint16 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"4294967295");
    pFVar15 = FText::AsNumber((FText *)local_128,0xffffffff,(FNumberFormattingOptions *)0x0,
                              &local_158);
    Test(this,this,L"Convert a uint32 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"1844674407370955161");
    pFVar15 = FText::AsNumber((FText *)local_128,0x1999999999999999,(FNumberFormattingOptions *)0x0,
                              &local_158);
    Test(this,this,L"Convert a uint64 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"123");
    pFVar15 = FText::AsNumber((FText *)local_128,'{',(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int8 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"12345");
    pFVar15 = FText::AsNumber((FText *)local_128,0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int16 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"12345");
    pFVar15 = FText::AsNumber((FText *)local_128,0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int32 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"12345");
    pFVar15 = FText::AsNumber((FText *)local_128,0x3039,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,L"Convert a int64 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-123");
    pFVar15 = FText::AsNumber((FText *)local_128,-0x7b,(FNumberFormattingOptions *)0x0,&local_158);
    Test(this,this,
         L"Convert a Negative int8 to a number formatted correct for hi-IN but as invariant",pFVar15
         ,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-12345");
    pFVar15 = FText::AsNumber((FText *)local_128,-0x3039,(FNumberFormattingOptions *)0x0,&local_158)
    ;
    Test(this,this,
         L"Convert a Negative int16 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-12345");
    pFVar15 = FText::AsNumber((FText *)local_128,-0x3039,(FNumberFormattingOptions *)0x0,&local_158)
    ;
    Test(this,this,
         L"Convert a Negative int32 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-12345");
    pFVar15 = FText::AsNumber((FText *)local_128,-0x3039,(FNumberFormattingOptions *)0x0,&local_158)
    ;
    Test(this,this,
         L"Convert a Negative int64 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-9223372036854775808");
    pFVar15 = FText::AsNumber((FText *)local_128,-0x8000000000000000,(FNumberFormattingOptions *)0x0
                              ,&local_158);
    Test(this,this,
         L"Convert a Negative int64 to a number formatted correct for hi-IN but as invariant",
         pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    pFVar14 = FText::FromString(&local_138,L"₹1,23,45,678.90");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,dVar10,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Double to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹1,234.57");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,fVar17,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Float to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-₹1,23,45,678.90");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,(double)CONCAT44(uVar19,uVar18),
                                (FString *)&local_158,(FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Double to a currency formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-₹1,234.57");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,fVar20,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Float to a currency formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹255.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0xff,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint8 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹65,535.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0xffff,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint16 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹4,29,49,67,295.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0xffffffff,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint32 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹18,44,67,44,07,37,09,55,161.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x1999999999999999,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a uint64 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹123.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,'{',(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int8 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int16 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int32 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"₹12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a int64 to a currency formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-₹123.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x7b,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int8 to a currency formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-₹12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int16 to a currency formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-₹12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int32 to a currency formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-₹12,345.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x3039,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int64 to a currency formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-₹92,23,37,20,36,85,47,75,808.00");
    local_158.Object = (FCulture *)0x0;
    local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsCurrency((FText *)local_128,-0x8000000000000000,(FString *)&local_158,
                                (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative int64 to a currency formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    if (local_158.Object != (FCulture *)0x0) {
      FMemory::Free(local_158.Object);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"1,23,45,67,890%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,dVar10,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Double to a percent formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"1,23,457%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,fVar17,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Float to a percent formatted correct for hi-IN",pFVar15,pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-1,23,45,67,890%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,(double)CONCAT44(uVar19,uVar18),
                               (FNumberFormattingOptions *)0x0,&local_148);
    Test(this,this,L"Convert a Negative Double to a percent formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::FromString(&local_138,L"-1,23,457%");
    local_148.Object = (FCulture *)0x0;
    local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar15 = FText::AsPercent((FText *)local_128,fVar20,(FNumberFormattingOptions *)0x0,&local_148)
    ;
    Test(this,this,L"Convert a Negative Float to a percent formatted correct for hi-IN",pFVar15,
         pFVar14);
    plVar3 = (longlong *)
             CONCAT44(local_128._4_4_,CONCAT22(local_128._2_2_,CONCAT11(local_128[1],local_128[0])))
    ;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar16 = FAutomationTestFramework::Get();
    pFVar1 = pFVar16->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x48);
    ::FString::PrintfImpl
              ((FString *)&local_148,
               L"Internationalization data for %s missing - test is partially disabled.");
    (*pcVar2)(pFVar1,&local_148);
    if (local_148.Object != (FCulture *)0x0) {
      FMemory::Free(local_148.Object);
    }
  }
  FInternationalization::RestoreCultureState(this_00,&local_108);
  local_148.Object = (FCulture *)0x0;
  local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsNumber(local_b8,-0x3039,(FNumberFormattingOptions *)0x0,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  local_148.Object = (FCulture *)0x0;
  local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FText::AsPercent(&local_c8,dVar10,(FNumberFormattingOptions *)0x0,&local_148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  local_148.Object = (FCulture *)0x0;
  local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ::FString::FString((FString *)&local_158,L"USD");
  FText::AsCurrencyBase(&local_d8,0x3039,(FString *)&local_158,&local_148,-1);
  if (local_158.Object != (FCulture *)0x0) {
    FMemory::Free(local_158.Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  bVar13 = FText::IsTransient(local_b8);
  if (bVar13) {
    bVar13 = FText::IsTransient(&local_c8);
    if (!bVar13) goto LAB_141c08c30;
    bVar13 = FText::IsTransient(&local_d8);
    if (!bVar13) goto LAB_141c08c30;
  }
  else {
LAB_141c08c30:
    pFVar16 = FAutomationTestFramework::Get();
    pFVar1 = pFVar16->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_148,
                       L"Number formatting functions should always produce transient text outside of the editor"
                      );
    (*pcVar2)(pFVar1,&local_148,0);
    if (local_148.Object != (FCulture *)0x0) {
      FMemory::Free(local_148.Object);
    }
  }
  bVar13 = FText::IsCultureInvariant(local_b8);
  if (!bVar13) {
    bVar13 = FText::IsCultureInvariant(&local_c8);
    if (!bVar13) {
      bVar13 = FText::IsCultureInvariant(&local_d8);
      if (!bVar13) goto LAB_141c08cd7;
    }
  }
  pFVar16 = FAutomationTestFramework::Get();
  pFVar1 = pFVar16->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString((FString *)&local_148,
                     L"Number formatting functions should never produce a Culture Invariant Text");
  (*pcVar2)(pFVar1,&local_148,0);
  if (local_148.Object != (FCulture *)0x0) {
    FMemory::Free(local_148.Object);
  }
LAB_141c08cd7:
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  if (local_b8[0].TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8[0].TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_108.AssetGroups.AllocatorInstance.Data,
             local_108.AssetGroups.ArrayNum);
  if ((TTuple<FName,FString> *)local_108.AssetGroups.AllocatorInstance.Data !=
      (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_108.AssetGroups.AllocatorInstance.Data);
  }
  if (local_108.Locale.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Locale.Data.AllocatorInstance.Data);
  }
  if (local_108.Language.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Language.Data.AllocatorInstance.Data);
  }
  return;
}

// Test @ 141c09c90

void __thiscall
FNumberFormattingRulesTestClass::Test
          (FNumberFormattingRulesTestClass *this,FNumberFormattingRulesTestClass *param_1,
          wchar_t *param_2,FText *param_3,FText *param_4)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  FString local_28;
  
  bVar3 = FText::EqualTo(param_3,param_4,Default);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    FText::ToString(param_4);
    FText::ToString(param_3);
    ::FString::PrintfImpl(&local_28,L"%s - A=%s B=%s");
    (*pcVar2)(pFVar1,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

